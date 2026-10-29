void __fastcall sub_C9F930(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdi

  v2 = a1[69];
  *a1 = &off_1C591A0;
  if ( v2 )
  {
    v3 = a1[70];
    v4 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v3, v2);
  }
  v5 = a1[66];
  *a1 = &off_1C59180;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[64];
  if ( v6 )
  {
    v7 = a1[65];
    v4 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v7, v6);
  }
  v8 = a1[62];
  if ( v8 )
  {
    v9 = a1[63];
    v4 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v9, v8);
  }
  v10 = a1[60];
  if ( v10 )
  {
    v11 = a1[61];
    v4 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v11, v10);
  }
  a1[41] = &qword_1C637E8;
  sub_15841B0(a1 + 41);
  a1[21] = &qword_1C637E8;
  sub_15841B0(a1 + 21);
  v12 = a1[20];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  sub_15841B0(a1);
  operator delete(a1, 0x238u);
}

