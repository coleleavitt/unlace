__int64 __fastcall std::string::find_last_of(__int64 *a1, const void *a2, unsigned __int64 a3, size_t a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v7; // r13
  unsigned __int64 i; // rbx

  v4 = a1[1];
  if ( !v4 || !a4 )
    return -1;
  v5 = v4 - 1;
  v7 = *a1;
  if ( v5 <= a3 )
    a3 = v5;
  for ( i = a3; !memchr(a2, *(char *)(v7 + i), a4); --i )
  {
    if ( !i )
      return -1;
  }
  return i;
}

