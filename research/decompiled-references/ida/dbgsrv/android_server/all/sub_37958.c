/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37958
// Address: 0x0000000000037958

//----- (0000000000037958) ----------------------------------------------------
__int64 __fastcall sub_37958(unsigned int *a1, _QWORD *a2)
{
  __pid_t v4; // w22
  int v5; // w21
  DIR *v6; // x0
  DIR *v7; // x22
  struct dirent *v8; // x0
  const char *d_name; // x0
  int v10; // t1
  int v11; // w0
  _QWORD *v13; // x0
  _QWORD *v14; // x21
  int v15; // w8
  unsigned __int64 v16; // [xsp+8h] [xbp-88h] BYREF
  unsigned __int64 v17; // [xsp+10h] [xbp-80h] BYREF
  char name[64]; // [xsp+18h] [xbp-78h] BYREF
  __int64 v19; // [xsp+58h] [xbp-38h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = getpid();
  v5 = ps_getpid(a1);
  if ( geteuid() )
  {
    if ( (sub_37A8C(v4, v4, &v17) & 0x80000000) != 0 )
      return 12;
    sub_37BAC((__int64)name, 64, 64, (__int64)"/proc/%d/task", v5);
    v6 = opendir(name);
    if ( v6 )
    {
      v7 = v6;
      while ( 1 )
      {
        v8 = readdir(v7);
        if ( !v8 )
          break;
        v10 = (unsigned __int8)v8->d_name[0];
        d_name = v8->d_name;
        if ( v10 != 46 )
        {
          v11 = atoi(d_name);
          if ( v11 )
          {
            if ( (sub_37A8C(v5, v11, &v16) & 0x80000000) != 0 || v16 != v17 )
            {
              closedir(v7);
              return 12;
            }
          }
        }
      }
      closedir(v7);
    }
  }
  v13 = malloc(0x10u);
  if ( !v13 )
    return 18;
  v14 = v13;
  v15 = ps_getpid(a1);
  *(_DWORD *)v14 = v15;
  v14[1] = a1;
  *a2 = v14;
  return 0;
}
