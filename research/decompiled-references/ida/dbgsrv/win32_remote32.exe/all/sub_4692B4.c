/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4692B4
// Address: 0x004692B4

//----- (004692B4) --------------------------------------------------------
int __cdecl sub_4692B4(int a1)
{
  int v1; // ecx

  if ( dword_4B7A48 )
    return sub_4690AB(a1, nullptr);
  v1 = a1;
  if ( (unsigned int)(a1 - 65) <= 0x19 )
    return a1 + 32;
  return v1;
}
// 4B7A48: using guessed type int dword_4B7A48;
