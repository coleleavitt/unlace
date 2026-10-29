void __fastcall sub_E141E0(_QWORD *a1, __int64 a2, void **a3)
{
  const char *v4; // rax
  __int64 (__fastcall *v6)(__int64); // rax
  std::ostream *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdi
  char v10; // si
  std::ostream *v11; // rax
  __int64 (__fastcall *v12)(__int64); // rax
  const char *v13; // r12
  std::ostream *v14; // r12
  _BYTE *v15; // r13
  char v16; // si
  std::ostream *v17; // rax
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 (__fastcall *v20)(__int64); // rax
  __int64 (__fastcall *v21)(__int64); // rax
  __int64 (__fastcall *v22)(__int64); // rax
  __int64 (__fastcall *v23)(__int64); // rax
  __int64 (__fastcall *v24)(__int64); // rax
  __int64 (__fastcall *v25)(__int64); // rax
  __int64 (__fastcall *v26)(__int64); // rax
  __int64 (__fastcall *v27)(__int64); // rax
  std::ostream *v28; // rbx
  _BYTE *v29; // rbp
  char v30; // si
  std::ostream *v31; // rax
  __int64 (__fastcall *v32)(__int64); // rax
  __int64 v33; // rbx
  __int64 (__fastcall *v34)(__int64, unsigned int); // rax
  __int64 (__fastcall *v35)(__int64); // rax
  __int64 (__fastcall *v36)(__int64); // rax
  std::ostream *v37; // rbx
  _BYTE *v38; // rbp
  char v39; // si
  std::ostream *v40; // rax
  __int64 (__fastcall *v41)(__int64); // rax
  __int64 (__fastcall *v42)(__int64); // rax
  __int64 (__fastcall *v43)(__int64, unsigned int); // rax
  __int64 (__fastcall *v44)(__int64); // rax
  __int64 (__fastcall *v45)(__int64, unsigned int); // rax
  __int64 (__fastcall *v46)(__int64, unsigned int); // rax
  __int64 v47; // [rsp+8h] [rbp-70h]
  void *v48; // [rsp+10h] [rbp-68h] BYREF
  char v49; // [rsp+18h] [rbp-60h]
  int v50; // [rsp+1Ch] [rbp-5Ch]
  void *v51[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v52; // [rsp+30h] [rbp-48h] BYREF

  v4 = (const char *)*a3;
  if ( (void *)a1[3] == *a3 )
  {
    v27 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( *(_BYTE *)(a2 + 274) )
    {
      if ( v27 != sub_305010 )
        goto LABEL_85;
      v28 = *(std::ostream **)(a2 + 408);
    }
    else
    {
      if ( v27 != sub_305010 )
        goto LABEL_85;
      v28 = *(std::ostream **)(a2 + 408);
    }
LABEL_49:
    std::__ostream_insert<char,std::char_traits<char>>();
    v29 = *(_BYTE **)((char *)v28 + *(_QWORD *)(*(_QWORD *)v28 - 24LL) + 240);
    if ( !v29 )
      goto LABEL_103;
    if ( v29[56] )
    {
      v30 = v29[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v30 = 10;
      v34 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v29 + 48LL);
      if ( v34 != sub_26BE90 )
        v30 = v34((__int64)v29, 10u);
    }
    v31 = (std::ostream *)std::ostream::put(v28, v30);
    std::ostream::flush(v31);
    return;
  }
  if ( (const char *)a1[4] == v4 )
  {
    v27 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v27 != sub_305010 )
      goto LABEL_85;
    v28 = *(std::ostream **)(a2 + 408);
    goto LABEL_49;
  }
  if ( v4 == (const char *)a1[5] )
  {
    v27 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v27 == sub_305010 )
    {
      v28 = *(std::ostream **)(a2 + 408);
      goto LABEL_49;
    }
LABEL_85:
    v28 = (std::ostream *)v27(a2);
    goto LABEL_49;
  }
  if ( v4 == (const char *)a1[6] )
  {
    v35 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v35 != sub_305010 )
      v35(a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    v28 = (std::ostream *)std::ostream::operator<<();
    goto LABEL_49;
  }
  if ( v4 == (const char *)a1[7] )
  {
    v32 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v32 == sub_305010 )
      v33 = *(_QWORD *)(a2 + 408);
    else
      v33 = v32(a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    v28 = (std::ostream *)sub_DF99B0(v33);
    goto LABEL_49;
  }
  if ( v4 == (const char *)a1[8] )
  {
    v36 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v36 == sub_305010 )
      v37 = *(std::ostream **)(a2 + 408);
    else
      v37 = (std::ostream *)v36(a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_DF7E50((__int64 *)v51, a2);
    v49 = 0;
    v48 = v51[0];
    v50 = 0;
    sub_180B300(&v48, v37);
    std::__ostream_insert<char,std::char_traits<char>>();
    v38 = *(_BYTE **)((char *)v37 + *(_QWORD *)(*(_QWORD *)v37 - 24LL) + 240);
    if ( !v38 )
      std::__throw_bad_cast();
    if ( v38[56] )
    {
      v39 = v38[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v39 = 10;
      v43 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v38 + 48LL);
      if ( v43 != sub_26BE90 )
        v39 = v43((__int64)v38, 10u);
    }
    v40 = (std::ostream *)std::ostream::put(v37, v39);
    std::ostream::flush(v40);
    if ( v51[0] != &v52 )
      operator delete(v51[0], v52 + 1);
    return;
  }
  if ( v4 == (const char *)a1[11] )
  {
    v42 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v42 != sub_305010 )
      v42(a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_DFBCB0(a2);
    sub_1829090(*(_QWORD *)(a2 + 296));
    goto LABEL_80;
  }
  if ( v4 == (const char *)a1[9] )
  {
    sub_DFF2B0(a2, 0, 0.0);
    return;
  }
  if ( v4 == (const char *)a1[10] )
  {
    v41 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v41 != sub_305010 )
      v41(a2);
    std::__ostream_insert<char,std::char_traits<char>>();
LABEL_80:
    v28 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
    goto LABEL_49;
  }
  sub_180C5A0(v51, ":parameters");
  if ( *a3 != v51[0] )
  {
    sub_180C5A0(v51, ":?");
    if ( *a3 == v51[0] )
    {
LABEL_28:
      v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
      if ( v18 != sub_305010 )
        v18(a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v19 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
      if ( v19 != sub_305010 )
        ((void (__fastcall *)(__int64, const char *))v19)(a2, "; Suppported get-info parameters:\n");
      std::__ostream_insert<char,std::char_traits<char>>();
      v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
      if ( v20 != sub_305010 )
        ((void (__fastcall *)(__int64, const char *))v20)(a2, "; (get-info :reason-unknown)\n");
      std::__ostream_insert<char,std::char_traits<char>>();
      v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
      if ( v21 != sub_305010 )
        ((void (__fastcall *)(__int64, const char *))v21)(a2, "; (get-info :status)\n");
      std::__ostream_insert<char,std::char_traits<char>>();
      v22 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
      if ( v22 != sub_305010 )
        ((void (__fastcall *)(__int64, const char *))v22)(a2, "; (get-info :version)\n");
      std::__ostream_insert<char,std::char_traits<char>>();
      v23 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
      if ( v23 != sub_305010 )
        ((void (__fastcall *)(__int64, const char *))v23)(a2, "; (get-info :authors)\n");
      std::__ostream_insert<char,std::char_traits<char>>();
      v24 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
      if ( v24 != sub_305010 )
        ((void (__fastcall *)(__int64, const char *))v24)(a2, "; (get-info :error-behavior)\n");
      std::__ostream_insert<char,std::char_traits<char>>();
      v25 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
      if ( v25 != sub_305010 )
        ((void (__fastcall *)(__int64, const char *))v25)(a2, "; (get-info :parameters)\n");
      std::__ostream_insert<char,std::char_traits<char>>();
      v26 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
      if ( v26 != sub_305010 )
        ((void (__fastcall *)(__int64, const char *))v26)(a2, "; (get-info :rlimit)\n");
      std::__ostream_insert<char,std::char_traits<char>>();
      return;
    }
    v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v6 == sub_305010 )
      v7 = *(std::ostream **)(a2 + 408);
    else
      v7 = (std::ostream *)v6(a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    v8 = *(_QWORD *)(*(_QWORD *)v7 - 24LL);
    v9 = *(_QWORD *)((char *)v7 + v8 + 240);
    if ( v9 )
    {
      if ( *(_BYTE *)(v9 + 56) )
      {
        v10 = *(_BYTE *)(v9 + 67);
      }
      else
      {
        v47 = *(_QWORD *)((char *)v7 + v8 + 240);
        std::ctype<char>::_M_widen_init();
        v10 = 10;
        v45 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v47 + 48LL);
        if ( v45 != sub_26BE90 )
          v10 = v45(v47, 10u);
      }
      v11 = (std::ostream *)std::ostream::put(v7, v10);
      std::ostream::flush(v11);
      if ( !*a3 )
        goto LABEL_28;
      v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL);
      if ( v12 != sub_25D2E0 )
        v12(a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v13 = (const char *)*a3;
      if ( ((unsigned __int8)v13 & 7) != 0 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
      }
      else
      {
        if ( v13 )
          strlen(v13);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      v14 = (std::ostream *)std::ostream::operator<<();
      v15 = *(_BYTE **)((char *)v14 + *(_QWORD *)(*(_QWORD *)v14 - 24LL) + 240);
      if ( v15 )
      {
        if ( v15[56] )
        {
          v16 = v15[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v16 = 10;
          v46 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v15 + 48LL);
          if ( v46 != sub_26BE90 )
            v16 = v46((__int64)v15, 10u);
        }
        v17 = (std::ostream *)std::ostream::put(v14, v16);
        std::ostream::flush(v17);
        goto LABEL_28;
      }
    }
LABEL_103:
    std::__throw_bad_cast();
  }
  v44 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
  if ( v44 != sub_305010 )
    v44(a2);
  sub_DF9300(a2);
}

