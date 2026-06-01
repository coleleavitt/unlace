void __fastcall sub_9CE8F0(__int64 a1, __int64 a2, std::ostream *a3, int a4)
{
  __int64 v4; // r14
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rax

  v4 = a1;
  v6 = a2;
  if ( a4 == 1 )
  {
    std::operator<<<std::char_traits<char>>(a3, "(");
  }
  else
  {
    if ( a4 == 2 )
      goto LABEL_9;
    std::operator<<<std::char_traits<char>>(a3, "\\(");
  }
  v7 = *(_QWORD *)(a2 + 16);
  if ( *(_BYTE *)(a1 + 2) && *(_WORD *)(v7 + 2) == 2 )
    goto LABEL_11;
LABEL_6:
  v8 = std::ostream::write(a3, *(const char **)(v7 + 16), *(_QWORD *)(v7 + 24));
  std::ostream::_M_insert<unsigned long>(v8, *(unsigned int *)(v7 + 4));
  while ( 1 )
  {
    std::__ostream_insert<char,std::char_traits<char>>(a3, ": ", 2);
    sub_9CB080(a1, *(_QWORD *)(*(_QWORD *)(v6 + 16) + 32LL), a3, 6u, 1);
    v6 = *(_QWORD *)(v6 + 24);
    if ( !v6 )
      break;
    v4 = a1;
    if ( *(_BYTE *)v6 != 6 )
      break;
LABEL_9:
    std::operator<<<std::char_traits<char>>(a3, ", ");
    v7 = *(_QWORD *)(v6 + 16);
    if ( !*(_BYTE *)(v4 + 2) || *(_WORD *)(v7 + 2) != 2 )
      goto LABEL_6;
LABEL_11:
    std::operator<<<std::char_traits<char>>(a3, "this");
  }
  std::operator<<<std::char_traits<char>>(a3, ")");
  sub_9CB080(a1, v6, a3, 5u, 1);
}
