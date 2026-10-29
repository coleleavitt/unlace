void __fastcall sub_5A7120(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  void (__fastcall ***v5)(_QWORD); // rbp
  void (__fastcall ***v6)(_QWORD); // rbp

  v2 = a1[4];
  *a1 = &off_1C52298;
  if ( v2 )
  {
    v3 = a1[5];
    if ( (*(_DWORD *)(v2 + 8))-- == 1 )
      sub_15D7BC0(v3, v2);
  }
  v5 = (void (__fastcall ***)(_QWORD))a1[2];
  if ( v5 )
  {
    (**v5)(a1[2]);
    sub_186B220(v5);
  }
  v6 = (void (__fastcall ***)(_QWORD))a1[1];
  if ( v6 )
  {
    (**v6)(a1[1]);
    sub_186B220(v6);
  }
  operator delete(a1, 0x30u);
}

