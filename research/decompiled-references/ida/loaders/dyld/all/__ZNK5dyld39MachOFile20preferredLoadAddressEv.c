__int64 __fastcall dyld3::MachOFile::preferredLoadAddress(dyld3::MachOFile *this)
{
  __int64 v1; // x19
  _QWORD v3[5]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v4; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v5; // [xsp+38h] [xbp-28h]
  __int64 v6; // [xsp+40h] [xbp-20h]
  __int64 v7; // [xsp+48h] [xbp-18h]

  v4 = 0;
  v5 = &v4;
  v6 = 0x2000000000LL;
  v7 = 0;
  v3[0] = _NSConcreteStackBlock;
  v3[1] = 0x40000000;
  v3[2] = ___ZNK5dyld39MachOFile20preferredLoadAddressEv_block_invoke;
  v3[3] = &unk_97440;
  v3[4] = &v4;
  dyld3::MachOFile::forEachSegment(this, v3);
  v1 = v5[3];
  _Block_object_dispose(&v4, 8);
  return v1;
}
