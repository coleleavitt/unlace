void __fastcall sub_57D680(_QWORD *a1)
{
  void (__fastcall ***v1)(_QWORD); // rbp

  v1 = (void (__fastcall ***)(_QWORD))a1[2];
  *a1 = &off_1C516A0;
  if ( v1 )
  {
    (**v1)(v1);
    sub_186B220(v1);
  }
  operator delete(a1, 0x18u);
}

