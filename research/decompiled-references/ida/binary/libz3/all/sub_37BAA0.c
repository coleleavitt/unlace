void __fastcall sub_37BAA0(_QWORD *a1)
{
  void (__fastcall ***v1)(_QWORD); // rbp

  v1 = (void (__fastcall ***)(_QWORD))a1[5];
  *a1 = &off_1C64D38;
  if ( v1 )
  {
    (**v1)(v1);
    sub_186B220(v1);
  }
  operator delete(a1, 0x30u);
}

