unsigned __int64 __fastcall sub_CBD0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  const __m128i *v9; // rax
  __m128i v10; // xmm5
  __m128i v11; // xmm0
  __m128i v12; // xmm4
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v14; // rsi
  void (__fastcall *v15)(unsigned __int64 *, unsigned __int64 *, __int64, void (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64, __int64, __int64, __int64, void (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64); // rax
  __m128i v17; // [rsp+0h] [rbp-38h] BYREF
  void (__fastcall *v18)(_QWORD, _QWORD, _QWORD); // [rsp+10h] [rbp-28h]
  __int64 v19; // [rsp+18h] [rbp-20h]
  unsigned __int64 v20; // [rsp+28h] [rbp-10h]

  v20 = __readfsqword(0x28u);
  v6 = a1->m128i_i64[0];
  v17 = 0;
  v18 = nullptr;
  *(__m128i *)(v6 + 88) = _mm_loadu_si128((const __m128i *)&a1->m128i_u64[1]);
  *(__m128i *)(a1->m128i_i64[0] + 104) = _mm_loadu_si128((const __m128i *)((char *)a1 + 24));
  *(_DWORD *)(a1->m128i_i64[0] + 536) = a1[2].m128i_i32[2];
  *(__m128i *)(a1->m128i_i64[0] + 56) = _mm_loadu_si128(a1 + 3);
  *(_QWORD *)(a1->m128i_i64[0] + 72) = a1[4].m128i_i64[0];
  v7 = a1[6].m128i_i64[0];
  v8 = a1[5].m128i_i64[1];
  v9 = (const __m128i *)a1->m128i_i64[0];
  v19 = v7;
  if ( v8 )
  {
    v10 = _mm_loadu_si128((const __m128i *)((char *)a1 + 72));
    a1[5].m128i_i64[1] = 0;
    a1[6].m128i_i64[0] = 0;
    v17 = v10;
  }
  v11 = _mm_load_si128(&v17);
  v12 = _mm_loadu_si128(v9 + 34);
  v13 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v9[35].m128i_i64[0];
  v9[35].m128i_i64[0] = v8;
  v14 = v9[35].m128i_i64[1];
  v17 = v12;
  v18 = v13;
  v19 = v14;
  v9[35].m128i_i64[1] = v7;
  v9[34] = v11;
  if ( v13 )
    v13(&v17, &v17, 3);
  v15 = (void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64, void (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64, __int64, __int64, __int64, void (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64))a1[5].m128i_i64[1];
  if ( v15 )
    v15(&a1[4].m128i_u64[1], &a1[4].m128i_u64[1], 3, v13, a5, a6, v17.m128i_i64[0], v17.m128i_i64[1], v18, v19);
  return v20 - __readfsqword(0x28u);
}
