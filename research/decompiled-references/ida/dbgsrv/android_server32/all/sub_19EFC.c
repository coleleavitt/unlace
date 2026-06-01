/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19EFC
// Address: 0x00019EFC

//----- (00019EFC) --------------------------------------------------------
int __fastcall sub_19EFC(int a1, _DWORD *a2)
{
  __pid_t v3; // r7
  int v4; // r6
  DIR *v5; // r0
  DIR *v6; // r7
  struct dirent *v7; // r0
  int v8; // r1
  const char *v9; // r0
  int v10; // r0
  int result; // r0
  _DWORD *v12; // r6
  unsigned __int64 v14; // [sp+8h] [bp-54h] BYREF
  unsigned __int64 v15; // [sp+10h] [bp-4Ch] BYREF
  char v16[64]; // [sp+18h] [bp-44h] BYREF

  v3 = getpid();
  v4 = ps_getpid(a1);
  if ( geteuid() )
  {
    if ( sub_19FD4(v3, v3, &v15) < 0 )
      return 12;
    sub_1A0A8((int)v16, 64, 64, (int)"/proc/%d/task", v4);
    v5 = opendir(v16);
    if ( v5 )
    {
      v6 = v5;
      while ( 1 )
      {
        v7 = readdir(v6);
        if ( !v7 )
          break;
        v8 = (unsigned __int8)v7->d_name[8];
        v9 = &v7->d_name[8];
        if ( v8 != 46 )
        {
          v10 = atoi(v9);
          if ( v10 )
          {
            if ( sub_19FD4(v4, v10, &v14) < 0 || v14 != v15 )
            {
              closedir(v6);
              return 12;
            }
          }
        }
      }
      closedir(v6);
    }
  }
  v12 = malloc(8u);
  result = 18;
  if ( v12 )
  {
    *v12 = ps_getpid(a1);
    v12[1] = a1;
    *a2 = v12;
    return 0;
  }
  return result;
}
