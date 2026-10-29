char __fastcall sub_1153090(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf

  sub_1148C00(a1, a2, a3, a4);
  v4 = *(_BYTE *)(a1 + 4880) == 0;
  *(_QWORD *)a1 = off_2C0CEC8;
  if ( v4 )
  {
    sub_1150E40(a1 + 3808, *(__int64 **)(a1 + 3736), *(_QWORD *)(a1 + 3800));
    *(_BYTE *)(a1 + 4880) = 1;
  }
  return sub_114FAB0(a1 + 3808);
}

