void __fastcall __noreturn sub_A8ADA(__int64 a1)
{
  _QWORD *exception; // rax

  exception = __cxa_allocate_exception(0x10u);
  exception[1] = a1;
  *exception = &off_1C63940;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'std::bad_variant_access, sub_25A0E0);
}

