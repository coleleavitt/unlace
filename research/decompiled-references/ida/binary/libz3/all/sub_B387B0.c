_OWORD *__fastcall sub_B387B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  _OWORD *result; // rax
  _BYTE v7[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(v7, "user_propagator");
  v3 = sub_15DA4C0(v2 + 560, v7);
  sub_966710(a1, a2, v3);
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)a1 = off_1C72390;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 56) = off_1C72540;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_DWORD *)(a1 + 368) = 0;
  *(_OWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 432) = 0;
  *(_OWORD *)(a1 + 392) = 0;
  *(_OWORD *)(a1 + 416) = 0;
  v4 = *(_QWORD *)(a2 + 104);
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 440) = v4;
  v5 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  *(_BYTE *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = v5;
  *(_QWORD *)(a1 + 480) = 0;
  *(_QWORD *)(a1 + 488) = 0;
  *(_DWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 520) = 0;
  *(_DWORD *)(a1 + 528) = 0;
  result = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 536) = result;
  *(_QWORD *)(a1 + 544) = 8;
  *(_DWORD *)(a1 + 552) = 0;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  return result;
}

