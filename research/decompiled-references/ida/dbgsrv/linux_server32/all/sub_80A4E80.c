/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A4E80
// Address: 0x080A4E80

//----- (080A4E80) --------------------------------------------------------
_BOOL4 __cdecl sub_80A4E80(int a1)
{
  int v1; // edx
  _BOOL4 result; // eax

  v1 = sub_80A4C20();
  result = 0;
  if ( v1 )
    return (*(int (__cdecl **)(int, int, _DWORD))(*(_DWORD *)v1 + 244))(v1, a1, 0) >= 0;
  return result;
}
