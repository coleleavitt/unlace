bool __fastcall dyld3::MachOFile::builtForPlatform(_DWORD *a1, int a2, int a3)
{
  _BOOL8 v6; // x22
  _QWORD v8[6]; // [xsp+8h] [xbp-98h] BYREF
  int v9; // [xsp+38h] [xbp-68h]
  __int64 v10; // [xsp+40h] [xbp-60h] BYREF
  __int64 *v11; // [xsp+48h] [xbp-58h]
  __int64 v12; // [xsp+50h] [xbp-50h]
  char v13; // [xsp+58h] [xbp-48h]
  __int64 v14; // [xsp+60h] [xbp-40h] BYREF
  __int64 *v15; // [xsp+68h] [xbp-38h]
  __int64 v16; // [xsp+70h] [xbp-30h]
  char v17; // [xsp+78h] [xbp-28h]

  v14 = 0;
  v15 = &v14;
  v16 = 0x2000000000LL;
  v17 = 0;
  v10 = 0;
  v11 = &v10;
  v12 = 0x2000000000LL;
  v13 = 0;
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 0x40000000;
  v8[2] = ___ZNK5dyld39MachOFile16builtForPlatformENS_8PlatformEb_block_invoke;
  v8[3] = &unk_97248;
  v9 = a2;
  v8[4] = &v14;
  v8[5] = &v10;
  dyld3::MachOFile::forEachSupportedPlatform(a1, (__int64)v8);
  if ( !*((_BYTE *)v11 + 24) || (v6 = 0, !a3) )
  {
    if ( *((_BYTE *)v15 + 24) )
    {
      v6 = 1;
    }
    else
    {
      v6 = 0;
      if ( a2 == 1 && !*((_BYTE *)v11 + 24) )
        v6 = ((a1[1] - 7) & 0xFEFFFFFF) == 0;
    }
  }
  _Block_object_dispose(&v10, 8);
  _Block_object_dispose(&v14, 8);
  return v6;
}
