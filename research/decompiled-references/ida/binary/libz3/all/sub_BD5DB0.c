__int64 __fastcall sub_BD5DB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _OWORD *v3; // rax
  __int64 v4; // rax
  _OWORD *v5; // rax
  __int64 result; // rax

  sub_B31730(a1, a2);
  *(_QWORD *)(a1 + 448) = 0;
  *(_QWORD *)a1 = &off_1C73EB0;
  v2 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 456) = v2;
  *(_QWORD *)(a1 + 472) = v2;
  *(_QWORD *)(a1 + 480) = 0;
  v3 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 488) = v3;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v4 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 496) = 8;
  *(_DWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = v4;
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 528) = v4;
  *(_QWORD *)(a1 + 536) = 0;
  v5 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 544) = v5;
  *(_QWORD *)(a1 + 552) = 8;
  *(_DWORD *)(a1 + 560) = 0;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  result = sub_186B270(0xC0u);
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 92) = 0;
  *(_DWORD *)(result + 116) = 0;
  *(_DWORD *)(result + 140) = 0;
  *(_DWORD *)(result + 164) = 0;
  *(_DWORD *)(result + 188) = 0;
  *(_QWORD *)(a1 + 568) = result;
  *(_QWORD *)(a1 + 576) = 8;
  *(_DWORD *)(a1 + 584) = 0;
  *(_OWORD *)result = 0;
  *(_OWORD *)(result + 24) = 0;
  *(_OWORD *)(result + 48) = 0;
  *(_OWORD *)(result + 72) = 0;
  *(_OWORD *)(result + 96) = 0;
  *(_OWORD *)(result + 120) = 0;
  *(_OWORD *)(result + 144) = 0;
  *(_OWORD *)(result + 168) = 0;
  *(_OWORD *)(a1 + 592) = 0;
  return result;
}

