__int64 *__fastcall dyld4::Atlas::Mapper::Pointer<dyld3::MachOLoaded>::swap(__int64 *result, __int64 *a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x11
  __int64 v5; // x8

  if ( result != a2 )
  {
    v2 = *result;
    v3 = result[1];
    v4 = a2[1];
    *result = *a2;
    result[1] = v4;
    *a2 = v2;
    a2[1] = v3;
    v5 = result[2];
    result[2] = a2[2];
    a2[2] = v5;
    LOBYTE(v5) = *((_BYTE *)result + 24);
    *((_BYTE *)result + 24) = *((_BYTE *)a2 + 24);
    *((_BYTE *)a2 + 24) = v5;
  }
  return result;
}
