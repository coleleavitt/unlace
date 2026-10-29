/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100055F34
// Address: 0x0000000100055F34

//----- (0000000100055F34) ----------------------------------------------------
__int64 __fastcall sub_100055F34(__int64 a1, int a2)
{
  const char *v3; // x0
  __int64 result; // x0
  void *v5; // x20
  int v6; // w21

  if ( !a2 )
    return 1;
  if ( *(_QWORD *)(a1 + 488) )
    v3 = *(const char **)(a1 + 480);
  else
    v3 = &byte_100075A30;
  result = open_linput(v3, 0);
  if ( result )
  {
    v5 = (void *)result;
    v6 = calc_file_crc32(result);
    close_linput(v5);
    return v6 == a2;
  }
  return result;
}
// 100075A30: using guessed type char byte_100075A30;
