/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unw_get_fpreg
// Address: 0x0009995C

//----- (0009995C) --------------------------------------------------------
int __fastcall unw_get_fpreg(int a1, int a2, _QWORD *a3)
{
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1) )
    return -6542;
  *a3 = ((__int64 (__fastcall *)(int, int))*(_DWORD *)(*(_DWORD *)a1 + 24))(a1, a2);
  return 0;
}
