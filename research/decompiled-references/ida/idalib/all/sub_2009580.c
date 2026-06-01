__int64 __fastcall sub_2009580(__int64 a1, __m128i *a2)
{
  __int64 (__fastcall *v2)(__m128i *, __m128i *, __int64); // rax
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __int64 v5; // rax
  __int64 v6; // rdx
  void (__fastcall *v7)(__m128i *, __m128i *, __int64); // rax
  __m128i v8; // xmm2
  __m128i v9; // xmm0
  __int64 v10; // rax
  void (__fastcall *v11)(_QWORD, _QWORD, _QWORD); // rcx
  __m128i v12; // xmm0
  __m128i v13; // xmm3
  __int64 v14; // rdx
  __m128i v15; // xmm4
  void (__fastcall *v16)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v17; // rcx
  __int64 result; // rax
  __m128i v19; // [rsp+0h] [rbp-A8h] BYREF
  void (__fastcall *v20)(__m128i *, __m128i *, __int64); // [rsp+10h] [rbp-98h]
  __int64 v21; // [rsp+18h] [rbp-90h]
  __m128i v22; // [rsp+20h] [rbp-88h] BYREF
  __int64 (__fastcall *v23)(__m128i *, __m128i *, __int64); // [rsp+30h] [rbp-78h]
  __int64 v24; // [rsp+38h] [rbp-70h]
  __m128i v25; // [rsp+40h] [rbp-68h] BYREF
  void (__fastcall *v26)(_QWORD, _QWORD, _QWORD); // [rsp+50h] [rbp-58h]
  __int64 v27; // [rsp+58h] [rbp-50h]
  __m128i v28; // [rsp+60h] [rbp-48h] BYREF
  void (__fastcall *v29)(_QWORD, _QWORD, _QWORD); // [rsp+70h] [rbp-38h]
  __int64 v30; // [rsp+78h] [rbp-30h]

  v2 = (__int64 (__fastcall *)(__m128i *, __m128i *, __int64))a2[1].m128i_i64[0];
  v3 = _mm_loadu_si128(a2);
  a2[1].m128i_i64[0] = 0;
  v4 = _mm_load_si128(&v22);
  v23 = v2;
  v5 = a2[1].m128i_i64[1];
  a2[1].m128i_i64[1] = v24;
  v6 = v21;
  v24 = v5;
  v7 = *(void (__fastcall **)(__m128i *, __m128i *, __int64))(a1 + 136);
  v8 = _mm_load_si128(&v19);
  v22 = v3;
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 120));
  *(_QWORD *)(a1 + 136) = 0;
  v20 = v7;
  v10 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 144) = v6;
  *a2 = v4;
  *(__m128i *)(a1 + 120) = v8;
  v19 = v9;
  v21 = v10;
  sub_1FF13E0(&v25, &v19, &v22);
  v11 = v26;
  v26 = nullptr;
  v12 = _mm_load_si128(&v25);
  v13 = _mm_load_si128(&v28);
  v14 = v27;
  v15 = _mm_loadu_si128((const __m128i *)(a1 + 120));
  v27 = v30;
  v16 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 136);
  *(_QWORD *)(a1 + 136) = v11;
  v17 = *(_QWORD *)(a1 + 144);
  v25 = v13;
  v28 = v15;
  *(__m128i *)(a1 + 120) = v12;
  v29 = v16;
  v30 = v17;
  *(_QWORD *)(a1 + 144) = v14;
  if ( v16 )
  {
    v16(&v28, &v28, 3);
    if ( v26 )
      v26(&v25, &v25, 3);
  }
  if ( v20 )
    v20(&v19, &v19, 3);
  result = (__int64)v23;
  if ( v23 )
    return v23(&v22, &v22, 3);
  return result;
}
