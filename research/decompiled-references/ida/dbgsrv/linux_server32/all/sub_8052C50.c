/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8052C50
// Address: 0x08052C50

//----- (08052C50) --------------------------------------------------------
__int64 *sub_8052C50()
{
  __m128i v1; // xmm0
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0

  xmmword_811DB94 = (__int128)_mm_loadu_si128((const __m128i *)&xmmword_811E3B4);
  v1 = _mm_loadu_si128((const __m128i *)&xmmword_811E3A0);
  dword_811DBA4 = dword_811E3C4;
  xmmword_811DBA8 = (__int128)v1;
  v2 = _mm_loadu_si128((const __m128i *)&xmmword_811E38C);
  dword_811DBB8 = dword_811E3B0;
  xmmword_811DBBC = (__int128)v2;
  v3 = _mm_loadu_si128((const __m128i *)&xmmword_811E378);
  dword_811DBCC = dword_811E39C;
  xmmword_811DBD0 = (__int128)v3;
  v4 = _mm_loadu_si128((const __m128i *)&xmmword_811E364);
  dword_811DBE0 = dword_811E388;
  xmmword_811DBE4 = (__int128)v4;
  v5 = _mm_loadu_si128((const __m128i *)&xmmword_811E350);
  dword_811DBF4 = dword_811E374;
  xmmword_811DBF8 = (__int128)v5;
  v6 = _mm_loadu_si128((const __m128i *)&xmmword_811E33C);
  dword_811DC08 = dword_811E360;
  xmmword_811DC0C = (__int128)v6;
  v7 = _mm_loadu_si128((const __m128i *)&xmmword_811E328);
  dword_811DC1C = dword_811E34C;
  xmmword_811DC20 = (__int128)v7;
  dword_811DC30 = dword_811E338;
  xmmword_811DC34 = (__int128)_mm_loadu_si128((const __m128i *)&xmmword_811E314);
  dword_811DC44 = dword_811E324;
  return &qword_811CFF4;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811DB94: using guessed type __int128 xmmword_811DB94;
// 811DBA4: using guessed type int dword_811DBA4;
// 811DBA8: using guessed type __int128 xmmword_811DBA8;
// 811DBB8: using guessed type int dword_811DBB8;
// 811DBBC: using guessed type __int128 xmmword_811DBBC;
// 811DBCC: using guessed type int dword_811DBCC;
// 811DBD0: using guessed type __int128 xmmword_811DBD0;
// 811DBE0: using guessed type int dword_811DBE0;
// 811DBE4: using guessed type __int128 xmmword_811DBE4;
// 811DBF4: using guessed type int dword_811DBF4;
// 811DBF8: using guessed type __int128 xmmword_811DBF8;
// 811DC08: using guessed type int dword_811DC08;
// 811DC0C: using guessed type __int128 xmmword_811DC0C;
// 811DC1C: using guessed type int dword_811DC1C;
// 811DC20: using guessed type __int128 xmmword_811DC20;
// 811DC30: using guessed type int dword_811DC30;
// 811DC34: using guessed type __int128 xmmword_811DC34;
// 811DC44: using guessed type int dword_811DC44;
// 811E314: using guessed type __int128 xmmword_811E314;
// 811E324: using guessed type int dword_811E324;
// 811E328: using guessed type __int128 xmmword_811E328;
// 811E338: using guessed type int dword_811E338;
// 811E33C: using guessed type __int128 xmmword_811E33C;
// 811E34C: using guessed type int dword_811E34C;
// 811E350: using guessed type __int128 xmmword_811E350;
// 811E360: using guessed type int dword_811E360;
// 811E364: using guessed type __int128 xmmword_811E364;
// 811E374: using guessed type int dword_811E374;
// 811E378: using guessed type __int128 xmmword_811E378;
// 811E388: using guessed type int dword_811E388;
// 811E38C: using guessed type __int128 xmmword_811E38C;
// 811E39C: using guessed type int dword_811E39C;
// 811E3A0: using guessed type __int128 xmmword_811E3A0;
// 811E3B0: using guessed type int dword_811E3B0;
// 811E3B4: using guessed type __int128 xmmword_811E3B4;
// 811E3C4: using guessed type int dword_811E3C4;
