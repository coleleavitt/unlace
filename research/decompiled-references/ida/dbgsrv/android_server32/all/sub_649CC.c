/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_649CC
// Address: 0x000649CC

//----- (000649CC) --------------------------------------------------------
bool __fastcall sub_649CC(int a1, int a2)
{
  int v2; // r5
  const char *v4; // r0
  int *v5; // r0
  int *v6; // r6
  int v7; // r5

  v2 = 1;
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 252) )
      v4 = *(const char **)(a1 + 248);
    else
      v4 = &byte_B3CBE;
    v2 = 0;
    v5 = open_linput(v4, 0);
    if ( v5 )
    {
      v6 = v5;
      v7 = calc_file_crc32(v5);
      close_linput(v6);
      return v7 == a2;
    }
  }
  return v2;
}
// B3CBE: using guessed type char byte_B3CBE;
