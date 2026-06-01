/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_403A00
// Address: 0x00403A00

//----- (00403A00) --------------------------------------------------------
int __stdcall sub_403A00(int a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  bool v6; // al
  int v7; // ecx

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, _DWORD, int, unsigned int, int))(**(_DWORD **)(a1 + 12) + 4))(
          *(_DWORD *)(a1 + 12),
          a2,
          HIDWORD(a2),
          a5,
          a3,
          a4) )
    return -2147467259;
  if ( !a2 || *(_QWORD *)(a1 + 24) != a2 )
    return 0;
  v6 = sub_4046E0(a5, a3);
  v7 = -2147467259;
  if ( v6 )
    return 0;
  return v7;
}
