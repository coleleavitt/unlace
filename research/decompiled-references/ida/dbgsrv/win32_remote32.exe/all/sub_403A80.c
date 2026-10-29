/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_403A80
// Address: 0x00403A80

//----- (00403A80) --------------------------------------------------------
int __stdcall sub_403A80(int a1, int a2, unsigned int a3, int a4, int a5)
{
  bool v6; // al
  int v7; // ecx

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int, _DWORD, int, unsigned int, int))(**(_DWORD **)(a1 + 16) + 4))(
          *(_DWORD *)(a1 + 16),
          a2 + *(_DWORD *)(a1 + 12),
          0,
          a5,
          a3,
          a4) )
    return -2147467259;
  if ( a2 != *(_DWORD *)(a1 + 36) )
    return 0;
  v6 = sub_4046E0(a5, a3);
  v7 = -2147467259;
  if ( v6 )
    return 0;
  return v7;
}
