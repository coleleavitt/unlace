/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478A25
// Address: 0x00478A25

//----- (00478A25) --------------------------------------------------------
int __cdecl sub_478A25(int a1, _DWORD *a2)
{
  int result; // eax
  _DWORD v3[3]; // [esp+0h] [ebp-10h] BYREF
  char v4; // [esp+Ch] [ebp-4h]

  sub_467FF8((int)v3, a2);
  result = sub_469012(*(_DWORD *)v3[1], a1, 0x8000u);
  if ( v4 )
    *(_DWORD *)(v3[0] + 848) &= ~2u;
  return result;
}
