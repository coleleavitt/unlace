__int64 __fastcall sub_81DB0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r12d
  _QWORD *v5; // r13
  unsigned int v6; // eax
  unsigned int v7; // r14d
  __int64 (__fastcall *v9)(__int64, __int64); // rax

  v5 = *(_QWORD **)(a1 + 616);
  if ( !v5 )
    return 0;
  v6 = a4;
  LOBYTE(a4) = a4 <= 0xF || a4 - 129 <= 0x20;
  v7 = a4;
  if ( !(_BYTE)a4 )
    return v7;
  LOBYTE(v4) = v6 == 161 || v6 == 13;
  if ( (_BYTE)v4 )
    return 0;
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(*v5 + 16LL);
  if ( v9 != sub_80020 )
    ((void (__fastcall *)(_QWORD *, __int64, _QWORD, __int64))v9)(
      v5,
      *(_QWORD *)(*(_QWORD *)(v5[1] + 32LL) + 16LL) & a3,
      0,
      -1);
  reg_finder_find();
  return v4;
}
