__int64 __fastcall ___ZNK6mach_o6Fixups31forEachBindTarget_ChainedFixupsER11DiagnosticsU13block_pointerFvRKNS0_14BindTargetInfoERbE_block_invoke(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  __int64 v7; // x0
  __int64 v8; // t2
  __int64 result; // x0
  _DWORD v10[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 v11; // [xsp+8h] [xbp-28h]
  __int64 v12; // [xsp+10h] [xbp-20h]
  char v13; // [xsp+18h] [xbp-18h]
  char v14; // [xsp+19h] [xbp-17h]

  v8 = a1 + 32;
  v7 = *(_QWORD *)(a1 + 32);
  v10[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 24LL);
  v10[1] = a2;
  v11 = a3;
  v12 = a4;
  v13 = a5;
  v14 = 0;
  result = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64))(v7 + 16))(v7, v10, a6, a4);
  ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
  return result;
}
