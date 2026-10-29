/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14CB8
// Address: 0x00014CB8

//----- (00014CB8) --------------------------------------------------------
int sub_14CB8()
{
  __pid_t v0; // r0
  FILE *v1; // r6
  int v2; // r4
  _DWORD v4[2]; // [sp+4h] [bp-408h] BYREF
  __int16 v5; // [sp+Ch] [bp-400h]
  char nptr[1014]; // [sp+Eh] [bp-3FEh] BYREF

  v0 = getpid();
  sub_7EA4C(v4, 1024, "/proc/%d/status", v0);
  v1 = fopen((const char *)v4, "r");
  v2 = (int)v1;
  if ( v1 )
  {
    v2 = 16;
    while ( fgets((char *)v4, 1024, v1) )
    {
      if ( v4[0] == 1667330644 && v4[1] == 1766879845 && v5 == 14948 )
      {
        v2 = strtol(nptr, nullptr, 10) != 0;
        goto LABEL_9;
      }
      if ( !--v2 )
        goto LABEL_9;
    }
    v2 = 0;
LABEL_9:
    fclose(v1);
  }
  return v2;
}
