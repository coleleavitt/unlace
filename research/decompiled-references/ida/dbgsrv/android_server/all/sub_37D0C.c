/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37D0C
// Address: 0x0000000000037D0C

//----- (0000000000037D0C) ----------------------------------------------------
__int64 __fastcall sub_37D0C(_DWORD *a1, unsigned int (__fastcall *a2)(_DWORD *, __int64), __int64 a3)
{
  DIR *v6; // x0
  DIR *v7; // x20
  struct dirent *v8; // x0
  const char *d_name; // x24
  unsigned int v10; // w19
  _DWORD v12[2]; // [xsp+0h] [xbp-70h] BYREF
  char name[32]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v14; // [xsp+28h] [xbp-48h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_37BAC((__int64)name, 32, 32, (__int64)"/proc/%d/task/", *a1);
  v6 = opendir(name);
  if ( v6 )
  {
    v7 = v6;
    v12[0] = *a1;
    v8 = readdir(v6);
    if ( v8 )
    {
      while ( 1 )
      {
        d_name = v8->d_name;
        if ( strcmp(v8->d_name, ".") )
        {
          if ( strcmp(d_name, "..") )
          {
            v12[1] = atoi(d_name);
            if ( a2(v12, a3) )
              break;
          }
        }
        v8 = readdir(v7);
        if ( !v8 )
          goto LABEL_7;
      }
      v10 = 15;
    }
    else
    {
LABEL_7:
      v10 = 0;
    }
    closedir(v7);
  }
  else
  {
    return 13;
  }
  return v10;
}
