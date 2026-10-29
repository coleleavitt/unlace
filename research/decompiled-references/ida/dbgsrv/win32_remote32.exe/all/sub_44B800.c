/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B800
// Address: 0x0044B800

//----- (0044B800) --------------------------------------------------------
int __cdecl sub_44B800(int a1, _BYTE *a2, int a3, int a4)
{
  if ( !a2 || a2[36] )
    return sub_44D410(a1, a3, a4);
  else
    return (*(int (__stdcall **)(int, int, int))(*(_DWORD *)a2 + 12))(a1, a3, a4);
}
// 44D410: using guessed type _DWORD __cdecl sub_44D410(_DWORD, _DWORD, _DWORD);
