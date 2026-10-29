/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A14
// Address: 0x00080A14

//----- (00080A14) --------------------------------------------------------
int __fastcall sub_80A14(int a1, int a2, int a3, int a4, int a5)
{
  if ( a5 == a3 && sub_80E60(a1, a4) )
    return 6;
  else
    return (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 32))(*(_DWORD *)(a1 + 8), a2);
}
