/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100064824
// Address: 0x0000000100064824

//----- (0000000100064824) ----------------------------------------------------
__int64 __fastcall sub_100064824(char *a1, __int64 a2)
{
  __int64 v4; // x19
  char *v5; // x9
  char v7; // [xsp+7h] [xbp-29h] BYREF

  v4 = 0;
  while ( 1 )
  {
    if ( sub_100062670(a2, (__int64)&v7, 1, 0x2710u) <= 0 )
      return -1;
    v5 = &a1[v4];
    *v5 = v7;
    v5[1] = 0;
    if ( v4 == 1022 )
      break;
    ++v4;
    if ( strstr(a1, "\r\n\r\n") )
      return v4;
  }
  return 1023;
}
