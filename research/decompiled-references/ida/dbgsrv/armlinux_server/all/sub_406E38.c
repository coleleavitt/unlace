/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_406E38
// Address: 0x0000000000406E38

//----- (0000000000406E38) ----------------------------------------------------
bool sub_406E38()
{
  _BOOL4 v0; // w20
  __pid_t v1; // w0
  FILE *v2; // x0
  FILE *v3; // x21
  int v4; // w20
  __int64 v6; // [xsp+48h] [xbp-408h] BYREF
  __int16 v7; // [xsp+50h] [xbp-400h]
  char v8[1014]; // [xsp+52h] [xbp-3FEh] BYREF

  v0 = 0;
  v1 = getpid();
  sub_49B748((const char *)&v6, 0x400u, "/proc/%d/status", v1);
  v2 = fopen((const char *)&v6, "r");
  if ( v2 )
  {
    v3 = v2;
    v4 = 16;
    do
    {
      if ( !fgets((char *)&v6, 1024, v3) )
        break;
      if ( v6 == 0x6950726563617254LL && v7 == 14948 )
      {
        v0 = strtol(v8, nullptr, 10) != 0;
        goto LABEL_8;
      }
      --v4;
    }
    while ( v4 );
    v0 = 0;
LABEL_8:
    fclose(v3);
  }
  return v0;
}
