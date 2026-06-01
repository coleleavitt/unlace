__int64 __fastcall dyld4::APIs::dyld_get_min_os_version(dyld4::APIs *this, const mach_header *a2)
{
  __int64 v4; // x19
  _QWORD v6[7]; // [xsp+18h] [xbp-88h] BYREF
  __int64 v7; // [xsp+50h] [xbp-50h] BYREF
  __int64 *v8; // [xsp+58h] [xbp-48h]
  __int64 v9; // [xsp+60h] [xbp-40h]
  int v10; // [xsp+68h] [xbp-38h]
  _QWORD v11[3]; // [xsp+70h] [xbp-30h] BYREF
  char v12; // [xsp+88h] [xbp-18h]

  v11[0] = 0;
  v11[1] = v11;
  v11[2] = 0x2000000000LL;
  v12 = 0;
  v7 = 0;
  v8 = &v7;
  v9 = 0x2000000000LL;
  v10 = 0;
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 0x40000000;
  v6[2] = ___ZN5dyld44APIs23dyld_get_min_os_versionEPK11mach_header_block_invoke;
  v6[3] = &unk_966C8;
  v6[5] = &v7;
  v6[6] = this;
  v6[4] = v11;
  dyld4::APIs::forEachImageVersion((__int64)this, &a2->magic, (__int64)v6);
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "dyld_get_min_os_version(%p) => 0x%08X\n", a2, *((_DWORD *)v8 + 6));
  v4 = *((unsigned int *)v8 + 6);
  _Block_object_dispose(&v7, 8);
  _Block_object_dispose(v11, 8);
  return v4;
}
