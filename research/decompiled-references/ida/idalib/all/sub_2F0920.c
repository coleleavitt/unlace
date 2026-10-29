__int64 sub_2F0920()
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
  qword_2CD90D0 = 0x1000002000001LL;
  qword_2CD90C0 = 0x8800824922LL;
  qword_2CD90D8 = 0x80000000LL;
  qword_2CD90C8 = 2147614720LL;
  qword_2CD90B0 = 0x1000000000000LL;
  qword_2CD9078 = 0x80000000LL;
  qword_2CD90B8 = 0x8401804920LL;
  qword_2CD90A8 = 2147483649LL;
  qword_2CD9090 = 2147483649LL;
  qword_2CD9070 = 0x200000000000LL;
  qword_2CD9080 = 0x100000000LL;
  qword_2CD9060 = 2151677952LL;
  qword_2CD90A0 = 16642;
  qword_2CD9098 = 0x1000008000000LL;
  qword_2CD9088 = (__int64)&stru_180800;
  qword_2CD9068 = 0x2000000;
  qmemcpy(v14, "2,./01", 6);
  qword_2CD9058 = 0x180E802804923LL;
  v1 = &si128;
  qword_2CD9050 = 0x40080020000LL;
  v2 = &si128;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AAAD0);
  do
  {
    v3 = v2->m128i_i8[0];
    v2 = (__m128i *)((char *)v2 + 1);
    v0 |= 1LL << v3;
  }
  while ( &v14[6] != (_BYTE *)v2 );
  qword_2CD9048 = v0;
  qword_2CD9038 = 0x80200000004LL;
  qword_2CD9030 = 0x6530022000010LL;
  qword_2CD9028 = 0x80200000004LL;
  si128.m128i_i64[1] = _mm_load_si128((const __m128i *)&xmmword_23AAAE0).m128i_i64[1];
  qword_2CD9040 = 0x40080020000LL;
  qword_2CD9018 = 0x40080020000LL;
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
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AAAF0);
  v6 = v4 | (1LL << v5);
  v7 = 0;
  qword_2CD9020 = v6 | 0x800000000000LL;
  p_si128 = &si128;
  do
  {
    v9 = p_si128->m128i_i8[0];
    p_si128 = (__m128i *)((char *)p_si128 + 1);
    v7 |= 1LL << v9;
  }
  while ( &v15 != (char *)p_si128 );
  *(_DWORD *)v14 = 825241132;
  qword_2CD9000 = 0x80200000004LL;
  qword_2CD8FF8 = 0x2480022000008LL;
  qword_2CD8FF0 = 0x1000000000LL;
  qword_2CD8FE8 = 0x1038812804923LL;
  qword_2CD9010 = v7;
  qword_2CD9008 = 0x40080020000LL;
  qword_2CD8FE0 = 0x40080020000LL;
  v10 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AAB00);
  do
  {
    v11 = v1->m128i_i8[0];
    v1 = (__m128i *)((char *)v1 + 1);
    v10 |= 1LL << v11;
  }
  while ( &v14[4] != (_BYTE *)v1 );
  qword_2CD8C48 = 0;
  qword_2CD8FD8 = v10;
  qword_2CD8C50 = qword_2CD90D8;
  qword_2CD8FA0 = 0x1000102000000LL;
  qword_2CD8C58 = 0;
  qword_2CD8F90 = 0x40040200000LL;
  qword_2CD8C60 = 0;
  qword_2CD8FD0 = 0x40080020000LL;
  qword_2CD8C70 = 0;
  qword_2CD8FC8 = 0x80200000004LL;
  qword_2CD8C78 = 0;
  qword_2CD8FC0 = 2185494528LL;
  qword_2CD8C80 = 0;
  qword_2CD8FB8 = (__int64)"raw string literal delimiter is incompatible with standards before C++2c";
  qword_2CD8C88 = 0;
  qword_2CD8FB0 = 0x2000000;
  qword_2CD8FA8 = 2151677952LL;
  qword_2CD8F98 = 2147483649LL;
  qword_2CD8F88 = 2147483649LL;
  byte_2CD8C40 = 12;
  byte_2CD8C68 = 8;
  byte_2CD8C90 = 3;
  qword_2CD8C98 = qword_2CD90D0;
  byte_2CD8CB8 = 13;
  qword_2CD8CA0 = qword_2CD90C8;
  byte_2CD8CE0 = 4;
  qword_2CD8CA8 = 0;
  byte_2CD8D08 = 5;
  qword_2CD8CB0 = qword_2CD90C0;
  qword_2CD8CC0 = qword_2CD90B8;
  qword_2CD8CC8 = 0;
  qword_2CD8CD0 = 0;
  qword_2CD8CD8 = 0;
  qword_2CD8CE8 = qword_2CD90B0;
  qword_2CD8CF0 = qword_2CD90A8;
  qword_2CD8CF8 = 0;
  qword_2CD8D00 = qword_2CD90A0;
  qword_2CD8D10 = qword_2CD9098;
  qword_2CD8D18 = qword_2CD9090;
  qword_2CD8D20 = 0;
  qword_2CD8D28 = qword_2CD9088;
  byte_2CD8D30 = 6;
  qword_2CD8D38 = qword_2CD9080;
  byte_2CD8D58 = 14;
  qword_2CD8D40 = qword_2CD9078;
  byte_2CD8D80 = 2;
  qword_2CD8D48 = 0;
  byte_2CD8DA8 = 11;
  qword_2CD8D50 = qword_2CD9070;
  qword_2CD8D60 = qword_2CD9068;
  qword_2CD8D68 = qword_2CD9060;
  qword_2CD8D70 = 0;
  qword_2CD8D78 = 0;
  qword_2CD8D88 = qword_2CD9058;
  qword_2CD8D90 = qword_2CD9050;
  qword_2CD8D98 = 0;
  qword_2CD8DA0 = 0;
  qword_2CD8DB0 = qword_2CD9048;
  qword_2CD8DB8 = qword_2CD9040;
  byte_2CD8DD0 = 7;
  qword_2CD8DC0 = qword_2CD9038;
  byte_2CD8DF8 = 0;
  qword_2CD8DC8 = 0;
  byte_2CD8E20 = 9;
  qword_2CD8DD8 = qword_2CD9030;
  byte_2CD8E48 = 19;
  qword_2CD8DE0 = 0;
  qword_2CD8DE8 = qword_2CD9028;
  qword_2CD8DF0 = 0;
  qword_2CD8E00 = qword_2CD9020;
  qword_2CD8E08 = qword_2CD9018;
  qword_2CD8E10 = 0;
  qword_2CD8E18 = 0;
  qword_2CD8E28 = qword_2CD9010;
  qword_2CD8E30 = qword_2CD9008;
  qword_2CD8E38 = qword_2CD9000;
  qword_2CD8E40 = 0;
  qword_2CD8EA0 = v10;
  qword_2CD8E50 = qword_2CD8FF8;
  qword_2CD8EB8 = 0;
  qword_2CD8E58 = qword_2CD8FF0;
  qword_2CD8EC8 = 0;
  qword_2CD8E60 = 0;
  qword_2CD8ED8 = 0;
  qword_2CD8E68 = 0;
  byte_2CD8E70 = 1;
  qword_2CD8E78 = qword_2CD8FE8;
  byte_2CD8E98 = 10;
  qword_2CD8E80 = qword_2CD8FE0;
  qword_2CD8EA8 = 0x40080020000LL;
  qword_2CD8E88 = 0;
  qword_2CD8EB0 = 0x80200000004LL;
  qword_2CD8E90 = 0;
  byte_2CD8EC0 = 16;
  qword_2CD8ED0 = 2185494528LL;
  qword_2CD8EE0 = (__int64)"raw string literal delimiter is incompatible with standards before C++2c";
  byte_2CD8EE8 = 15;
  qword_2CD8EF0 = 0x2000000;
  qword_2CD8EF8 = 2151677952LL;
  qword_2CD8F40 = 0x1000102000000LL;
  qword_2CD8F00 = 0;
  qword_2CD8F58 = 0x40040200000LL;
  qword_2CD8F08 = 0;
  byte_2CD8F10 = 20;
  qword_2CD8F18 = 0;
  byte_2CD8F38 = 17;
  qword_2CD8F20 = 0;
  qword_2CD8F48 = 2147483649LL;
  qword_2CD8F28 = 0;
  qword_2CD8F50 = 0;
  qword_2CD8F30 = 0;
  byte_2CD8F60 = 18;
  qword_2CD8F78 = 0;
  qword_2CD8F68 = 0;
  qword_2CD8F70 = 2147483649LL;
  qword_2CD8F80 = 0;
  return 0;
}
