void __fastcall sub_8FFAA0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi

  v2 = a1 + 67;
  *(v2 - 67) = &off_1C55A60;
  *v2 = off_1C61CA8;
  sub_1535030();
  v3 = a1[66];
  *a1 = &off_1C55A40;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[64];
  if ( v4 )
  {
    v5 = a1[65];
    v6 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v5, v4);
  }
  v7 = a1[62];
  if ( v7 )
  {
    v8 = a1[63];
    v6 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v8, v7);
  }
  v9 = a1[60];
  if ( v9 )
  {
    v10 = a1[61];
    v6 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v10, v9);
  }
  a1[41] = &qword_1C637E8;
  sub_15841B0(a1 + 41);
  a1[21] = &qword_1C637E8;
  sub_15841B0(a1 + 21);
  v11 = a1[20];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  sub_15841B0(a1);
  operator delete(a1, 0x2A0u);
}

