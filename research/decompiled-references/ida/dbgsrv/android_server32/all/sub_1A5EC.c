/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A5EC
// Address: 0x0001A5EC

//----- (0001A5EC) --------------------------------------------------------
int sub_1A5EC()
{
  FILE *v0; // r0
  int v1; // r5
  FILE *v2; // r4
  const char *v3; // r5
  char *v4; // r0
  unsigned int v5; // r1
  char *v7; // [sp+14h] [bp+Ch] BYREF
  unsigned int v8; // [sp+18h] [bp+10h]
  int v9; // [sp+1Ch] [bp+14h]
  char v10[4100]; // [sp+20h] [bp+18h] BYREF

  qsnprintf(v10, 4096, "/proc/%u/maps");
  v0 = fopenRT(v10);
  v1 = 0;
  if ( v0 )
  {
    v2 = v0;
    v1 = 0;
    v8 = 0;
    v7 = nullptr;
    v9 = 0;
    while ( qgetline(&v7, v2) >= 0 )
    {
      if ( v8 >= 2 )
      {
        if ( qsscanf((int)v7, "%a-%a ") == 2 )
        {
          v3 = &byte_B3CBE;
          if ( v8 )
            v3 = v7;
          v4 = strchr(v3, 45);
          v5 = v4 - v3;
          if ( v4 )
          {
            if ( v5 != -1 && v5 >= 9 )
            {
              v1 = 8;
              break;
            }
          }
        }
        v1 = 4;
      }
    }
    qfclose(v2);
    if ( v7 )
    {
      v8 = 0;
      qfree(v7);
      v9 = 0;
      v7 = nullptr;
    }
  }
  return v1;
}
// B3CBE: using guessed type char byte_B3CBE;
