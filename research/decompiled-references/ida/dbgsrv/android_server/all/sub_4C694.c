/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C694
// Address: 0x000000000004C694

//----- (000000000004C694) ----------------------------------------------------
__int64 __fastcall sub_4C694(__int64 a1, char *s)
{
  size_t v4; // x0
  __int64 v5; // x8
  size_t v6; // x21
  __int64 v7; // x23
  size_t v8; // x24
  unsigned __int64 v9; // x22
  _BYTE *v10; // x0

  if ( s )
  {
    v4 = strlen(s);
    v5 = *(_QWORD *)(a1 + 8);
    v6 = v4;
    if ( v5 )
      v7 = v5 - 1;
    else
      v7 = 0;
    v8 = v7 + v4;
    v9 = v7 + v4 + 1;
    if ( *(_QWORD *)(a1 + 16) >= v9 )
    {
      v10 = *(_BYTE **)a1;
    }
    else
    {
      v10 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v9, 1u);
      *(_QWORD *)a1 = v10;
    }
    *(_QWORD *)(a1 + 8) = v9;
    v10[v8] = 0;
    memmove((void *)(*(_QWORD *)a1 + v7), s, v6);
  }
  return a1;
}
