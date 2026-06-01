__int64 __fastcall sub_1A5521(const stack_t *a1, stack_t *a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-18h]

  v3 = sys_sigaltstack(a1, a2);
  if ( v3 > 0xFFFFFFFFFFFFF000LL )
  {
    *__errno_location() = -(int)v3;
    return -1;
  }
  return v3;
}

