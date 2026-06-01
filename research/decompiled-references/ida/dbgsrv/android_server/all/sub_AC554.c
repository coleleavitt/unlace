/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AC554
// Address: 0x00000000000AC554

//----- (00000000000AC554) ----------------------------------------------------
char *__fastcall sub_AC554(__int64 a1, char *haystack)
{
  char *result; // x0
  unsigned __int64 v5; // x8
  size_t v6; // x21
  unsigned __int64 v7; // x22
  _BYTE *v8; // x0

  result = strstr(haystack, ".clt");
  if ( result )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = result - haystack;
    v7 = result - haystack + 1;
    *(_QWORD *)(a1 + 8) = 0;
    if ( v5 >= v7 )
    {
      v8 = *(_BYTE **)a1;
    }
    else
    {
      v8 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v7, 1u);
      *(_QWORD *)a1 = v8;
    }
    *(_QWORD *)(a1 + 8) = v7;
    v8[v6] = 0;
    memmove(*(void **)a1, haystack, v6);
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}
// 0: using guessed type int dword_0;
