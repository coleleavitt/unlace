unsigned __int64 __fastcall sub_5FE0(__int64 a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r11
  unsigned __int64 v9; // r11

  sub_5DE0(*(int **)a1, *(_QWORD *)(a1 + 40), 329);
  v2 = 285;
  v3 = *(_QWORD *)(a1 + 40);
  if ( !(unsigned int)sub_3D20(v3, 285) || (v3 = v8 + 1140, v2 = 44, !(unsigned int)sub_3D20(v8 + 1140, 44)) )
    sub_5960(v3, v2, v4, v5, v6, v7);
  sub_5980(v9, 0x11Du, v9, 0);
  return sub_5980(*(_QWORD *)(a1 + 40) + 1140LL, 0x2Cu, *(_QWORD *)(a1 + 40) + 1140LL, 512);
}
