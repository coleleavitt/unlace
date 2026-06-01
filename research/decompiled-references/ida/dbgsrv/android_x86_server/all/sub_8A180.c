/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A180
// Address: 0x0008A180

//----- (0008A180) --------------------------------------------------------
bool __cdecl sub_8A180(int a1, int a2)
{
  char *v2; // eax
  _DWORD *v4; // eax
  void *v5; // esi
  int v6; // edi

  if ( !a2 )
    return 1;
  if ( *(_DWORD *)(a1 + 252) )
    v2 = *(char **)(a1 + 248);
  else
    v2 = byte_EF875;
  v4 = open_linput(v2, 0);
  if ( !v4 )
    return 0;
  v5 = v4;
  v6 = calc_file_crc32((int)v4);
  close_linput(v5);
  return v6 == a2;
}
