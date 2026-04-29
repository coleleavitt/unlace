__int64 __fastcall ___ZNK5dyld313MachOAnalyzer31forEachBindLocation_RelocationsER11DiagnosticsU13block_pointerFvyjRbE_block_invoke(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        unsigned __int8 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        char a16,
        __int64 a17)
{
  if ( a16 )
    ++*(_DWORD *)(*(_QWORD *)(a1[5] + 8LL) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(a1[4] + 16LL))(
           a1[4],
           *(_QWORD *)(a4 + ((unsigned __int64)a10 << 6) + 16) + a11 - a1[16],
           *(unsigned int *)(*(_QWORD *)(a1[5] + 8LL) + 24LL),
           a17);
}
