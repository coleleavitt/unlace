/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4597D0
// Address: 0x004597D0

//----- (004597D0) --------------------------------------------------------
__int16 __cdecl sub_4597D0(unsigned __int8 a1, char a2, char a3)
{
  return a3 & 0x3F | (((a1 << 6) | a2 & 0x3F) << 6);
}
