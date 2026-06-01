char *__fastcall sub_1AEC910(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char *result; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  signed __int64 v7; // r13
  __int64 v8; // r12

  v2 = *(_QWORD *)sub_EF5320(*(unsigned int **)(a2 + 24));
  result = (char *)(16LL * *(unsigned int *)(*(_QWORD *)a1 + 8LL));
  v4 = (__int64)&result[**(_QWORD **)a1 - 16];
  if ( v2 )
  {
    v5 = *(unsigned int *)(v4 + 8);
    v6 = *(unsigned int *)(v4 + 12);
    if ( (*(_WORD *)v2 & 0x1FF) == 0xF9 )
    {
      v7 = 8LL * *(unsigned int *)(v2 + 4);
      v8 = v7 >> 3;
      if ( (v7 >> 3) + v5 > v6 )
      {
        sub_2237220(&result[**(_QWORD **)a1 - 16], &result[**(_QWORD **)a1], v8 + v5, 8);
        v5 = *(unsigned int *)(v4 + 8);
      }
      result = (char *)(v2 + v7 + 16);
      if ( (char *)(v2 + 16) != result )
      {
        result = (char *)memcpy((void *)(*(_QWORD *)v4 + 8 * v5), (const void *)(v2 + 16), v7);
        LODWORD(v5) = *(_DWORD *)(v4 + 8);
      }
      *(_DWORD *)(v4 + 8) = v8 + v5;
    }
    else
    {
      if ( v6 < v5 + 1 )
      {
        sub_2237220(&result[**(_QWORD **)a1 - 16], &result[**(_QWORD **)a1], v5 + 1, 8);
        v5 = *(unsigned int *)(v4 + 8);
      }
      result = *(char **)v4;
      *(_QWORD *)(*(_QWORD *)v4 + 8 * v5) = v2;
      ++*(_DWORD *)(v4 + 8);
    }
  }
  return result;
}
