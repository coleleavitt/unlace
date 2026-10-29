void __fastcall sub_FBBAC0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 i; // rax
  unsigned int v6; // ecx
  __int64 *v7; // rbx
  __int64 *v8; // r12
  void *v9; // rdi

  v2 = *a1;
  if ( *a1 )
  {
    v3 = *(_QWORD *)(v2 + 32);
    v4 = v3 + 8LL * *(unsigned int *)(v2 + 40);
    if ( v3 != v4 )
    {
      for ( i = *(_QWORD *)(v2 + 32); ; i = *(_QWORD *)(v2 + 32) )
      {
        a2 = 0x40000000000LL;
        v6 = (unsigned int)((v3 - i) >> 3) >> 7;
        if ( v6 <= 0x1D )
          a2 = 4096LL << v6;
        v3 += 8;
        operator delete();
        if ( v4 == v3 )
          break;
      }
    }
    v7 = *(__int64 **)(v2 + 80);
    v8 = &v7[2 * *(unsigned int *)(v2 + 88)];
    if ( v7 != v8 )
    {
      do
      {
        a2 = v7[1];
        v7 += 2;
        operator delete();
      }
      while ( v8 != v7 );
      v8 = *(__int64 **)(v2 + 80);
    }
    if ( v8 != (__int64 *)(v2 + 96) )
      free(v8);
    v9 = *(void **)(v2 + 32);
    if ( v9 != (void *)(v2 + 48) )
      free(v9);
    sub_21FF240(v2, a2);
    operator delete((void *)v2, 0x70u);
  }
}

