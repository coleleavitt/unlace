/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C0B8
// Address: 0x0002C0B8

//----- (0002C0B8) --------------------------------------------------------
int __fastcall sub_2C0B8(int a1, int a2)
{
  if ( (unsigned int)(a2 - 1) > 0x18 )
    sub_22FC8();
  return *(_DWORD *)(a1 + 4 * a2 + 28);
}
