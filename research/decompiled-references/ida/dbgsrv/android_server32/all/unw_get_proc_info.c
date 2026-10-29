/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unw_get_proc_info
// Address: 0x000999D6

//----- (000999D6) --------------------------------------------------------
int __fastcall unw_get_proc_info(int a1, int a2)
{
  int result; // r0

  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 36))(a1, a2);
  result = 0;
  if ( !*(_DWORD *)(a2 + 4) )
    return -6549;
  return result;
}
