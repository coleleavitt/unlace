void __fastcall sub_B71FD0(_QWORD *a1)
{
  void *v2; // rdi
  void (__fastcall ***v3)(_QWORD); // rbp

  *a1 = &off_1C57678;
  if ( (a1[1] & 2) == 0 )
  {
    v2 = (void *)a1[4];
    if ( v2 )
      sub_186B220(v2);
    v3 = (void (__fastcall ***)(_QWORD))a1[2];
    if ( v3 )
    {
      (**v3)(a1[2]);
      sub_186B220(v3);
    }
  }
  operator delete(a1, 0x28u);
}

