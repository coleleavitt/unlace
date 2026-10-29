void __fastcall sub_283EB0(_QWORD *a1)
{
  void (__fastcall ***v1)(_QWORD); // rbp

  v1 = (void (__fastcall ***)(_QWORD))a1[3];
  *a1 = &off_1C4CB30;
  if ( v1 )
  {
    (**v1)(v1);
    sub_186B220(v1);
  }
  sub_18572D0(a1 + 4);
}

