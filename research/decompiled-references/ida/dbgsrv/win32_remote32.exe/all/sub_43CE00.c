/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43CE00
// Address: 0x0043CE00

//----- (0043CE00) --------------------------------------------------------
int __cdecl sub_43CE00(int a1, int a2, int a3, int a4)
{
  if ( !a2 || *(_BYTE *)(a2 + 36) )
    return sub_44D410(a1, a3, a4);
  else
    return sub_44B840(a1, a2, a3, a4);
}
// 44D410: using guessed type _DWORD __cdecl sub_44D410(_DWORD, _DWORD, _DWORD);
