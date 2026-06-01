/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idc_filename
// Address: 0x00074260

//----- (00074260) --------------------------------------------------------
char *__cdecl get_idc_filename(char *a1, int a2, int a3)
{
  int *v3; // eax

  v3 = (int *)off_13B64C();
  return sub_742B0(v3, a1, a2, a3, nullptr, 0);
}
// 13B64C: using guessed type int (*off_13B64C)();
