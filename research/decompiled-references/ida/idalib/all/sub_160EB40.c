void __fastcall sub_160EB40(__int64 a1)
{
  __m128 *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __m128 v5; // xmm0
  __m128 v6; // xmm0
  __int64 v7; // rdi
  void *v8; // rdx
  __int64 *v9; // rcx
  __int64 *v10; // rsi
  __m128 v11; // xmm0
  __int64 v12; // rbx
  __int64 v13; // [rsp+8h] [rbp-90h] BYREF
  _OWORD v14[2]; // [rsp+10h] [rbp-88h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v16[5]; // [rsp+40h] [rbp-58h] BYREF

  v2 = (__m128 *)(a1 + 12640);
  v3 = *(_QWORD *)(a1 + 12720);
  v4 = 16LL * *(unsigned int *)(a1 + 12728);
  v13 = **(_QWORD **)(a1 + 12712);
  v5 = _mm_loadh_ps((const double *)&v13);
  v13 += 512;
  *(__m128 *)ptr = v5;
  v6 = _mm_loadh_ps((const double *)(a1 + 12712));
  v16[0] = v6;
  sub_160BB40((__m128 *)(a1 + 12640), (unsigned __int64 *)ptr, v3, (__int64 *)(v3 + v4));
  *(_DWORD *)(a1 + 12728) = 0;
  sub_188ECA0(a1);
  v7 = *(_QWORD *)(a1 + 552);
  if ( v7 )
  {
    ptr[0] = v16;
    ptr[1] = (void *)0x400000000LL;
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v7 + 368LL))(v7, ptr);
    v8 = ptr[0];
    v9 = (__int64 *)((char *)ptr[0] + 16 * LODWORD(ptr[1]));
    if ( ptr[0] != v9 )
    {
      v10 = (__int64 *)ptr[0];
      do
      {
        if ( (*(_BYTE *)(*v10 + 28) & 0x7Fu) - 34 <= 5 )
          *(_BYTE *)(*v10 + 84) |= 8u;
        v10 += 2;
      }
      while ( v9 != v10 );
    }
    v13 = **(_QWORD **)(a1 + 12680);
    v11 = _mm_loadh_ps((const double *)&v13);
    v13 += 512;
    v14[0] = v11;
    v6 = _mm_loadh_ps((const double *)(a1 + 12680));
    v14[1] = v6;
    sub_160BB40(v2, (unsigned __int64 *)v14, (__int64)v8, v9);
    if ( ptr[0] != v16 )
      free(ptr[0]);
  }
  v12 = sub_224A990("PerformPendingInstantiations", 28, 0, 0);
  sub_1E3CE70(a1, 0, 1);
  if ( v12 )
    sub_224D6D0(v12);
  sub_160E900(a1, *(double *)v6.m128_u64);
}
