/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_26664
// Address: 0x00026664

//----- (00026664) --------------------------------------------------------
bool __fastcall sub_26664(int a1, int a2)
{
  const char *v4; // r5
  int v5; // r1
  _BOOL4 result; // r0
  int *v7; // r5
  int v8; // r7

  v4 = (const char *)(a1 + 4);
  v5 = qfileexist((const char *)(a1 + 4));
  result = 0;
  if ( v5 )
  {
    result = 1;
    if ( a2 == 1 )
    {
      v7 = open_linput(v4, 0);
      v8 = calc_file_crc32(v7);
      close_linput(v7);
      return *(_DWORD *)(a1 + 1076) == v8;
    }
  }
  return result;
}
