void __fastcall sub_2A5FC0(_QWORD *a1)
{
  void (__fastcall ***v1)(_QWORD); // rbp

  v1 = (void (__fastcall ***)(_QWORD))a1[3];
  *a1 = &off_1C4CC08;
  if ( v1 )
  {
    (**v1)(v1);
    sub_186B220(v1);
  }
  operator delete(a1, 0x20u);
}

