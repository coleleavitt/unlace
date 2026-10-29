__int64 __fastcall sub_D0C1F0(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rax

  v1 = sub_186B270(0x18u);
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)v1 = &off_1C5A0B8;
  v2 = (_QWORD *)sub_186B270(0x10u);
  *v2 = a1;
  *(_QWORD *)(v1 + 16) = v2;
  return sub_EE8D70(v1);
}

