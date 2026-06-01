_QWORD *__fastcall sub_1949040(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __m128 si128; // xmm0
  char v12; // al
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __m128 v15; // kr00_16
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  size_t v21; // r12
  _QWORD *v22; // rax
  _DWORD *v23; // rbp
  _QWORD *v24; // r13
  __m128 v26; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD v29[3]; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-80h]
  unsigned int v31; // [rsp+3Ch] [rbp-7Ch]
  void *v32; // [rsp+40h] [rbp-78h] BYREF
  __m128i v33; // [rsp+48h] [rbp-70h]
  _DWORD v34[9]; // [rsp+58h] [rbp-60h] BYREF
  char v35; // [rsp+7Ch] [rbp-3Ch]

  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v34[8] = 0;
  v33 = (__m128i)si128;
  v32 = v34;
  v35 = 0;
  v12 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v12 == 49 )
  {
    v29[0] = sub_19014F0(a1, a6, *(_QWORD *)(a2 + 32), *a3, a4, a5, 1u);
    if ( sub_F22B30(v29) )
      goto LABEL_14;
    v26.m128_u64[0] = (unsigned __int64)a3;
    v26 = _mm_loadh_ps((const double *)v26.m128_u64);
    v16 = sub_194AE10(a1, &v32, v26.m128_u64[0], v26.m128_u64[1], v29[0]);
  }
  else
  {
    if ( v12 != 22 )
    {
      v16 = sub_1946010(a1, (__int64)&v32, a2, (__int64)a3, a5, a6, si128, a8);
      if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_8;
LABEL_14:
      v23 = v32;
      v24 = nullptr;
      goto LABEL_9;
    }
    v13 = *(_QWORD *)(a2 + 40);
    LODWORD(v29[0]) = 0;
    v14 = *a1;
    v27 = 0;
    if ( v13 >= 0xFFFFFFFFFFFFFFD3LL )
      v13 = 0;
    v31 = a3[4];
    v30 = v31;
    v29[1] = v13;
    sub_1CE5E60(v14, 0, (__int64)&v27, 1);
    sub_F22A90(&v28, v27);
    v29[0] = v28;
    if ( sub_F22B30(v29) )
      goto LABEL_14;
    v26.m128_u64[0] = (unsigned __int64)a3;
    v15 = _mm_loadh_ps((const double *)v26.m128_u64);
    v16 = sub_194B340(a1, &v32, v15.m128_u64[0], v15.m128_u64[1], v29[0], a6, v15.m128_u64[0], v15.m128_u64[1]);
  }
  if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_14;
LABEL_8:
  v20 = *a1;
  v21 = v33.m128i_i64[0] - v33.m128i_i64[1];
  v22 = sub_A81BC0(*(_QWORD **)(v20 + 248), v16, v33.m128i_i32[0] - v33.m128i_i32[2], v17, v18, v19);
  v23 = v32;
  v24 = v22;
  memcpy(v22 + 1, (char *)v32 + v33.m128i_i64[1], v21);
LABEL_9:
  if ( v23 != v34 && v23 )
    operator delete[](v23);
  return v24;
}
