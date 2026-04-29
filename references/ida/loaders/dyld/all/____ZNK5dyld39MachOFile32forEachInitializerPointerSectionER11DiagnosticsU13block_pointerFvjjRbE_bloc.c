__int64 __fastcall ___ZNK5dyld39MachOFile32forEachInitializerPointerSectionER11DiagnosticsU13block_pointerFvjjRbE_block_invoke(
        __int64 result,
        __int64 a2,
        int a3,
        _BYTE *a4)
{
  unsigned __int64 v5; // x9
  unsigned __int64 v6; // x10
  __int64 v7; // x1
  __int64 (__fastcall *v8)(__int64, __int64); // x5
  __int64 v9; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( *(_BYTE *)(a2 + 92) == 9 )
  {
    v5 = *(unsigned int *)(result + 56);
    if ( *(_QWORD *)(a2 + 72) % v5 )
    {
      result = Diagnostics::error(*(Diagnostics **)(result + 40), "initializer section %s/%s has bad size");
LABEL_8:
      *a4 = 1;
      return result;
    }
    if ( a3 )
    {
      result = Diagnostics::error(
                 *(Diagnostics **)(result + 40),
                 "initializer section %s/%s extends beyond its segment");
      goto LABEL_8;
    }
    v6 = *(_QWORD *)(a2 + 64);
    if ( v6 % v5 )
    {
      result = Diagnostics::error(*(Diagnostics **)(result + 40), "initializer section %s/%s is not pointer aligned");
      goto LABEL_8;
    }
    v7 = (unsigned int)(v6 - *(_DWORD *)(result + 48));
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(result + 32) + 16LL);
    v9 = *(_QWORD *)(result + 32);
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v8(v9, v7);
  }
  return result;
}
