__int64 __fastcall ___ZNK5dyld39MachOFile25forEachInterposingSectionER11DiagnosticsU13block_pointerFvyyRbE_block_invoke(
        __int64 a1,
        __int64 a2,
        int a3,
        _BYTE *a4)
{
  dyld3::MachOFile *v8; // x22
  __int64 result; // x0
  const char *v10; // x24
  unsigned __int64 v11; // x23
  __int64 v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 (__fastcall *v15)(__int64, __int64, __int64, _BYTE *); // x5
  __int64 _48; // [xsp+48h] [xbp+8h]

  v8 = *(dyld3::MachOFile **)(a1 + 40);
  if ( *(_BYTE *)(a2 + 92) == 13
    || (result = _platform_strcmp(*(const char **)(a2 + 80), "__interpose"), !(_DWORD)result)
    && ((v10 = *(const char **)(a2 + 40), !_platform_strncmp(v10, "__DATA", 6u))
     || (result = _platform_strncmp(v10, "__AUTH", 6u), !(_DWORD)result)) )
  {
    if ( *(_QWORD *)(a2 + 72) % (unsigned __int64)*(unsigned int *)(a1 + 56) )
    {
      result = Diagnostics::error(*(Diagnostics **)(a1 + 48), "interposing section %s/%s has bad size");
LABEL_12:
      *a4 = 1;
      return result;
    }
    if ( a3 )
    {
      result = Diagnostics::error(
                 *(Diagnostics **)(a1 + 48),
                 "interposing section %s/%s extends beyond the end of the segment");
      goto LABEL_12;
    }
    v11 = *(_QWORD *)(a2 + 64);
    if ( v11 % *(unsigned int *)(a1 + 60) )
    {
      result = Diagnostics::error(*(Diagnostics **)(a1 + 48), "interposing section %s/%s is not pointer aligned");
      goto LABEL_12;
    }
    v12 = *(_QWORD *)(a1 + 32);
    v13 = v11 - dyld3::MachOFile::preferredLoadAddress(v8);
    v14 = *(_QWORD *)(a2 + 72);
    v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(v12 + 16);
    if ( ((_48 ^ (2 * _48)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v15(v12, v13, v14, a4);
  }
  return result;
}
