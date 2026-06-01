__int64 __fastcall dyld4::APIs::findImageContaining(dyld4::APIs *this, void *a2)
{
  __int64 v2; // x19
  _QWORD v4[7]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v5; // [xsp+40h] [xbp-30h] BYREF
  __int64 *v6; // [xsp+48h] [xbp-28h]
  __int64 v7; // [xsp+50h] [xbp-20h]
  __int64 v8; // [xsp+58h] [xbp-18h]

  v5 = 0;
  v6 = &v5;
  v7 = 0x2000000000LL;
  v8 = 0;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 0x40000000;
  v4[2] = ___ZN5dyld44APIs19findImageContainingEPv_block_invoke;
  v4[3] = &unk_968E0;
  v4[5] = this;
  v4[6] = a2;
  v4[4] = &v5;
  dyld4::RuntimeState::withLoadersReadLock((__int64)this, (__int64)v4);
  v2 = v6[3];
  _Block_object_dispose(&v5, 8);
  return v2;
}
