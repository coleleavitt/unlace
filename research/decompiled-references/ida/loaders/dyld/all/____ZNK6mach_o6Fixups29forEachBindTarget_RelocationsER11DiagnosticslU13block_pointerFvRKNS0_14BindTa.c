__int64 __fastcall ___ZNK6mach_o6Fixups29forEachBindTarget_RelocationsER11DiagnosticslU13block_pointerFvRKNS0_14BindTargetInfoERbE_block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        char a12,
        char a13,
        __int64 a14,
        char a15,
        __int64 a16)
{
  __int64 v16; // x19
  __int64 v17; // x0
  __int64 v18; // t2
  _DWORD v19[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 v20; // [xsp+8h] [xbp-28h]
  __int64 v21; // [xsp+10h] [xbp-20h]
  char v22; // [xsp+18h] [xbp-18h]
  char v23; // [xsp+19h] [xbp-17h]

  if ( a15 )
  {
    v16 = result;
    v18 = result + 32;
    v17 = *(_QWORD *)(result + 32);
    v19[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 8LL) + 24LL);
    v19[1] = a6;
    v20 = a11;
    v21 = a14;
    v22 = a12;
    v23 = a13;
    result = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64))(v17 + 16))(v17, v19, a16, a4);
    ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 40) + 8LL) + 24LL);
  }
  return result;
}
