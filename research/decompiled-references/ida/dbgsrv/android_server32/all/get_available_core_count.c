/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_available_core_count
// Address: 0x0007F7D0

//----- (0007F7D0) --------------------------------------------------------
int get_available_core_count()
{
  FILE *v0; // r4
  int v1; // r7
  int result; // r0
  int v3; // r0
  int v4; // r1
  char s1[3]; // [sp+10h] [bp-404h] BYREF
  unsigned __int8 v6; // [sp+13h] [bp-401h]

  v0 = qfopen("/proc/stat", "r");
  v1 = 0;
  result = -1;
  if ( v0 )
  {
    if ( qfgets(s1, 1024, v0) )
    {
      v1 = 0;
      do
      {
        if ( (v6 & 0x80u) == 0 && (unsigned int)v6 - 48 <= 9 )
        {
          v3 = strncmp(s1, "cpu", 3u);
          v4 = v1 + 1;
          if ( v3 )
            v4 = v1;
          v1 = v4;
        }
      }
      while ( qfgets(s1, 1024, v0) );
    }
    qfclose(v0);
    return v1;
  }
  return result;
}
