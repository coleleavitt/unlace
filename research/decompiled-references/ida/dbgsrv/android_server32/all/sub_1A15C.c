/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A15C
// Address: 0x0001A15C

//----- (0001A15C) --------------------------------------------------------
int __fastcall sub_1A15C(_DWORD *a1, int (__fastcall *a2)(_DWORD *, int), int a3)
{
  DIR *v4; // r0
  int v5; // r5
  DIR *v6; // r6
  struct dirent *v7; // r5
  const char *v8; // r5
  _DWORD v12[2]; // [sp+1Ch] [bp-2Ch] BYREF
  char v13[32]; // [sp+24h] [bp-24h] BYREF

  sub_1A0A8((int)v13, 32, 32, (int)"/proc/%d/task/", *a1);
  v4 = opendir(v13);
  v5 = 13;
  if ( v4 )
  {
    v6 = v4;
    v12[0] = *a1;
    v7 = readdir(v4);
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = &v7->d_name[8];
        if ( strcmp(v8, ".") )
        {
          if ( strcmp(v8, "..") )
          {
            v12[1] = atoi(v8);
            v5 = 15;
            if ( a2(v12, a3) )
              break;
          }
        }
        v7 = readdir(v6);
        if ( !v7 )
        {
          v5 = 0;
          break;
        }
      }
    }
    else
    {
      v5 = 0;
    }
    closedir(v6);
  }
  return v5;
}
