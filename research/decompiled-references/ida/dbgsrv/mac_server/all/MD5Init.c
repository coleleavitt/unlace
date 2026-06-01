/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: MD5Init
// Address: 0x000000010007A580

//----- (000000010007A580) ----------------------------------------------------
void __fastcall MD5Init(__int64 a1)
{
  *(_OWORD *)a1 = xmmword_1000A1710;
  *(_QWORD *)(a1 + 16) = 0;
}
// 1000A1710: using guessed type __int128 xmmword_1000A1710;
