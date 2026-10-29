/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91D78
// Address: 0x00091D78

//----- (00091D78) --------------------------------------------------------
int __fastcall sub_91D78(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _BOOL4 v10; // r0

  v10 = sub_91274(a1, *(_DWORD *)(a2 + 8), a6);
  if ( v10 )
    return sub_918E4(v10, a2, a3, a4, a5);
  else
    return (*(int (__fastcall **)(_DWORD, int, int, int))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8), a2, a3, a4);
}
