unsigned __int64 sub_99000()
{
  __m128i v1; // xmm0
  __int64 v2; // [rsp+0h] [rbp-58h]
  __int64 v3; // [rsp+8h] [rbp-50h]
  __int64 v4; // [rsp+10h] [rbp-48h]
  __int64 v5; // [rsp+18h] [rbp-40h]
  __int64 v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+28h] [rbp-30h]
  __m128i si128; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-18h]
  unsigned __int64 v10; // [rsp+48h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v2 = qword_244060;
  si128 = _mm_load_si128((const __m128i *)&xmmword_244090);
  v3 = qword_244068;
  v4 = qword_244070;
  v5 = qword_244078;
  v6 = qword_244080;
  v7 = qword_244088;
  v9 = dword_2440A0;
  if ( (unsigned __int8)reg_bin_op() )
  {
    v1 = _mm_load_si128(&si128);
    qword_244060 = v2;
    xmmword_244090 = (__int128)v1;
    qword_244068 = v3;
    qword_244070 = v4;
    qword_244078 = v5;
    qword_244080 = v6;
    qword_244088 = v7;
    dword_2440A0 = v9;
    reg_str_get();
    reg_str_get();
  }
  return v10 - __readfsqword(0x28u);
}

