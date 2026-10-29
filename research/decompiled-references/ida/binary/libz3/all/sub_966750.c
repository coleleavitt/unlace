__int64 __fastcall sub_966750(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 ***a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void *ptr)
{
  __int64 v12; // rdx
  std::ostream *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 **v17; // rbx
  __int64 **v18; // r13
  _OWORD *v19; // rax
  __int64 **v20; // rax
  __int64 **v21; // rbx
  __int64 **v22; // r13
  __int64 *v23; // rsi
  __int64 *v24; // r14
  __int64 v25; // rbx
  __int64 **v26; // rbx
  __int64 v27; // r14
  __int64 **i; // [rsp+0h] [rbp-88h]
  const char **v30; // [rsp+10h] [rbp-78h]
  void *v34[2]; // [rsp+30h] [rbp-58h] BYREF
  int v35; // [rsp+40h] [rbp-48h]

  v12 = *(_QWORD *)(a1 + 24);
  v13 = (std::ostream *)(*(_QWORD *)(v12 + 912) + 16LL);
  v14 = *(int *)(a1 + 8);
  if ( (int)v14 >= 0 && (v15 = *(_QWORD *)(v12 + 608)) != 0 && (int)v14 < *(_DWORD *)(v15 - 4) )
  {
    v30 = (const char **)(v15 + 8 * v14);
    if ( a6 == -1 )
    {
LABEL_5:
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( ((unsigned __int8)*v30 & 7) != 0 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
      }
      else
      {
        if ( *v30 )
          strlen(*v30);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( a3 != -1 )
        std::ostream::_M_insert<unsigned long>();
      if ( a4 )
      {
        v16 = a5;
        do
        {
          v16 += 8;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        while ( v16 != a5 + 8LL * a4 );
      }
      if ( *a7 )
      {
        if ( *((_DWORD *)*a7 - 1) )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          v17 = *a7;
          if ( *a7 )
          {
            v18 = &v17[2 * *((unsigned int *)v17 - 1)];
            while ( v18 != v17 )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              v17 += 2;
              std::ostream::_M_insert<unsigned long>();
            }
          }
        }
      }
      goto LABEL_46;
    }
  }
  else
  {
    v30 = (const char **)&qword_18D6CD0;
    if ( a6 == -1 )
      goto LABEL_5;
  }
  v19 = (_OWORD *)sub_186B270(0x40u);
  v34[1] = &byte_8;
  *v19 = 0;
  v34[0] = v19;
  v19[1] = 0;
  v19[2] = 0;
  v19[3] = 0;
  v35 = 0;
  v20 = *a7;
  if ( *a7 )
  {
    v21 = &v20[2 * *((unsigned int *)v20 - 1)];
    if ( v21 != v20 )
    {
      v22 = *a7;
      do
      {
        v23 = v22[1];
        if ( v23 )
        {
          v24 = *v22;
          sub_9547F0((__int64)v13, v23, v34, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
          sub_9547F0((__int64)v13, v24, v34, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
        }
        v22 += 2;
      }
      while ( v21 != v22 );
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<void const*>();
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( ((unsigned __int8)*v30 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  else
  {
    if ( *v30 )
      strlen(*v30);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( ((unsigned __int8)*v30 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  else
  {
    if ( *v30 )
      strlen(*v30);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  if ( a4 )
  {
    v25 = a5;
    do
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      v25 += 8;
    }
    while ( v25 != a5 + 8LL * a4 );
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v26 = *a7;
  if ( *a7 )
  {
    v27 = 2LL * *((unsigned int *)v26 - 1);
    for ( i = &v26[v27]; i != v26; v26 += 2 )
    {
      while ( v26[1] )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v26 += 2;
        if ( i == v26 )
          goto LABEL_44;
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
    }
  }
LABEL_44:
  if ( v34[0] )
    sub_186B220(v34[0]);
LABEL_46:
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<void const*>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  return std::ostream::flush(v13);
}

