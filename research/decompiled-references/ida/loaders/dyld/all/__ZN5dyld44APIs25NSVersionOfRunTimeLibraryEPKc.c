__int64 __fastcall dyld4::APIs::NSVersionOfRunTimeLibrary(dyld4::APIs *this, const char *a2)
{
  __int64 v4; // x19
  _QWORD v6[7]; // [xsp+18h] [xbp-68h] BYREF
  __int64 v7; // [xsp+50h] [xbp-30h] BYREF
  __int64 *v8; // [xsp+58h] [xbp-28h]
  __int64 v9; // [xsp+60h] [xbp-20h]
  int v10; // [xsp+68h] [xbp-18h]

  v7 = 0;
  v8 = &v7;
  v9 = 0x2000000000LL;
  v10 = -1;
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 0x40000000;
  v6[2] = ___ZN5dyld44APIs25NSVersionOfRunTimeLibraryEPKc_block_invoke;
  v6[3] = &unk_965D8;
  v6[5] = this;
  v6[6] = a2;
  v6[4] = &v7;
  dyld4::RuntimeState::withLoadersReadLock((__int64)this, (__int64)v6);
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "NSVersionOfRunTimeLibrary(%s) => 0x%08X\n", a2, *((_DWORD *)v8 + 6));
  v4 = *((unsigned int *)v8 + 6);
  _Block_object_dispose(&v7, 8);
  return v4;
}
