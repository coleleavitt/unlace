/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unw_regname
// Address: 0x00099A38

//----- (00099A38) --------------------------------------------------------
int __fastcall unw_regname(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 56))(a1);
}
