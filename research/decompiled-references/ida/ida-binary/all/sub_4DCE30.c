__int64 (__fastcall **__fastcall std::__future_base::_State_baseV2__::vfunc_0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 (__fastcall ***v2)(_QWORD); // rdi

  result = &std::__future_base::_State_baseV2___vtable;
  *a1 = &std::__future_base::_State_baseV2___vtable;
  v2 = (__int64 (__fastcall ***)(_QWORD))a1[1];
  if ( v2 )
    return (__int64 (__fastcall **)())(**v2)(v2);
  return result;
}
