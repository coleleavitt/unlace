std::ostream *__fastcall sub_2BB4A0(std::ostream *this, unsigned __int8 *a2)
{
  int v2; // edx
  unsigned __int8 *v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rcx
  char s[60]; // [rsp+Ch] [rbp-3Ch] BYREF

  v2 = *a2;
  if ( (_BYTE)v2 )
  {
    v3 = a2;
    v4 = 0x7FFFFFFD3FFEC7BLL;
    while ( 1 )
    {
      v5 = *(_QWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL) + 16);
      if ( (char)v2 <= 90 )
      {
        if ( (char)v2 > 31 && _bittest64(&v4, (unsigned int)(v2 - 32)) )
          goto LABEL_5;
LABEL_11:
        s[3] = 0;
        s[2] = (unsigned __int8)v2 % 0xAu + 48;
        s[0] = (unsigned __int8)v2 / 0xAu / 0xA + 48;
        s[1] = (unsigned __int8)v2 / 0xAu % 0xA + 48;
        if ( v5 )
          std::__ostream_insert<char,std::char_traits<char>>();
        else
          std::ostream::put(this, 92);
        ++v3;
        strlen(s);
        std::__ostream_insert<char,std::char_traits<char>>();
        v2 = *v3;
        if ( !(_BYTE)v2 )
          return this;
      }
      else
      {
        if ( (unsigned __int8)(v2 - 94) > 0x20u )
          goto LABEL_11;
        v6 = 0x11FFFFFFBLL;
        if ( !_bittest64(&v6, (unsigned int)(v2 - 94)) )
          goto LABEL_11;
LABEL_5:
        s[0] = v2;
        if ( v5 )
          std::__ostream_insert<char,std::char_traits<char>>();
        else
          std::ostream::put(this, v2);
        v2 = *++v3;
        if ( !(_BYTE)v2 )
          return this;
      }
    }
  }
  return this;
}

