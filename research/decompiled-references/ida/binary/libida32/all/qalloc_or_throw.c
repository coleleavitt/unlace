__int64 __fastcall qalloc_or_throw(__int64 a1)
{
  __int64 result; // rax

  result = qalloc(a1);
  if ( !result )
    std::__throw_bad_alloc();
  return result;
}

