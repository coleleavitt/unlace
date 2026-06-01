void __fastcall sub_69D240(__int64 a1, double a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rdx
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  __int64 v11; // rbp
  int v12; // r14d
  _DWORD *v13; // r12
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rsi
  char **exception; // rbx
  __int64 v19; // r12
  __int64 v20; // rax
  _DWORD *v21; // r13
  __int64 v22; // rbp
  int v23; // r14d
  _DWORD *v24; // r12
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v30[88]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *(_QWORD **)(a1 + 4504);
  v4 = &v3[2 * *(unsigned int *)(a1 + 4512)];
  if ( v3 != v4 )
  {
    while ( *v3 <= 1u )
    {
      v3 += 2;
      if ( v4 == v3 )
        return;
    }
    if ( v4 != v3 )
    {
      v5 = *(_QWORD *)(a1 + 2480);
      do
      {
        v6 = *(_DWORD *)(v5 + 4LL * (*((_DWORD *)v3 + 2) >> 1));
        v7 = (unsigned int)-v6;
        if ( (v3[1] & 1) != 0 )
          v6 = -v6;
        if ( v6 != 1 )
        {
          sub_180B130(v5);
          if ( (unsigned __int8)sub_186A530(a2) )
          {
            sub_186A4C0(a2);
            v8 = sub_180B150(v5, v7);
            sub_1606360(v29, *v3, *(_QWORD *)(a1 + 8), 0, 0, 0);
            sub_160E8B0(v8, v29);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_18572D0(v30);
            v9 = sub_180B150(v30, " does not evaluate to true\n");
            v10 = *(_DWORD **)(a1 + 4528);
            v11 = v9;
            if ( v10 )
            {
              v12 = *(v10 - 1);
              if ( v12 )
              {
                if ( *v10 == -2 )
                {
                  std::__ostream_insert<char,std::char_traits<char>>();
                }
                else
                {
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::_M_insert<unsigned long>();
                }
                if ( v12 != 1 )
                {
                  v13 = v10 + 1;
                  v14 = (__int64)&v10[v12 - 2 + 2];
                  do
                  {
                    while ( 1 )
                    {
                      std::__ostream_insert<char,std::char_traits<char>>();
                      if ( *v13 == -2 )
                        break;
                      ++v13;
                      std::__ostream_insert<char,std::char_traits<char>>();
                      std::ostream::_M_insert<unsigned long>();
                      if ( v13 == (_DWORD *)v14 )
                        goto LABEL_20;
                    }
                    ++v13;
                    std::__ostream_insert<char,std::char_traits<char>>();
                  }
                  while ( v13 != (_DWORD *)v14 );
                }
              }
            }
LABEL_20:
            v15 = a1 + 96;
            std::__ostream_insert<char,std::char_traits<char>>();
            v16 = sub_180B150(v11, "\n");
            sub_11B85E0(v15, v16);
            v17 = sub_180B150(v15, v16);
            sub_11B7C70(v15, v17);
            sub_186A500(v15, v17);
          }
          else
          {
            v19 = sub_180B150(v5, v7);
            sub_1606360(v29, *v3, *(_QWORD *)(a1 + 8), 0, 0, 0);
            sub_160E8B0(v19, v29);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_18572D0(v30);
            v20 = sub_180B150(v30, " does not evaluate to true\n");
            v21 = *(_DWORD **)(a1 + 4528);
            v22 = v20;
            if ( v21 )
            {
              v23 = *(v21 - 1);
              if ( v23 )
              {
                if ( *v21 == -2 )
                {
                  std::__ostream_insert<char,std::char_traits<char>>();
                }
                else
                {
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::_M_insert<unsigned long>();
                }
                if ( v23 != 1 )
                {
                  v24 = v21 + 1;
                  v25 = (__int64)&v21[v23 - 2 + 2];
                  do
                  {
                    while ( 1 )
                    {
                      std::__ostream_insert<char,std::char_traits<char>>();
                      if ( *v24 == -2 )
                        break;
                      ++v24;
                      std::__ostream_insert<char,std::char_traits<char>>();
                      std::ostream::_M_insert<unsigned long>();
                      if ( v24 == (_DWORD *)v25 )
                        goto LABEL_31;
                    }
                    ++v24;
                    std::__ostream_insert<char,std::char_traits<char>>();
                  }
                  while ( v24 != (_DWORD *)v25 );
                }
              }
            }
LABEL_31:
            std::__ostream_insert<char,std::char_traits<char>>();
            v26 = sub_180B150(v22, "\n");
            sub_11B85E0(a1 + 96, v26);
            v27 = sub_180B150(a1 + 96, v26);
            sub_11B7C70(a1 + 96, v27);
          }
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v29, "bad state");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v29);
          sub_233E40((__int64)v29);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v28 = v3 + 2;
        if ( v4 == v3 + 2 )
          break;
        while ( 1 )
        {
          v3 = v28;
          if ( *v28 > 1u )
            break;
          v28 += 2;
          if ( v4 == v28 )
            return;
        }
      }
      while ( v4 != v28 );
    }
  }
}

