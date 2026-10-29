unsigned __int64 __fastcall declaration_compiler_t__set_pp_callbacks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  void (__fastcall *v6)(__m128i *, __int64, __int64); // rax
  const __m128i *v7; // rbx
  __m128i v9; // xmm0
  void (__fastcall *v10)(_QWORD, _QWORD, _QWORD); // rcx
  void (__fastcall *v11)(__m128i *, __int64, __int64); // rax
  const __m128i *v12; // rbx
  __int64 v13; // rdx
  __m128i v14; // xmm0
  void (__fastcall *v15)(_QWORD, _QWORD, _QWORD); // rcx
  void (__fastcall *v16)(__m128i *, __int64, __int64); // rax
  const __m128i *v17; // rbx
  __int64 v18; // rdx
  __m128i v19; // xmm0
  void (__fastcall *v20)(_QWORD, _QWORD, _QWORD); // rcx
  __m128i v22; // [rsp+0h] [rbp-58h] BYREF
  void (__fastcall *v23)(_QWORD, _QWORD, _QWORD); // [rsp+10h] [rbp-48h]
  __int64 v24; // [rsp+18h] [rbp-40h]
  unsigned __int64 v25; // [rsp+28h] [rbp-30h]

  v5 = 0;
  v6 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a2 + 16);
  v7 = *(const __m128i **)(a1 + 32);
  v25 = __readfsqword(0x28u);
  v22 = 0;
  v23 = nullptr;
  v24 = 0;
  if ( v6 )
  {
    v6(&v22, a2, 2);
    v5 = *(_QWORD *)(a2 + 24);
    v6 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a2 + 16);
  }
  v9 = _mm_load_si128(&v22);
  v22 = _mm_loadu_si128(v7 + 29);
  v10 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v7[30].m128i_i64[0];
  v7[29] = v9;
  v23 = v10;
  v7[30].m128i_i64[0] = (__int64)v6;
  v24 = v7[30].m128i_i64[1];
  v7[30].m128i_i64[1] = v5;
  if ( v10 )
    v10(&v22, &v22, 3);
  v11 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a3 + 16);
  v12 = *(const __m128i **)(a1 + 32);
  v13 = 0;
  v23 = nullptr;
  v24 = 0;
  v22 = 0;
  if ( v11 )
  {
    v11(&v22, a3, 2);
    v13 = *(_QWORD *)(a3 + 24);
    v11 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a3 + 16);
  }
  v14 = _mm_load_si128(&v22);
  v22 = _mm_loadu_si128(v12 + 31);
  v15 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v12[32].m128i_i64[0];
  v12[31] = v14;
  v23 = v15;
  v12[32].m128i_i64[0] = (__int64)v11;
  v24 = v12[32].m128i_i64[1];
  v12[32].m128i_i64[1] = v13;
  if ( v15 )
    v15(&v22, &v22, 3);
  v16 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a4 + 16);
  v17 = *(const __m128i **)(a1 + 32);
  v18 = 0;
  v23 = nullptr;
  v24 = 0;
  v22 = 0;
  if ( v16 )
  {
    v16(&v22, a4, 2);
    v18 = *(_QWORD *)(a4 + 24);
    v16 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a4 + 16);
  }
  v19 = _mm_load_si128(&v22);
  v22 = _mm_loadu_si128(v17 + 33);
  v20 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v17[34].m128i_i64[0];
  v17[33] = v19;
  v23 = v20;
  v17[34].m128i_i64[0] = (__int64)v16;
  v24 = v17[34].m128i_i64[1];
  v17[34].m128i_i64[1] = v18;
  if ( v20 )
    v20(&v22, &v22, 3);
  return v25 - __readfsqword(0x28u);
}
