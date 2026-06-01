void __fastcall sub_400B90(_QWORD *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*a1 + 416LL);
    if ( (char *)v1 == (char *)sub_3E30D0 )
    {
      sub_3E2F20(a1);
      operator delete(a1, 0xEE0u);
    }
    else
    {
      v1();
    }
  }
}
