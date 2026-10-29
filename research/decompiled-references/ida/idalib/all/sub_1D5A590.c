void **__fastcall sub_1D5A590(__int64 **a1, void **a2, __m128 a3)
{
  void **v4; // rbx
  void *v5; // rax
  __int64 v6; // r14
  __m128 si128; // xmm0
  __int64 v9; // rdi
  unsigned int v10; // eax
  __m128 v11; // xmm1
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rbp
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  __int64 *v19; // rdx
  size_t v20; // r13
  void **v21; // rax
  __m128 v22; // [rsp+0h] [rbp-88h] BYREF
  __m128 v23; // [rsp+10h] [rbp-78h] BYREF
  void *v24; // [rsp+20h] [rbp-68h] BYREF
  __m128i v25; // [rsp+28h] [rbp-60h]
  _DWORD v26[9]; // [rsp+38h] [rbp-50h] BYREF
  char v27; // [rsp+5Ch] [rbp-2Ch]

  v4 = a2;
  v5 = *a2;
  v25.m128i_i64[0] = (__int64)(a2 + 1);
  v24 = v5;
  sub_F6CCB0((__int64 *)&v24, a3);
  v6 = (__int64)*a2;
  if ( ((unsigned __int64)*a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return v4;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v9 = (__int64)*a2;
  v26[8] = 0;
  v24 = v26;
  v25 = (__m128i)si128;
  v27 = 0;
  v10 = sub_F6C560(v9);
  if ( (unsigned __int64)v10 > v25.m128i_i64[0] )
    sub_1EA60C0(&v24);
  v22.m128_u64[0] = (unsigned __int64)(a2 + 1);
  v11 = _mm_loadh_ps((const double *)v22.m128_u64);
  v22 = v11;
  if ( v6 & 7 | (v6 >> 3) & 1 && v6 )
  {
    v17 = sub_F6C520(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
    v23.m128_u64[0] = v17 * ((a2 + 1 != nullptr) + ((unsigned __int64)a2 - (a2 + 1 != nullptr) + 8) / v17);
    v23 = _mm_loadh_ps((const double *)v23.m128_u64);
    v18 = sub_1D5A410(
            a1,
            (__int64)&v24,
            v23.m128_i64[0],
            v23.m128_i64[1],
            1,
            *(double *)si128.m128_u64,
            *(double *)v11.m128_u64);
    if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v12 = sub_1D40AC0(a1, v18, v22.m128_i64[0], v22.m128_i64[1], si128);
      if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_14;
    }
  }
  else
  {
    v12 = sub_1D5A410(
            a1,
            (__int64)&v24,
            v22.m128_i64[0],
            v22.m128_i64[1],
            1,
            *(double *)si128.m128_u64,
            *(double *)v11.m128_u64);
    if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
LABEL_14:
      v19 = *a1;
      v20 = v25.m128i_i64[0] - v25.m128i_i64[1];
      v21 = (void **)sub_A81BC0((_QWORD *)v19[31], v12, v25.m128i_i32[0] - v25.m128i_i32[2], v13, v14, v15);
      v16 = v24;
      v4 = v21;
      memcpy(v21 + 1, (char *)v24 + v25.m128i_i64[1], v20);
      goto LABEL_8;
    }
  }
  v16 = v24;
  v4 = nullptr;
LABEL_8:
  if ( !v16 || v16 == v26 )
    return v4;
  operator delete[](v16);
  return v4;
}
