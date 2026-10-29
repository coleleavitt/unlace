/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469EE1
// Address: 0x00469EE1

//----- (00469EE1) --------------------------------------------------------
int __stdcall sub_469EE1(char a1, char a2)
{
  int v2; // ecx

  if ( (unsigned __int8)(a1 - 32) > 0x5Au )
    LOBYTE(v2) = 0;
  else
    v2 = dword_4A4FBC[2 * ((a1 - 32) & 0x7F)];
  return dword_4A4FB8[2 * ((a2 + 8 * (_BYTE)v2) & 0x7F)];
}
// 4A4FB8: using guessed type int dword_4A4FB8[];
// 4A4FBC: using guessed type int dword_4A4FBC[];
