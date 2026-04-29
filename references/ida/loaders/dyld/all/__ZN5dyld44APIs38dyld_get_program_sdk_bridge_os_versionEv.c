__int64 __fastcall dyld4::APIs::dyld_get_program_sdk_bridge_os_version(dyld4::APIs *this)
{
  unsigned int *v2; // x1
  __int64 v3; // x19
  _QWORD v5[6]; // [xsp+10h] [xbp-80h] BYREF
  _QWORD v6[3]; // [xsp+40h] [xbp-50h] BYREF
  char v7; // [xsp+58h] [xbp-38h]
  __int64 v8; // [xsp+60h] [xbp-30h] BYREF
  __int64 *v9; // [xsp+68h] [xbp-28h]
  __int64 v10; // [xsp+70h] [xbp-20h]
  int v11; // [xsp+78h] [xbp-18h]

  v8 = 0;
  v9 = &v8;
  v10 = 0x2000000000LL;
  v11 = 0;
  v6[0] = 0;
  v6[1] = v6;
  v6[2] = 0x2000000000LL;
  v7 = 0;
  v2 = *(unsigned int **)(*((_QWORD *)this + 1) + 8LL);
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 0x40000000;
  v5[2] = ___ZN5dyld44APIs38dyld_get_program_sdk_bridge_os_versionEv_block_invoke;
  v5[3] = &unk_96650;
  v5[4] = v6;
  v5[5] = &v8;
  dyld4::APIs::forEachImageVersion((__int64)this, v2, (__int64)v5);
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "dyld_get_program_sdk_bridge_os_version() => 0x%08X\n", *((_DWORD *)v9 + 6));
  v3 = *((unsigned int *)v9 + 6);
  _Block_object_dispose(v6, 8);
  _Block_object_dispose(&v8, 8);
  return v3;
}
