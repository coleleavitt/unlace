__int64 __fastcall qrealloc_or_throw(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFELL || (result = qrealloc(a1)) == 0 )
    std::__throw_bad_alloc();
  return result;
}
