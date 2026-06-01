void __fastcall sub_590A30(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD); // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi

  v2 = (void (__fastcall ***)(_QWORD))a1[3];
  *a1 = &off_1C519B0;
  if ( v2 )
  {
    (**v2)(v2);
    sub_186B220(v2);
  }
  v3 = a1[2];
  *a1 = qword_1C66740;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[1];
  *a1 = qword_1C66718;
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  operator delete(a1, 0x20u);
}

