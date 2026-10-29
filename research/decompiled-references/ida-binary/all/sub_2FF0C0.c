void (*__fastcall merge_handler_t__::vfunc_5(__int64 a1))()
{
  void (*v1)(); // rax
  void (*result)(); // rax

  v1 = *(void (**)())(**(_QWORD **)(a1 + 56) + 112LL);
  if ( v1 == nullsub_108 )
  {
    result = *(void (**)())(**(_QWORD **)(a1 + 64) + 112LL);
    if ( result == nullsub_108 )
      return result;
    return (void (*)())((__int64 (*)(void))result)();
  }
  v1();
  result = *(void (**)())(**(_QWORD **)(a1 + 64) + 112LL);
  if ( result != nullsub_108 )
    return (void (*)())((__int64 (*)(void))result)();
  return result;
}
