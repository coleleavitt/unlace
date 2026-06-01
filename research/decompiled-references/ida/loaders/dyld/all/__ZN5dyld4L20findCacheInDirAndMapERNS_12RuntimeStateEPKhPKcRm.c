__int64 __fastcall dyld4::findCacheInDirAndMap(
        dyld4 *this,
        dyld4::RuntimeState *a2,
        char *a3,
        const char *a4,
        unsigned __int64 *a5)
{
  __int64 v5; // x0
  __int64 v6; // x19
  _QWORD v8[7]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v9; // [xsp+40h] [xbp-30h] BYREF
  __int64 *v10; // [xsp+48h] [xbp-28h]
  __int64 v11; // [xsp+50h] [xbp-20h]
  __int64 v12; // [xsp+58h] [xbp-18h]

  v9 = 0;
  v10 = &v9;
  v11 = 0x2000000000LL;
  v12 = 0;
  v5 = *((_QWORD *)this + 1);
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 0x40000000;
  v8[2] = ___ZN5dyld4L20findCacheInDirAndMapERNS_12RuntimeStateEPKhPKcRm_block_invoke;
  v8[3] = &unk_96AE0;
  v8[4] = &v9;
  v8[5] = a2;
  v8[6] = a4;
  dyld4::SyscallDelegate::forEachInDirectory(v5, a3, 0, (__int64)v8);
  v6 = v10[3];
  _Block_object_dispose(&v9, 8);
  return v6;
}
