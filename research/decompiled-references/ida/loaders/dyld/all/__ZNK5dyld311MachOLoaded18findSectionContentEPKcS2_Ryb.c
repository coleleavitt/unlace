__int64 __fastcall dyld3::MachOLoaded::findSectionContent(
        dyld3::MachOLoaded *this,
        const char *a2,
        const char *a3,
        unsigned __int64 *a4,
        char a5)
{
  __int64 v5; // x19
  _QWORD v7[9]; // [xsp+0h] [xbp-80h] BYREF
  char v8; // [xsp+48h] [xbp-38h]
  __int64 v9; // [xsp+50h] [xbp-30h] BYREF
  __int64 *v10; // [xsp+58h] [xbp-28h]
  __int64 v11; // [xsp+60h] [xbp-20h]
  __int64 v12; // [xsp+68h] [xbp-18h]

  v9 = 0;
  v10 = &v9;
  v11 = 0x2000000000LL;
  v12 = 0;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 0x40000000;
  v7[2] = ___ZNK5dyld311MachOLoaded18findSectionContentEPKcS2_Ryb_block_invoke;
  v7[3] = &unk_97AD0;
  v8 = a5;
  v7[6] = a3;
  v7[7] = a2;
  v7[8] = a4;
  v7[4] = &v9;
  v7[5] = this;
  dyld3::MachOFile::forEachSection(this, v7);
  v5 = v10[3];
  _Block_object_dispose(&v9, 8);
  return v5;
}
