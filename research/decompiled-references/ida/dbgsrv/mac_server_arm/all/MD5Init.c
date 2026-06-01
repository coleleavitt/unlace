/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: MD5Init
// Address: 0x000000010006CAB8

//----- (000000010006CAB8) ----------------------------------------------------
double __fastcall MD5Init(__int64 a1)
{
  *(_OWORD *)a1 = xmmword_100087510;
  *(_QWORD *)(a1 + 16) = 0;
  return -3.59869635e230;
}
// 100086960: using guessed type __int64[314];
// 100087510: using guessed type __int128 xmmword_100087510;
