/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: register_frame_table
// Address: 0x00000000000F0E74

//----- (00000000000F0E74) ----------------------------------------------------
__int64 *__fastcall _register_frame_table(__int64 a1)
{
  _QWORD *v2; // x0

  v2 = malloc(0x30u);
  return _register_frame_info_table(a1, v2);
}
