void __fastcall sub_956270(_QWORD *a1)
{
  void *v1; // rbp
  void (__fastcall ***v2)(_QWORD); // rbp
  void (__fastcall ***v3)(_QWORD); // rbp
  void (__fastcall ***v4)(_QWORD); // rbp

  v1 = (void *)a1[7];
  *a1 = &off_1C55E60;
  if ( v1 )
  {
    sub_ADEC40(v1);
    sub_186B220(v1);
  }
  v2 = (void (__fastcall ***)(_QWORD))a1[6];
  if ( v2 )
  {
    (**v2)(a1[6]);
    sub_186B220(v2);
  }
  v3 = (void (__fastcall ***)(_QWORD))a1[5];
  if ( v3 )
  {
    (**v3)(a1[5]);
    sub_186B220(v3);
  }
  v4 = (void (__fastcall ***)(_QWORD))a1[4];
  if ( v4 )
  {
    (**v4)(a1[4]);
    sub_186B220(v4);
  }
  operator delete(a1, 0x50u);
}

