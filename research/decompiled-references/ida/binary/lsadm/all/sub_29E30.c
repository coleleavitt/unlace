void *__fastcall sub_29E30(void *a1, unsigned __int64 a2)
{
  void *result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFELL || (result = sub_29DA0(a1, a2)) == nullptr )
    std::__throw_bad_alloc();
  return result;
}

