/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73A90
// Address: 0x00073A90

//----- (00073A90) --------------------------------------------------------
_BOOL4 __cdecl sub_73A90(int a1, int a2)
{
  _BOOL4 result; // eax

  result = *(_QWORD *)(a1 + 4) != 0 && *(_QWORD *)(a2 + 4) != 0;
  *(_DWORD *)(a1 + 4) = result;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)a1 = 0;
  return result;
}
