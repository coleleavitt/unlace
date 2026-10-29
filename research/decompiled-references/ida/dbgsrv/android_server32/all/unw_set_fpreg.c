/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unw_set_fpreg
// Address: 0x00099994

//----- (00099994) --------------------------------------------------------
int __fastcall unw_set_fpreg(int a1, int a2, int a3, int a4)
{
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1) )
    return -6542;
  (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)a1 + 28))(a1, a2, a3, a4);
  return 0;
}
