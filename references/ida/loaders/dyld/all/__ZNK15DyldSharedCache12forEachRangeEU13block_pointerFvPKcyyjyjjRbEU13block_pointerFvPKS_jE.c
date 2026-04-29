void __fastcall DyldSharedCache::forEachRange(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v3[7]; // [xsp+8h] [xbp-58h] BYREF
  _QWORD v4[3]; // [xsp+40h] [xbp-20h] BYREF
  int v5; // [xsp+58h] [xbp-8h]

  v4[0] = 0;
  v4[1] = v4;
  v4[2] = 0x2000000000LL;
  v5 = 0;
  v3[0] = _NSConcreteStackBlock;
  v3[1] = 0x40000000;
  v3[2] = ___ZNK15DyldSharedCache12forEachRangeEU13block_pointerFvPKcyyjyjjRbEU13block_pointerFvPKS_jE_block_invoke;
  v3[3] = &unk_96ED8;
  v3[5] = a3;
  v3[6] = v4;
  v3[4] = a2;
  DyldSharedCache::forEachCache(a1, v3);
  _Block_object_dispose(v4, 8);
}
