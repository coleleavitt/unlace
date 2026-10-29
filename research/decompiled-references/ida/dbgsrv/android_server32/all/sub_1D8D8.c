/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1D8D8
// Address: 0x0001D8D8

//----- (0001D8D8) --------------------------------------------------------
int __fastcall sub_1D8D8(int a1)
{
  const char *v1; // r0
  _DWORD *v2; // r5
  int v3; // r2
  struct dirent *v4; // r0
  unsigned int v5; // r0
  int v6; // r4
  _DWORD *v7; // r1
  _DWORD *v8; // r0
  int v9; // r2
  _DWORD *v10; // r3
  int v12; // [sp+8h] [bp-24h]
  _DWORD *v13; // [sp+Ch] [bp-20h]
  int v14; // [sp+10h] [bp-1Ch]
  DIR *dirp; // [sp+14h] [bp-18h]
  char *v17; // [sp+1Ch] [bp-10h] BYREF
  int v18; // [sp+20h] [bp-Ch]
  int v19; // [sp+24h] [bp-8h]
  int v20; // [sp+28h] [bp-4h]

  v18 = 0;
  v17 = nullptr;
  v19 = 0;
  v13 = (_DWORD *)(a1 + 968);
  sub_1DA58((int)&v17, "/proc/%d/task", *(_DWORD *)(a1 + 968));
  if ( v18 )
    v1 = v17;
  else
    v1 = &byte_B3CBE;
  dirp = opendir(v1);
  if ( dirp )
  {
    v2 = (_DWORD *)(a1 + 916);
    v3 = 0;
    do
    {
      v14 = v3;
      v12 = 0;
      while ( 1 )
      {
        v4 = readdir(dirp);
        if ( !v4 )
          break;
        v5 = strtoul(&v4->d_name[8], nullptr, 10);
        if ( v5 )
        {
          v6 = v5;
          sub_64B30(a1, "DBG: %d found %s thread\n");
          v7 = (_DWORD *)*v2;
          if ( !*v2 )
            goto LABEL_18;
          v8 = (_DWORD *)(a1 + 916);
          do
          {
            v9 = v7[4];
            if ( v9 >= v6 )
              v8 = v7;
            v10 = v7 + 1;
            if ( v9 >= v6 )
              v10 = v7;
            v7 = (_DWORD *)*v10;
          }
          while ( *v10 );
          if ( v8 == v2 || v8[4] > v6 )
          {
LABEL_18:
            if ( *v13 != v6 )
              sub_1CD58(a1, v6, 0);
            if ( sub_1C9F8(a1, v6, -1) )
            {
              v12 = 1;
              sub_64B30(a1, "DBG: %d collected %s thread\n");
            }
          }
        }
      }
      rewinddir(dirp);
      v3 = 0;
      if ( !(v12 << 31) )
        v3 = v14 + 1;
    }
    while ( v3 < 2 );
    closedir(dirp);
  }
  else
  {
    sub_1BBA0((int)"Could not open /proc/%d/task", *v13);
  }
  if ( v17 )
  {
    v18 = 0;
    qfree(v17);
    v19 = 0;
    v17 = nullptr;
  }
  return _stack_chk_guard - v20;
}
// B3CBE: using guessed type char byte_B3CBE;
