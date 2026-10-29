__int64 __fastcall sub_1DD7570(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  const __m128i *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v8; // rax
  int v9; // r12d
  __int64 v10; // rsi
  __int64 v11; // rdx
  __m128 v12; // xmm1
  unsigned __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // rax
  __m128 v16; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v17; // [rsp+10h] [rbp-198h]
  __int128 v18; // [rsp+20h] [rbp-188h] BYREF
  void *v19[2]; // [rsp+30h] [rbp-178h]
  __int128 v20; // [rsp+40h] [rbp-168h]
  void *ptr[2]; // [rsp+50h] [rbp-158h] BYREF
  _QWORD v22[41]; // [rsp+60h] [rbp-148h] BYREF

  v4 = *(const __m128i **)(*(_QWORD *)(a2 + 16) + 64LL);
  v5 = v4->m128i_i64[0];
  ptr[0] = v22;
  ptr[1] = (void *)0x800000000LL;
  v22[32] = v5;
  if ( (unsigned __int8)sub_1DD6C30(a1, v4 + 1, &v4[2 * v4->m128i_u32[2] + 1], (__int64)ptr, a3, a4) )
  {
    v6 = 1;
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 16);
    v9 = *(_DWORD *)(v8 + 16);
    v10 = *(_QWORD *)v8;
    v11 = *(_QWORD *)(v8 + 8);
    v12 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + 24));
    v13 = *(_QWORD *)(v8 + 56);
    v14 = *(_QWORD *)(v8 + 48);
    v15 = *(_QWORD *)(v8 + 40);
    v16 = v12;
    v18 = 0;
    v17 = v15;
    *(_OWORD *)v19 = 0;
    v20 = 0;
    sub_15AB8B0((__int64)&v18, v10, v11);
    v6 = sub_1CD0C10(*a1, (__int64)&v18, v9, (__int64)&v16, v14, v13, 0.0, v12, (__int64)ptr);
    if ( HIDWORD(v19[1]) )
      free(v19[0]);
  }
  if ( ptr[0] != v22 )
    free(ptr[0]);
  return v6;
}
