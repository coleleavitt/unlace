void **__fastcall sub_1D03050(__int64 a1, void **a2, __m128 a3, __m128 a4)
{
  void **v4; // rbp
  void *v6; // rax
  __int64 v7; // r12
  int v8; // eax
  int v9; // r15d
  __int64 v10; // r9
  __int64 v11; // r12
  __m128 si128; // xmm0
  __int64 v14; // rdi
  unsigned int v15; // eax
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  _DWORD *v20; // r12
  unsigned int v21; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  size_t v24; // r13
  void **v25; // rax
  __m128 v26; // [rsp+0h] [rbp-A8h] BYREF
  __m128 v27; // [rsp+10h] [rbp-98h] BYREF
  __int64 v28; // [rsp+28h] [rbp-80h]
  void *v29; // [rsp+30h] [rbp-78h] BYREF
  __m128i v30; // [rsp+38h] [rbp-70h]
  _DWORD v31[9]; // [rsp+48h] [rbp-60h] BYREF
  char v32; // [rsp+6Ch] [rbp-3Ch]

  v4 = a2;
  v6 = *a2;
  v7 = *(_QWORD *)(a1 + 40);
  v30.m128i_i64[0] = (__int64)(a2 + 1);
  v29 = v6;
  v8 = sub_F6CCB0((__int64 *)&v29, a3);
  v9 = *(_DWORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 40);
  if ( v8 )
  {
    *(_DWORD *)(a1 + 32) = v8;
    *(_QWORD *)(a1 + 40) = v7;
  }
  v11 = (__int64)*a2;
  if ( ((unsigned __int64)*a2 & 0xFFFFFFFFFFFFFFF0LL) != 0
    && (*(_BYTE *)(*(_QWORD *)((unsigned __int64)*a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) != 0 )
  {
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v14 = (__int64)*a2;
    v26.m128_u64[0] = v10;
    v29 = v31;
    v30 = (__m128i)si128;
    v31[8] = 0;
    v32 = 0;
    v27.m128_u64[0] = v11;
    v15 = sub_F6C560(v14);
    v16 = v26.m128_u64[0];
    if ( (unsigned __int64)v15 > v30.m128i_i64[0] )
    {
      sub_1EA60C0(&v29);
      v16 = v26.m128_u64[0];
    }
    if ( v11 & 7 | (v11 >> 3) & 1 )
    {
      v26.m128_u64[0] = (unsigned __int64)(a2 + 1);
      a4 = _mm_loadh_ps((const double *)v26.m128_u64);
      v26 = a4;
      if ( v11 )
      {
        v28 = v16;
        v21 = sub_F6C520(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
        v27.m128_u64[0] = v21 * ((a2 + 1 != nullptr) + ((unsigned __int64)a2 - (a2 + 1 != nullptr) + 8) / v21);
        v27 = _mm_loadh_ps((const double *)v27.m128_u64);
        v22 = sub_1D02ED0(
                (__int64 *)a1,
                (__int64)&v29,
                v27.m128_i64[0],
                v27.m128_i64[1],
                1,
                *(double *)si128.m128_u64,
                *(double *)a4.m128_u64);
        v10 = v28;
        if ( (v22 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_10;
        v27.m128_u64[0] = v28;
        v17 = sub_1CBC130((_QWORD *)a1, v22, v26.m128_i64[0], v26.m128_i64[1], si128);
        v10 = v27.m128_u64[0];
        if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_10;
        goto LABEL_17;
      }
      v27.m128_u64[0] = 0;
    }
    v26.m128_u64[0] = (unsigned __int64)(a2 + 1);
    v28 = v16;
    v26 = _mm_loadh_ps((const double *)v26.m128_u64);
    v17 = sub_1D02ED0(
            (__int64 *)a1,
            (__int64)&v29,
            v26.m128_i64[0],
            v26.m128_i64[1],
            1,
            *(double *)si128.m128_u64,
            *(double *)a4.m128_u64);
    v10 = v28;
    if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
LABEL_10:
      v20 = v29;
      v4 = nullptr;
LABEL_11:
      if ( v20 && v20 != v31 )
      {
        v26.m128_u64[0] = v10;
        operator delete[](v20);
        v10 = v26.m128_u64[0];
      }
      goto LABEL_5;
    }
LABEL_17:
    v23 = *(_QWORD *)a1;
    v26.m128_u64[0] = v10;
    v24 = v30.m128i_i64[0] - v30.m128i_i64[1];
    v25 = (void **)sub_A81BC0(*(_QWORD **)(v23 + 248), v17, v30.m128i_i32[0] - v30.m128i_i32[2], v18, v19, v10);
    v20 = v29;
    v4 = v25;
    memcpy(v25 + 1, (char *)v29 + v30.m128i_i64[1], v24);
    v10 = v26.m128_u64[0];
    goto LABEL_11;
  }
LABEL_5:
  *(_DWORD *)(a1 + 32) = v9;
  *(_QWORD *)(a1 + 40) = v10;
  return v4;
}
