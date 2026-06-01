__int64 __fastcall std::string::find_first_of(_QWORD *a1, const void *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v6; // r13

  if ( !a4 )
    return -1;
  v6 = a1[1];
  while ( 1 )
  {
    if ( v6 <= a3 )
      return -1;
    if ( memchr(a2, *(char *)(*a1 + a3), a4) )
      break;
    ++a3;
  }
  return a3;
}

