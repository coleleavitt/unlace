__int64 __fastcall dyld4::SyscallDelegate::forEachInDirectory(int a1, char *a2, int a3, __int64 a4)
{
  __int64 result; // x0
  int v8; // w22
  int v9; // w0
  unsigned __int64 v10; // x3
  int v11; // w23
  int *v12; // x25
  _BYTE *v13; // x8
  unsigned int *v14; // x26
  __int64 v15; // x27
  unsigned int v16; // w8
  unsigned __int64 v17; // x3
  unsigned __int64 v18; // x3
  char *v19; // x25
  _WORD v20[2]; // [xsp+18h] [xbp-678h] BYREF
  int v21; // [xsp+1Ch] [xbp-674h]
  _BYTE v22[1024]; // [xsp+30h] [xbp-660h] BYREF
  _BYTE v23[4]; // [xsp+430h] [xbp-260h] BYREF
  _BYTE v24[20]; // [xsp+434h] [xbp-25Ch] BYREF
  _BYTE v25[488]; // [xsp+448h] [xbp-248h] BYREF

  result = open(a2, 0x100000, 0);
  if ( (_DWORD)result != -1 )
  {
    v8 = result;
    __bzero(v20, 0x18u);
    v20[0] = 5;
    v21 = -2147483639;
    v9 = getattrlistbulk(v8, v20, v23, 0x200u, 0);
    if ( v9 < 1 )
      return close(v8);
    v11 = v9;
    v12 = (int *)v25;
    v13 = v24;
    while ( 1 )
    {
      v14 = (unsigned int *)v23;
      do
      {
        if ( (*v13 & 8) == 0 )
          goto LABEL_15;
        v15 = *v12;
        v16 = v14[8];
        if ( v16 == 2 )
        {
          if ( !a3 )
            goto LABEL_15;
        }
        else if ( v16 != 1 || (a3 & 1) != 0 )
        {
          goto LABEL_15;
        }
        v22[0] = 0;
        if ( (unsigned __int64)dyld4::Utils::concatenatePaths(
                                 (dyld4::Utils *)v22,
                                 a2,
                                 (const char *)&stru_3D0.offset,
                                 v10) > 0x3FF )
          return close(v8);
        if ( (unsigned __int64)dyld4::Utils::concatenatePaths(
                                 (dyld4::Utils *)v22,
                                 "/",
                                 (const char *)&stru_3D0.offset,
                                 v17) > 0x3FF )
          return close(v8);
        v19 = (char *)v12 + v15;
        if ( (unsigned __int64)dyld4::Utils::concatenatePaths(
                                 (dyld4::Utils *)v22,
                                 v19,
                                 (const char *)&stru_3D0.offset,
                                 v18) > 0x3FF )
          return close(v8);
        (*(void (__fastcall **)(__int64, _BYTE *, char *))(a4 + 16))(a4, v22, v19);
LABEL_15:
        v14 = (unsigned int *)((char *)v14 + *v14);
        v12 = (int *)(v14 + 6);
        v13 = v14 + 1;
        --v11;
      }
      while ( v11 );
      v11 = getattrlistbulk(v8, v20, v23, 0x200u, 0);
      v13 = v24;
      v12 = (int *)v25;
      if ( v11 <= 0 )
        return close(v8);
    }
  }
  return result;
}
