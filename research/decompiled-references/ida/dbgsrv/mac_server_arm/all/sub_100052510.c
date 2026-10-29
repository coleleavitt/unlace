/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100052510
// Address: 0x0000000100052510

//----- (0000000100052510) ----------------------------------------------------
__int64 __fastcall sub_100052510(__int64 a1, int a2)
{
  __int64 result; // x0
  void *v5; // x20
  int v6; // w21

  result = qfileexist((const char *)(a1 + 8));
  if ( (_DWORD)result )
  {
    if ( a2 == 1 )
    {
      v5 = (void *)open_linput((const char *)(a1 + 8), 0);
      v6 = calc_file_crc32((__int64)v5);
      close_linput(v5);
      return *(_DWORD *)(a1 + 1128) == v6;
    }
    else
    {
      return 1;
    }
  }
  return result;
}
