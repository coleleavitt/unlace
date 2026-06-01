__int64 __fastcall sub_71A630(__int64 a1, int *a2)
{
  void *vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h] BYREF

  sub_2FE070((char **)&vars0, a2);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( vars0 != &vars10 )
    operator delete(vars0, vars10 + 1);
  return a1;
}

