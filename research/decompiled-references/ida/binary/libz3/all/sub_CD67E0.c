__int64 __fastcall sub_CD67E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rbp

  v2 = sub_186B270(0x18u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C596C8;
  v3 = (_QWORD *)sub_186B270(0x10u);
  *v3 = a2;
  v4 = v3;
  sub_148CE80(v3 + 1, a2);
  *(_QWORD *)(v2 + 16) = v4;
  return v2;
}

