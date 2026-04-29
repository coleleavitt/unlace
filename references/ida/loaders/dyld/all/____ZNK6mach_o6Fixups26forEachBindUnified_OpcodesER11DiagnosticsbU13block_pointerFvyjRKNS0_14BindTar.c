__int64 __fastcall ___ZNK6mach_o6Fixups26forEachBindUnified_OpcodesER11DiagnosticsbU13block_pointerFvyjRKNS0_14BindTargetInfoERbES8__block_invoke(
        __int64 a1,
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
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 *v18; // x12
  __int64 *v19; // x10
  __int64 v20; // x11
  __int64 v21; // x15
  int v22; // w16
  bool v23; // w9

  v16 = **(_QWORD **)(a1 + 56);
  v18 = *(__int64 **)(v16 + 8);
  v17 = *(_QWORD *)(v16 + 16);
  if ( v17 )
  {
    v17 *= 48;
    v19 = v18;
    while ( *((_DWORD *)v19 + 11) != 1 )
    {
      v19 += 6;
      v17 -= 48;
      if ( !v17 )
        goto LABEL_7;
    }
    v17 = *v19;
  }
LABEL_7:
  v20 = v18[6 * (unsigned int)a8];
  if ( a15 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL);
    v22 = *(_DWORD *)(v21 + 24);
    *(_DWORD *)(v21 + 24) = v22 + 1;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 40LL) = v22;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 44LL) = a6;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 48LL) = a11;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 56LL) = a14;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 64LL) = a12;
    if ( a13 )
      v23 = *(_BYTE *)(a1 + 64) != 0;
    else
      v23 = 0;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 65LL) = v23;
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64))(*(_QWORD *)(a1 + 32) + 16LL))(
           *(_QWORD *)(a1 + 32),
           v20 + a9 - v17,
           a8,
           *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 40LL,
           a16);
}
