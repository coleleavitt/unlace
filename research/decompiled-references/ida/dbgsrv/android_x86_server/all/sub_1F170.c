/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1F170
// Address: 0x0001F170

//----- (0001F170) --------------------------------------------------------
unsigned int __cdecl sub_1F170(int a1)
{
  const char *v1; // eax
  struct dirent *v2; // eax
  char *v3; // edi
  unsigned int v4; // eax
  int v5; // esi
  _DWORD *v6; // ecx
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // ecx
  int v11; // [esp+4h] [ebp-38h]
  DIR *v12; // [esp+8h] [ebp-34h]
  _DWORD *v13; // [esp+Ch] [ebp-30h]
  char v14; // [esp+10h] [ebp-2Ch]
  char *v15; // [esp+18h] [ebp-24h] BYREF
  int v16; // [esp+1Ch] [ebp-20h]
  int v17; // [esp+20h] [ebp-1Ch]
  unsigned int v18; // [esp+28h] [ebp-14h]

  v18 = __readgsdword(0x14u);
  v15 = nullptr;
  v16 = 0;
  v17 = 0;
  sub_1F400((int)&v15, "/proc/%d/task", *(_DWORD *)(a1 + 624));
  if ( v16 )
    v1 = v15;
  else
    v1 = byte_EF875;
  v12 = opendir(v1);
  if ( v12 )
  {
    v13 = (_DWORD *)(a1 + 572);
    v11 = 0;
    do
    {
      v14 = 0;
      while ( 1 )
      {
        v2 = readdir(v12);
        if ( !v2 )
          break;
        v3 = &v2->d_name[8];
        v4 = strtoul(&v2->d_name[8], nullptr, 10);
        if ( v4 )
        {
          v5 = v4;
          sub_8A3F0(a1, "DBG: %d found %s thread\n", v11, v3);
          v6 = (_DWORD *)*v13;
          if ( !*v13 )
            goto LABEL_16;
          v7 = (_DWORD *)(a1 + 572);
          do
          {
            if ( v6[4] >= v5 )
              v7 = v6;
            v6 = (_DWORD *)v6[v6[4] < v5];
          }
          while ( v6 );
          if ( v7 == v13 || v7[4] > v5 )
          {
LABEL_16:
            v8 = a1;
            if ( *(_DWORD *)(a1 + 624) != v5 )
            {
              sub_1E2C0(a1, v5, 0);
              v8 = a1;
            }
            if ( sub_1DE40(v8, v5, -1) )
            {
              v14 = 1;
              sub_8A3F0(a1, "DBG: %d collected %s thread\n", v11, v3);
            }
          }
        }
      }
      rewinddir(v12);
      v9 = v11 + 1;
      if ( v14 )
        v9 = 0;
      v11 = v9;
    }
    while ( v9 < 2 );
    closedir(v12);
  }
  else
  {
    sub_1C900();
  }
  if ( v15 )
  {
    v16 = 0;
    qfree(v15);
    v15 = nullptr;
    v17 = 0;
  }
  return __readgsdword(0x14u);
}
