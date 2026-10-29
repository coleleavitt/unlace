void __fastcall sub_68F360(__int64 a1, double a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rdx
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // r12
  __int64 v10; // rax
  _DWORD *v11; // r13
  __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rsi
  char **exception; // rbx
  __int64 v19; // r12
  __int64 v20; // rax
  _DWORD *v21; // r13
  __int64 v22; // rbp
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27[2]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v28[88]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_QWORD **)(a1 + 4840);
  v4 = &v3[2 * *(unsigned int *)(a1 + 4848)];
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
      while ( 1 )
      {
        v6 = *(_DWORD *)(v5 + 4LL * (*((_DWORD *)v3 + 2) >> 1));
        v7 = (unsigned int)-v6;
        if ( (v3[1] & 1) != 0 )
          v6 = -v6;
        if ( v6 != 1 )
          break;
        v8 = v3 + 2;
        if ( v4 != v3 + 2 )
        {
          while ( 1 )
          {
            v3 = v8;
            if ( *v8 > 1u )
              break;
            v8 += 2;
            if ( v4 == v8 )
              return;
          }
          if ( v4 != v8 )
            continue;
        }
        return;
      }
      sub_180B130(v5);
      if ( (unsigned __int8)sub_186A530(a2) )
      {
        sub_186A4C0(a2);
        v9 = sub_180B150(v5, v7);
        sub_1606360(v27, *v3, *(_QWORD *)(a1 + 8), 0, 0, 0);
        sub_160E8B0(v9, v27);
        std::operator<<<std::char_traits<char>>();
        sub_18572D0(v28);
        v10 = sub_180B150(v28, " does not evaluate to true\n");
        v11 = *(_DWORD **)(a1 + 4552);
        v12 = v10;
        if ( v11 )
        {
          v13 = (unsigned int)*(v11 - 1);
          if ( (_DWORD)v13 )
          {
            v14 = 0;
            while ( 1 )
            {
              if ( v14 )
              {
                std::operator<<<std::char_traits<char>>();
                if ( v11[v14] == -2 )
                  goto LABEL_24;
LABEL_21:
                ++v14;
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                if ( v14 == v13 )
                  break;
              }
              else
              {
                if ( *v11 != -2 )
                  goto LABEL_21;
LABEL_24:
                ++v14;
                std::operator<<<std::char_traits<char>>();
                if ( v14 == v13 )
                  break;
              }
            }
          }
        }
        v15 = a1 + 96;
        std::operator<<<std::char_traits<char>>();
        v16 = sub_180B150(v12, "\n");
        sub_11B85E0(v15, v16);
        v17 = sub_180B150(v15, v16);
        sub_11B7C70(v15, v17);
        sub_186A500(v15, v17);
LABEL_26:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_68CF80(v27, "bad state");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v27);
        sub_233E40((__int64)v27);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v19 = sub_180B150(v5, v7);
      sub_1606360(v27, *v3, *(_QWORD *)(a1 + 8), 0, 0, 0);
      sub_160E8B0(v19, v27);
      std::operator<<<std::char_traits<char>>();
      sub_18572D0(v28);
      v20 = sub_180B150(v28, " does not evaluate to true\n");
      v21 = *(_DWORD **)(a1 + 4552);
      v22 = v20;
      if ( !v21 || (v23 = (unsigned int)*(v21 - 1), !(_DWORD)v23) )
      {
LABEL_35:
        std::operator<<<std::char_traits<char>>();
        v25 = sub_180B150(v22, "\n");
        sub_11B85E0(a1 + 96, v25);
        v26 = sub_180B150(a1 + 96, v25);
        sub_11B7C70(a1 + 96, v26);
        goto LABEL_26;
      }
      v24 = 0;
      while ( 1 )
      {
        if ( v24 )
        {
          std::operator<<<std::char_traits<char>>();
          if ( v21[v24] == -2 )
            goto LABEL_34;
LABEL_31:
          ++v24;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          if ( v23 == v24 )
            goto LABEL_35;
        }
        else
        {
          if ( *v21 != -2 )
            goto LABEL_31;
LABEL_34:
          ++v24;
          std::operator<<<std::char_traits<char>>();
          if ( v23 == v24 )
            goto LABEL_35;
        }
      }
    }
  }
}

