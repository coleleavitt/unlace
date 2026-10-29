void __fastcall sub_9AABB0(__int64 a1, __int64 a2, std::ostream *a3, int a4)
{
  __int64 v4; // r14
  __int64 v6; // rbx
  __int64 v7; // r12

  v4 = a1;
  v6 = a2;
  if ( a4 == 2 )
    goto LABEL_7;
  std::operator<<<std::char_traits<char>>();
  v7 = *(_QWORD *)(a2 + 16);
  if ( *(_BYTE *)(a1 + 2) && *(_WORD *)(v7 + 2) == 2 )
    goto LABEL_9;
LABEL_4:
  std::ostream::write(a3, *(const char **)(v7 + 16), *(_QWORD *)(v7 + 24));
  std::ostream::_M_insert<unsigned long>();
  while ( 1 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_9A7340(a1, *(char **)(*(_QWORD *)(v6 + 16) + 32LL), a3, 6u, 1);
    v6 = *(_QWORD *)(v6 + 24);
    if ( !v6 )
      break;
    v4 = a1;
    if ( *(_BYTE *)v6 != 6 )
      break;
LABEL_7:
    std::operator<<<std::char_traits<char>>();
    v7 = *(_QWORD *)(v6 + 16);
    if ( !*(_BYTE *)(v4 + 2) || *(_WORD *)(v7 + 2) != 2 )
      goto LABEL_4;
LABEL_9:
    std::operator<<<std::char_traits<char>>();
  }
  std::operator<<<std::char_traits<char>>();
  sub_9A7340(a1, (char *)v6, a3, 5u, 1);
}

