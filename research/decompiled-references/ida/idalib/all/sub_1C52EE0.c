__int64 __fastcall sub_1C52EE0(__int64 a1)
{
  const void *v1; // r13
  _QWORD *v2; // r14
  const void *v3; // r15
  int v4; // r12d
  __int64 v5; // rbp
  int v7; // [rsp+Ch] [rbp-3Ch]

  v7 = **(_DWORD **)(a1 + 8);
  v1 = **(const void ***)(a1 + 56);
  v2 = **(_QWORD ***)(a1 + 64);
  v3 = **(const void ***)(a1 + 88);
  v4 = **(_DWORD **)(a1 + 104);
  v5 = sub_EEE9A0(88, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 8u);
  sub_EF0100(
    v5,
    *(_QWORD **)(*(_QWORD *)a1 + 248LL),
    v7,
    **(_BYTE **)(a1 + 16),
    **(unsigned __int8 **)(a1 + 24),
    **(_DWORD **)(a1 + 32),
    **(_DWORD **)(a1 + 40),
    **(const void ***)(a1 + 48),
    v1,
    v2,
    **(_QWORD **)(a1 + 72),
    **(_DWORD **)(a1 + 80),
    v3,
    **(_DWORD **)(a1 + 96),
    v4);
  return v5;
}
