__int64 __fastcall sub_37DAD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rax

  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C4DA68;
  sub_1858590(v2 + 24, a1 + 24);
  v4 = (_QWORD *)sub_186B270(8u);
  *v4 = a2;
  *(_QWORD *)(v3 + 16) = v4;
  return v3;
}

