void __fastcall sub_827BB0(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, __int64 a5, char a6)
{
  unsigned int v10; // r14d
  __int64 (__fastcall *v11)(__int64, unsigned int); // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 (__fastcall *v15)(__int64, unsigned int); // rax
  __int64 v16; // rax
  __int64 (__fastcall *v17)(__int64, unsigned int); // rax
  int v18; // eax

  if ( a4 != -2 )
  {
    if ( !a6 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      goto LABEL_13;
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    v10 = a4 >> 1;
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v11 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a3 + 24LL);
    if ( v11 == sub_7C5630 )
    {
      v12 = a3[10];
      if ( v12 )
      {
        v13 = 0;
        v14 = *(_DWORD *)(*(_QWORD *)(v12 + 880) + 4LL * v10);
        if ( v14 >= *(_DWORD *)(v12 + 888) )
          v13 = (((unsigned __int8)a4 ^ (unsigned __int8)v14) & 1) != 0 ? -1 : 1;
      }
      else
      {
        v13 = *(unsigned int *)(*(_QWORD *)(*(a3 - 7) + 3288LL) + 4LL * a4);
      }
    }
    else
    {
      v13 = (unsigned int)v11((__int64)a3, a4);
    }
    sub_17F35B0(a2, v13);
    v15 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a3 + 24LL);
    if ( v15 == sub_7C5630 )
    {
      v16 = a3[10];
      if ( v16 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v16 + 880) + 4LL * v10) >= *(_DWORD *)(v16 + 888) )
        {
LABEL_10:
          std::__ostream_insert<char,std::char_traits<char>>();
          v17 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a3 + 40LL);
          if ( v17 != sub_7C56B0 )
            v17((__int64)a3, a4);
          std::ostream::_M_insert<unsigned long>();
        }
LABEL_13:
        std::__ostream_insert<char,std::char_traits<char>>();
        return;
      }
      v18 = *(_DWORD *)(*(_QWORD *)(*(a3 - 7) + 3288LL) + 4LL * a4);
    }
    else
    {
      v18 = v15((__int64)a3, a4);
    }
    if ( v18 )
      goto LABEL_10;
    goto LABEL_13;
  }
}

