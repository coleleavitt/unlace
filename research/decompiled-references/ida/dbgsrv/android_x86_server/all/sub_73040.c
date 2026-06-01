/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73040
// Address: 0x00073040

//----- (00073040) --------------------------------------------------------
_BOOL4 __cdecl sub_73040(int a1, int a2)
{
  _BOOL4 result; // eax

  result = *(_QWORD *)(a2 + 4) == *(_QWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = result;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)a1 = 0;
  return result;
}
