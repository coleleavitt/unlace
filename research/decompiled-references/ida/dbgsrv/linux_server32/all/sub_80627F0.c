/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80627F0
// Address: 0x080627F0

//----- (080627F0) --------------------------------------------------------
int __cdecl sub_80627F0(int a1, int a2, int a3)
{
  if ( sub_80623D0(a1, -1, a3, (unsigned int *)(a2 + 4), 1, 0) != 1
    || !(*(int (__cdecl **)(int, _DWORD, int, int, int))(*(_DWORD *)a1 + 156))(a1, 0, 4, a3, -1) )
  {
    return 0;
  }
  *(_DWORD *)a2 = a3;
  *(_BYTE *)(a2 + 5) = 1;
  return 1;
}
