__int64 __fastcall sub_BAD610(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rbp
  _OWORD *v5; // rax

  v2 = sub_186B270(0x60u);
  v3 = sub_1625010(a1 + 56);
  v4 = *(_QWORD *)(a1 + 56);
  sub_13716C0(v2, v4, v3);
  *(_QWORD *)v2 = qword_1C6A598;
  v5 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v2 + 48) = v4;
  *(_QWORD *)(v2 + 24) = v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  *(_QWORD *)(v2 + 32) = 8;
  *(_DWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 64) = v4;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)v2 = &off_1C57CD0;
  *(_QWORD *)(v2 + 88) = a1 + 56;
  return sub_A6F1C0(a2, v2);
}

