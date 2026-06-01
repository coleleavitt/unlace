__int64 __fastcall sub_68FA20(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  void (__fastcall *v5)(__m128i *, __int64, __int64); // rax
  const __m128i *v6; // rbx
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __int64 (__fastcall *v10)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 result; // rax
  __m128i v12; // [rsp+8h] [rbp-38h] BYREF
  __int64 (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // [rsp+18h] [rbp-28h]
  __int64 v14; // [rsp+20h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 8);
  sub_786C50(a1 + 4376, v3, a1 + 4392, a1 + 96, a1 + 4480, a1 + 4840, *(unsigned __int8 *)(a1 + 385));
  v4 = sub_787220(a1 + 4376, v3);
  sub_68D0E0(*(_QWORD *)(v4 + 2264));
  v5 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a2 + 16);
  v13 = nullptr;
  v14 = 0;
  v6 = *(const __m128i **)(v4 + 2264);
  v12 = 0;
  if ( v5 )
  {
    v5(&v12, a2, 2);
    v7 = *(_QWORD *)(a2 + 24);
    v5 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a2 + 16);
  }
  else
  {
    v7 = 0;
  }
  v8 = _mm_load_si128(&v12);
  v9 = _mm_loadu_si128(v6 + 16);
  v10 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v6[17].m128i_i64[0];
  v6[17].m128i_i64[0] = (__int64)v5;
  result = v6[17].m128i_i64[1];
  v12 = v9;
  v13 = v10;
  v14 = result;
  v6[17].m128i_i64[1] = v7;
  v6[16] = v8;
  if ( v10 )
    return v10(&v12, &v12, 3);
  return result;
}

