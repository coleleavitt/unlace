void __fastcall sub_5A7230(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD); // rbp
  void (__fastcall ***v3)(_QWORD); // rbp
  void (__fastcall ***v4)(_QWORD); // rbp
  __int64 v5; // rdi
  __int64 v6; // rdi

  v2 = (void (__fastcall ***)(_QWORD))a1[5];
  *a1 = &off_1C52260;
  if ( v2 )
  {
    (**v2)(v2);
    sub_186B220(v2);
  }
  v3 = (void (__fastcall ***)(_QWORD))a1[4];
  if ( v3 )
  {
    (**v3)(a1[4]);
    sub_186B220(v3);
  }
  v4 = (void (__fastcall ***)(_QWORD))a1[3];
  if ( v4 )
  {
    (**v4)(a1[3]);
    sub_186B220(v4);
  }
  v5 = a1[2];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[1];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  operator delete(a1, 0x30u);
}

