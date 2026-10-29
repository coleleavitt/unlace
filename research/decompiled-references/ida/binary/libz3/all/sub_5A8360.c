void __fastcall sub_5A8360(void *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void (__fastcall ***v4)(_QWORD); // rbp
  __int64 v5; // rdi
  __int64 v6; // rdi

  *(_QWORD *)a1 = &off_1C52198;
  v2 = *((_QWORD *)a1 + 7);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = *((_QWORD *)a1 + 6);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *((void (__fastcall ****)(_QWORD))a1 + 4);
  if ( v4 )
  {
    (**v4)(*((_QWORD *)a1 + 4));
    sub_186B220(v4);
  }
  sub_4CFE00(*((void (****)(void))a1 + 3));
  v5 = *((_QWORD *)a1 + 2);
  *(_QWORD *)a1 = qword_1C66768;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *((_QWORD *)a1 + 1);
  *(_QWORD *)a1 = qword_1C66718;
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  operator delete(a1, 0x40u);
}

