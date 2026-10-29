void __fastcall __noreturn sub_16270E(__int64 a1)
{
  _QWORD *exception; // rax

  exception = __cxa_allocate_exception(0x10u);
  *exception = &off_1C74BC8;
  exception[1] = a1;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'pb2bv_tactic::non_pb, sub_C9F480);
}

