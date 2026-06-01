__int64 __fastcall _dylib_cache_payload_check(__int64 a1, __int64 a2)
{
  __int64 v2; // x8

  if ( (*(_QWORD *)(a1 + 32) & 0x8000000000000000LL) != 0 )
    return 0;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 < 0 )
    dyld_halt("invalid offset: %lld", *(_QWORD *)(a1 + 24));
  return a2 + v2;
}
