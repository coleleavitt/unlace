__int64 __fastcall DyldSharedCache::mappedSize(
        DyldSharedCache *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // x19
  _QWORD v9[6]; // [xsp+0h] [xbp-80h] BYREF
  __int64 v10; // [xsp+30h] [xbp-50h] BYREF
  __int64 *v11; // [xsp+38h] [xbp-48h]
  __int64 v12; // [xsp+40h] [xbp-40h]
  __int64 v13; // [xsp+48h] [xbp-38h]
  __int64 v14; // [xsp+50h] [xbp-30h] BYREF
  __int64 *v15; // [xsp+58h] [xbp-28h]
  __int64 v16; // [xsp+60h] [xbp-20h]
  __int64 v17; // [xsp+68h] [xbp-18h]

  if ( *((_DWORD *)this + 4) >= 0x18Cu )
    return *((_QWORD *)this + 29);
  v14 = 0;
  v15 = &v14;
  v16 = 0x2000000000LL;
  v17 = 0;
  v10 = 0;
  v11 = &v10;
  v12 = 0x2000000000LL;
  v13 = 0;
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 0x40000000;
  v9[2] = ___ZNK15DyldSharedCache10mappedSizeEv_block_invoke;
  v9[3] = &unk_96F00;
  v9[4] = &v14;
  v9[5] = &v10;
  DyldSharedCache::forEachRegion(this, v9, a3, a4, a5, a6, a7);
  v7 = v11[3] - v15[3];
  _Block_object_dispose(&v10, 8);
  _Block_object_dispose(&v14, 8);
  return v7;
}
