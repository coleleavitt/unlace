__int64 __fastcall sub_7ECF30(__int64 a1, double a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // ebp
  unsigned int v6; // esi
  __int64 v7; // rdi
  unsigned int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 i; // rbx
  __int64 v12; // rdi

  if ( (unsigned __int8)sub_7EC600(a1, 0) )
    return 1;
  v3 = *(_QWORD *)(a1 + 2304);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  if ( (unsigned __int8)sub_7EC600(a1, 0) )
    return 1;
  v4 = *(_QWORD *)(a1 + 2312);
  v5 = 0;
  if ( v4 )
  {
    while ( v5 < *(_DWORD *)(v4 - 4) )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v4 + 8LL * v5) + 48LL) )
      {
        v6 = v5++;
        sub_7EC940(a1, v6);
        v4 = *(_QWORD *)(a1 + 2312);
        if ( !v4 )
          break;
      }
      else
      {
        ++v5;
      }
    }
  }
  if ( (unsigned __int8)sub_7EC600(a1, 1) )
    return 1;
  v7 = a1 + 336;
  v8 = sub_869870(a1 + 336);
  if ( (_BYTE)v8 )
  {
    return 1;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 2312);
    if ( v9 )
    {
      v10 = *(unsigned int *)(v9 - 4);
      for ( i = 0; v10 != i; ++i )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v9 + 8 * i) + 48LL) )
        {
          sub_180B130(v7);
          if ( (unsigned __int8)sub_186A530(a2) )
          {
            sub_186A4C0(a2);
            sub_180B150(v7, v10);
            std::__ostream_insert<char,std::char_traits<char>>();
            v12 = std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_186A500(v12, "\n");
          }
          else
          {
            sub_180B150(v7, v10);
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          return v8;
        }
      }
    }
  }
  return v8;
}

