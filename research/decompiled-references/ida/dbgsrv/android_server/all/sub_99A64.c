/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99A64
// Address: 0x0000000000099A64

//----- (0000000000099A64) ----------------------------------------------------
_QWORD *__fastcall sub_99A64(__int64 a1, int a2)
{
  const char *v3; // x0
  _QWORD *result; // x0
  void *v5; // x20
  int v6; // w21

  if ( !a2 )
    return (_QWORD *)(&dword_0 + 1);
  if ( *(_QWORD *)(a1 + 488) )
    v3 = *(const char **)(a1 + 480);
  else
    v3 = &byte_F154B;
  result = open_linput(v3, 0);
  if ( result )
  {
    v5 = result;
    v6 = calc_file_crc32((__int64)result);
    close_linput(v5);
    return (_QWORD *)(v6 == a2);
  }
  return result;
}
// 0: using guessed type int dword_0;
// F154B: using guessed type char byte_F154B;
