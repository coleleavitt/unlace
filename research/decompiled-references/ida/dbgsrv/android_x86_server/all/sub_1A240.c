/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A240
// Address: 0x0001A240

//----- (0001A240) --------------------------------------------------------
int __cdecl sub_1A240(int a1, int a2)
{
  FILE *v2; // eax
  FILE *v3; // esi
  const char *v4; // eax
  char *v5; // eax
  unsigned int v6; // eax
  int v7; // edi
  int v9; // [esp+14h] [ebp-1038h]
  const char *v10; // [esp+14h] [ebp-1038h]
  int v11; // [esp+24h] [ebp-1028h] BYREF
  int v12; // [esp+28h] [ebp-1024h] BYREF
  unsigned int v13; // [esp+2Ch] [ebp-1020h]
  int v14; // [esp+30h] [ebp-101Ch]
  int v15[1029]; // [esp+38h] [ebp-1014h] BYREF

  v15[1024] = __readgsdword(0x14u);
  qsnprintf(v15, 4096, "/proc/%u/maps", a2);
  v2 = fopenRT((char *)v15);
  if ( !v2 )
    return 0;
  v3 = v2;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v9 = 0;
  while ( qgetline(&v12, v3) >= 0 )
  {
    if ( v13 >= 2 )
    {
      if ( qsscanf(v12, "%a-%a ", (int)&v11) == 2 )
      {
        v4 = byte_EF875;
        if ( v13 )
          v4 = (const char *)v12;
        v10 = v4;
        v5 = strchr(v4, 45);
        if ( v5 )
        {
          v6 = v5 - v10;
          if ( v6 != -1 && v6 >= 9 )
          {
            v7 = 8;
            goto LABEL_14;
          }
        }
      }
      v9 = 4;
    }
  }
  v7 = v9;
LABEL_14:
  qfclose(v3);
  if ( v12 )
  {
    v13 = 0;
    qfree((void *)v12);
    v12 = 0;
    v14 = 0;
  }
  return v7;
}
