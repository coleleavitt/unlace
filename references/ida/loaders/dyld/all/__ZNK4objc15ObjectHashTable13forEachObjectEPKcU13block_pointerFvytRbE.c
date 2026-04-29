__int64 __fastcall objc::ObjectHashTable::forEachObject(unsigned int *a1, const char *a2, __int64 a3)
{
  __int64 result; // x0
  __int64 v6; // x8
  __int64 v7; // x9
  unsigned __int64 v8; // x10
  __int64 v9; // x22
  unsigned __int64 *v10; // x20
  unsigned __int64 v11; // t1
  bool v12; // zf
  char v13; // [xsp+Eh] [xbp-22h] BYREF
  char v14; // [xsp+Fh] [xbp-21h] BYREF

  result = objc::StringHashTable::tryGetIndex((objc::StringHashTable *)a1, a2);
  if ( (result & 0xFF00000000LL) != 0 )
  {
    v6 = a1[4] + 1;
    v7 = a1[1];
    v8 = *(_QWORD *)((char *)&a1[2 * (unsigned int)result + 264 + v7] + v6 + v7);
    if ( (v8 & 1) != 0 )
    {
      if ( HIWORD(v8) )
      {
        v9 = HIWORD(v8) - 1;
        v10 = (unsigned __int64 *)((char *)a1 + 13 * v7 + 8 * ((v8 >> 1) & 0x7FFFFFFFFFFFLL) + v6 + 1060);
        do
        {
          v13 = 0;
          v11 = *v10++;
          result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64, char *))(a3 + 16))(
                     a3,
                     (v11 >> 1) & 0x7FFFFFFFFFFFLL,
                     HIWORD(v11),
                     &v13);
          if ( v13 )
            v12 = 1;
          else
            v12 = v9 == 0;
          --v9;
        }
        while ( !v12 );
      }
    }
    else
    {
      v14 = 0;
      return (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64, char *))(a3 + 16))(
               a3,
               (v8 >> 1) & 0x7FFFFFFFFFFFLL,
               HIWORD(v8),
               &v14);
    }
  }
  return result;
}
