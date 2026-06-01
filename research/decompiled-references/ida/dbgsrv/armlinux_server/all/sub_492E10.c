/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_492E10
// Address: 0x0000000000492E10

//----- (0000000000492E10) ----------------------------------------------------
__int64 sub_492E10()
{
  unsigned int v0; // w22
  FILE *v1; // x0
  FILE *v2; // x19
  char v4[3]; // [xsp+38h] [xbp-408h] BYREF
  unsigned __int8 v5; // [xsp+3Bh] [xbp-405h]

  v0 = -1;
  v1 = sub_48DCD0("/proc/stat", (unsigned __int8 *)"r");
  if ( v1 )
  {
    v2 = v1;
    v0 = 0;
    while ( sub_490D08(v4, 1024, v2) )
    {
      while ( (v5 & 0x80) == 0 && (unsigned int)v5 - 48 <= 9 )
      {
        if ( !strncmp(v4, "cpu", 3u) )
          ++v0;
        if ( !sub_490D08(v4, 1024, v2) )
          goto LABEL_9;
      }
    }
LABEL_9:
    sub_4906A0(v2);
  }
  return v0;
}
