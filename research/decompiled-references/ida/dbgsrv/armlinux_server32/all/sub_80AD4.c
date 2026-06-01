/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AD4
// Address: 0x00080AD4

//----- (00080AD4) --------------------------------------------------------
int __fastcall sub_80AD4(int a1, int a2, int a3, int a4, int a5)
{
  if ( a5 == a3 && sub_80FC8(a1, a4) )
    return 6;
  else
    return (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 32))(*(_DWORD *)(a1 + 8), a2);
}
