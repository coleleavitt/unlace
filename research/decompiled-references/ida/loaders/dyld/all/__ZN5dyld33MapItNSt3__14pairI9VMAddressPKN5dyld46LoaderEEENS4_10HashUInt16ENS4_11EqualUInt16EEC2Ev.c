__int64 __fastcall dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::Map(
        __int64 a1)
{
  _QWORD *v2; // x20
  __int64 v3; // x21
  __int64 v4; // x8
  __int64 v5; // x9

  *(_OWORD *)(a1 + 16) = 0u;
  v2 = (_QWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 64) = 0u;
  *(_OWORD *)(a1 + 80) = 0u;
  *(_OWORD *)(a1 + 32) = 0u;
  *(_OWORD *)(a1 + 48) = 0u;
  *(_OWORD *)a1 = xmmword_7BB70;
  v3 = 1024;
  dyld3::OverflowSafeArray<unsigned long,4294967295ul>::reserve((_QWORD *)(a1 + 16), 0x400u);
  do
  {
    dyld3::OverflowSafeArray<unsigned long,4294967295ul>::verifySpace(v2, 1);
    v4 = *(_QWORD *)(a1 + 16);
    v5 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v5 + 1;
    *(_QWORD *)(v4 + 8 * v5) = -1;
    --v3;
  }
  while ( v3 );
  dyld3::OverflowSafeArray<dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::NodeT,4294967295ul>::reserve(
    a1 + 56,
    1024);
  return a1;
}
