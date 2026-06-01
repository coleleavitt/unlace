__int64 sub_2ED560()
{
  __int64 v0; // rdi
  __m128i *v1; // rdx
  __m128i *v2; // rax
  __int8 v3; // cl
  __int64 v4; // rax
  __int8 v5; // si
  __int64 v6; // rax
  __int64 v7; // rsi
  __m128i *p_si128; // rax
  __int8 v9; // cl
  __int64 v10; // rax
  __int8 v11; // cl
  __m128i si128; // [rsp+0h] [rbp-28h] BYREF
  _BYTE v14[7]; // [rsp+10h] [rbp-18h] BYREF
  char v15; // [rsp+17h] [rbp-11h] BYREF

  v0 = 0;
  qword_2CAF1B0 = 0x1000002000001LL;
  qword_2CAF1A0 = 0x8800824922LL;
  qword_2CAF1B8 = 0x80000000LL;
  qword_2CAF1A8 = 2147614720LL;
  qword_2CAF190 = 0x1000000000000LL;
  qword_2CAF158 = 0x80000000LL;
  qword_2CAF198 = 0x8401804920LL;
  qword_2CAF188 = 2147483649LL;
  qword_2CAF170 = 2147483649LL;
  qword_2CAF150 = 0x200000000000LL;
  qword_2CAF160 = 0x100000000LL;
  qword_2CAF140 = 2151677952LL;
  qword_2CAF180 = 16642;
  qword_2CAF178 = 0x1000008000000LL;
  qword_2CAF168 = 1574912;
  qword_2CAF148 = (__int64)&loc_2000000;
  qmemcpy(v14, "2,./01", 6);
  qword_2CAF138 = 0x180E802804923LL;
  v1 = &si128;
  qword_2CAF130 = 0x40080020000LL;
  v2 = &si128;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2386AA0);
  do
  {
    v3 = v2->m128i_i8[0];
    v2 = (__m128i *)((char *)v2 + 1);
    v0 |= 1LL << v3;
  }
  while ( &v14[6] != (_BYTE *)v2 );
  qword_2CAF128 = v0;
  qword_2CAF118 = 0x80200000004LL;
  qword_2CAF110 = 0x6530022000010LL;
  qword_2CAF108 = 0x80200000004LL;
  si128.m128i_i64[1] = _mm_load_si128((const __m128i *)&xmmword_2386AB0).m128i_i64[1];
  qword_2CAF120 = 0x40080020000LL;
  qword_2CAF0F8 = 0x40080020000LL;
  qmemcpy(v14, ")2,./01", sizeof(v14));
  v4 = (1LL << si128.m128i_i8[8])
     | 0x2804923
     | (1LL << si128.m128i_i8[9])
     | (1LL << si128.m128i_i8[10])
     | (1LL << si128.m128i_i8[11])
     | (1LL << si128.m128i_i8[12])
     | (1LL << si128.m128i_i8[13])
     | (1LL << si128.m128i_i8[14]);
  v5 = si128.m128i_i8[15];
  si128 = _mm_load_si128((const __m128i *)&xmmword_2386AC0);
  v6 = v4 | (1LL << v5);
  v7 = 0;
  qword_2CAF100 = v6 | 0x800000000000LL;
  p_si128 = &si128;
  do
  {
    v9 = p_si128->m128i_i8[0];
    p_si128 = (__m128i *)((char *)p_si128 + 1);
    v7 |= 1LL << v9;
  }
  while ( &v15 != (char *)p_si128 );
  *(_DWORD *)v14 = 825241132;
  qword_2CAF0E0 = 0x80200000004LL;
  qword_2CAF0D8 = 0x2480022000008LL;
  qword_2CAF0D0 = 0x1000000000LL;
  qword_2CAF0C8 = 0x1038812804923LL;
  qword_2CAF0F0 = v7;
  qword_2CAF0E8 = 0x40080020000LL;
  qword_2CAF0C0 = 0x40080020000LL;
  v10 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2386AD0);
  do
  {
    v11 = v1->m128i_i8[0];
    v1 = (__m128i *)((char *)v1 + 1);
    v10 |= 1LL << v11;
  }
  while ( &v14[4] != (_BYTE *)v1 );
  qword_2CAED28 = 0;
  qword_2CAF0B8 = v10;
  qword_2CAED30 = qword_2CAF1B8;
  qword_2CAF080 = 0x1000102000000LL;
  qword_2CAED38 = 0;
  qword_2CAF070 = 0x40040200000LL;
  qword_2CAED40 = 0;
  qword_2CAF0B0 = 0x40080020000LL;
  qword_2CAED50 = 0;
  qword_2CAF0A8 = 0x80200000004LL;
  qword_2CAED58 = 0;
  qword_2CAF0A0 = 2185494528LL;
  qword_2CAED60 = 0;
  qword_2CAF098 = (__int64)"for %0 selected an explicit %select{constructor|deduction guide}1 for copy-list-initialization";
  qword_2CAED68 = 0;
  qword_2CAF090 = (__int64)&loc_2000000;
  qword_2CAF088 = 2151677952LL;
  qword_2CAF078 = 2147483649LL;
  qword_2CAF068 = 2147483649LL;
  byte_2CAED20 = 12;
  byte_2CAED48 = 8;
  byte_2CAED70 = 3;
  qword_2CAED78 = qword_2CAF1B0;
  byte_2CAED98 = 13;
  qword_2CAED80 = qword_2CAF1A8;
  byte_2CAEDC0 = 4;
  qword_2CAED88 = 0;
  byte_2CAEDE8 = 5;
  qword_2CAED90 = qword_2CAF1A0;
  qword_2CAEDA0 = qword_2CAF198;
  qword_2CAEDA8 = 0;
  qword_2CAEDB0 = 0;
  qword_2CAEDB8 = 0;
  qword_2CAEDC8 = qword_2CAF190;
  qword_2CAEDD0 = qword_2CAF188;
  qword_2CAEDD8 = 0;
  qword_2CAEDE0 = qword_2CAF180;
  qword_2CAEDF0 = qword_2CAF178;
  qword_2CAEDF8 = qword_2CAF170;
  qword_2CAEE00 = 0;
  qword_2CAEE08 = qword_2CAF168;
  byte_2CAEE10 = 6;
  qword_2CAEE18 = qword_2CAF160;
  byte_2CAEE38 = 14;
  qword_2CAEE20 = qword_2CAF158;
  byte_2CAEE60 = 2;
  qword_2CAEE28 = 0;
  byte_2CAEE88 = 11;
  qword_2CAEE30 = qword_2CAF150;
  qword_2CAEE40 = qword_2CAF148;
  qword_2CAEE48 = qword_2CAF140;
  qword_2CAEE50 = 0;
  qword_2CAEE58 = 0;
  qword_2CAEE68 = qword_2CAF138;
  qword_2CAEE70 = qword_2CAF130;
  qword_2CAEE78 = 0;
  qword_2CAEE80 = 0;
  qword_2CAEE90 = qword_2CAF128;
  qword_2CAEE98 = qword_2CAF120;
  byte_2CAEEB0 = 7;
  qword_2CAEEA0 = qword_2CAF118;
  byte_2CAEED8 = 0;
  qword_2CAEEA8 = 0;
  byte_2CAEF00 = 9;
  qword_2CAEEB8 = qword_2CAF110;
  byte_2CAEF28 = 19;
  qword_2CAEEC0 = 0;
  qword_2CAEEC8 = qword_2CAF108;
  qword_2CAEED0 = 0;
  qword_2CAEEE0 = qword_2CAF100;
  qword_2CAEEE8 = qword_2CAF0F8;
  qword_2CAEEF0 = 0;
  qword_2CAEEF8 = 0;
  qword_2CAEF08 = qword_2CAF0F0;
  qword_2CAEF10 = qword_2CAF0E8;
  qword_2CAEF18 = qword_2CAF0E0;
  qword_2CAEF20 = 0;
  qword_2CAEF80 = v10;
  qword_2CAEF30 = qword_2CAF0D8;
  qword_2CAEF98 = 0;
  qword_2CAEF38 = qword_2CAF0D0;
  qword_2CAEFA8 = 0;
  qword_2CAEF40 = 0;
  qword_2CAEFB8 = 0;
  qword_2CAEF48 = 0;
  byte_2CAEF50 = 1;
  qword_2CAEF58 = qword_2CAF0C8;
  byte_2CAEF78 = 10;
  qword_2CAEF60 = qword_2CAF0C0;
  qword_2CAEF88 = 0x40080020000LL;
  qword_2CAEF68 = 0;
  qword_2CAEF90 = 0x80200000004LL;
  qword_2CAEF70 = 0;
  byte_2CAEFA0 = 16;
  qword_2CAEFB0 = 2185494528LL;
  qword_2CAEFC0 = (__int64)"for %0 selected an explicit %select{constructor|deduction guide}1 for copy-list-initialization";
  byte_2CAEFC8 = 15;
  qword_2CAEFD0 = (__int64)&loc_2000000;
  qword_2CAEFD8 = 2151677952LL;
  qword_2CAF020 = 0x1000102000000LL;
  qword_2CAEFE0 = 0;
  qword_2CAF038 = 0x40040200000LL;
  qword_2CAEFE8 = 0;
  byte_2CAEFF0 = 20;
  qword_2CAEFF8 = 0;
  byte_2CAF018 = 17;
  qword_2CAF000 = 0;
  qword_2CAF028 = 2147483649LL;
  qword_2CAF008 = 0;
  qword_2CAF030 = 0;
  qword_2CAF010 = 0;
  byte_2CAF040 = 18;
  qword_2CAF058 = 0;
  qword_2CAF048 = 0;
  qword_2CAF050 = 2147483649LL;
  qword_2CAF060 = 0;
  return 0;
}

