__int64 __fastcall sub_D26350(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = sub_186B270(0x50u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C5A458;
  *(_QWORD *)(v2 + 16) = a2;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 32) = a2;
  sub_16744A0(v2 + 40, a2);
  sub_1684300(v2 + 64, a2);
  return v2;
}

