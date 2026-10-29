__int64 __fastcall sub_733230(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _OWORD *v3; // rax
  _OWORD *v4; // rax

  v2 = sub_186B270(0x90u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C53E18;
  *(_QWORD *)(v2 + 16) = a1;
  sub_1858590(v2 + 24, a2);
  sub_15F01E0(v2 + 32, a1);
  sub_16744A0(v2 + 56, a1);
  v3 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(v2 + 80) = v3;
  *(_DWORD *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 88) = 8;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v4 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(v2 + 104) = v4;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  *(_QWORD *)(v2 + 128) = off_1C53DF0;
  *(_QWORD *)(v2 + 112) = 8;
  *(_DWORD *)(v2 + 120) = 0;
  *(_QWORD *)(v2 + 136) = v2;
  return v2;
}

