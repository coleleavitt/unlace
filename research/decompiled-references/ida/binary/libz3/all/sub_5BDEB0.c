__int64 __fastcall sub_5BDEB0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  _OWORD *v3; // rax
  __int64 v4; // rax
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &off_1C52508;
  v2 = *a2;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = v2;
  *(_QWORD *)(a1 + 40) = a2 + 82;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = v2;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  v3 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 88) = v3;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 96) = 8;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v4 = sub_186B270(0xC0u);
  *(_QWORD *)v4 = 0;
  *(_QWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 32) = 0;
  *(_QWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 80) = 0;
  *(_QWORD *)(v4 + 104) = 0;
  *(_QWORD *)(v4 + 128) = 0;
  *(_QWORD *)(v4 + 152) = 0;
  *(_QWORD *)(v4 + 176) = 0;
  *(_QWORD *)(v4 + 184) = 0;
  *(_QWORD *)(a1 + 112) = v4;
  *(_OWORD *)(v4 + 16) = 0;
  *(_OWORD *)(v4 + 40) = 0;
  *(_OWORD *)(v4 + 64) = 0;
  *(_OWORD *)(v4 + 88) = 0;
  *(_OWORD *)(v4 + 112) = 0;
  *(_OWORD *)(v4 + 136) = 0;
  *(_OWORD *)(v4 + 160) = 0;
  result = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 120) = 8;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = result;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  return result;
}

