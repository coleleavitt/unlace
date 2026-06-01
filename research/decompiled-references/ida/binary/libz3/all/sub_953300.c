__int64 __fastcall sub_953300(const __m128i **a1, __int64 a2)
{
  void (__fastcall *v2)(__m128i *, __int64, __int64); // rax
  const __m128i *v3; // rbx
  __int64 v4; // rdx
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __int64 (__fastcall *v7)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 result; // rax
  __m128i v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 (__fastcall *v10)(_QWORD, _QWORD, _QWORD); // [rsp+10h] [rbp-28h]
  __int64 v11; // [rsp+18h] [rbp-20h]

  v2 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a2 + 16);
  v3 = *a1;
  v10 = nullptr;
  v11 = 0;
  v9 = 0;
  if ( v2 )
  {
    v2(&v9, a2, 2);
    v4 = *(_QWORD *)(a2 + 24);
    v2 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a2 + 16);
  }
  else
  {
    v4 = 0;
  }
  v5 = _mm_load_si128(&v9);
  v6 = _mm_loadu_si128(v3 + 64);
  v7 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v3[65].m128i_i64[0];
  v3[65].m128i_i64[0] = (__int64)v2;
  result = v3[65].m128i_i64[1];
  v9 = v6;
  v10 = v7;
  v11 = result;
  v3[65].m128i_i64[1] = v4;
  v3[64] = v5;
  if ( v7 )
    return v7(&v9, &v9, 3);
  return result;
}

