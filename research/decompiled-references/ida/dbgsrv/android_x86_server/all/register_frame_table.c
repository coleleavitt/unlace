/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: register_frame_table
// Address: 0x000DBFA0

//----- (000DBFA0) --------------------------------------------------------
int __cdecl _register_frame_table(int a1)
{
  _DWORD *v1; // eax

  v1 = malloc(0x18u);
  return _register_frame_info_table(a1, v1);
}
