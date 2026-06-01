/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5AB4C
// Address: 0x0005AB4C

//----- (0005AB4C) --------------------------------------------------------
int __fastcall sub_5AB4C(int a1)
{
  int result; // r0

  result = (unsigned __int8)byte_DE440;
  if ( byte_DE440 )
  {
    result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 244) + 252))(*(_DWORD *)(a1 + 244));
    if ( !result )
      return sub_5AB84((_BYTE *)(a1 + 100), "Error preparing debugger server to handle a broken connection\n");
  }
  return result;
}
// DE440: using guessed type char byte_DE440;
