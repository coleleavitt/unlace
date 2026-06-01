void **__fastcall sub_1DD4760(__int64 a1, void **a2, __m128 a3, __m128 a4)
{
  void **v4; // r15
  size_t v6; // rax
  int v7; // eax
  int v8; // r13d
  __int64 v9; // r14
  void *v10; // rdx
  __m128 si128; // xmm0
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rbp
  unsigned int v19; // eax
  unsigned __int64 v20; // rax
  _QWORD *v21; // rdi
  void **v22; // rax
  size_t n[2]; // [rsp+0h] [rbp-98h] BYREF
  __m128 v24; // [rsp+10h] [rbp-88h] BYREF
  void *v25; // [rsp+20h] [rbp-78h] BYREF
  __m128i v26; // [rsp+28h] [rbp-70h]
  _DWORD v27[9]; // [rsp+38h] [rbp-60h] BYREF
  char v28; // [rsp+5Ch] [rbp-3Ch]

  v4 = a2;
  v6 = *(_QWORD *)(a1 + 48);
  v26.m128i_i64[0] = (__int64)(a2 + 1);
  n[0] = v6;
  v25 = *a2;
  v7 = sub_F6CCB0((__int64 *)&v25, a3);
  v8 = *(_DWORD *)(a1 + 40);
  v9 = *(_QWORD *)(a1 + 48);
  if ( v7 )
  {
    *(_DWORD *)(a1 + 40) = v7;
    *(_QWORD *)(a1 + 48) = n[0];
  }
  v10 = *a2;
  if ( ((unsigned __int64)*a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)((unsigned __int64)*a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0xB) == 0 )
    {
      sub_18C4110(*(_QWORD *)a1, *(_DWORD *)(a1 + 40), (__int64)v10);
      goto LABEL_13;
    }
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    n[0] = (size_t)*a2;
    v24.m128_u64[0] = (unsigned __int64)v10;
    v25 = v27;
    v26 = (__m128i)si128;
    v27[8] = 0;
    v28 = 0;
    v12 = sub_F6C560(n[0]);
    v13 = n[0];
    if ( (unsigned __int64)v12 > v26.m128i_i64[0] )
    {
      sub_1EA60C0(&v25);
      v13 = n[0];
    }
    if ( v13 & 7 | (v13 >> 3) & 1 )
    {
      n[0] = (size_t)(a2 + 1);
      a4 = _mm_loadh_ps((const double *)n);
      *(__m128 *)n = a4;
      if ( v13 )
      {
        v19 = sub_F6C520(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
        v24.m128_u64[0] = v19 * ((a2 + 1 != nullptr) + ((unsigned __int64)a2 - (a2 + 1 != nullptr) + 8) / v19);
        v24 = _mm_loadh_ps((const double *)v24.m128_u64);
        v20 = sub_1DD45E0(
                (__int64 *)a1,
                (__int64)&v25,
                v24.m128_i64[0],
                v24.m128_i64[1],
                1,
                *(double *)si128.m128_u64,
                *(double *)a4.m128_u64);
        if ( (v20 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_9;
        v14 = sub_1DBC110((_QWORD *)a1, v20, n[0], n[1], si128);
        if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_9;
        goto LABEL_17;
      }
      v24.m128_u64[0] = 0;
    }
    n[0] = (size_t)(a2 + 1);
    *(__m128 *)n = _mm_loadh_ps((const double *)n);
    v14 = sub_1DD45E0((__int64 *)a1, (__int64)&v25, n[0], n[1], 1, *(double *)si128.m128_u64, *(double *)a4.m128_u64);
    if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
LABEL_9:
      v17 = v25;
      v4 = nullptr;
LABEL_10:
      if ( v17 && v17 != v27 )
        operator delete[](v17);
      goto LABEL_13;
    }
LABEL_17:
    v21 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
    n[0] = v26.m128i_i64[0] - v26.m128i_i64[1];
    v22 = (void **)sub_A81BC0(
                     v21,
                     v14,
                     v26.m128i_i32[0] - v26.m128i_i32[2],
                     v26.m128i_i64[0] - v26.m128i_i64[1],
                     v15,
                     v16);
    v17 = v25;
    v4 = v22;
    memcpy(v22 + 1, (char *)v25 + v26.m128i_i64[1], n[0]);
    goto LABEL_10;
  }
LABEL_13:
  *(_DWORD *)(a1 + 40) = v8;
  *(_QWORD *)(a1 + 48) = v9;
  return v4;
}
