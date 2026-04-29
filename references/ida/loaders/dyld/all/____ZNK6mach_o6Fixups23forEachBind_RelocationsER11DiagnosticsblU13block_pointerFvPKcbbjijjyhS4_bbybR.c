__int64 __fastcall ___ZNK6mach_o6Fixups23forEachBind_RelocationsER11DiagnosticsblU13block_pointerFvPKcbbjijjyhS4_bbybRbE_block_invoke(
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
  __int64 v9; // x10
  unsigned __int64 v10; // x9
  unsigned __int64 v11; // x7
  __int64 v12; // x10
  unsigned __int64 v13; // x12

  if ( a3 )
  {
    v9 = **(_QWORD **)(result + 40);
    v10 = *(_QWORD *)(v9 + 16);
    if ( v10 )
    {
      v11 = 0;
      v12 = *(_QWORD *)(v9 + 8);
      while ( 1 )
      {
        v13 = *(_QWORD *)(v12 + 48 * v11);
        if ( v13 <= a2 && *(_QWORD *)(v12 + 48 * v11 + 8) + v13 > a2 )
          return (*(__int64 (__fastcall **)(_QWORD, const char *, __int64, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)(result + 32) + 16LL))(
                   *(_QWORD *)(result + 32),
                   "indirect symbol",
                   1,
                   1,
                   *(unsigned int *)(result + 56),
                   a4,
                   *(unsigned int *)(result + 60));
        v11 = (unsigned int)(v11 + 1);
        if ( v10 <= v11 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      result = Diagnostics::error(*(Diagnostics **)(result + 48), "indirect symbol has out of range address");
      *a9 = 1;
    }
  }
  return result;
}
