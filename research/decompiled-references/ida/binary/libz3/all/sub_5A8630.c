void __fastcall sub_5A8630(void *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  void (__fastcall ***v6)(_QWORD); // rbp
  void (__fastcall ***v7)(_QWORD); // rbp
  void (__fastcall ***v8)(_QWORD); // rbp
  void (__fastcall ***v9)(_QWORD); // rbp
  void (__fastcall ***v10)(_QWORD); // rbp
  void (__fastcall ***v11)(_QWORD); // rbp
  __int64 v12; // rdi
  __int64 v13; // rdi

  *(_QWORD *)a1 = &off_1C52330;
  v2 = *((_QWORD *)a1 + 16);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = *((_QWORD *)a1 + 15);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *((_QWORD *)a1 + 14);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *((_QWORD *)a1 + 13);
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *((void (__fastcall ****)(_QWORD))a1 + 11);
  if ( v6 )
  {
    (**v6)(*((_QWORD *)a1 + 11));
    sub_186B220(v6);
  }
  sub_4CFE00(*((void (****)(void))a1 + 10));
  v7 = *((void (__fastcall ****)(_QWORD))a1 + 9);
  if ( v7 )
  {
    (**v7)(*((_QWORD *)a1 + 9));
    sub_186B220(v7);
  }
  v8 = *((void (__fastcall ****)(_QWORD))a1 + 8);
  if ( v8 )
  {
    (**v8)(*((_QWORD *)a1 + 8));
    sub_186B220(v8);
  }
  v9 = *((void (__fastcall ****)(_QWORD))a1 + 7);
  if ( v9 )
  {
    (**v9)(*((_QWORD *)a1 + 7));
    sub_186B220(v9);
  }
  sub_568110(*((void (****)(void))a1 + 6));
  v10 = *((void (__fastcall ****)(_QWORD))a1 + 5);
  if ( v10 )
  {
    (**v10)(*((_QWORD *)a1 + 5));
    sub_186B220(v10);
  }
  sub_568110(*((void (****)(void))a1 + 4));
  v11 = *((void (__fastcall ****)(_QWORD))a1 + 3);
  if ( v11 )
  {
    (**v11)(*((_QWORD *)a1 + 3));
    sub_186B220(v11);
  }
  v12 = *((_QWORD *)a1 + 2);
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = *((_QWORD *)a1 + 1);
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  operator delete(a1, 0x88u);
}

