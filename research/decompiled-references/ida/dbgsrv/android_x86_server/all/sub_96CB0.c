/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96CB0
// Address: 0x00096CB0

//----- (00096CB0) --------------------------------------------------------
int __cdecl sub_96CB0(int a1, int a2)
{
  int v2; // ecx
  int result; // eax

  *(_DWORD *)(a1 + 44) = a2;
  result = *(_DWORD *)__errno(v2);
  *(_DWORD *)(a1 + 48) = result;
  return result;
}
// 96CCD: variable 'v2' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
