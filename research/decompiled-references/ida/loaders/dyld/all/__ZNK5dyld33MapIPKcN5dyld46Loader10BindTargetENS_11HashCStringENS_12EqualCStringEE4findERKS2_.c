__int64 __fastcall dyld3::Map<char const*,dyld4::Loader::BindTarget,dyld3::HashCString,dyld3::EqualCString>::find(
        _QWORD *a1,
        const char **a2)
{
  char *v4; // x21
  size_t v5; // x0
  unsigned __int64 v6; // x0
  unsigned __int64 v7; // x22
  unsigned __int64 v8; // x23
  unsigned __int64 v9; // x24
  __int64 v10; // x25
  const char *v11; // x20
  __int64 v12; // x26
  unsigned __int64 v13; // x8
  const char **v14; // x21
  unsigned __int64 v15; // x8
  char v17[8]; // [xsp+8h] [xbp-58h] BYREF

  v4 = (char *)*a2;
  v5 = _platform_strlen(*a2);
  v6 = std::__murmur2_or_cityhash<unsigned long,64ul>::operator()((__int64)v17, (__int64 *)v4, v5);
  v7 = a1[4];
  v8 = v7 - 1;
  v9 = v6 & (v7 - 1);
  if ( v7 <= v9 )
LABEL_7:
    dyld3::Map<char const*,dyld4::Loader::BindTarget,dyld3::HashCString,dyld3::EqualCString>::find();
  v10 = a1[2];
  v11 = *a2;
  v12 = 1;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v10 + 8 * v9);
    if ( v13 == -1 )
      return a1[7] + 24LL * a1[9];
    if ( a1[9] <= v13 )
      dyld3::Map<char const*,dyld4::Loader::BindTarget,dyld3::HashCString,dyld3::EqualCString>::find();
    v14 = (const char **)(a1[7] + 24 * v13);
    if ( !_platform_strcmp(*v14, v11) )
      return (__int64)v14;
    v15 = v9 + v12++;
    v9 = v15 & v8;
    if ( v7 <= (v15 & v8) )
      goto LABEL_7;
  }
}
