__int64 __fastcall ___ZNK15DyldSharedCache12forEachRangeEU13block_pointerFvPKcyyjyjjRbEU13block_pointerFvPKS_jE_block_invoke(
        _QWORD *a1,
        __int64 a2,
        _BYTE *a3)
{
  __int64 v6; // x9
  __int64 result; // x0
  _QWORD v8[8]; // [xsp+0h] [xbp-60h] BYREF

  v8[0] = _NSConcreteStackBlock;
  v8[1] = 0x40000000;
  v8[2] = ___ZNK15DyldSharedCache12forEachRangeEU13block_pointerFvPKcyyjyjjRbEU13block_pointerFvPKS_jE_block_invoke_2;
  v8[3] = &unk_96EB0;
  v6 = a1[6];
  v8[4] = a1[4];
  v8[5] = v6;
  v8[6] = a2;
  v8[7] = a3;
  result = DyldSharedCache::forEachRegion(a2, (__int64)v8);
  if ( !*a3 )
  {
    result = a1[5];
    if ( result )
      result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(result + 16))(
                 result,
                 a2,
                 *(unsigned int *)(*(_QWORD *)(a1[6] + 8LL) + 24LL));
    ++*(_DWORD *)(*(_QWORD *)(a1[6] + 8LL) + 24LL);
  }
  return result;
}
