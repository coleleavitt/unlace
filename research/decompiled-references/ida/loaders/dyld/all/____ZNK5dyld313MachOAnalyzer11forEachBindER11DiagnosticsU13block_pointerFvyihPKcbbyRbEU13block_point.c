__int64 __fastcall ___ZNK5dyld313MachOAnalyzer11forEachBindER11DiagnosticsU13block_pointerFvyihPKcbbyRbEU13block_pointerFvS4_E_block_invoke(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        unsigned __int8 a10)
{
  const char **v11; // x21
  __int64 v12; // x22
  __int64 v13; // x0
  __int64 (__fastcall *v14)(__int64); // x9
  __int64 _78; // [xsp+78h] [xbp+8h]

  if ( !*(_BYTE *)(*(_QWORD *)(a1[5] + 8LL) + 24LL) )
  {
    v11 = (const char **)(a4 + 40);
    v12 = a10 + 1LL;
    while ( _platform_strcmp(*v11, "__TEXT") )
    {
      v11 += 8;
      if ( !--v12 )
        goto LABEL_7;
    }
    *(_QWORD *)(*(_QWORD *)(a1[6] + 8LL) + 24LL) = *(v11 - 3);
    *(_BYTE *)(*(_QWORD *)(a1[5] + 8LL) + 24LL) = 1;
  }
LABEL_7:
  v13 = a1[4];
  v14 = *(__int64 (__fastcall **)(__int64))(v13 + 16);
  if ( ((_78 ^ (2 * _78)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v14(v13);
}
