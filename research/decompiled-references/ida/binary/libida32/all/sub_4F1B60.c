void __fastcall sub_4F1B60(std::__future_base::_Result_base *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v1 == (char *)sub_4F19D0 )
    {
      *(_QWORD *)a1 = &off_2B036D8;
      std::__future_base::_Result_base::~_Result_base(a1);
      operator delete(a1, 0x38u);
    }
    else
    {
      v1();
    }
  }
}

