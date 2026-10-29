__int64 __fastcall sub_7AF6C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r8d
  int v4; // r9d
  bool v5; // zf

  v2 = operator new(0x58u);
  v5 = *(_DWORD *)(a2 + 8) == 2;
  *(_QWORD *)v2 = 88;
  *(_QWORD *)(v2 + 8) = 0;
  *(_OWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 32) = 0xFFFFFFFFLL;
  *(_QWORD *)(v2 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v2 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v2 + 56) = 4;
  *(_QWORD *)(v2 + 64) = 9;
  *(_QWORD *)(v2 + 72) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(v2 + 80) = 0;
  if ( v5 && *(_BYTE *)(a1 + 32) == 2 )
    callui(1141, *(_DWORD *)(a1 + 40), v2, (int)&callui, v3, v4);
  if ( v2 )
    sub_7AEB20(a1, v2);
  move_idcv(a2, a1);
  return 0;
}

