__int64 __fastcall std::string::rfind(__int64 *a1, const void *a2, unsigned __int64 a3, size_t a4)
{
  __int64 i; // rbx
  size_t v5; // rax
  size_t v6; // rax
  __int64 v8; // r13

  i = -1;
  v5 = a1[1];
  if ( a4 <= v5 )
  {
    v6 = v5 - a4;
    v8 = *a1;
    if ( v6 <= a3 )
      a3 = v6;
    for ( i = a3; a4 && memcmp((const void *)(v8 + i), a2, a4); --i )
    {
      if ( !i )
        return -1;
    }
  }
  return i;
}

