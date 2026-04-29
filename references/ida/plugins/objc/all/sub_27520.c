_BOOL8 __fastcall sub_27520(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v5; // rbp
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 (__fastcall *v10)(__int64, __int64); // rax

  if ( *(_BYTE *)a2 != 9 )
    return 0;
  v3 = *(_QWORD *)(a2 + 8);
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
  if ( *(_DWORD *)hexdsp(268, v3) != 1 )
    return 0;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
  v7 = v6(268, v5);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_QWORD *)(v7 + 8) + *(_QWORD *)(v5 + 8);
  v10 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
  return *(_QWORD *)(v10(268, v8) + 8) + *(_QWORD *)(v8 + 8) == v9;
}
