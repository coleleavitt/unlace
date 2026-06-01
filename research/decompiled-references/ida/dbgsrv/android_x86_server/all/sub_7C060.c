/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C060
// Address: 0x0007C060

//----- (0007C060) --------------------------------------------------------
int *__cdecl sub_7C060(int a1)
{
  int *result; // eax

  result = &dword_13BE2C;
  if ( (_BYTE)dword_13BE2C )
  {
    result = (int *)(*(int (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 244) + 252))(*(_DWORD *)(a1 + 244));
    if ( !(_BYTE)result )
      return (int *)sub_7C0C0((_BYTE *)(a1 + 100), "Error preparing debugger server to handle a broken connection\n");
  }
  return result;
}
// 13BE2C: using guessed type int dword_13BE2C;
