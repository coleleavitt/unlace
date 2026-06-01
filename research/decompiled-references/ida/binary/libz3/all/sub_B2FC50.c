void __fastcall sub_B2FC50(int *a1)
{
  int v1; // eax
  void *v2; // [rsp+0h] [rbp-38h] BYREF
  __int64 v3; // [rsp+10h] [rbp-28h] BYREF

  v1 = *a1;
  if ( *a1 == 1 )
  {
    sub_1850940(&v2, qword_1C7F2C0, a1 + 2);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v2 != &v3 )
      operator delete(v2, v3 + 1);
  }
  else if ( v1 == 2 || !v1 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
  }
}

