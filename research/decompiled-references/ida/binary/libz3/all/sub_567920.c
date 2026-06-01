__int64 __fastcall sub_567920(_QWORD *a1, char *a2, _QWORD *a3, _QWORD *a4, double a5)
{
  _QWORD *v6; // r14
  __int64 (__fastcall *v7)(void *, void *, void *, int); // rax
  _QWORD *v8; // r12
  __int64 v9; // r15
  _QWORD *v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rsi
  void (__fastcall *v14)(__int64, __int64, __int64, _QWORD); // rax
  _QWORD *v15; // rbp
  _QWORD *v16; // r14
  __int64 (__fastcall *v17)(void *, void *, void *, int); // rax
  __int64 v18; // rcx
  _QWORD *v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdx
  void (__fastcall *v23)(__int64, __int64, __int64, _QWORD); // rax
  void *v24; // rsi
  _QWORD *v25; // rdi
  _QWORD *v26; // r13
  __int64 (__fastcall *v27)(void *, void *, void *, int); // rax
  _QWORD *v28; // r12
  _QWORD *v29; // rbp
  _QWORD *v30; // r15
  __int64 (__fastcall *v31)(void *, void *, void *, int); // rax
  _QWORD *v32; // r14
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rsi
  void (__fastcall *v36)(__int64, __int64, __int64, _QWORD); // rax
  _QWORD *v37; // rdi
  _QWORD *v38; // r15
  __int64 (__fastcall *v39)(void *, void *, void *, int); // rax
  _QWORD *v40; // r13
  _QWORD *v41; // r14
  _QWORD *v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdx
  void (__fastcall *v46)(__int64, __int64, __int64, _QWORD); // rax
  __int64 result; // rax
  _QWORD *v48; // r12
  __int64 v49; // rbp
  __int64 v50; // r14
  _QWORD *v51; // r12
  __int64 v52; // r14
  char *v53; // [rsp+8h] [rbp-60h]
  _QWORD *v54; // [rsp+10h] [rbp-58h]
  void **v55; // [rsp+10h] [rbp-58h]
  _QWORD *v56; // [rsp+10h] [rbp-58h]
  _QWORD *v58; // [rsp+18h] [rbp-50h]
  void *v59; // [rsp+18h] [rbp-50h]
  __int64 v60; // [rsp+20h] [rbp-48h]
  _QWORD *v61; // [rsp+20h] [rbp-48h]
  __int64 v62; // [rsp+28h] [rbp-40h]
  __int64 v63; // [rsp+28h] [rbp-40h]

  v54 = a1;
  v53 = a2;
  if ( (unsigned int)sub_180B130(a1) )
  {
    if ( (unsigned __int8)sub_186A530(a5) )
    {
      sub_186A4C0(a5);
      v48 = (_QWORD *)sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      a2 = "\n";
      a1 = v48;
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v48, "\n");
    }
    else
    {
      v51 = (_QWORD *)sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      a2 = "\n";
      a1 = v51;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v6 = (_QWORD *)v54[1];
  v7 = *(__int64 (__fastcall **)(void *, void *, void *, int))(*v6 + 16LL);
  if ( a4 )
    v8 = (_QWORD *)a4[6];
  else
    v8 = nullptr;
  v9 = a3[6];
  v10 = *((_QWORD **)v53 + 6);
  if ( v7 == sub_567920 )
  {
    if ( (unsigned int)sub_180B130(a1) )
    {
      if ( (unsigned __int8)sub_186A530(a5) )
      {
        sub_186A4C0(a5);
        v49 = sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v49, "\n");
      }
      else
      {
        sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v11 = v6[1];
    v12 = *(_QWORD *)(v9 + 48);
    v13 = v10[6];
    v14 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 16LL);
    if ( v8 )
    {
      v14(v11, v13, v12, v8[6]);
      v15 = (_QWORD *)v6[2];
      v16 = (_QWORD *)v8[5];
    }
    else
    {
      v14(v11, v13, v12, 0);
      v15 = (_QWORD *)v6[2];
      v16 = nullptr;
    }
    v17 = *(__int64 (__fastcall **)(void *, void *, void *, int))(*v15 + 16LL);
    v18 = *(_QWORD *)(v9 + 40);
    v19 = (_QWORD *)v10[5];
    v60 = v18;
    if ( v17 == sub_567920 )
    {
      if ( (unsigned int)sub_180B130(v11) )
      {
        if ( (unsigned __int8)sub_186A530(a5) )
        {
          sub_186A4C0(a5);
          v63 = sub_180B150(v11, v13);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v63, "\n");
        }
        else
        {
          sub_180B150(v11, v13);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
      v20 = v15[1];
      v21 = v19[6];
      v22 = *(_QWORD *)(v60 + 48);
      v23 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v20 + 16LL);
      if ( v16 )
      {
        v23(v20, v21, v22, v16[6]);
        v24 = (void *)v19[5];
        (*(void (__fastcall **)(_QWORD, void *, _QWORD, _QWORD))(*(_QWORD *)v15[2] + 16LL))(
          v15[2],
          v24,
          *(_QWORD *)(v60 + 40),
          v16[5]);
        sub_565150(v19);
        sub_565150(v16);
      }
      else
      {
        v23(v20, v21, v22, 0);
        v24 = (void *)v19[5];
        (*(void (__fastcall **)(_QWORD, void *, _QWORD, _QWORD))(*(_QWORD *)v15[2] + 16LL))(
          v15[2],
          v24,
          *(_QWORD *)(v60 + 40),
          0);
        sub_565150(v19);
      }
    }
    else
    {
      v24 = (void *)v10[5];
      v17(v15, v19, (void *)v18, (int)v16);
    }
    v25 = v10;
    sub_565150(v10);
    if ( v8 )
    {
      v25 = v8;
      sub_565150(v8);
    }
  }
  else
  {
    v24 = *((void **)v53 + 6);
    v25 = (_QWORD *)v54[1];
    v7(v25, v24, (void *)a3[6], (int)v8);
  }
  v26 = (_QWORD *)v54[2];
  v27 = *(__int64 (__fastcall **)(void *, void *, void *, int))(*v26 + 16LL);
  if ( a4 )
    v28 = (_QWORD *)a4[5];
  else
    v28 = nullptr;
  v55 = (void **)a3[5];
  v29 = *((_QWORD **)v53 + 5);
  if ( v27 != sub_567920 )
  {
    v27(v26, *((void **)v53 + 5), v55, (int)v28);
    goto LABEL_32;
  }
  if ( (unsigned int)sub_180B130(v25) )
  {
    if ( (unsigned __int8)sub_186A530(a5) )
    {
      sub_186A4C0(a5);
      v50 = sub_180B150(v25, v24);
      std::__ostream_insert<char,std::char_traits<char>>();
      v25 = (_QWORD *)v50;
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v50, "\n");
      v30 = (_QWORD *)v26[1];
      v31 = *(__int64 (__fastcall **)(void *, void *, void *, int))(*v30 + 16LL);
      if ( v28 )
        goto LABEL_19;
      goto LABEL_47;
    }
    v52 = sub_180B150(v25, v24);
    std::__ostream_insert<char,std::char_traits<char>>();
    v25 = (_QWORD *)v52;
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  v30 = (_QWORD *)v26[1];
  v31 = *(__int64 (__fastcall **)(void *, void *, void *, int))(*v30 + 16LL);
  if ( v28 )
  {
LABEL_19:
    v32 = (_QWORD *)v28[6];
    goto LABEL_20;
  }
LABEL_47:
  v32 = nullptr;
LABEL_20:
  v61 = (_QWORD *)v29[6];
  v58 = v55[6];
  if ( v31 == sub_567920 )
  {
    if ( (unsigned int)sub_180B130(v25) )
    {
      if ( (unsigned __int8)sub_186A530(a5) )
      {
        sub_186A4C0(a5);
        v62 = sub_180B150(v25, sub_567920);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v62, "\n");
      }
      else
      {
        sub_180B150(v25, sub_567920);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v33 = v30[1];
    v34 = v58[6];
    v35 = v61[6];
    v36 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v33 + 16LL);
    if ( v32 )
    {
      v36(v33, v35, v34, v32[6]);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v30[2] + 16LL))(
        v30[2],
        v61[5],
        v58[5],
        v32[5]);
      sub_565150(v61);
      v37 = v32;
      sub_565150(v32);
    }
    else
    {
      v36(v33, v35, v34, 0);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v30[2] + 16LL))(v30[2], v61[5], v58[5], 0);
      v37 = v61;
      sub_565150(v61);
    }
    v38 = (_QWORD *)v26[2];
    v39 = *(__int64 (__fastcall **)(void *, void *, void *, int))(*v38 + 16LL);
    if ( v28 )
      goto LABEL_25;
LABEL_57:
    v40 = nullptr;
    goto LABEL_26;
  }
  v37 = v30;
  v31(v30, (void *)v29[6], v55[6], (int)v32);
  v38 = (_QWORD *)v26[2];
  v39 = *(__int64 (__fastcall **)(void *, void *, void *, int))(*v38 + 16LL);
  if ( !v28 )
    goto LABEL_57;
LABEL_25:
  v40 = (_QWORD *)v28[5];
LABEL_26:
  v41 = (_QWORD *)v29[5];
  v42 = v55[5];
  v56 = v42;
  if ( v39 == sub_567920 )
  {
    if ( (unsigned int)sub_180B130(v37) )
    {
      if ( (unsigned __int8)sub_186A530(a5) )
      {
        sub_186A4C0(a5);
        v59 = (void *)sub_180B150(v37, sub_567920);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v59, "\n");
      }
      else
      {
        sub_180B150(v37, sub_567920);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v43 = v38[1];
    v44 = v41[6];
    v45 = v56[6];
    v46 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v43 + 16LL);
    if ( v40 )
    {
      v46(v43, v44, v45, v40[6]);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v38[2] + 16LL))(
        v38[2],
        v41[5],
        v56[5],
        v40[5]);
      sub_565150(v41);
      sub_565150(v40);
    }
    else
    {
      v46(v43, v44, v45, 0);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v38[2] + 16LL))(v38[2], v41[5], v56[5], 0);
      sub_565150(v41);
    }
  }
  else
  {
    v39(v38, v41, v42, (int)v40);
  }
  sub_565150(v29);
  if ( v28 )
    sub_565150(v28);
LABEL_32:
  result = sub_565150(v53);
  if ( a4 )
    return sub_565150(a4);
  return result;
}

