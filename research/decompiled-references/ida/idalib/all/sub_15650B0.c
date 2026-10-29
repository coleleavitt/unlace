void __fastcall sub_15650B0(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // r14
  void *v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r13
  void *v7; // rdi

  v2 = *(_QWORD *)(a1 + 2552);
  v3 = v2 + 8LL * *(unsigned int *)(a1 + 2560);
  while ( v3 != v2 )
  {
    v4 = *(void **)v2;
    v5 = *(_QWORD *)v2 + 56LL;
    v6 = *(_QWORD *)v2 + 72LL * *(unsigned int *)(*(_QWORD *)v2 + 44LL) + 56;
    while ( v6 != v5 )
    {
      while ( !*(_DWORD *)(v5 + 44) )
      {
        v5 += 72;
        if ( v6 == v5 )
          goto LABEL_5;
      }
      v7 = *(void **)(v5 + 32);
      v5 += 72;
      free(v7);
    }
LABEL_5:
    v2 += 8;
    free(v4);
  }
  *(_DWORD *)(a1 + 2560) = 0;
}
