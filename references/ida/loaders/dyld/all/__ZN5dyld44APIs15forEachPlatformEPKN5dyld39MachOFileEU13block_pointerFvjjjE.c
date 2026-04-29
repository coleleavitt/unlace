void __fastcall dyld4::APIs::forEachPlatform(__int64 a1, const dyld3::MachOFile *a2, __int64 a3)
{
  dyld4::APIs *v5; // x0
  unsigned int v6; // w0
  _DWORD *v7; // x8
  unsigned int v8; // w9
  _QWORD v9[8]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v10; // [xsp+40h] [xbp-30h] BYREF
  __int64 *v11; // [xsp+48h] [xbp-28h]
  __int64 v12; // [xsp+50h] [xbp-20h]
  char v13; // [xsp+58h] [xbp-18h]

  v10 = 0;
  v11 = &v10;
  v12 = 0x2000000000LL;
  v13 = 0;
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 0x40000000;
  v9[2] = ___ZN5dyld44APIs15forEachPlatformEPKN5dyld39MachOFileEU13block_pointerFvjjjE_block_invoke;
  v9[3] = &unk_96768;
  v9[6] = a1;
  v9[7] = a2;
  v9[4] = a3;
  v9[5] = &v10;
  dyld3::MachOFile::forEachSupportedPlatform(a2, (__int64)v9);
  if ( !*((_BYTE *)v11 + 24) )
  {
    v6 = dyld4::APIs::linkedDylibVersion(v5, a2, "/System/Library/Frameworks/Foundation.framework/Foundation");
    if ( v6 >= 0x2A61800 )
    {
      v7 = &unk_7C734;
      while ( 1 )
      {
        v8 = v7[3];
        if ( !v8 )
          break;
        v7 += 2;
        if ( v6 < v8 )
        {
          if ( !*v7 )
            goto LABEL_8;
          break;
        }
      }
      (*(void (__fastcall **)(__int64, __int64))(a3 + 16))(a3, 2);
    }
  }
LABEL_8:
  _Block_object_dispose(&v10, 8);
}
