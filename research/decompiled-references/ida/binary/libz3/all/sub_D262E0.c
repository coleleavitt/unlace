__int64 __fastcall sub_D262E0(__int64 a1)
{
  __int64 v1; // rbx

  v1 = sub_186B270(0x50u);
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)v1 = &off_1C5A458;
  *(_QWORD *)(v1 + 16) = a1;
  *(_QWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 32) = a1;
  sub_16744A0(v1 + 40, a1);
  sub_1684300(v1 + 64, a1);
  return sub_EE8D70(v1);
}

