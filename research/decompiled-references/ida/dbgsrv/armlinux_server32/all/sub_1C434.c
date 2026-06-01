/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C434
// Address: 0x0001C434

//----- (0001C434) --------------------------------------------------------
void __fastcall sub_1C434(int a1)
{
  int v2; // r2
  char *v3; // r0
  DIR *v4; // r6
  char *v5; // r0
  int i; // r9
  int v7; // r10
  const char *d_name; // r4
  unsigned int v9; // r5
  struct dirent *v10; // r0
  int v11; // r5
  char *name; // [sp+8h] [bp-14h] BYREF
  int v13; // [sp+Ch] [bp-10h]
  int v14; // [sp+10h] [bp-Ch]

  v2 = *(_DWORD *)(a1 + 1068);
  name = nullptr;
  v13 = 0;
  v14 = 0;
  sub_188E0((int)&name, "/proc/%d/task", v2);
  if ( v13 )
    v3 = name;
  else
    v3 = (char *)&dword_8DB98;
  v4 = opendir(v3);
  if ( !v4 )
  {
    sub_171B0((int)"Could not open /proc/%d/task", *(_DWORD *)(a1 + 1068));
    v5 = name;
    if ( !name )
      return;
    goto LABEL_5;
  }
  for ( i = 0; ; i = 1 )
  {
    while ( 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        v10 = readdir(v4);
        if ( !v10 )
          break;
        d_name = v10->d_name;
        v9 = strtoul(v10->d_name, nullptr, 10);
        if ( v9 )
        {
          sub_53ED4(a1, "DBG: %d found %s thread\n", i, d_name);
          v11 = sub_1C3D0(a1, v9);
          if ( v11 )
          {
            v7 = v11;
            sub_53ED4(a1, "DBG: %d collected %s thread\n", i, d_name);
          }
        }
      }
      if ( !v7 )
        break;
      i = 0;
      rewinddir(v4);
    }
    rewinddir(v4);
    if ( i )
      break;
  }
  closedir(v4);
  v5 = name;
  if ( name )
  {
LABEL_5:
    v13 = 0;
    sub_77F70(v5);
  }
}
// 8DB98: using guessed type int dword_8DB98;
