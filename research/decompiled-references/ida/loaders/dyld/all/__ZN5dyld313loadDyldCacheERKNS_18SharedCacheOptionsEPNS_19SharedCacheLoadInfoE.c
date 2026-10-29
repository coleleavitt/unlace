__int64 __fastcall dyld3::loadDyldCache(__int64 a1, _QWORD *a2)
{
  __int64 _18; // [xsp+18h] [xbp+8h]

  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  if ( *(_BYTE *)(a1 + 4) )
  {
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld3::mapSplitCachePrivate();
  }
  else if ( (unsigned int)dyld3::reuseExistingCache(a1, a2) )
  {
    return a2[2] != 0;
  }
  else
  {
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld3::mapSplitCacheSystemWide(a1, a2);
  }
}
