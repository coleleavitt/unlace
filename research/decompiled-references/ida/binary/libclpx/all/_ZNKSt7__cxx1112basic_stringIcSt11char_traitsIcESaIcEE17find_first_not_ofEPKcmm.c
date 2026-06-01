__int64 __fastcall std::string::find_first_not_of(__int64 *a1, const void *a2, unsigned __int64 a3, size_t a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  __int64 v8; // r14

  result = -1;
  v5 = a1[1];
  if ( a3 < v5 )
  {
    v6 = a3;
    v8 = *a1;
    if ( a4 )
    {
      while ( memchr(a2, *(char *)(v8 + v6), a4) )
      {
        if ( ++v6 == v5 )
          return -1;
      }
    }
    return v6;
  }
  return result;
}

