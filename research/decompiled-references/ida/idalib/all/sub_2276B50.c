__int64 __fastcall sub_2276B50(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __m128 ***v7; // r13
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 *v11; // rbx
  __int64 *v12; // r13
  __int64 i; // rax
  __int64 v14; // rsi
  unsigned int v15; // ecx
  __int64 v16; // rdi
  __int64 *v17; // rbx
  __int64 *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdi
  void *v21; // rdi
  __int64 v23; // [rsp+0h] [rbp-68h] BYREF
  void *v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+28h] [rbp-40h] BYREF

  if ( *(_QWORD *)(a1 + 8) )
    sub_2221C70("Can only iterate over the stream once", 1u);
  sub_2273D80((__int64)&v23, *(__m128 **)a1, a3, a4, a5, a6);
  if ( v24 != &v25 )
    operator delete(v24);
  v6 = a1 + 8;
  v7 = (__m128 ***)operator new(0xA0u);
  sub_22768A0(v7, (__m128 **)a1);
  v8 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v7;
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 128);
    if ( v9 )
    {
      do
      {
        sub_21E88F0(v8 + 112, *(_QWORD **)(v9 + 24));
        v10 = *(_QWORD *)(v9 + 16);
        operator delete((void *)v9);
        v9 = v10;
      }
      while ( v10 );
    }
    v11 = *(__int64 **)(v8 + 24);
    v12 = &v11[*(unsigned int *)(v8 + 32)];
    if ( v11 != v12 )
    {
      for ( i = *(_QWORD *)(v8 + 24); ; i = *(_QWORD *)(v8 + 24) )
      {
        v14 = 0x40000000000LL;
        v15 = (unsigned int)(((__int64)v11 - i) >> 3) >> 7;
        if ( v15 <= 0x1D )
          v14 = 4096LL << v15;
        v16 = *v11++;
        operator delete(v16, v14, 16);
        if ( v12 == v11 )
          break;
      }
    }
    v17 = *(__int64 **)(v8 + 72);
    v18 = &v17[2 * *(unsigned int *)(v8 + 80)];
    if ( v17 != v18 )
    {
      do
      {
        v19 = v17[1];
        v20 = *v17;
        v17 += 2;
        operator delete(v20, v19, 16);
      }
      while ( v18 != v17 );
      v18 = *(__int64 **)(v8 + 72);
    }
    if ( v18 != (__int64 *)(v8 + 88) )
      free(v18);
    v21 = *(void **)(v8 + 24);
    if ( v21 != (void *)(v8 + 40) )
      free(v21);
    operator delete((void *)v8, 0xA0u);
  }
  return v6;
}
