__int64 __fastcall sub_9CAE30(__int64 a1, __int64 a2, std::ostream *a3)
{
  __int64 v3; // rbp
  unsigned int v5; // r13d
  size_t v7; // rax
  __int64 v8; // rax
  size_t v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = a2;
  if ( *(_BYTE *)a2 == 5 )
  {
    v5 = 1;
    v9 = j__strlen("let ");
    std::__ostream_insert<char,std::char_traits<char>>(a3, "let ", v9);
    v10 = std::ostream::write(a3, *(const char **)(a2 + 16), *(_QWORD *)(a2 + 24));
    v11 = std::ostream::_M_insert<unsigned long>(v10, *(unsigned int *)(a2 + 4));
    std::operator<<<std::char_traits<char>>(v11, " = ");
    v3 = *(_QWORD *)(a2 + 32);
  }
  else
  {
    v5 = 0;
    if ( *(_BYTE *)a2 != 16 )
    {
      v7 = j__strlen("let _x");
      std::__ostream_insert<char,std::char_traits<char>>(a3, "let _x", v7);
      v8 = std::ostream::_M_insert<unsigned long>(a3, *(unsigned int *)(a2 + 4));
      std::operator<<<std::char_traits<char>>(v8, " = ");
    }
  }
  sub_9CB080(a1, v3, a3, 6, v5);
  std::operator<<<std::char_traits<char>>(a3, ";");
  return std::operator<<<std::char_traits<char>>(a3, "\n");
}
