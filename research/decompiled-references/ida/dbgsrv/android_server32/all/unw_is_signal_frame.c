/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unw_is_signal_frame
// Address: 0x00099A3E

//----- (00099A3E) --------------------------------------------------------
int __fastcall unw_is_signal_frame(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 44))(a1);
}
