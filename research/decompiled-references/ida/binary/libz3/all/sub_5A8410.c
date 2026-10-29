void __fastcall sub_5A8410(void *a1)
{
  void (__fastcall ***v2)(_QWORD); // rbp
  void (__fastcall ***v3)(_QWORD); // rbp
  void (__fastcall ***v4)(_QWORD); // rbp
  void (__fastcall ***v5)(_QWORD); // rbp
  void (__fastcall ***v6)(_QWORD); // rbp
  void (__fastcall ***v7)(_QWORD); // rbp
  __int64 v8; // rdi

  v2 = *((void (__fastcall ****)(_QWORD))a1 + 9);
  *(_QWORD *)a1 = &off_1C52210;
  if ( v2 )
  {
    (**v2)(v2);
    sub_186B220(v2);
  }
  v3 = *((void (__fastcall ****)(_QWORD))a1 + 8);
  if ( v3 )
  {
    (**v3)(*((_QWORD *)a1 + 8));
    sub_186B220(v3);
  }
  sub_4CFE00(*((void (****)(void))a1 + 7));
  v4 = *((void (__fastcall ****)(_QWORD))a1 + 6);
  if ( v4 )
  {
    (**v4)(*((_QWORD *)a1 + 6));
    sub_186B220(v4);
  }
  v5 = *((void (__fastcall ****)(_QWORD))a1 + 5);
  if ( v5 )
  {
    (**v5)(*((_QWORD *)a1 + 5));
    sub_186B220(v5);
  }
  v6 = *((void (__fastcall ****)(_QWORD))a1 + 4);
  if ( v6 )
  {
    (**v6)(*((_QWORD *)a1 + 4));
    sub_186B220(v6);
  }
  v7 = *((void (__fastcall ****)(_QWORD))a1 + 3);
  if ( v7 )
  {
    (**v7)(*((_QWORD *)a1 + 3));
    sub_186B220(v7);
  }
  v8 = *((_QWORD *)a1 + 2);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  operator delete(a1, 0x50u);
}

