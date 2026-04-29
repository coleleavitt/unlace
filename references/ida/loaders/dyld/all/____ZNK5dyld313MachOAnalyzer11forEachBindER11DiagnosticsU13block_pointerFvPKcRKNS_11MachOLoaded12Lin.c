__int64 __fastcall ___ZNK5dyld313MachOAnalyzer11forEachBindER11DiagnosticsU13block_pointerFvPKcRKNS_11MachOLoaded12LinkEditInfoEPKNS_9MachOFile11SegmentInfoEbbjijhyhS4_bbyRbEU13block_pointerFvS4_E_block_invoke(
        __int64 result,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _BYTE *a9)
{
  unsigned __int64 v9; // x8
  __int64 v10; // x10
  _QWORD *v11; // x9
  bool v12; // w11
  unsigned __int64 v13; // x12

  if ( a3 )
  {
    v9 = *(unsigned int *)(result + 160);
    if ( !(_DWORD)v9 )
      goto LABEL_10;
    v10 = 0;
    v11 = (_QWORD *)(*(_QWORD *)(result + 48) + 24LL);
    v12 = 1;
    while ( 1 )
    {
      v13 = *(v11 - 1);
      if ( v13 <= a2 && *v11 + v13 > a2 )
        break;
      v12 = ++v10 < v9;
      v11 += 8;
      if ( v9 == v10 )
        goto LABEL_10;
    }
    if ( v12 )
    {
      return (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(*(_QWORD *)(result + 32) + 16LL))(
               *(_QWORD *)(result + 32),
               "indirect symbol",
               result + 56);
    }
    else
    {
LABEL_10:
      result = Diagnostics::error(*(Diagnostics **)(result + 168), "indirect symbol has out of range address");
      *a9 = 1;
    }
  }
  return result;
}
