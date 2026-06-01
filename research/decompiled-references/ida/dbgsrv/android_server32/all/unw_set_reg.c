/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unw_set_reg
// Address: 0x00099914

//----- (00099914) --------------------------------------------------------
int __fastcall unw_set_reg(int a1, int a2, int a3)
{
  int v6; // r5

  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1) )
    return -6542;
  (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 16))(a1, a2, a3);
  if ( a2 != -1 )
    return 0;
  v6 = 0;
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 52))(a1, 0);
  return v6;
}
