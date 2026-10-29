/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19AC0
// Address: 0x00019AC0

//----- (00019AC0) --------------------------------------------------------
int __cdecl sub_19AC0(_DWORD *a1, int (__cdecl *a2)(_DWORD *, int), int a3)
{
  DIR *v3; // eax
  struct dirent *v4; // eax
  int v5; // esi
  struct dirent *v6; // edi
  const char *v7; // edi
  DIR *v9; // [esp+18h] [ebp-44h]
  _DWORD v10[2]; // [esp+20h] [ebp-3Ch] BYREF
  char name[32]; // [esp+28h] [ebp-34h] BYREF
  unsigned int v12; // [esp+48h] [ebp-14h]

  v12 = __readgsdword(0x14u);
  sub_19980((int)name, 32, 32, (int)"/proc/%d/task/", *a1);
  v3 = opendir(name);
  if ( !v3 )
    return 13;
  v10[0] = *a1;
  v9 = v3;
  v4 = readdir(v3);
  v5 = 0;
  if ( v4 )
  {
    v6 = v4;
    while ( 1 )
    {
      v7 = &v6->d_name[8];
      if ( strcmp(v7, ".") )
      {
        if ( strcmp(v7, "..") )
        {
          v10[1] = atoi(v7);
          if ( a2(v10, a3) )
            break;
        }
      }
      v6 = readdir(v9);
      if ( !v6 )
      {
        v5 = 0;
        goto LABEL_11;
      }
    }
    v5 = 15;
  }
LABEL_11:
  closedir(v9);
  return v5;
}
