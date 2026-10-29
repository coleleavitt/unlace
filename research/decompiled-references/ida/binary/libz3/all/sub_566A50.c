void __fastcall sub_566A50(_QWORD *a1)
{
  void (__fastcall ***v1)(_QWORD); // rbp
  void (__fastcall ***v2)(_QWORD); // rbp

  v1 = (void (__fastcall ***)(_QWORD))a1[2];
  *a1 = &off_1C51228;
  if ( v1 )
  {
    (**v1)(v1);
    sub_186B220(v1);
  }
  v2 = (void (__fastcall ***)(_QWORD))a1[1];
  if ( v2 )
  {
    (**v2)(a1[1]);
    sub_186B220(v2);
  }
  operator delete(a1, 0x18u);
}

