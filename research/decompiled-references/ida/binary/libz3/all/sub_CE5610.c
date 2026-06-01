__int64 __fastcall sub_CE5610(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = sub_186B270(0x30u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C598B8;
  sub_1858590(v2 + 16, a2);
  sub_D305E0(v2 + 24, a1, a2);
  return sub_EE8D70(v2);
}

