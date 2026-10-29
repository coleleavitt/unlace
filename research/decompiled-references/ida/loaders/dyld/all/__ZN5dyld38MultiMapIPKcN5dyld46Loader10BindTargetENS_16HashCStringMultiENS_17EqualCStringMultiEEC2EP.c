__int64 __fastcall dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::MultiMap(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // x21
  __int64 v5; // x22
  __int64 v6; // x8
  __int64 v7; // x9

  *(_OWORD *)(a1 + 16) = 0u;
  v4 = (_QWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 64) = 0u;
  *(_OWORD *)(a1 + 80) = 0u;
  *(_OWORD *)(a1 + 32) = 0u;
  *(_OWORD *)(a1 + 48) = 0u;
  *(_OWORD *)a1 = xmmword_7BB70;
  v5 = 1024;
  dyld3::OverflowSafeArray<unsigned long long,4294967295ul>::reserve((_QWORD *)(a1 + 16), 0x400u);
  do
  {
    dyld3::OverflowSafeArray<unsigned long long,4294967295ul>::verifySpace(v4, 1);
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v7 + 1;
    *(_QWORD *)(v6 + 8 * v7) = -1;
    --v5;
  }
  while ( v5 );
  dyld3::OverflowSafeArray<dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::NodeEntryT,4294967295ul>::reserve(
    a1 + 56,
    1024);
  *(_QWORD *)(a1 + 96) = a2;
  return a1;
}
