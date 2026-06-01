/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58218
// Address: 0x00058218

//----- (00058218) --------------------------------------------------------
int __fastcall sub_58218(int a1)
{
  int (*v2)(); // r3
  int result; // r0

  v2 = *(int (**)())(**(_DWORD **)(a1 + 244) + 252);
  if ( v2 == sub_14F04 )
    return sub_581D8((_BYTE *)(a1 + 100), "Error preparing debugger server to handle a broken connection\n");
  result = v2();
  if ( !result )
    return sub_581D8((_BYTE *)(a1 + 100), "Error preparing debugger server to handle a broken connection\n");
  return result;
}
