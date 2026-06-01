__int64 __fastcall std::string::find_last_not_of(__int64 *a1, const void *a2, unsigned __int64 a3, size_t a4)
{
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // r13

  v4 = -1;
  v5 = a1[1];
  if ( v5 )
  {
    v6 = v5 - 1;
    v7 = *a1;
    if ( v6 <= a3 )
      a3 = v6;
    v4 = a3;
    do
    {
      if ( !a4 )
        break;
      if ( !memchr(a2, *(char *)(v7 + v4), a4) )
        break;
    }
    while ( v4-- != 0 );
  }
  return v4;
}
