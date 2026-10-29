__int64 __fastcall sub_2DAE90(__int64 a1)
{
  int v1; // eax
  char v2; // r12
  unsigned int v3; // eax
  unsigned int v4; // ebp
  int v5; // eax
  int v7; // eax
  int v8; // eax

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 <= 8 )
    goto LABEL_2;
  while ( 1 )
  {
    if ( v1 <= 13 )
    {
      if ( v1 == 10 )
        ++*(_DWORD *)(a1 + 12);
      goto LABEL_5;
    }
    if ( v1 != 32 )
      break;
LABEL_5:
    v1 = std::istream::get(*(std::istream **)a1);
    *(_DWORD *)(a1 + 8) = v1;
    if ( v1 <= 8 )
      goto LABEL_6;
  }
  if ( v1 != 45 )
  {
    if ( v1 != 43 )
    {
LABEL_6:
      v2 = 0;
      v3 = *(_DWORD *)(a1 + 8) - 48;
      if ( v3 > 9 )
        goto LABEL_2;
      goto LABEL_7;
    }
    v2 = 0;
    v8 = std::istream::get(*(std::istream **)a1);
    *(_DWORD *)(a1 + 8) = v8;
    v3 = v8 - 48;
    if ( v3 <= 9 )
      goto LABEL_7;
LABEL_2:
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::operator<<<std::char_traits<char>>();
    std::operator<<<std::char_traits<char>>();
    exit(3);
  }
  v2 = 1;
  v7 = std::istream::get(*(std::istream **)a1);
  *(_DWORD *)(a1 + 8) = v7;
  v3 = v7 - 48;
  if ( v3 > 9 )
    goto LABEL_2;
LABEL_7:
  v4 = 0;
  do
  {
    v4 = v3 + 10 * v4;
    v5 = std::istream::get(*(std::istream **)a1);
    *(_DWORD *)(a1 + 8) = v5;
    v3 = v5 - 48;
  }
  while ( v3 <= 9 );
  if ( v2 )
    return -v4;
  return v4;
}

