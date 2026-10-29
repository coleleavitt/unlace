__int64 __fastcall sub_E67F80(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi
  bool v5; // zf
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdi

  *a1 = &off_1C5D1B8;
  v2 = a1[66];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[64];
  if ( v3 )
  {
    v4 = a1[65];
    v5 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v4, v3);
  }
  v6 = a1[62];
  if ( v6 )
  {
    v7 = a1[63];
    v5 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v7, v6);
  }
  v8 = a1[60];
  if ( v8 )
  {
    v9 = a1[61];
    v5 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v9, v8);
  }
  a1[41] = &qword_1C637E8;
  sub_15841B0(a1 + 41);
  a1[21] = &qword_1C637E8;
  sub_15841B0(a1 + 21);
  v10 = a1[20];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  return sub_15841B0(a1);
}

