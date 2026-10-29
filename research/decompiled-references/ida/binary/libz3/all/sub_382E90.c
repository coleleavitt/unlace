__int64 __fastcall sub_382E90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C4DC18;
  *(_QWORD *)(v2 + 16) = a2;
  sub_1858590(v2 + 24, a1 + 24);
  return v2;
}

