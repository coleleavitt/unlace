void __fastcall sub_FDF800(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 i; // rax
  __int64 v5; // rsi
  unsigned int v6; // ecx
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  void *v12; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(__int64 **)(v1 + 32);
    v3 = &v2[*(unsigned int *)(v1 + 40)];
    if ( v2 != v3 )
    {
      for ( i = *(_QWORD *)(v1 + 32); ; i = *(_QWORD *)(v1 + 32) )
      {
        v5 = 0x40000000000LL;
        v6 = (unsigned int)(((__int64)v2 - i) >> 3) >> 7;
        if ( v6 <= 0x1D )
          v5 = 4096LL << v6;
        v7 = *v2++;
        operator delete(v7, v5, 16);
        if ( v3 == v2 )
          break;
      }
    }
    v8 = *(__int64 **)(v1 + 80);
    v9 = &v8[2 * *(unsigned int *)(v1 + 88)];
    if ( v8 != v9 )
    {
      do
      {
        v10 = v8[1];
        v11 = *v8;
        v8 += 2;
        operator delete(v11, v10, 16);
      }
      while ( v9 != v8 );
      v9 = *(__int64 **)(v1 + 80);
    }
    if ( v9 != (__int64 *)(v1 + 96) )
      free(v9);
    v12 = *(void **)(v1 + 32);
    if ( v12 != (void *)(v1 + 48) )
      free(v12);
    sub_2222F80(v1);
    operator delete((void *)v1, 0x70u);
  }
}
