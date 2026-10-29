void __fastcall sub_4CBBC0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi
  void (__fastcall ***v6)(_QWORD); // rbp
  void (__fastcall ***v7)(_QWORD); // rbp

  *a1 = &off_1C4F1C8;
  v2 = a1[5];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[3];
  if ( v3 )
  {
    v4 = a1[4];
    if ( (*(_DWORD *)(v3 + 8))-- == 1 )
      sub_15D7BC0(v4, v3);
  }
  v6 = (void (__fastcall ***)(_QWORD))a1[2];
  if ( v6 )
  {
    (**v6)(a1[2]);
    sub_186B220(v6);
  }
  v7 = (void (__fastcall ***)(_QWORD))a1[1];
  if ( v7 )
  {
    (**v7)(a1[1]);
    sub_186B220(v7);
  }
  operator delete(a1, 0x30u);
}

