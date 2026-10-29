void **__fastcall sub_198FB20(__int64 *a1, void **a2, __m128 a3)
{
  void **v4; // rbx
  void *v5; // rax
  __int64 v6; // r14
  __m128 si128; // xmm0
  __int64 v9; // rdi
  unsigned int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // rbp
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  size_t v19; // r13
  void **v20; // rax
  __m128 v21; // [rsp+0h] [rbp-88h] BYREF
  __m128 v22; // [rsp+10h] [rbp-78h] BYREF
  void *v23; // [rsp+20h] [rbp-68h] BYREF
  __m128i v24; // [rsp+28h] [rbp-60h]
  _DWORD v25[9]; // [rsp+38h] [rbp-50h] BYREF
  char v26; // [rsp+5Ch] [rbp-2Ch]

  v4 = a2;
  v5 = *a2;
  v24.m128i_i64[0] = (__int64)(a2 + 1);
  v23 = v5;
  sub_F6CCB0((__int64 *)&v23, a3);
  v6 = (__int64)*a2;
  if ( ((unsigned __int64)*a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return v4;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v9 = (__int64)*a2;
  v25[8] = 0;
  v23 = v25;
  v24 = (__m128i)si128;
  v26 = 0;
  v10 = sub_F6C560(v9);
  if ( (unsigned __int64)v10 > v24.m128i_i64[0] )
    sub_1EA60C0(&v23);
  v21.m128_u64[0] = (unsigned __int64)(a2 + 1);
  v21 = _mm_loadh_ps((const double *)v21.m128_u64);
  if ( v6 & 7 | (v6 >> 3) & 1 && v6 )
  {
    v16 = sub_F6C520(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
    v22.m128_u64[0] = v16 * ((a2 + 1 != nullptr) + ((unsigned __int64)a2 - (a2 + 1 != nullptr) + 8) / v16);
    v22 = _mm_loadh_ps((const double *)v22.m128_u64);
    v17 = sub_198F9A0(a1, (__int64)&v23, v22.m128_i64[0], v22.m128_i64[1], 1u);
    if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v11 = sub_18D44E0(a1, v17, v21.m128_i64[0], v21.m128_i64[1], si128);
      if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_14;
    }
  }
  else
  {
    v11 = sub_198F9A0(a1, (__int64)&v23, v21.m128_i64[0], v21.m128_i64[1], 1u);
    if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
LABEL_14:
      v18 = *a1;
      v19 = v24.m128i_i64[0] - v24.m128i_i64[1];
      v20 = (void **)sub_A81BC0(*(_QWORD **)(v18 + 248), v11, v24.m128i_i32[0] - v24.m128i_i32[2], v12, v13, v14);
      v15 = v23;
      v4 = v20;
      memcpy(v20 + 1, (char *)v23 + v24.m128i_i64[1], v19);
      goto LABEL_8;
    }
  }
  v15 = v23;
  v4 = nullptr;
LABEL_8:
  if ( !v15 || v15 == v25 )
    return v4;
  operator delete[](v15);
  return v4;
}
