__int64 __fastcall sub_827E30(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  unsigned int v7; // r13d
  __int64 (__fastcall *v8)(__int64, unsigned int); // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned int v11; // eax
  __int64 (__fastcall *v12)(__int64, unsigned int); // rax
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64, unsigned int); // rax
  unsigned int v15; // r12d
  __int64 v16; // rbx
  unsigned int v18; // r12d
  int v19; // eax

  sub_827BB0(a1, a2, a3, *(_DWORD *)(a1 + 16), *(unsigned int *)(a1 + 32), a4);
  if ( *(_DWORD *)(a1 + 32) )
  {
    if ( a4 )
    {
      v7 = 0;
      while ( 1 )
      {
        v15 = *(_DWORD *)(a1 + 4LL * v7 + 64);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v15 != -2 )
          std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v8 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a3 + 24LL);
        if ( v8 == sub_7C5630 )
        {
          v9 = a3[10];
          if ( v9 )
          {
            v10 = 0;
            v11 = *(_DWORD *)(*(_QWORD *)(v9 + 880) + 4LL * (v15 >> 1));
            if ( v11 >= *(_DWORD *)(v9 + 888) )
              v10 = (((unsigned __int8)v15 ^ (unsigned __int8)v11) & 1) != 0 ? -1 : 1;
          }
          else
          {
            v10 = *(unsigned int *)(*(_QWORD *)(*(a3 - 7) + 3288LL) + 4LL * v15);
          }
        }
        else
        {
          v10 = (unsigned int)v8((__int64)a3, v15);
        }
        sub_17F35B0(a2, v10);
        v12 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a3 + 24LL);
        if ( v12 == sub_7C5630 )
        {
          v13 = a3[10];
          if ( v13 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v13 + 880) + 4LL * (v15 >> 1)) >= *(_DWORD *)(v13 + 888) )
              goto LABEL_12;
            goto LABEL_15;
          }
          v19 = *(_DWORD *)(*(_QWORD *)(*(a3 - 7) + 3288LL) + 4LL * v15);
        }
        else
        {
          v19 = v12((__int64)a3, v15);
        }
        if ( v19 )
        {
LABEL_12:
          std::__ostream_insert<char,std::char_traits<char>>();
          v14 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a3 + 40LL);
          if ( v14 != sub_7C56B0 )
            v14((__int64)a3, v15);
          std::ostream::_M_insert<unsigned long>();
        }
LABEL_15:
        ++v7;
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v7 >= *(_DWORD *)(a1 + 32) )
          goto LABEL_18;
      }
    }
    v18 = 0;
    do
    {
      if ( *(_DWORD *)(a1 + 4LL * v18 + 64) == -2 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
      }
      ++v18;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    while ( v18 < *(_DWORD *)(a1 + 32) );
  }
LABEL_18:
  std::__ostream_insert<char,std::char_traits<char>>();
  v16 = std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  return v16;
}

