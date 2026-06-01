__int64 __fastcall dyld4::APIs::getSdkVersion(dyld4::APIs *this, const mach_header *a2)
{
  __int64 v2; // x19
  _QWORD v4[7]; // [xsp+8h] [xbp-88h] BYREF
  __int64 v5; // [xsp+40h] [xbp-50h] BYREF
  __int64 *v6; // [xsp+48h] [xbp-48h]
  __int64 v7; // [xsp+50h] [xbp-40h]
  int v8; // [xsp+58h] [xbp-38h]
  _QWORD v9[3]; // [xsp+60h] [xbp-30h] BYREF
  char v10; // [xsp+78h] [xbp-18h]

  v9[0] = 0;
  v9[1] = v9;
  v9[2] = 0x2000000000LL;
  v10 = 0;
  v5 = 0;
  v6 = &v5;
  v7 = 0x2000000000LL;
  v8 = 0;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 0x40000000;
  v4[2] = ___ZN5dyld44APIs13getSdkVersionEPK11mach_header_block_invoke;
  v4[3] = &unk_966A0;
  v4[5] = &v5;
  v4[6] = this;
  v4[4] = v9;
  dyld4::APIs::forEachImageVersion(this, a2, v4);
  v2 = *((unsigned int *)v6 + 6);
  _Block_object_dispose(&v5, 8);
  _Block_object_dispose(v9, 8);
  return v2;
}
