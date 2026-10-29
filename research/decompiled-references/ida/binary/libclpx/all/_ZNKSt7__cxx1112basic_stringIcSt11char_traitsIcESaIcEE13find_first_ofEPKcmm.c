__int64 __fastcall std::string::find_first_of(__int64 *a1, const void *a2, unsigned __int64 a3, size_t a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  __int64 v8; // r14

  result = -1;
  if ( a4 )
  {
    v5 = a1[1];
    v6 = a3;
    if ( a3 < v5 )
    {
      v8 = *a1;
      do
      {
        if ( memchr(a2, *(char *)(v8 + v6), a4) )
          return v6;
        ++v6;
      }
      while ( v6 != v5 );
      return -1;
    }
  }
  return result;
}

