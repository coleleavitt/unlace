__int64 __fastcall sub_CF8250(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _OWORD *v4; // rax
  _OWORD *v5; // rax
  unsigned int v6; // eax
  unsigned __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rax

  v2 = sub_186B270(0x78u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C59EC8;
  *(_QWORD *)(v2 + 16) = a1;
  *(_QWORD *)(v2 + 24) = 0;
  v4 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(v3 + 32) = v4;
  *(_DWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 40) = 8;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v5 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(v3 + 64) = 8;
  *(_QWORD *)(v3 + 56) = v5;
  *(_DWORD *)(v3 + 72) = 0;
  *(_QWORD *)(v3 + 80) = 0;
  *(_DWORD *)(v3 + 88) = 0;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  sub_1858590(v3 + 112, a2);
  sub_1863170(v3 + 112, a2);
  v6 = sub_1859960(v3 + 112, "max_memory", 0xFFFFFFFFLL);
  v7 = (unsigned __int64)v6 << 20;
  v8 = v6 == -1;
  v9 = -1;
  if ( !v8 )
    v9 = v7;
  *(_QWORD *)(v3 + 96) = v9;
  *(_DWORD *)(v3 + 104) = sub_1859960(v3 + 112, "max_steps", 0xFFFFFFFFLL);
  return sub_EE8D70(v3);
}

