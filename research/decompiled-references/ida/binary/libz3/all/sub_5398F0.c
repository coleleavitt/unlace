__int64 __fastcall sub_5398F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 16);
    if ( (v3 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( v3 )
        strlen(*(const char **)(v2 + 16));
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL);
  if ( v4 == sub_539710 )
    result = *(unsigned __int8 *)(a1 + 80);
  else
    result = v4(a1);
  if ( (_BYTE)result )
    return std::__ostream_insert<char,std::char_traits<char>>();
  if ( !*(_BYTE *)(a1 + 112) )
  {
    if ( !*(_BYTE *)(a1 + 144) )
      return result;
LABEL_13:
    std::__ostream_insert<char,std::char_traits<char>>();
    return sub_5DE470(a1 + 120, a2);
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  result = sub_5DE470(a1 + 88, a2);
  if ( *(_BYTE *)(a1 + 144) )
    goto LABEL_13;
  return result;
}

