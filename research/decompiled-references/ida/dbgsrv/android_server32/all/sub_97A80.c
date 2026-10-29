/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97A80
// Address: 0x00097A80

//----- (00097A80) --------------------------------------------------------
int __fastcall sub_97A80(int a1, int a2)
{
  int result; // r0

  if ( *(_BYTE *)(a1 + 28) )
    sub_93B8C(a2, "::operator ", "");
  sub_93B8C(a2, "new", "");
  if ( *(_BYTE *)(a1 + 29) )
    sub_93B8C(a2, "[]", "");
  sub_9241E(a2, 32);
  if ( *(_DWORD *)(a1 + 12) )
  {
    sub_93B8C(a2, "(", "");
    sub_96CC0((_DWORD *)(a1 + 8), a2);
    sub_93B8C(a2, ")", "");
  }
  sub_923F8(*(unsigned __int8 **)(a1 + 16), a2);
  result = *(_DWORD *)(a1 + 24);
  if ( result )
  {
    sub_93B8C(a2, "(", "");
    sub_96CC0((_DWORD *)(a1 + 20), a2);
    return sub_93B8C(a2, ")", "");
  }
  return result;
}
