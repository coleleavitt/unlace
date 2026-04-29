__int64 __fastcall dyld3::MachOFile::forEachCodeDirectoryBlob(
        __int64 result,
        _DWORD *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned int v5; // w22
  unsigned __int64 v6; // x25
  __int64 v9; // x23
  __int64 (__fastcall *v10)(dyld3 *__hidden, const CS_CodeDirectory *); // x28
  _DWORD *v11; // x24
  unsigned int *v12; // x26
  int v13; // w8
  bool v14; // cc
  unsigned __int64 v15; // x8
  _DWORD *v16; // x23
  __int64 (__fastcall *v17)(__int64, _DWORD *); // x2
  unsigned int v18; // [xsp+Ch] [xbp-64h]
  char v19; // [xsp+1Ch] [xbp-54h]
  __int64 _78; // [xsp+78h] [xbp+8h]

  if ( a3 >= 0xC && *a2 == -1072898310 )
  {
    v5 = a2[2];
    v6 = bswap32(v5);
    if ( v6 <= (a3 - 12) >> 3 )
    {
      v9 = result;
      result = dyld3::MachOFile::builtForPlatform((_DWORD *)result, 4, 0);
      v10 = (_DWORD)result ? dyld3::hash_rank_watchOS_dylibs : dyld3::hash_rank;
      if ( v5 )
      {
        v11 = nullptr;
        v19 = result ^ 1 | (*(_DWORD *)(v9 + 12) != 2);
        result = a4 + 16;
        v12 = a2 + 4;
        do
        {
          v13 = *(v12 - 1);
          if ( v13 )
            v14 = (unsigned int)(v13 - 0x100000) > 0x5000000;
          else
            v14 = 0;
          if ( !v14 )
          {
            v15 = bswap32(*v12);
            if ( a3 - 88 >= v15 )
            {
              v16 = (_DWORD *)((char *)a2 + v15);
              if ( a3 - v15 >= bswap32(*(_DWORD *)((char *)a2 + v15 + 4)) )
              {
                if ( (v19 & 1) != 0 )
                {
                  if ( *v16 == 34397946 )
                  {
                    if ( !v11
                      || (v18 = ((__int64 (__fastcall *)(_DWORD *))v10)(v16),
                          result = ((__int64 (__fastcall *)(_DWORD *))v10)(v11),
                          v18 > (unsigned int)result) )
                    {
                      v11 = v16;
                    }
                  }
                }
                else
                {
                  result = (*(__int64 (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v16);
                }
              }
            }
          }
          v12 += 2;
          --v6;
        }
        while ( v6 );
        if ( v11 )
        {
          v17 = *(__int64 (__fastcall **)(__int64, _DWORD *))(a4 + 16);
          if ( ((_78 ^ (2 * _78)) & 0x4000000000000000LL) != 0 )
            __break(0xC471u);
          return v17(a4, v11);
        }
      }
    }
  }
  return result;
}
