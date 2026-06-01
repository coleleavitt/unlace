/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47246A
// Address: 0x0047246A

//----- (0047246A) --------------------------------------------------------
int sub_47246A()
{
  int v0; // edx
  _DWORD v2[3]; // [esp+0h] [ebp-10h] BYREF
  char v3; // [esp+Ch] [ebp-4h]

  sub_467FF8((int)v2, nullptr);
  v0 = 65001;
  if ( *(_DWORD *)(v2[1] + 8) != 65001 )
    v0 = sub_478EA4() == 0;
  if ( v3 )
    *(_DWORD *)(v2[0] + 848) &= ~2u;
  return v0;
}
