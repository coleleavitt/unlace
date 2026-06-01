void __fastcall sub_439900(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD); // rdi

  *a1 = &off_2B287B8;
  v2 = (void (__fastcall ***)(_QWORD))a1[1];
  if ( v2 )
    (**v2)(v2);
  operator delete(a1, 0x20u);
}
