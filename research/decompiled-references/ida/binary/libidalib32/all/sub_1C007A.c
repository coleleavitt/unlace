std::string *__fastcall sub_1C007A(std::string *a1, __int64 a2, unsigned __int64 a3)
{
  char s[3]; // [rsp+29h] [rbp-17h] BYREF
  unsigned int i; // [rsp+2Ch] [rbp-14h]

  std::string::string(a1);
  for ( i = 0; a3 > i; ++i )
  {
    snprintf(s, 3u, "%02X", *(unsigned __int8 *)(i + a2));
    std::string::append(a1, s);
  }
  return a1;
}

