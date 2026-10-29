/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19710
// Address: 0x00019710

//----- (00019710) --------------------------------------------------------
int __cdecl sub_19710(int a1, _DWORD *a2)
{
  __pid_t v2; // edi
  int v3; // esi
  DIR *v4; // eax
  DIR *v5; // edi
  struct dirent *v6; // eax
  int v7; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  unsigned __int64 v11; // [esp+18h] [ebp-64h] BYREF
  unsigned __int64 v12; // [esp+20h] [ebp-5Ch] BYREF
  char name[64]; // [esp+28h] [ebp-54h] BYREF
  unsigned int v14; // [esp+68h] [ebp-14h]

  v14 = __readgsdword(0x14u);
  v2 = getpid();
  v3 = ps_getpid(a1);
  if ( geteuid() )
  {
    if ( sub_19860(v2, v2, &v12) < 0 )
      return 12;
    sub_19980((int)name, 64, 64, (int)"/proc/%d/task", v3);
    v4 = opendir(name);
    if ( v4 )
    {
      v5 = v4;
      while ( 1 )
      {
        v6 = readdir(v5);
        if ( !v6 )
          break;
        if ( v6->d_name[8] != 46 )
        {
          v7 = atoi(&v6->d_name[8]);
          if ( v7 )
          {
            if ( sub_19860(v3, v7, &v11) < 0 || v12 != v11 )
            {
              closedir(v5);
              return 12;
            }
          }
        }
      }
      closedir(v5);
    }
  }
  v9 = malloc(8u);
  if ( !v9 )
    return 18;
  v10 = v9;
  *v9 = ps_getpid(a1);
  v10[1] = a1;
  *a2 = v10;
  return 0;
}
