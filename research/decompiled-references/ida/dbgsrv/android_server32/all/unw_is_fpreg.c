/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unw_is_fpreg
// Address: 0x00099A2C

//----- (00099A2C) --------------------------------------------------------
int __fastcall unw_is_fpreg(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
}
