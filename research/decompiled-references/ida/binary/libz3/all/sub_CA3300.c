__int64 __fastcall sub_CA3300(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // r12

  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C591C0;
  sub_1858590(v2 + 24, a1 + 24);
  v4 = (_QWORD *)sub_186B270(0x480u);
  sub_CA2DB0(v4, a2, a1 + 24);
  *(_QWORD *)(v3 + 16) = v4;
  return v3;
}

