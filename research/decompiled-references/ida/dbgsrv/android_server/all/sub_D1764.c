/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D1764
// Address: 0x00000000000D1764

//----- (00000000000D1764) ----------------------------------------------------
__int64 __fastcall sub_D1764(const char *a1, const char *a2, unsigned int a3)
{
  int v4; // w8
  int v5; // t1
  char v6; // w10
  int v7; // t1
  unsigned int v8; // w12
  char v9; // w13
  unsigned __int8 v10; // w9
  unsigned __int8 v11; // w8

  if ( a3 < 2 )
    return strcmp(a1, a2);
  while ( 1 )
  {
    v5 = *(unsigned __int8 *)a1++;
    v4 = v5;
    v7 = *(unsigned __int8 *)a2++;
    v6 = v7;
    v8 = v7 - 97;
    v9 = v7 - 32;
    v10 = (unsigned int)(v4 - 97) >= 0x1A ? v4 : v4 - 32;
    v11 = v8 >= 0x1A ? v6 : v9;
    if ( !v10 )
      break;
    if ( !v11 )
      return 1;
    if ( v10 < (unsigned int)v11 )
      return 0xFFFFFFFFLL;
    if ( v10 > (unsigned int)v11 )
      return 1;
  }
  if ( v11 )
    return 0xFFFFFFFFLL;
  else
    return 0;
}
