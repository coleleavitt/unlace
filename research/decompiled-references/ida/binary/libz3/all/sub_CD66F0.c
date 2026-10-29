__int64 __fastcall sub_CD66F0(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rbp

  v1 = sub_186B270(0x18u);
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)v1 = &off_1C596C8;
  v2 = (_QWORD *)sub_186B270(0x10u);
  *v2 = a1;
  v3 = v2;
  sub_148CE80(v2 + 1, a1);
  *(_QWORD *)(v1 + 16) = v3;
  return v1;
}

