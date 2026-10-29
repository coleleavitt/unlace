void __fastcall sub_4CF280(__int64 a1)
{
  void (__fastcall ***v1)(_QWORD); // rbp

  v1 = *(void (__fastcall ****)(_QWORD))(a1 + 16);
  *(_QWORD *)a1 = &off_1C4EE18;
  if ( v1 )
  {
    (**v1)(v1);
    sub_186B220(v1);
  }
  sub_4CF1F0(*(void (****)(void))(a1 + 8));
}

