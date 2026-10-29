/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unw_get_reg
// Address: 0x000998E0

//----- (000998E0) --------------------------------------------------------
int __fastcall unw_get_reg(int a1, int a2, _DWORD *a3)
{
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1) )
    return -6542;
  *a3 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 12))(a1, a2);
  return 0;
}
