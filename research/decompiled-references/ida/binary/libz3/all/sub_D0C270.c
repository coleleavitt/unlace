__int64 __fastcall sub_D0C270(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax

  v2 = sub_186B270(0x18u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C5A0B8;
  v3 = (_QWORD *)sub_186B270(0x10u);
  *v3 = a2;
  *(_QWORD *)(v2 + 16) = v3;
  return v2;
}

