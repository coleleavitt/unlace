__int64 __fastcall dyld3::MachOFile::enforceFormat(_DWORD *a1, int a2)
{
  __int64 v2; // x19
  _QWORD v4[5]; // [xsp+0h] [xbp-60h] BYREF
  int v5; // [xsp+28h] [xbp-38h]
  __int64 v6; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v7; // [xsp+38h] [xbp-28h]
  __int64 v8; // [xsp+40h] [xbp-20h]
  char v9; // [xsp+48h] [xbp-18h]

  v6 = 0;
  v7 = &v6;
  v8 = 0x2000000000LL;
  v9 = 0;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 0x40000000;
  v4[2] = ___ZNK5dyld39MachOFile13enforceFormatENS0_9MalformedE_block_invoke;
  v4[3] = &unk_97910;
  v5 = a2;
  v4[4] = &v6;
  dyld3::MachOFile::forEachSupportedPlatform(a1, (__int64)v4);
  v2 = *((unsigned __int8 *)v7 + 24);
  _Block_object_dispose(&v6, 8);
  return v2;
}
