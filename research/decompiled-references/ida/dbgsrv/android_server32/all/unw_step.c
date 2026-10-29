/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unw_step
// Address: 0x000999D0

//----- (000999D0) --------------------------------------------------------
int __fastcall unw_step(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
}
