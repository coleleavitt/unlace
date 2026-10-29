void __fastcall sub_5903C0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void (__fastcall ***v4)(_QWORD); // rbp

  *a1 = &off_1C51A38;
  v2 = a1[3];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[2];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (void (__fastcall ***)(_QWORD))a1[1];
  if ( v4 )
  {
    (**v4)(a1[1]);
    sub_186B220(v4);
  }
  operator delete(a1, 0x20u);
}

