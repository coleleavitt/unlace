void __fastcall sub_5A82D0(void *a1)
{
  void (__fastcall ***v2)(_QWORD); // rbp
  void (__fastcall ***v3)(_QWORD); // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi

  v2 = *((void (__fastcall ****)(_QWORD))a1 + 6);
  *(_QWORD *)a1 = &off_1C52358;
  if ( v2 )
  {
    (**v2)(v2);
    sub_186B220(v2);
  }
  v3 = *((void (__fastcall ****)(_QWORD))a1 + 5);
  if ( v3 )
  {
    (**v3)(*((_QWORD *)a1 + 5));
    sub_186B220(v3);
  }
  v4 = *((_QWORD *)a1 + 4);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *((_QWORD *)a1 + 3);
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  sub_4CFE00(*((void (****)(void))a1 + 1));
  operator delete(a1, 0x38u);
}

