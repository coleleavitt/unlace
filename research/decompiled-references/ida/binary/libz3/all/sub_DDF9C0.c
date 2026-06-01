__int64 __fastcall sub_DDF9C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  int v5; // eax

  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = *(_QWORD *)(a1 + 24);
  if ( (v4 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  else
  {
    if ( v4 )
      strlen(*(const char **)(a1 + 24));
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v5 = *(_DWORD *)(a1 + 32);
  switch ( v5 )
  {
    case 1:
      sub_39A600(a2, *(const char **)(*(_QWORD *)(a3 + 8LL * *(int *)(a1 + 40)) + 24LL));
      break;
    case 2:
      sub_39A600(a2, *(const char **)(a1 + 48));
      break;
    case 0:
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 48LL))(*(_QWORD *)(a1 + 40), a2);
      break;
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

