__int64 __fastcall dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::forEachEntry(
        _QWORD *a1,
        const char **a2,
        __int64 a3)
{
  char *v5; // x22
  size_t v6; // x0
  __int64 result; // x0
  unsigned __int64 v8; // x25
  unsigned __int64 v9; // x27
  __int64 v10; // x28
  const char *v11; // x21
  __int64 v12; // x19
  unsigned __int64 v13; // x22
  unsigned __int64 v14; // x23
  __int64 v15; // x24
  __int64 v16; // x25
  unsigned int v17; // w9
  _QWORD *v18; // x25
  __int64 v19; // t1
  unsigned __int64 v20; // x9
  int v21; // w8
  __int64 v22; // x9
  _QWORD *v23; // x9
  char v24; // t1
  unsigned __int64 v25; // x8
  _QWORD *v26; // x21
  size_t v27; // x1
  unsigned __int64 v28; // x8
  unsigned __int64 v29; // x10
  __int64 v30; // x9
  int v31; // w2
  __int64 v32; // x10
  _QWORD *v33; // x10
  int v34; // t1
  __int64 v35; // [xsp+0h] [xbp-70h] BYREF
  __int64 v36; // [xsp+8h] [xbp-68h]
  __int64 v37; // [xsp+10h] [xbp-60h] BYREF

  v36 = a3;
  v5 = (char *)*a2;
  v6 = _platform_strlen(*a2);
  result = std::__murmur2_or_cityhash<unsigned long,64ul>::operator()((__int64)&v37, (__int64 *)v5, v6);
  v8 = a1[4];
  v9 = (v8 - 1) & result;
  if ( v8 <= v9 )
LABEL_7:
    dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::forEachEntry();
  v10 = a1[2];
  v11 = *a2;
  v12 = 1;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v10 + 8 * v9);
    if ( v13 == -1 )
      return result;
    v14 = a1[9];
    if ( v14 <= v13 )
      dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::forEachEntry();
    v15 = a1[7];
    result = _platform_strcmp(*(const char **)(v15 + 32 * v13), v11);
    if ( !(_DWORD)result )
    {
      v16 = v15 + 32 * v13;
      v19 = *(_QWORD *)(v16 + 24);
      v18 = (_QWORD *)(v16 + 24);
      v17 = v19;
      if ( (v19 & 7) != 0 )
      {
        v20 = v17 >> 3;
        if ( v14 <= v20 )
LABEL_13:
          dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::forEachEntry();
        v21 = 2;
        while ( 1 )
        {
          v22 = v15 + 32 * v20;
          v24 = *(_BYTE *)(v22 + 24);
          v23 = (_QWORD *)(v22 + 24);
          if ( (v24 & 3) == 0 )
            break;
          ++v21;
          v20 = (unsigned int)*v23 >> 3;
          if ( v14 <= v20 )
            goto LABEL_13;
        }
        __chkstk_darwin();
        v26 = (__int64 *)((char *)&v35 - ((v25 + 15) & 0xFFFFFFFF0LL));
        if ( v25 >= 0x200 )
          v27 = 512;
        else
          v27 = v25;
        __bzero((char *)&v35 - ((v25 + 15) & 0xFFFFFFFF0LL), v27);
        *v26 = v15 + 32 * v13 + 8;
        v28 = a1[9];
        v29 = (unsigned int)*v18 >> 3;
        if ( v28 <= v29 )
LABEL_21:
          dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::forEachEntry();
        v30 = a1[7];
        v31 = 2;
        while ( 1 )
        {
          v32 = v30 + 32 * v29;
          v34 = *(_DWORD *)(v32 + 24);
          v33 = (_QWORD *)(v32 + 24);
          v26[v31 - 1] = v33 - 2;
          if ( (v34 & 3) == 0 )
            return (*(__int64 (__fastcall **)(__int64, _QWORD *))(v36 + 16))(v36, v26);
          v29 = (unsigned int)*v33 >> 3;
          ++v31;
          if ( v28 <= v29 )
            goto LABEL_21;
        }
      }
      else
      {
        v37 = v15 + 32 * v13 + 8;
        return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(v36 + 16))(v36, &v37, 1);
      }
    }
    v9 = (v8 - 1) & (v9 + v12++);
    if ( v8 <= v9 )
      goto LABEL_7;
  }
}
