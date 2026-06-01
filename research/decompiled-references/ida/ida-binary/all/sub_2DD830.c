void __fastcall refcnted_regex_t__::vfunc_0(void *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v1 == (char *)refcnted_regex_t__::vfunc_2 )
    {
      *(_QWORD *)a1 = &refcnted_regex_t___vtable;
      qregfree();
      operator delete(a1, 0x30u);
    }
    else
    {
      v1();
    }
  }
}
