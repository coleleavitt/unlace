/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E044
// Address: 0x0047E044

//----- (0047E044) --------------------------------------------------------
double __cdecl sub_47E044(double a1, __int16 a2)
{
  double v3; // [esp+0h] [ebp-8h]

  v3 = a1;
  HIWORD(v3) = HIWORD(a1) & 0x800F | (16 * (a2 + 1022));
  return v3;
}
