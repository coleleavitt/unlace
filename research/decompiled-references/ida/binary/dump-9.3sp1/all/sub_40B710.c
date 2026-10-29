void __fastcall sub_40B710(_QWORD *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*a1 + 416LL);
    if ( (char *)v1 == (char *)sub_3EDD10 )
    {
      sub_3EDB60(a1);
      operator delete(a1, 0xEE0u);
    }
    else
    {
      v1();
    }
  }
}
