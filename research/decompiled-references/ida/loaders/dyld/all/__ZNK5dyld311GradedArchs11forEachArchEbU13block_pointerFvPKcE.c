__int64 __fastcall dyld3::GradedArchs::forEachArch(__int64 result, int a2, __int64 a3)
{
  __int64 v5; // x21
  __int64 v6; // x22
  bool v7; // zf
  __int64 v8; // x9
  const char *v9; // x1

  v5 = result;
  v6 = result + 48;
  do
  {
    if ( !*(_DWORD *)v5 )
      break;
    if ( *(_BYTE *)(v5 + 8) )
      v7 = a2 == 0;
    else
      v7 = 0;
    if ( !v7 )
    {
      v8 = 0;
      while ( LODWORD((&dyld3::MachOFile::_s_archInfos)[v8 + 1]) != *(_DWORD *)v5
           || (*(_DWORD *)(v5 + 4) & 0xFFFFFF) != *((_DWORD *)&dyld3::MachOFile::_s_archInfos + 2 * v8 + 3) )
      {
        v8 += 2;
        if ( v8 == 26 )
        {
          v9 = "unknown";
          goto LABEL_13;
        }
      }
      v9 = (&dyld3::MachOFile::_s_archInfos)[v8];
LABEL_13:
      result = (*(__int64 (__fastcall **)(__int64, const char *))(a3 + 16))(a3, v9);
    }
    v5 += 12;
  }
  while ( v5 != v6 );
  return result;
}
