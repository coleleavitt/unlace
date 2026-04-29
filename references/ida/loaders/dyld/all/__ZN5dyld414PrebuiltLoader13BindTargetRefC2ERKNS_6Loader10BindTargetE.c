unsigned __int64 *__fastcall dyld4::PrebuiltLoader::BindTargetRef::BindTargetRef(unsigned __int64 *result, _QWORD *a2)
{
  __int64 v2; // x8
  unsigned __int64 v3; // x9
  __int64 v4; // x8

  if ( *a2 )
    v2 = *(unsigned __int16 *)(*a2 + 6LL);
  else
    v2 = 0x7FFF;
  v3 = a2[1];
  *result = (v3 >> 40) & 0xFF0000 | v2 & 0x8000000000FFFFFFLL | ((v3 & 0x7FFFFFFFFFLL) << 24);
  v4 = v3 & 0x7FFFFFFFFFLL;
  if ( (v3 & 0x4000000000LL) != 0 )
    v4 = v3 & 0x7FFFFFFFFFLL | 0xFFFF8000000000LL;
  if ( (v4 | v3 & 0xFF00000000000000LL) != a2[1] )
    dyld4::PrebuiltLoader::BindTargetRef::BindTargetRef();
  return result;
}
