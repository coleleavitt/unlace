__int64 __fastcall google_breakpad::FindElfSoNameFromDynamicSection<google_breakpad::ElfClass64>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  unsigned __int64 v7; // rax
  _QWORD *i; // [rsp+58h] [rbp-8h]

  for ( i = a1; ; i += 2 )
  {
    if ( i >= &a1[2 * (a2 >> 4)] )
      return 0;
    if ( *i == 14 )
      break;
  }
  if ( a4 <= i[1] )
    return 0;
  if ( a4 - i[1] < a6 )
    v7 = a4 - i[1];
  else
    v7 = a6;
  my_strlcpy(a5, i[1] + a3, v7);
  return 1;
}

