__int64 __fastcall sub_375500(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = sub_186B270(0x28u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C4D800;
  *(_QWORD *)(v2 + 16) = a2;
  sub_1858590(v2 + 24, a1 + 24);
  *(_QWORD *)(v2 + 32) = 0;
  return v2;
}

