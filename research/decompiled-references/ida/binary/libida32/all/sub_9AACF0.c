void __fastcall sub_9AACF0(__int64 a1, __int64 a2, std::ostream *a3, char a4)
{
  char *v7; // rsi

  v7 = *(char **)(a2 + 16);
  if ( *v7 == 10 )
    sub_9AACF0(a1, v7, a3, 1);
  else
    sub_9A7340(a1, v7, a3, 1u, 1);
  std::operator<<<std::char_traits<char>>();
  sub_9A7340(a1, *(char **)(a2 + 24), a3, 6u, 1);
  if ( !a4 )
    std::operator<<<std::char_traits<char>>();
}

