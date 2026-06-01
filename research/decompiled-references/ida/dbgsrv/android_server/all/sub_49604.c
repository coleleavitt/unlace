/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49604
// Address: 0x0000000000049604

//----- (0000000000049604) ----------------------------------------------------
bool __fastcall sub_49604(__int64 a1, int a2)
{
  const char *v2; // x20
  _QWORD *v5; // x20
  int v6; // w21

  v2 = (const char *)(a1 + 8);
  if ( !qfileexist((const char *)(a1 + 8)) )
    return 0;
  if ( a2 != 1 )
    return 1;
  v5 = open_linput(v2, 0);
  v6 = calc_file_crc32((__int64)v5);
  close_linput(v5);
  return *(_DWORD *)(a1 + 1128) == v6;
}
