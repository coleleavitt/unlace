/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F01F
// Address: 0x0047F01F

//----- (0047F01F) --------------------------------------------------------
int __cdecl sub_47F01F(unsigned __int16 *a1)
{
  unsigned int v1; // eax

  if ( a1 && (v1 = sub_47EFCF(a1), v1 < 0xE4) )
    return dword_4A8378[2 * v1];
  else
    return 0;
}
// 4A8378: using guessed type int dword_4A8378[];
