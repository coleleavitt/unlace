/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469F18
// Address: 0x00469F18

//----- (00469F18) --------------------------------------------------------
int __stdcall sub_469F18(char a1, char a2)
{
  int v2; // eax

  if ( (unsigned __int8)(a1 - 32) > 0x5Au )
    LOBYTE(v2) = 0;
  else
    v2 = dword_4A53BC[2 * ((a1 - 32) & 0x7F)];
  return dword_4A53B8[2 * ((a2 + 9 * (_BYTE)v2) & 0x7F)];
}
// 4A53B8: using guessed type int dword_4A53B8[];
// 4A53BC: using guessed type int dword_4A53BC[];
