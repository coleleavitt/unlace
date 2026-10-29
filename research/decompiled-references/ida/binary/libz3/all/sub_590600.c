void __fastcall sub_590600(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD); // rbp
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi

  v2 = (void (__fastcall ***)(_QWORD))a1[5];
  *a1 = &off_1C51A60;
  if ( v2 )
  {
    (**v2)(v2);
    sub_186B220(v2);
  }
  v3 = a1[3];
  if ( v3 )
  {
    v4 = a1[4];
    if ( (*(_DWORD *)(v3 + 8))-- == 1 )
      sub_15D7BC0(v4, v3);
  }
  v6 = a1[2];
  *a1 = qword_1C66740;
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[1];
  *a1 = qword_1C66718;
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  operator delete(a1, 0x30u);
}

