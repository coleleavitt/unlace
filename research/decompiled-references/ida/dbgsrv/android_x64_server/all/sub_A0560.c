/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0560
// Address: 0x00000000000A0560

//----- (00000000000A0560) ----------------------------------------------------
__int64 __fastcall sub_A0560(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v3; // r14d
  char *v4; // r12
  __int64 v5; // rbx
  __int64 i; // rbp
  void *v7; // rdi

  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 )
  {
    v3 = sub_9B050(a1, *(_QWORD **)(a1 + 72), *(const char ***)(a1 + 96), v1);
    if ( *(_QWORD *)(a1 + 80) )
    {
      v4 = *(char **)(a1 + 96);
      v5 = 8LL * *(_QWORD *)(a1 + 104);
      if ( v5 )
      {
        for ( i = 0; i != v5; i += 8 )
          qfree(*(void **)&v4[i]);
        v4 = *(char **)(a1 + 96);
      }
      if ( v4 )
      {
        *(_QWORD *)(a1 + 104) = 0;
        qfree(v4);
        *(_QWORD *)(a1 + 96) = 0;
        *(_QWORD *)(a1 + 112) = 0;
      }
      v7 = *(void **)(a1 + 72);
      if ( v7 )
      {
        *(_QWORD *)(a1 + 80) = 0;
        qfree(v7);
        *(_QWORD *)(a1 + 72) = 0;
        *(_QWORD *)(a1 + 88) = 0;
      }
    }
  }
  else
  {
    return 1;
  }
  return v3;
}
