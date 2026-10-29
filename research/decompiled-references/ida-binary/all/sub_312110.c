__int64 __fastcall sub_312110(__int64 a1, char a2)
{
  __int64 v2; // rdx
  __int64 v4; // rsi
  __m128i v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // rax
  __m128i v8; // [rsp+0h] [rbp-38h] BYREF
  __m128i v9; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v2 = xmmword_8CD888;
  v10 = __readfsqword(0x28u);
  *(_BYTE *)(*(_QWORD *)(a1 + 352) + 144LL) = a2;
  if ( !v2 )
  {
    v4 = qword_8CD880;
    v9.m128i_i8[8] = 1;
    v9.m128i_i64[0] = (__int64)"SearchNext";
    if ( (unsigned __int64)&v9 < qword_8CD880
      || (unsigned __int64)&v9 >= qword_8CD880 + 16LL * *((_QWORD *)&xmmword_8CD888 + 1) )
    {
      if ( !*((_QWORD *)&xmmword_8CD888 + 1) )
      {
        v6 = qvector_reserve(&qword_8CD880, qword_8CD880, 1, 16);
        v2 = xmmword_8CD888;
        qword_8CD880 = v6;
        v4 = v6;
      }
      *(__m128i *)(v4 + 16 * v2) = _mm_load_si128(&v9);
    }
    else
    {
      v5 = _mm_load_si128(&v9);
      if ( !*((_QWORD *)&xmmword_8CD888 + 1) )
      {
        v8 = v5;
        v7 = qvector_reserve(&qword_8CD880, qword_8CD880, 1, 16);
        v2 = xmmword_8CD888;
        v5 = _mm_load_si128(&v8);
        qword_8CD880 = v7;
        v4 = v7;
      }
      *(__m128i *)(v4 + 16 * v2) = v5;
    }
    *(_QWORD *)&xmmword_8CD888 = xmmword_8CD888 + 1;
  }
  return sub_531B30(1, 0, &qword_8CD880);
}
