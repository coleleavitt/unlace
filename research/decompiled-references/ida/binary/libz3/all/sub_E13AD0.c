void __fastcall sub_E13AD0(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 (__fastcall *v6)(__int64); // rax
  std::ostream *v7; // r13
  _BYTE *v8; // r14
  char v9; // si
  std::ostream *v10; // rax
  __int64 (__fastcall *v11)(__int64); // rax
  std::ostream *v12; // rbx
  _BYTE *v13; // rbp
  char v14; // si
  std::ostream *v15; // rax
  __int64 (__fastcall *v16)(__int64, unsigned int); // rax
  __int64 (__fastcall *v17)(__int64); // rax
  std::ostream *v18; // r12
  _BYTE *v19; // r13
  char v20; // si
  std::ostream *v21; // rax
  __int64 (__fastcall *v22)(__int64); // rax
  const char *v23; // rbx
  __int64 (__fastcall *v24)(__int64, unsigned int); // rax
  const char *v25; // r12
  __int64 (__fastcall *v26)(__int64); // rax
  __int64 (__fastcall *v27)(__int64); // rax
  __int64 (__fastcall *v28)(__int64, unsigned int); // rax
  void *v29; // [rsp+0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+10h] [rbp-48h] BYREF

  v4 = *a3;
  if ( a1[5] == *a3 )
  {
    v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v11 == sub_305010 )
    {
      v12 = *(std::ostream **)(a2 + 408);
      goto LABEL_28;
    }
LABEL_50:
    v12 = (std::ostream *)v11(a2);
    goto LABEL_28;
  }
  if ( a1[7] != v4 )
  {
    if ( a1[8] != v4 && v4 != a1[14] )
    {
      if ( a1[9] == v4 )
      {
        sub_DF7C80(a2);
      }
      else if ( a1[10] == v4 )
      {
        sub_DF7C90(a2);
      }
      else if ( v4 == a1[12] )
      {
        sub_DF7C70(a2);
      }
      else if ( a1[13] != v4 && v4 != a1[11] && v4 != a1[19] && v4 != a1[20] )
      {
        if ( v4 != a1[17] )
        {
          if ( v4 != a1[18] )
          {
            if ( v4 == a1[15] )
            {
              v25 = *(const char **)(a2 + 376);
            }
            else
            {
              if ( v4 != a1[16] )
              {
                if ( v4 == a1[22] )
                {
                  v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
                  if ( *(_BYTE *)(a2 + 274) )
                  {
                    if ( v11 == sub_305010 )
                    {
                      v12 = *(std::ostream **)(a2 + 408);
                      goto LABEL_28;
                    }
                  }
                  else if ( v11 == sub_305010 )
                  {
                    v12 = *(std::ostream **)(a2 + 408);
                    goto LABEL_28;
                  }
                  goto LABEL_50;
                }
                if ( v4 != a1[23] )
                {
                  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
                  if ( v6 != sub_305010 )
                    v6(a2);
                  sub_17FBD30(&v29, a3);
                  v7 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
                  v8 = *(_BYTE **)((char *)v7 + *(_QWORD *)(*(_QWORD *)v7 - 24LL) + 240);
                  if ( !v8 )
                    std::__throw_bad_cast();
                  if ( v8[56] )
                  {
                    v9 = v8[67];
                  }
                  else
                  {
                    std::ctype<char>::_M_widen_init();
                    v9 = 10;
                    v28 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v8 + 48LL);
                    if ( v28 != sub_26BE90 )
                      v9 = v28((__int64)v8, 10u);
                  }
                  v10 = (std::ostream *)std::ostream::put(v7, v9);
                  std::ostream::flush(v10);
                  if ( v29 != &v30 )
                    operator delete(v29, v30 + 1);
                  return;
                }
                sub_DFBCB0(a2);
                goto LABEL_26;
              }
              v25 = *(const char **)(a2 + 464);
            }
            v26 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
            if ( v26 == sub_305010 )
              v12 = *(std::ostream **)(a2 + 408);
            else
              v12 = (std::ostream *)v26(a2);
            if ( v25 )
            {
              strlen(v25);
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            else
            {
              std::ios::clear();
            }
LABEL_29:
            v13 = *(_BYTE **)((char *)v12 + *(_QWORD *)(*(_QWORD *)v12 - 24LL) + 240);
            if ( v13 )
            {
              if ( v13[56] )
              {
                v14 = v13[67];
              }
              else
              {
                std::ctype<char>::_M_widen_init();
                v14 = 10;
                v16 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v13 + 48LL);
                if ( v16 != sub_26BE90 )
                  v14 = v16((__int64)v13, 10u);
              }
              v15 = (std::ostream *)std::ostream::put(v12, v14);
              std::ostream::flush(v15);
              return;
            }
LABEL_84:
            std::__throw_bad_cast();
          }
          sub_180B130(a1);
        }
        v27 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
        if ( v27 != sub_305010 )
          v27(a2);
        v12 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
        goto LABEL_29;
      }
    }
LABEL_26:
    v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v11 == sub_305010 )
    {
      v12 = *(std::ostream **)(a2 + 408);
LABEL_28:
      std::__ostream_insert<char,std::char_traits<char>>();
      goto LABEL_29;
    }
    goto LABEL_50;
  }
  v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
  if ( v17 == sub_305010 )
    v18 = *(std::ostream **)(a2 + 408);
  else
    v18 = (std::ostream *)v17(a2);
  std::__ostream_insert<char,std::char_traits<char>>();
  v19 = *(_BYTE **)((char *)v18 + *(_QWORD *)(*(_QWORD *)v18 - 24LL) + 240);
  if ( !v19 )
    goto LABEL_84;
  if ( v19[56] )
  {
    v20 = v19[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v20 = 10;
    v24 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v19 + 48LL);
    if ( v24 != sub_26BE90 )
      v20 = v24((__int64)v19, 10u);
  }
  v21 = (std::ostream *)std::ostream::put(v18, v20);
  std::ostream::flush(v21);
  if ( a1[7] )
  {
    v22 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL);
    if ( v22 != sub_25D2E0 )
      v22(a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    v23 = (const char *)a1[7];
    if ( ((unsigned __int8)v23 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( v23 )
        strlen(v23);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    v12 = (std::ostream *)std::ostream::operator<<();
    goto LABEL_29;
  }
}

