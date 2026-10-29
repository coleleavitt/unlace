__int64 __fastcall sub_7A1210(__int64 a1, unsigned int a2, int *a3, _DWORD *a4)
{
  __int64 result; // rax
  bool v7; // zf
  _QWORD v8[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v9[2]; // [rsp+10h] [rbp-48h] BYREF
  __m128i v10; // [rsp+20h] [rbp-38h]

  if ( *(_BYTE *)(a1 + 1530) )
  {
    result = (unsigned int)(*a4 - 1);
    if ( (unsigned int)result <= 1 )
    {
      sub_7A0960(a1, &std::cout, a2, a3);
      v7 = a4[1] == -1;
      v9[0] = a1;
      v9[1] = 0;
      v10 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C548A0), (__m128i)(unsigned __int64)sub_7A0040);
      if ( !v7 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        v8[0] = a4;
        v8[1] = v9;
        ((void (__fastcall *)(void *, _QWORD *))sub_11EE460)(&std::cout, v8);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_7A0C30(a1, (__int64)&std::cout, a2, a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      result = v10.m128i_i64[0];
      if ( v10.m128i_i64[0] )
        return ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))v10.m128i_i64[0])(v9, v9, 3);
    }
  }
  return result;
}

