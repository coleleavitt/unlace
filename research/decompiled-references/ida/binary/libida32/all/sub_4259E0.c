void __fastcall sub_4259E0(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD); // rdi

  *a1 = &off_2AFE7F8;
  v2 = (void (__fastcall ***)(_QWORD))a1[1];
  if ( v2 )
    (**v2)(v2);
  operator delete(a1, 0x20u);
}

