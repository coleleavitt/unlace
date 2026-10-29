/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005CD10
// Address: 0x000000010005CD10

//----- (000000010005CD10) ----------------------------------------------------
_BOOL8 __fastcall sub_10005CD10(__int64 a1, int a2)
{
  bool v2; // cl
  _BOOL8 result; // rax
  _QWORD *v4; // r14
  int v5; // r15d

  v2 = qfileexist((const char *)(a1 + 8));
  result = 0;
  if ( v2 )
  {
    result = 1;
    if ( a2 == 1 )
    {
      v4 = open_linput((const char *)(a1 + 8), 0);
      v5 = calc_file_crc32((__int64)v4);
      close_linput(v4);
      return *(_DWORD *)(a1 + 1128) == v5;
    }
  }
  return result;
}
