__int64 __fastcall sub_900D20(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi

  v2 = (__int64)(a1 + 71);
  *(_QWORD *)(v2 - 568) = &off_1C6F2F8;
  *(_QWORD *)(v2 - 536) = &off_1C52718;
  sub_5F15C0(v2);
  v3 = a1[70];
  a1[4] = &off_1C526F8;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[68];
  if ( v4 )
  {
    v5 = a1[69];
    v6 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v5, v4);
  }
  v7 = a1[66];
  if ( v7 )
  {
    v8 = a1[67];
    v6 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v8, v7);
  }
  v9 = a1[64];
  if ( v9 )
  {
    v10 = a1[65];
    v6 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v10, v9);
  }
  a1[45] = &qword_1C637E8;
  sub_15841B0(a1 + 45);
  a1[25] = &qword_1C637E8;
  sub_15841B0(a1 + 25);
  v11 = a1[24];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  return sub_15841B0(a1 + 4);
}

