/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45BA70
// Address: 0x000000000045BA70

//----- (000000000045BA70) ----------------------------------------------------
const char *__fastcall sub_45BA70(__int64 a1, __int64 a2)
{
  char *v2; // rax
  const char *result; // rax
  const char *v4; // rbx
  size_t v5; // r12
  void *v6; // rdi
  const char *v7; // r13
  void *v8; // rax

  v2 = (char *)s1;
  if ( *(_QWORD *)(a1 + 24) )
    v2 = *(char **)(a1 + 16);
  result = sub_480610(v2);
  v4 = result;
  if ( result && (result = (const char *)strlen(result), (v5 = (size_t)result) != 0) )
  {
    v6 = *(void **)a2;
    v7 = result + 1;
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(result + 1) )
    {
      v8 = sub_481540(a2, *(void **)a2, (unsigned __int64)(result + 1), 1u);
      *(_QWORD *)a2 = v8;
      v6 = v8;
    }
    *(_QWORD *)(a2 + 8) = v7;
    memmove(v6, v4, v5);
    result = *(const char **)a2;
    *(_BYTE *)(*(_QWORD *)a2 + v5) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0;
  }
  return result;
}
