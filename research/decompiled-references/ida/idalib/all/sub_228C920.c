__int64 __fastcall sub_228C920(DIR **a1)
{
  int *v2; // rax
  DIR *v3; // rdi
  int *v4; // r12
  struct dirent *v5; // rax
  char *d_name; // r12
  unsigned __int8 *v7; // rbp
  size_t v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 v11; // cx
  std::_V2 *v12; // rdi
  int v13; // edx
  int v14; // ecx
  unsigned int v16; // ebp
  _QWORD v17[4]; // [rsp+0h] [rbp-78h] BYREF
  __int16 v18; // [rsp+20h] [rbp-58h]
  __int128 v19; // [rsp+30h] [rbp-48h]
  __int128 v20; // [rsp+40h] [rbp-38h]
  __int128 v21; // [rsp+50h] [rbp-28h]

  v2 = __errno_location();
  v3 = *a1;
  *v2 = 0;
  v4 = v2;
  v5 = readdir(v3);
  if ( v5 )
  {
    d_name = v5->d_name;
    v7 = (unsigned __int8 *)v5;
    v8 = strlen(v5->d_name);
    if ( v8 == 1 )
    {
      if ( v7[19] == 46 )
        return sub_228C920(a1);
    }
    else if ( v8 == 2 && v7[19] == 46 && v7[20] == 46 )
    {
      return sub_228C920(a1);
    }
    v11 = v7[18];
    v12 = (std::_V2 *)(a1 + 1);
    *(_QWORD *)&v21 = 0;
    v19 = 0;
    v13 = 3;
    v20 = 0;
    v14 = (unsigned __int16)(v11 << 12);
    *((_QWORD *)&v21 + 1) = 0xFFFF00000000LL;
    if ( v14 != 0x4000 )
    {
      v13 = 2;
      if ( v14 != 0x8000 )
      {
        v13 = 5;
        if ( v14 != 24576 )
        {
          v13 = 6;
          if ( v14 != 0x2000 )
          {
            v13 = 7;
            if ( v14 != 4096 )
            {
              v13 = 8;
              if ( v14 != 49152 )
                v13 = 5 * (v14 != 40960) + 4;
            }
          }
        }
      }
    }
    v17[1] = v8;
    v18 = 261;
    v17[0] = d_name;
    sub_228B320((__int64)v12, (__int64)v17, v13, 261, v9, v10, v19, v20, v21);
    std::_V2::system_category(v12);
    return 0;
  }
  else
  {
    v16 = *v4;
    if ( *v4 )
    {
      std::_V2::generic_category(v3);
      return v16;
    }
    else
    {
      return sub_228C850((__int64)a1);
    }
  }
}
