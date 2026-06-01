__int64 __fastcall ___ZNK5dyld313MachOAnalyzer29forEachBindTarget_RelocationsER11DiagnosticsU13block_pointerFvRKNS0_14BindTargetInfoERbE_block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        char a13,
        char a14,
        __int64 a15,
        char a16,
        __int64 a17)
{
  __int64 v17; // x19
  __int64 v18; // x0
  __int64 v19; // t2
  _DWORD v20[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 v21; // [xsp+8h] [xbp-28h]
  __int64 v22; // [xsp+10h] [xbp-20h]
  char v23; // [xsp+18h] [xbp-18h]
  char v24; // [xsp+19h] [xbp-17h]

  if ( a16 )
  {
    v17 = result;
    v19 = result + 32;
    v18 = *(_QWORD *)(result + 32);
    v20[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 8LL) + 24LL);
    v20[1] = a8;
    v21 = a12;
    v22 = a15;
    v23 = a13;
    v24 = a14;
    result = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64))(v18 + 16))(v18, v20, a17, a4);
    ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 40) + 8LL) + 24LL);
  }
  return result;
}
