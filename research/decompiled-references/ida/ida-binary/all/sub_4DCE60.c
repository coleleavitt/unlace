void __fastcall std::__future_base::_State_baseV2__::vfunc_1(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD); // rdi

  *a1 = &std::__future_base::_State_baseV2___vtable;
  v2 = (void (__fastcall ***)(_QWORD))a1[1];
  if ( v2 )
    (**v2)(v2);
  operator delete(a1, 0x20u);
}
