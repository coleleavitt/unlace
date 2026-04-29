__int64 __fastcall ___ZNK5dyld313MachOAnalyzer26forEachBindUnified_OpcodesER11DiagnosticsbU13block_pointerFvyRKNS0_14BindTargetInfoERbES8__block_invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        char a14,
        char a15,
        __int64 a16,
        char a17,
        __int64 a18)
{
  __int64 v18; // x8
  __int64 v19; // x10
  __int64 v20; // x15
  int v21; // w16
  bool v22; // w11

  v18 = *(_QWORD *)(a4 + ((unsigned __int64)a10 << 6) + 16);
  v19 = *(_QWORD *)(a1 + 136);
  if ( a17 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL);
    v21 = *(_DWORD *)(v20 + 24);
    *(_DWORD *)(v20 + 24) = v21 + 1;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 40LL) = v21;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 44LL) = a8;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 48LL) = a13;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 56LL) = a16;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 64LL) = a14;
    if ( a15 )
      v22 = *(_BYTE *)(a1 + 168) != 0;
    else
      v22 = 0;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 65LL) = v22;
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)(a1 + 32) + 16LL))(
           *(_QWORD *)(a1 + 32),
           v18 + a11 - v19,
           *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 40LL,
           a18);
}
