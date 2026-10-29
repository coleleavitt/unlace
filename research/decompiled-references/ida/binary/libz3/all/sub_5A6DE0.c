void __fastcall sub_5A6DE0(_QWORD *a1)
{
  void (__fastcall ***v1)(_QWORD); // rbp

  v1 = (void (__fastcall ***)(_QWORD))a1[1];
  *a1 = &off_1C52238;
  if ( v1 )
  {
    (**v1)(v1);
    sub_186B220(v1);
  }
  operator delete(a1, 0x10u);
}

