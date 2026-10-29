/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4692E4
// Address: 0x004692E4

//----- (004692E4) --------------------------------------------------------
int __cdecl sub_4692E4(int a1)
{
  int v1; // ecx

  if ( dword_4B7A48 )
    return sub_4691AF(a1, nullptr);
  v1 = a1;
  if ( (unsigned int)(a1 - 97) <= 0x19 )
    return a1 - 32;
  return v1;
}
// 4B7A48: using guessed type int dword_4B7A48;
