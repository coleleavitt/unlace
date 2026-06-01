/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5839C
// Address: 0x0005839C

//----- (0005839C) --------------------------------------------------------
int __fastcall sub_5839C(int a1)
{
  int (*v2)(); // r3
  int result; // r0

  v2 = *(int (**)())(**(_DWORD **)(a1 + 244) + 252);
  if ( v2 == sub_150AC )
    return sub_5835C((_BYTE *)(a1 + 100), "Error preparing debugger server to handle a broken connection\n");
  result = v2();
  if ( !result )
    return sub_5835C((_BYTE *)(a1 + 100), "Error preparing debugger server to handle a broken connection\n");
  return result;
}
