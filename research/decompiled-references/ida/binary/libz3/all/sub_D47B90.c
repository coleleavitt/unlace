void __fastcall sub_D47B90(_QWORD *a1)
{
  void (__fastcall ***v2)(void *); // rbp
  bool v3; // zf
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi

  v2 = (void (__fastcall ***)(void *))a1[70];
  *a1 = &off_1C5A688;
  if ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 2))-- == 1;
    if ( v3 )
    {
      (**v2)(v2);
      sub_186B220(v2);
    }
  }
  sub_13A2BD0(a1 + 68);
  v4 = a1[66];
  *a1 = &off_1C5A668;
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[64];
  if ( v5 )
  {
    v6 = a1[65];
    v3 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v3 )
      sub_15D7BC0(v6, v5);
  }
  v7 = a1[62];
  if ( v7 )
  {
    v8 = a1[63];
    v3 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v3 )
      sub_15D7BC0(v8, v7);
  }
  v9 = a1[60];
  if ( v9 )
  {
    v10 = a1[61];
    v3 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v3 )
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
  operator delete(a1, 0x250u);
}

