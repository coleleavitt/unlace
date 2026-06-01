__int64 *__fastcall google_breakpad::PageAllocator::FreeAll(google_breakpad::PageAllocator *this)
{
  __int64 *result; // rax
  __int64 v2; // [rsp+10h] [rbp-10h]
  __int64 *i; // [rsp+18h] [rbp-8h]

  result = *((__int64 **)this + 1);
  for ( i = result; i; i = (__int64 *)v2 )
  {
    v2 = *i;
    sub_1A47F4((unsigned __int64)i, *(_QWORD *)this * i[1]);
    result = (__int64 *)v2;
  }
  return result;
}

