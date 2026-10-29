__int64 __fastcall sub_69FAA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  const __m128i *v4; // rbx
  void (__fastcall *v5)(__m128i *, __int64, __int64); // rax
  __int64 v6; // rdx
  __m128i v7; // xmm0
  __int64 (__fastcall *v8)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 result; // rax
  char **exception; // rbx
  __m128i v11; // [rsp+18h] [rbp-38h] BYREF
  __int64 (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // [rsp+28h] [rbp-28h]
  __int64 v13; // [rsp+30h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 8);
  sub_786C50(a1 + 4544, v3, a1 + 4360, a1 + 96, a1 + 4648, a1 + 4504, 1);
  v4 = *(const __m128i **)(sub_787220(a1 + 4544, v3) + 2264);
  if ( !v4 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v11.m128i_i64, "user propagator must be initialized");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v11);
    sub_233E40((__int64)&v11);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v5 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a2 + 16);
  v12 = nullptr;
  v13 = 0;
  v11 = 0;
  if ( v5 )
  {
    v5(&v11, a2, 2);
    v6 = *(_QWORD *)(a2 + 24);
    v5 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a2 + 16);
  }
  else
  {
    v6 = 0;
  }
  v7 = _mm_load_si128(&v11);
  v11 = _mm_loadu_si128(v4 + 18);
  v8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v4[19].m128i_i64[0];
  v4[18] = v7;
  v12 = v8;
  v4[19].m128i_i64[0] = (__int64)v5;
  result = v4[19].m128i_i64[1];
  v13 = result;
  v4[19].m128i_i64[1] = v6;
  if ( v8 )
    return v8(&v11, &v11, 3);
  return result;
}

