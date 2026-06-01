__int64 __fastcall dyld3::MachOFile::forEachTreatAsWeakDef(__int64 a1)
{
  __int64 i; // x20
  __int64 result; // x0

  for ( i = 0; i != 20; ++i )
    result = (*(__int64 (__fastcall **)(__int64, char *))(a1 + 16))(a1, dyld3::sTreatAsWeak[i]);
  return result;
}
