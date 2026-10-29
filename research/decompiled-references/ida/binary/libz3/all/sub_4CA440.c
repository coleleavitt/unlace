void __fastcall sub_4CA440(_QWORD *a1)
{
  __int64 v2; // rdi
  void (__fastcall ***v3)(_QWORD); // rbp
  void *v4; // rdi
  void (__fastcall ***v5)(_QWORD); // rbp

  *a1 = &off_1C4F270;
  v2 = a1[5];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (void (__fastcall ***)(_QWORD))a1[4];
  if ( v3 )
  {
    (**v3)(a1[4]);
    sub_186B220(v3);
  }
  v4 = (void *)a1[3];
  if ( v4 )
    sub_4D63E0(v4);
  v5 = (void (__fastcall ***)(_QWORD))a1[1];
  if ( v5 )
  {
    (**v5)(a1[1]);
    sub_186B220(v5);
  }
  operator delete(a1, 0x30u);
}

