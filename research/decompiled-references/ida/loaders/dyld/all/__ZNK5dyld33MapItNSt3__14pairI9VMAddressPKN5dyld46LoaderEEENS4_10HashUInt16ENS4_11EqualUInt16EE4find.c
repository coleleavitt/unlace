__int64 __fastcall dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::find(
        _QWORD *a1,
        unsigned __int16 *a2)
{
  __int64 v2; // x9
  unsigned __int64 v3; // x10
  unsigned __int64 v4; // x12
  __int64 v5; // x14
  unsigned __int64 v6; // x8
  unsigned __int16 *v7; // x8

  v2 = *a2;
  v3 = a1[4];
  v4 = (v3 - 1) & v2;
  if ( v3 <= v4 )
LABEL_7:
    dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::find();
  v5 = 1;
  while ( 1 )
  {
    v6 = *(_QWORD *)(a1[2] + 8 * v4);
    if ( v6 == -1 )
      return a1[7] + 32LL * a1[9];
    if ( a1[9] <= v6 )
      dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::find();
    v7 = (unsigned __int16 *)(a1[7] + 32 * v6);
    if ( *v7 == (_DWORD)v2 )
      return (__int64)v7;
    v4 = (v4 + v5++) & (v3 - 1);
    if ( v3 <= v4 )
      goto LABEL_7;
  }
}
