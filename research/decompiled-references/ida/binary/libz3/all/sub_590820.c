void __fastcall sub_590820(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD); // rbp
  __int64 v3; // rdi

  v2 = (void (__fastcall ***)(_QWORD))a1[2];
  *a1 = &off_1C51940;
  if ( v2 )
  {
    (**v2)(v2);
    sub_186B220(v2);
  }
  v3 = a1[1];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  operator delete(a1, 0x18u);
}

