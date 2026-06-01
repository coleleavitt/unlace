unsigned __int64 sub_990E0()
{
  __m128i v1; // xmm0
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i si128; // [rsp+0h] [rbp-78h] BYREF
  __int64 v6; // [rsp+10h] [rbp-68h]
  int v7; // [rsp+18h] [rbp-60h]
  __int64 v8; // [rsp+1Ch] [rbp-5Ch]
  __int64 v9; // [rsp+24h] [rbp-54h]
  __m128i v10; // [rsp+2Ch] [rbp-4Ch] BYREF
  __int64 v11; // [rsp+3Ch] [rbp-3Ch]
  int v12; // [rsp+44h] [rbp-34h]
  __m128i v13; // [rsp+48h] [rbp-30h] BYREF
  __m128i v14; // [rsp+58h] [rbp-20h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  v6 = qword_245070;
  si128 = _mm_load_si128((const __m128i *)&xmmword_245060);
  v7 = dword_245078;
  v10 = _mm_load_si128((const __m128i *)&xmmword_245090);
  v8 = qword_245080;
  v13 = _mm_load_si128((const __m128i *)&xmmword_2450B0);
  v9 = qword_245088;
  v14 = _mm_load_si128((const __m128i *)&xmmword_2450C0);
  v11 = qword_2450A0;
  v12 = dword_2450A8;
  if ( (unsigned __int8)reg_bin_op() )
  {
    v1 = _mm_load_si128(&si128);
    qword_245070 = v6;
    xmmword_245060 = (__int128)v1;
    v2 = _mm_loadu_si128(&v10);
    dword_245078 = v7;
    xmmword_245090 = (__int128)v2;
    v3 = _mm_loadu_si128(&v13);
    qword_245080 = v8;
    xmmword_2450B0 = (__int128)v3;
    v4 = _mm_loadu_si128(&v14);
    qword_245088 = v9;
    xmmword_2450C0 = (__int128)v4;
    qword_2450A0 = v11;
    dword_2450A8 = v12;
    reg_str_get();
    reg_str_get();
  }
  return v15 - __readfsqword(0x28u);
}

