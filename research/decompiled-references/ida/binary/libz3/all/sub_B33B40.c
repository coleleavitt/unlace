__int64 __fastcall sub_B33B40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = sub_186B270(0x1C0u);
  sub_BDD210(v2, a2);
  *(_QWORD *)(v2 + 256) = 0;
  *(_QWORD *)v2 = off_1C72170;
  v3 = *(_QWORD *)(a2 + 112);
  *(_DWORD *)(v2 + 320) = 0;
  *(_QWORD *)(v2 + 328) = v2;
  *(_QWORD *)(v2 + 264) = v3 + 396;
  *(_QWORD *)(v2 + 336) = v2 + 384;
  *(_QWORD *)(v2 + 360) = 0;
  *(_QWORD *)(v2 + 368) = off_1C56E00;
  *(_QWORD *)(v2 + 376) = v2 + 328;
  *(_QWORD *)(v2 + 384) = 0;
  *(_QWORD *)(v2 + 392) = 0;
  *(_OWORD *)(v2 + 272) = 0;
  *(_OWORD *)(v2 + 288) = 0;
  *(_OWORD *)(v2 + 304) = 0;
  *(_OWORD *)(v2 + 344) = 0;
  sub_180C0A0(v2 + 400);
  *(_DWORD *)(v2 + 440) = 0;
  return v2;
}

