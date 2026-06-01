void __fastcall sub_900E40(char *a1)
{
  char *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi

  v2 = a1 + 568;
  *((_QWORD *)v2 - 71) = &off_1C6F2F8;
  *((_QWORD *)v2 - 67) = &off_1C52718;
  sub_5F15C0((__int64)v2);
  v3 = *((_QWORD *)a1 + 70);
  *((_QWORD *)a1 + 4) = &off_1C526F8;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *((_QWORD *)a1 + 68);
  if ( v4 )
  {
    v5 = *((_QWORD *)a1 + 69);
    v6 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v5, v4);
  }
  v7 = *((_QWORD *)a1 + 66);
  if ( v7 )
  {
    v8 = *((_QWORD *)a1 + 67);
    v6 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v8, v7);
  }
  v9 = *((_QWORD *)a1 + 64);
  if ( v9 )
  {
    v10 = *((_QWORD *)a1 + 65);
    v6 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v10, v9);
  }
  *((_QWORD *)a1 + 45) = &qword_1C637E8;
  sub_15841B0(a1 + 360);
  *((_QWORD *)a1 + 25) = &qword_1C637E8;
  sub_15841B0(a1 + 200);
  v11 = *((_QWORD *)a1 + 24);
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  sub_15841B0(a1 + 32);
  operator delete(a1, 0x430u);
}

