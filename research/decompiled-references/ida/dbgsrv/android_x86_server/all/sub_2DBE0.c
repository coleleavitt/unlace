/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2DBE0
// Address: 0x0002DBE0

//----- (0002DBE0) --------------------------------------------------------
_BOOL4 __cdecl sub_2DBE0(int a1, int a2)
{
  bool v2; // zf
  _BOOL4 result; // eax
  _DWORD *v4; // esi
  int v5; // [esp+8h] [ebp-14h]

  v2 = !qfileexist((char *)(a1 + 4));
  result = 0;
  if ( !v2 )
  {
    result = 1;
    if ( a2 == 1 )
    {
      v4 = open_linput((char *)(a1 + 4), 0);
      v5 = calc_file_crc32((int)v4);
      close_linput(v4);
      return *(_DWORD *)(a1 + 1076) == v5;
    }
  }
  return result;
}
