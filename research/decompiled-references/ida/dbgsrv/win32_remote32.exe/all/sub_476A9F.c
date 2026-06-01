/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476A9F
// Address: 0x00476A9F

//----- (00476A9F) --------------------------------------------------------
LPVOID __cdecl sub_476A9F(unsigned int a1, unsigned int a2, unsigned int a3)
{
  LPVOID v3; // esi

  if ( a1 >= 0x3FFFFFFF || a2 >= 0xFFFFFFFF / a3 || ~(4 * a1) <= a3 * a2 )
    return nullptr;
  v3 = sub_4791B9(4 * a1 + a3 * a2, 1u);
  sub_479216(nullptr);
  return v3;
}
