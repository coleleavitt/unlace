/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809D6B0
// Address: 0x0809D6B0

//----- (0809D6B0) --------------------------------------------------------
int __cdecl sub_809D6B0(int a1, int a2, _DWORD *a3, int a4)
{
  int v4; // ecx
  int v5; // eax

  v5 = a3[4] & 0xFFFFFFF;
  if ( v5 != 5 )
  {
    v4 = 0;
    if ( v5 != 7 )
      return v4;
    v4 = 1;
    if ( a3[7] == a4 )
      return v4;
  }
  LOBYTE(v4) = a3[2] == a4;
  return v4;
}
// 809D6E8: variable 'v4' is possibly undefined
