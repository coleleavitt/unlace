unsigned __int64 *__fastcall dyld4::PrebuiltLoader::BindTargetRef::BindTargetRef(
        unsigned __int64 *a1,
        Diagnostics *this,
        __int64 a3)
{
  int v4; // w8
  __int64 v5; // x8
  __int64 v6; // x8
  unsigned __int64 v7; // x9
  __int64 v8; // x8

  v4 = *(_DWORD *)(a3 + 24);
  if ( v4 == 1 )
  {
    if ( *(_QWORD *)a3 )
      v6 = *(unsigned __int16 *)(*(_QWORD *)a3 + 6LL);
    else
      v6 = 0x7FFF;
    v7 = *(_QWORD *)(a3 + 16);
    *a1 = (v7 >> 40) & 0xFF0000 | v6 & 0x8000000000FFFFFFLL | ((v7 & 0x7FFFFFFFFFLL) << 24);
    v8 = v7 & 0x7FFFFFFFFFLL;
    if ( (v7 & 0x4000000000LL) != 0 )
      v8 = v7 & 0x7FFFFFFFFFLL | 0xFFFF8000000000LL;
    if ( (v8 | v7 & 0xFF00000000000000LL) != *(_QWORD *)(a3 + 16) )
      dyld4::PrebuiltLoader::BindTargetRef::BindTargetRef();
  }
  else if ( v4 == 2 )
  {
    v5 = *(_QWORD *)(a3 + 16);
    *a1 = v5 | 0x8000000000000000LL;
    if ( v5 + 0x4000000000000000LL < 0 )
      Diagnostics::error(
        this,
        "unencodeable absolute value (0x%llx) for symbol '%s'",
        *(_QWORD *)(a3 + 16),
        *(const char **)(a3 + 8));
  }
  return a1;
}
