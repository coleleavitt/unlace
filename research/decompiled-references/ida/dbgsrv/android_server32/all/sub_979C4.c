/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_979C4
// Address: 0x000979C4

//----- (000979C4) --------------------------------------------------------
__int64 __fastcall sub_979C4(int a1, int a2)
{
  unsigned __int8 *v3; // r0

  v3 = *(unsigned __int8 **)(a1 + 8);
  if ( v3 )
    sub_923F8(v3, a2);
  sub_9241E(a2, 123);
  sub_96CC0((_DWORD *)(a1 + 12), a2);
  return sub_9241E(a2, 125);
}
