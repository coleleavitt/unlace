__int64 (__fastcall *__fastcall sub_1218E60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128i a4,
        __m128i a5))(__int64 a1, __int64 a2, __int64 a3, __m128i a4, __m128i a5)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, __m128i, __m128i); // rax

  result = (__int64 (__fastcall *)(__int64, __int64, __int64, __m128i, __m128i))sub_113FA70(a2, 0xBEDu, 0xBECu, 3055);
  if ( !result )
  {
    result = (__int64 (__fastcall *)(__int64, __int64, __int64, __m128i, __m128i))(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 608LL))(
                                                                                    a1,
                                                                                    a2);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result != 1 )
        return result;
      result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __m128i, __m128i))(*(_QWORD *)a1 + 776LL);
      if ( result == sub_1218E30 )
      {
        if ( *(_BYTE *)(a1 + 2384) )
          return (__int64 (__fastcall *)(__int64, __int64, __int64, __m128i, __m128i))sub_1218340(
                                                                                        (_QWORD *)a1,
                                                                                        a2,
                                                                                        a3,
                                                                                        *(_QWORD *)(a1 + 2392),
                                                                                        *(_QWORD *)(a1 + 2400),
                                                                                        a4,
                                                                                        a5);
        return result;
      }
    }
    else
    {
      result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __m128i, __m128i))(*(_QWORD *)a1 + 768LL);
    }
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __m128i, __m128i))((__int64 (__fastcall *)(__int64, __int64, __int64))result)(
                                                                                  a1,
                                                                                  a2,
                                                                                  a3);
  }
  return result;
}
