bool __fastcall sub_8E3B10(const __m128i **a1, __int64 a2, __int64 a3)
{
  void (__fastcall *v4)(__m128i *, __int64, __int64); // rax
  const __m128i *v5; // rbx
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  void (__fastcall *v10)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v11; // rsi
  bool result; // al
  __m128i v13; // [rsp+0h] [rbp-48h] BYREF
  void (__fastcall *v14)(_QWORD, _QWORD, _QWORD); // [rsp+10h] [rbp-38h]
  __int64 v15; // [rsp+18h] [rbp-30h]

  v4 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a3 + 16);
  v5 = *a1;
  v14 = nullptr;
  v15 = 0;
  v13 = 0;
  if ( v4 )
  {
    v4(&v13, a3, 2);
    v7 = *(_QWORD *)(a3 + 24);
    v4 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a3 + 16);
  }
  else
  {
    v7 = 0;
  }
  v8 = _mm_load_si128(&v13);
  v9 = _mm_loadu_si128(v5 + 474);
  v10 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v5[475].m128i_i64[0];
  v11 = v5[475].m128i_i64[1];
  v5[475].m128i_i64[0] = (__int64)v4;
  v5[475].m128i_i64[1] = v7;
  v14 = v10;
  v15 = v11;
  v13 = v9;
  v5[474] = v8;
  if ( v10 )
  {
    v10(&v13, &v13, 3);
    v4 = (void (__fastcall *)(__m128i *, __int64, __int64))v5[475].m128i_i64[0];
  }
  v5[476].m128i_i64[0] = a2;
  result = v4 != nullptr;
  v5[473].m128i_i8[8] |= result;
  return result;
}

