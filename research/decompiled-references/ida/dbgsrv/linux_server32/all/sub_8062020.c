/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8062020
// Address: 0x08062020

//----- (08062020) --------------------------------------------------------
unsigned int __cdecl sub_8062020(int a1)
{
  const char *v1; // eax
  char *d_name; // esi
  unsigned int v3; // eax
  struct dirent *v4; // eax
  unsigned __int8 v5; // al
  unsigned int result; // eax
  int v7; // [esp+4h] [ebp-3Ch]
  unsigned __int8 v8; // [esp+Bh] [ebp-35h]
  int v9; // [esp+10h] [ebp-30h]
  DIR *dirp; // [esp+14h] [ebp-2Ch]
  void *ptr; // [esp+18h] [ebp-28h] BYREF
  int v12; // [esp+1Ch] [ebp-24h]
  int v13; // [esp+20h] [ebp-20h]
  unsigned int v14; // [esp+24h] [ebp-1Ch]

  v14 = __readgsdword(0x14u);
  ptr = nullptr;
  v12 = 0;
  v13 = 0;
  sub_805ED10(&ptr, "/proc/%d/task", *(_DWORD *)(a1 + 724));
  v1 = (const char *)&dword_80DDFD8;
  if ( v12 )
    v1 = (const char *)ptr;
  dirp = opendir(v1);
  v9 = 0;
  if ( dirp )
  {
    do
    {
      while ( 1 )
      {
        v8 = 0;
        while ( 1 )
        {
          v4 = readdir(dirp);
          if ( !v4 )
            break;
          d_name = v4->d_name;
          v3 = strtoul(v4->d_name, nullptr, 10);
          if ( v3 )
          {
            v7 = v3;
            sub_80A03F0(a1, "DBG: %d found %s thread\n");
            v5 = (unsigned __int8)sub_8061F80(a1, v7);
            if ( v5 )
            {
              v8 = v5;
              sub_80A03F0(a1, "DBG: %d collected %s thread\n", v9, d_name);
            }
          }
        }
        if ( !v8 )
          break;
        rewinddir(dirp);
        v9 = 0;
      }
      ++v9;
      rewinddir(dirp);
    }
    while ( v9 != 2 );
    closedir(dirp);
    if ( ptr )
      goto LABEL_13;
  }
  else
  {
    sub_8058290();
    if ( ptr )
    {
LABEL_13:
      v12 = 0;
      sub_80CF780(ptr);
    }
  }
  result = v14 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
