__int64 __fastcall sub_956FE0(__int64 a1, int a2, int a3, __int64 a4, int a5, __int64 **a6, __int64 ***a7)
{
  __int64 v8; // rdi
  __int64 v9; // r15
  _OWORD *v10; // rax
  __int64 **v11; // r14
  __int64 **v12; // rax
  __int64 **v13; // rbp
  __int64 **v14; // r13
  __int64 *v15; // rsi
  __int64 *v16; // r14
  int v17; // r12d
  bool v18; // cf
  __int64 **v19; // rbx
  __int64 **i; // r13
  __int64 result; // rax
  int v22; // r14d
  void *ptr[2]; // [rsp+30h] [rbp-58h] BYREF
  int v26; // [rsp+40h] [rbp-48h]

  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL) + 912LL);
  if ( a4 )
  {
    v9 = v8 + 16;
    v10 = (_OWORD *)sub_186B270(0x40u);
    ptr[1] = &byte_8;
    ptr[0] = v10;
    *v10 = 0;
    v10[1] = 0;
    v10[2] = 0;
    v10[3] = 0;
    v26 = 0;
    if ( a5 )
    {
      v11 = a6;
      do
        sub_9547F0(v9, *v11++, ptr, *(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL));
      while ( &a6[a5] != v11 );
    }
    v12 = *a7;
    if ( *a7 )
    {
      v13 = &v12[2 * *((unsigned int *)v12 - 1)];
      if ( v13 != v12 )
      {
        v14 = *a7;
        do
        {
          v15 = v14[1];
          if ( v15 )
          {
            v16 = *v14;
            sub_9547F0(v9, v15, ptr, *(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL));
            sub_9547F0(v9, v16, ptr, *(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL));
          }
          v14 += 2;
        }
        while ( v13 != v14 );
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    v17 = a5 - 1;
    if ( a5 )
    {
      do
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        v18 = v17-- == 0;
      }
      while ( !v18 );
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    v19 = *a7;
    if ( *a7 )
    {
      for ( i = &v19[2 * *((unsigned int *)v19 - 1)]; i != v19; v19 += 2 )
      {
        while ( v19[1] )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v19 += 2;
          if ( i == v19 )
            goto LABEL_19;
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
      }
    }
LABEL_19:
    result = std::__ostream_insert<char,std::char_traits<char>>();
    if ( ptr[0] )
      return sub_186B220(ptr[0]);
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    v22 = a5 - 1;
    if ( a5 )
    {
      do
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        v18 = v22-- == 0;
      }
      while ( !v18 );
    }
    return std::__ostream_insert<char,std::char_traits<char>>();
  }
  return result;
}

