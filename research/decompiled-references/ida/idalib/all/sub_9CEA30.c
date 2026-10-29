void __fastcall sub_9CEA30(__int64 a1, __int64 a2, std::ostream *a3, char a4)
{
  _BYTE *v7; // rsi

  v7 = *(_BYTE **)(a2 + 16);
  if ( *v7 == 10 )
  {
    sub_9CEA30(a1, v7, a3, 1);
    std::operator<<<std::char_traits<char>>(a3, ", ");
  }
  else
  {
    sub_9CB080(a1, (__int64)v7, a3, 1u, 1);
    std::operator<<<std::char_traits<char>>(a3, "(");
  }
  sub_9CB080(a1, *(_QWORD *)(a2 + 24), a3, 6u, 1);
  if ( !a4 )
    std::operator<<<std::char_traits<char>>(a3, ")$");
}
