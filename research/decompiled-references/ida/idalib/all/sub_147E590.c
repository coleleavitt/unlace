__int64 __fastcall sub_147E590(__int64 a1, bool *a2, _DWORD *a3)
{
  int *v4; // r12
  int v6; // eax
  __int64 *v7; // rdi
  _BYTE v9[120]; // [rsp-78h] [rbp-78h] BYREF

  if ( (unsigned __int16)(*(_WORD *)(a1 + 32) - 28) > 1u )
    return 0;
  v4 = (int *)(a1 + 16);
  sub_1564840(v9, a1, a1 + 16, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) == 0 ? 2015 : 2127);
  sub_AEA040((__int64)v9);
  v6 = *(_DWORD *)(a1 + 16);
  *a2 = *(_WORD *)(a1 + 32) == 28;
  v7 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = v6;
  sub_14634E0(v7, v4);
  *a3 = *(_DWORD *)(a1 + 40);
  return 1;
}
