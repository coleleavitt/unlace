__int64 __fastcall std::get_temporary_buffer<unsigned long>(__int64 a1)
{
  __int64 v1; // rax
  __int64 i; // rbx
  __int64 result; // rax

  v1 = 0xFFFFFFFFFFFFFFFLL;
  if ( a1 <= 0xFFFFFFFFFFFFFFFLL )
    v1 = a1;
  if ( a1 <= 0 )
    return 0;
  for ( i = v1; ; i = (i + 1) >> 1 )
  {
    result = operator new(8 * i, (const std::nothrow_t *)&std::nothrow);
    if ( result )
      break;
    if ( i == 1 )
      return 0;
  }
  return result;
}

