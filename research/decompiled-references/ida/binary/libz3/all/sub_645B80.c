__int64 __fastcall sub_645B80(_QWORD *a1, __int64 a2, std::ostream *a3)
{
  __int64 v4; // rax
  unsigned int v5; // r13d
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v12; // [rsp+8h] [rbp-70h]
  _BYTE v13[16]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v14[88]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_DWORD *)(a2 + 24);
  v6 = *(_QWORD *)(v4 + 16);
  if ( (v6 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  else
  {
    if ( v6 )
      strlen(*(const char **)(v4 + 16));
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  v7 = *(_QWORD *)a3;
  v13[0] = 40;
  if ( *(_QWORD *)((char *)a3 + *(_QWORD *)(v7 - 24) + 16) )
    std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(a3, 40);
  if ( v5 )
  {
    v8 = 0;
    v12 = v5;
    while ( 1 )
    {
      v9 = *(_QWORD *)(a2 + 8 * v8 + 32);
      if ( !v8 )
        goto LABEL_9;
      v10 = *(_QWORD *)a3;
      v13[0] = 44;
      if ( *(_QWORD *)((char *)a3 + *(_QWORD *)(v10 - 24) + 16) )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( *(_WORD *)(v9 + 4) == 1 )
          goto LABEL_14;
LABEL_10:
        sub_1606360(v13, v9, *a1, 0, 0, 0);
        sub_160E8B0(a3, v13);
        ++v8;
        sub_18572D0(v14);
        if ( v12 == v8 )
          return std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::ostream::put(a3, 44);
LABEL_9:
        if ( *(_WORD *)(v9 + 4) != 1 )
          goto LABEL_10;
LABEL_14:
        ++v8;
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        if ( v12 == v8 )
          return std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

