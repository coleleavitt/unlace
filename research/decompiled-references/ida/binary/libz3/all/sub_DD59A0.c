void __fastcall sub_DD59A0(_QWORD *a1, int a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  _DWORD *v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  bool v9; // bp
  unsigned int v10; // ebx
  __int64 (*v11)(void); // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rdx
  void (*v20)(); // rax
  unsigned int v21; // r12d
  __int64 v22; // rdi
  void (*v23)(); // rax
  __int64 *v24; // rbp
  __int64 v25; // rax
  unsigned __int64 v26; // r12
  __int64 *v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 *v30; // rdi
  __int64 *v31; // rbp
  __int64 v32; // rax
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rax
  _QWORD *exception; // rbx
  unsigned int v38; // eax
  bool v39; // zf
  const char *v40; // rbx
  _QWORD *v41; // rbp
  __int64 (__fastcall *v42)(__int64); // rax
  std::ostream *v43; // r14
  __int64 (__fastcall *v44)(__int64); // rax
  std::ostream *v45; // rax
  unsigned int v46; // [rsp+0h] [rbp-78h]
  unsigned int v48; // [rsp+8h] [rbp-70h]
  int v49; // [rsp+Ch] [rbp-6Ch]
  __int64 v50; // [rsp+18h] [rbp-60h] BYREF
  _QWORD *v51; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v52[10]; // [rsp+28h] [rbp-50h] BYREF

  v4 = a1[6];
  v5 = *a1;
  v50 = v4;
  v6 = (_DWORD *)sub_DF8AC0(v5, &v50);
  a1[179] = v6;
  v7 = *((_DWORD *)a1 + 356);
  if ( v6 )
  {
    if ( v7 != 9 )
    {
      sub_DC0980(a1);
      v6 = (_DWORD *)a1[179];
    }
    v8 = *(_QWORD *)v6;
    v9 = 1;
    v10 = 0;
    v11 = *(__int64 (**)(void))(*(_QWORD *)v6 + 56LL);
    if ( v11 != sub_2D03D0 )
    {
      v38 = v11();
      v6 = (_DWORD *)a1[179];
      v10 = v38;
      v39 = v38 == -1;
      v8 = *(_QWORD *)v6;
      v9 = !v39;
    }
    v12 = a1[201];
    v46 = 0;
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 8);
      if ( v13 )
        v46 = *(_DWORD *)(v13 - 4);
    }
    v14 = a1[202];
    v48 = 0;
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 8);
      if ( v15 )
        v48 = *(_DWORD *)(v15 - 4);
    }
    v16 = a1[208];
    v17 = 0;
    if ( v16 )
    {
      v18 = *(_QWORD *)(v16 + 8);
      if ( v18 )
        v17 = *(_DWORD *)(v18 - 4);
    }
    v19 = a1[206];
    if ( v19 )
      v49 = *(_DWORD *)(v19 - 4);
    else
      v49 = 0;
    v20 = *(void (**)())(v8 + 64);
    v6[4] = a2;
    v6[5] = a3;
    if ( v20 != nullsub_128 )
      ((void (__fastcall *)(_DWORD *, _QWORD))v20)(v6, *a1);
    v21 = 0;
    if ( *((_DWORD *)a1 + 356) != 2 )
    {
      while ( v21 != v10 || !v9 )
      {
        ++v21;
        sub_DD4DC0(a1);
        if ( *((_DWORD *)a1 + 356) == 2 )
          goto LABEL_23;
      }
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid command, too many arguments");
LABEL_77:
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
LABEL_23:
    if ( v21 < v10 && v9 )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid command, argument(s) missing");
      goto LABEL_77;
    }
    v22 = a1[179];
    v23 = *(void (**)())(*(_QWORD *)v22 + 216LL);
    if ( v23 == nullsub_130 || (((void (__fastcall *)(__int64, _QWORD))v23)(v22, *a1), *((_DWORD *)a1 + 356) != 9) )
      sub_DC0980(a1);
    v24 = (__int64 *)a1[201];
    a1[179] = 0;
    if ( v24 )
    {
      v25 = v24[1];
      if ( v25 )
      {
        v26 = v25 + 8LL * *(unsigned int *)(v25 - 4);
        v27 = (__int64 *)(v25 + 8LL * v46);
        if ( (unsigned __int64)v27 >= v26 )
          goto LABEL_35;
        do
        {
          while ( 1 )
          {
            v28 = *v27;
            if ( *v27 )
            {
              v29 = *v24;
              v39 = (*(_DWORD *)(v28 + 8))-- == 1;
              if ( v39 )
                break;
            }
            if ( (unsigned __int64)++v27 >= v26 )
              goto LABEL_34;
          }
          sub_15D7BC0(v29, v28);
          ++v27;
        }
        while ( (unsigned __int64)v27 < v26 );
LABEL_34:
        v25 = v24[1];
        if ( v25 )
LABEL_35:
          *(_DWORD *)(v25 - 4) = v46;
      }
    }
    v30 = (__int64 *)a1[202];
    if ( v30 )
      sub_39BEE0(v30, v48);
    v31 = (__int64 *)a1[208];
    if ( v31 )
    {
      v32 = v31[1];
      if ( v32 )
      {
        v33 = v32 + 8LL * *(unsigned int *)(v32 - 4);
        v34 = v32 + 8LL * v17;
        if ( v34 >= v33 )
          goto LABEL_46;
        do
        {
          while ( 1 )
          {
            v35 = *v31;
            v39 = (*(_DWORD *)(*(_QWORD *)v34 + 4LL))-- == 1;
            if ( v39 )
              break;
            v34 += 8LL;
            if ( v34 >= v33 )
              goto LABEL_45;
          }
          sub_17F9000(v35);
          v34 += 8LL;
        }
        while ( v34 < v33 );
LABEL_45:
        v32 = v31[1];
        if ( v32 )
LABEL_46:
          *(_DWORD *)(v32 - 4) = v17;
      }
    }
    v36 = a1[206];
    if ( v36 )
      *(_DWORD *)(v36 - 4) = v49;
    *((_DWORD *)a1 + 378) = 0;
    sub_185B3A0(&v51, &v50);
    if ( v52[0] == 10 && *v51 == 0x6974706F5F746573LL && *((_WORD *)v51 + 4) == 28271 )
    {
      sub_233E40((__int64)&v51);
      v51 = a1 + 1;
      sub_17F9A60(v52, "parser");
      *((_BYTE *)a1 + 2064) = sub_1859630(v51, "ignore_user_patterns", v52, 0);
      *((_BYTE *)a1 + 2065) = sub_1859630(v51, "ignore_bad_patterns", v52, 1);
      *((_BYTE *)a1 + 2066) = sub_1859630(v51, "error_for_visual_studio", v52, 0);
      sub_18572D0(v52);
    }
    else
    {
      sub_233E40((__int64)&v51);
    }
  }
  else
  {
    v40 = (const char *)a1[6];
    if ( v7 == 9 || (sub_DC0980(a1), *((_DWORD *)a1 + 356) != 2) )
    {
      do
        sub_DC10E0(a1);
      while ( *((_DWORD *)a1 + 356) != 2 );
    }
    v41 = (_QWORD *)*a1;
    v42 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a1 + 40LL);
    if ( v42 == sub_305010 )
      v43 = (std::ostream *)v41[51];
    else
      v43 = (std::ostream *)v42(*a1);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_DBF3B0(v43);
    if ( v40 )
    {
      v44 = *(__int64 (__fastcall **)(__int64))(*v41 + 48LL);
      if ( v44 != sub_25D2E0 )
        ((void (__fastcall *)(_QWORD *, const char *))v44)(v41, "unsupported");
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( ((unsigned __int8)v40 & 7) != 0 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
      }
      else
      {
        strlen(v40);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      v45 = (std::ostream *)std::ostream::operator<<();
      sub_DBF3B0(v45);
    }
    if ( *((_DWORD *)a1 + 356) != 9 )
      sub_DC0980(a1);
  }
}

