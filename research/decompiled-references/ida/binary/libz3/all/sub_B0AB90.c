__int64 __fastcall sub_B0AB90(__int64 *a1, __int64 a2)
{
  char **exception; // r12
  int *v3; // r12
  __int64 v4; // rax
  int v5; // r15d
  __int64 v6; // r13
  _DWORD *v7; // rbp
  int v8; // r12d
  _DWORD *v9; // rbx
  __int64 v10; // rbp
  unsigned int *v11; // rbx
  unsigned int v12; // r13d
  unsigned int *v13; // r12
  unsigned int v14; // r14d
  _QWORD *v15; // rax
  unsigned int v16; // edx
  size_t v17; // rsi
  unsigned int v18; // ebp
  unsigned int *v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  int v25; // ecx
  unsigned int v26; // ebp
  __int64 result; // rax
  int *v29; // [rsp+10h] [rbp-78h]
  unsigned int v30; // [rsp+10h] [rbp-78h]
  int v31; // [rsp+10h] [rbp-78h]
  char v32; // [rsp+18h] [rbp-70h]
  unsigned int i; // [rsp+24h] [rbp-64h]
  unsigned int *v34; // [rsp+28h] [rbp-60h]
  __int64 v35[11]; // [rsp+30h] [rbp-58h] BYREF

  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v3 = (int *)a1[105];
  if ( v3 )
  {
    v4 = (unsigned int)*(v3 - 1);
    if ( &v3[v4] != v3 )
    {
      v29 = &v3[v4];
      do
      {
        v5 = *v3;
        v6 = 16LL * ((unsigned int)*v3 >> 1);
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v5 != -2 )
          std::ostream::_M_insert<unsigned long>();
        ++v3;
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_AA87F0(a1[2], a2, *(_QWORD *)(*(_QWORD *)(a1[2] + 8872) + v6));
      }
      while ( v29 != v3 );
    }
  }
  v7 = (_DWORD *)a1[110];
  if ( v7 )
  {
    v8 = *(v7 - 1);
    if ( v8 )
    {
      if ( *v7 == -2 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
      }
      if ( v8 != 1 )
      {
        v9 = v7 + 1;
        v10 = (__int64)&v7[v8 - 2 + 2];
        do
        {
          while ( 1 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( *v9 == -2 )
              break;
            ++v9;
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            if ( (_DWORD *)v10 == v9 )
              goto LABEL_17;
          }
          ++v9;
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        while ( (_DWORD *)v10 != v9 );
      }
LABEL_17:
      std::operator<<<std::char_traits<char>>();
    }
  }
  v11 = (unsigned int *)a1[108];
  if ( v11 )
  {
    v34 = &v11[*(v11 - 1)];
    if ( v34 != v11 )
    {
      v12 = *v11;
      v13 = (unsigned int *)a1[108];
      v30 = *v11 >> 5;
      v14 = v30 + 1;
      v15 = (_QWORD *)sub_186B270(0x10u);
      v32 = 1;
      *v15 = 2;
      v11 = (unsigned int *)(v15 + 1);
      for ( i = 0; ; i = *(v11 - 1) )
      {
        while ( 1 )
        {
          v20 = *(v11 - 2);
          if ( v20 >= v14 )
            break;
          v16 = (3 * v20 + 1) >> 1;
          v17 = 4 * v16 + 8;
          v18 = v16;
          if ( 4 * v20 + 8 >= (unsigned int)v17 || v20 >= v16 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_B035D0(v35, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v35);
            sub_233E40((__int64)v35);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v19 = (unsigned int *)sub_186B300(v11 - 2, v17);
          *v19 = v18;
          v11 = v19 + 2;
        }
        *(v11 - 1) = v14;
        v21 = 4LL * v14;
        v22 = 4LL * i;
        if ( v22 != v21 )
          memset(&v11[(unsigned __int64)v22 / 4], 0, v21 - v22);
        v23 = v30;
LABEL_28:
        v11[v23] |= 1 << v12;
        v24 = a1[107];
        if ( v24 )
        {
          if ( v12 < *(_DWORD *)(v24 - 4) )
          {
            v25 = *(_DWORD *)(v24 + 4LL * v12);
            if ( v25 )
              break;
          }
        }
        while ( 1 )
        {
LABEL_39:
          if ( v34 == ++v13 )
            goto LABEL_47;
          v23 = *v13 >> 5;
          if ( (unsigned int)v23 >= *(v11 - 1) )
            break;
          if ( (v11[v23] & (1 << *v13)) == 0 )
          {
            v12 = *v13;
            goto LABEL_28;
          }
        }
        v30 = *v13 >> 5;
        v12 = *v13;
        v14 = v23 + 1;
      }
      if ( !v32 )
      {
        v31 = *(_DWORD *)(v24 + 4LL * v12);
        std::__ostream_insert<char,std::char_traits<char>>();
        v25 = v31;
      }
      v26 = ((unsigned int)v25 >> 31) + 2 * v12;
      if ( v25 > 1 )
      {
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v26 != -2 )
        {
LABEL_37:
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
LABEL_38:
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_17F35B0(a2, (unsigned int)*(char *)(*(_QWORD *)(a1[2] + 8848) + v26));
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v32 = 0;
          goto LABEL_39;
        }
      }
      else
      {
        if ( v25 < -1 )
        {
          std::ostream::operator<<();
          std::operator<<<std::char_traits<char>>();
        }
        if ( v26 != -2 )
          goto LABEL_37;
      }
      std::operator<<<std::char_traits<char>>();
      goto LABEL_38;
    }
    v11 = nullptr;
  }
LABEL_47:
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  result = std::__ostream_insert<char,std::char_traits<char>>();
  if ( v11 )
    return sub_186B220(v11 - 2);
  return result;
}

