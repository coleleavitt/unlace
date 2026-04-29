__int64 __fastcall dyld4::APIs::_dyld_get_image_header(dyld4::APIs *this, int a2)
{
  __int64 v4; // x19
  _QWORD v6[6]; // [xsp+18h] [xbp-68h] BYREF
  int v7; // [xsp+48h] [xbp-38h]
  __int64 v8; // [xsp+50h] [xbp-30h] BYREF
  __int64 *v9; // [xsp+58h] [xbp-28h]
  __int64 v10; // [xsp+60h] [xbp-20h]
  __int64 v11; // [xsp+68h] [xbp-18h]

  v8 = 0;
  v9 = &v8;
  v10 = 0x2000000000LL;
  v11 = 0;
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 0x40000000;
  v6[2] = ___ZN5dyld44APIs22_dyld_get_image_headerEj_block_invoke;
  v6[3] = &unk_96538;
  v7 = a2;
  v6[4] = &v8;
  v6[5] = this;
  dyld4::RuntimeState::withLoadersReadLock((__int64)this, (__int64)v6);
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "_dyld_get_image_header(%u) => %p\n", a2, (const void *)v9[3]);
  v4 = v9[3];
  _Block_object_dispose(&v8, 8);
  return v4;
}
