/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C0BC
// Address: 0x0046C0BC

//----- (0046C0BC) --------------------------------------------------------
bool __cdecl sub_46C0BC(__int16 a1)
{
  return (a1 & 3) == 2 && (a1 & 0xC0) != 0 || (a1 & 0x800) != 0;
}
