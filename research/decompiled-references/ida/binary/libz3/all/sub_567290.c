__int64 __fastcall sub_567290(_QWORD *a1, char *a2, _QWORD *a3, double a4)
{
  char *v4; // rbp
  _QWORD *v5; // r14
  _QWORD *v6; // r13
  __int64 (__fastcall *v7)(void *, int, void *); // rax
  _QWORD **v8; // r12
  _QWORD *v9; // r15
  __int64 (__fastcall *v10)(void *, int, void *); // rax
  __int64 v11; // rsi
  _QWORD *v12; // rdi
  _QWORD **v13; // r15
  _QWORD *v14; // r13
  __int64 v15; // r12
  __int64 (__fastcall *v16)(void *, int, void *); // rax
  char *v17; // rsi
  _QWORD *v18; // rdi
  _QWORD *v19; // r13
  _QWORD *v20; // r12
  __int64 (__fastcall *v21)(void *, int, void *); // rax
  _QWORD **v22; // r15
  _QWORD *v23; // r14
  __int64 (__fastcall *v24)(void *, int, void *); // rax
  __int64 v25; // rsi
  _QWORD *v26; // rdi
  _QWORD **v27; // r12
  _QWORD *v28; // r14
  __int64 v29; // r15
  __int64 (__fastcall *v30)(void *, int, void *); // rax
  __int64 v32; // rbx
  _QWORD *v33; // rbx
  _QWORD *v34; // r15
  __int64 v35; // r14
  _QWORD *v36; // rbx
  __int64 v37; // r14
  _QWORD *v38; // r15
  _QWORD *v39; // [rsp+8h] [rbp-60h]
  _QWORD *v40; // [rsp+8h] [rbp-60h]
  _QWORD *v42; // [rsp+10h] [rbp-58h]
  _QWORD *v43; // [rsp+18h] [rbp-50h]
  void *v44; // [rsp+18h] [rbp-50h]
  void *v45; // [rsp+18h] [rbp-50h]
  __int64 v46; // [rsp+20h] [rbp-48h]
  __int64 v47; // [rsp+28h] [rbp-40h]

  v4 = a2;
  v39 = a1;
  if ( (unsigned int)sub_180B130(a1) )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v33 = (_QWORD *)sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      a2 = "\n";
      a1 = v33;
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v33, "\n");
    }
    else
    {
      v36 = (_QWORD *)sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      a2 = "\n";
      a1 = v36;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v5 = *((_QWORD **)v4 + 5);
  v6 = (_QWORD *)v39[1];
  v43 = (_QWORD *)a3[5];
  v7 = *(__int64 (__fastcall **)(void *, int, void *))(*v6 + 16LL);
  if ( v7 == sub_567290 )
  {
    if ( (unsigned int)sub_180B130(a1) )
    {
      if ( (unsigned __int8)sub_186A530(a4) )
      {
        sub_186A4C0(a4);
        v34 = (_QWORD *)sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        a2 = "\n";
        a1 = v34;
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v34, "\n");
      }
      else
      {
        v38 = (_QWORD *)sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        a2 = "\n";
        a1 = v38;
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v8 = (_QWORD **)v6[1];
    v9 = (_QWORD *)v5[5];
    v10 = (__int64 (__fastcall *)(void *, int, void *))(*v8)[2];
    v46 = v43[5];
    if ( v10 == sub_567290 )
    {
      if ( (unsigned int)sub_180B130(a1) )
      {
        if ( (unsigned __int8)sub_186A530(a4) )
        {
          sub_186A4C0(a4);
          v47 = sub_180B150(a1, a2);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v47, "\n");
        }
        else
        {
          sub_180B150(a1, a2);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v8[1] + 16LL))(v8[1], v9[5], *(_QWORD *)(v46 + 40));
      v11 = v9[6];
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*v8[2] + 16LL))(v8[2], v11, *(_QWORD *)(v46 + 48));
      v12 = v9;
      sub_565150(v9);
    }
    else
    {
      v11 = v5[5];
      v12 = (_QWORD *)v6[1];
      v10(v8, (int)v9, (void *)v43[5]);
    }
    v13 = (_QWORD **)v6[2];
    v14 = (_QWORD *)v5[6];
    v15 = v43[6];
    v16 = (__int64 (__fastcall *)(void *, int, void *))(*v13)[2];
    if ( v16 == sub_567290 )
    {
      if ( (unsigned int)sub_180B130(v12) )
      {
        if ( (unsigned __int8)sub_186A530(a4) )
        {
          sub_186A4C0(a4);
          v45 = (void *)sub_180B150(v12, v11);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v45, "\n");
        }
        else
        {
          sub_180B150(v12, v11);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v13[1] + 16LL))(v13[1], v14[5], *(_QWORD *)(v15 + 40));
      v17 = (char *)v14[6];
      (*(void (__fastcall **)(_QWORD *, char *, _QWORD))(*v13[2] + 16LL))(v13[2], v17, *(_QWORD *)(v15 + 48));
      sub_565150(v14);
    }
    else
    {
      v17 = (char *)v5[6];
      v16(v13, (int)v17, (void *)v43[6]);
    }
    v18 = v5;
    sub_565150(v5);
  }
  else
  {
    v17 = *((char **)v4 + 5);
    v18 = (_QWORD *)v39[1];
    v7(v6, (int)v5, (void *)a3[5]);
  }
  v19 = *((_QWORD **)v4 + 6);
  v20 = (_QWORD *)v39[2];
  v40 = (_QWORD *)a3[6];
  v21 = *(__int64 (__fastcall **)(void *, int, void *))(*v20 + 16LL);
  if ( v21 == sub_567290 )
  {
    if ( (unsigned int)sub_180B130(v18) )
    {
      if ( (unsigned __int8)sub_186A530(a4) )
      {
        sub_186A4C0(a4);
        v35 = sub_180B150(v18, v17);
        std::__ostream_insert<char,std::char_traits<char>>();
        v17 = "\n";
        v18 = (_QWORD *)v35;
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v35, "\n");
      }
      else
      {
        v37 = sub_180B150(v18, v17);
        std::__ostream_insert<char,std::char_traits<char>>();
        v17 = "\n";
        v18 = (_QWORD *)v37;
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v22 = (_QWORD **)v20[1];
    v23 = (_QWORD *)v19[5];
    v24 = (__int64 (__fastcall *)(void *, int, void *))(*v22)[2];
    v42 = (_QWORD *)v40[5];
    if ( v24 == sub_567290 )
    {
      if ( (unsigned int)sub_180B130(v18) )
      {
        if ( (unsigned __int8)sub_186A530(a4) )
        {
          sub_186A4C0(a4);
          v44 = (void *)sub_180B150(v18, v17);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v44, "\n");
        }
        else
        {
          sub_180B150(v18, v17);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v22[1] + 16LL))(v22[1], v23[5], v42[5]);
      v25 = v23[6];
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*v22[2] + 16LL))(v22[2], v25, v42[6]);
      v26 = v23;
      sub_565150(v23);
    }
    else
    {
      v25 = v19[5];
      v26 = (_QWORD *)v20[1];
      v24(v22, (int)v23, (void *)v40[5]);
    }
    v27 = (_QWORD **)v20[2];
    v28 = (_QWORD *)v19[6];
    v29 = v40[6];
    v30 = (__int64 (__fastcall *)(void *, int, void *))(*v27)[2];
    if ( v30 == sub_567290 )
    {
      if ( (unsigned int)sub_180B130(v26) )
      {
        if ( (unsigned __int8)sub_186A530(a4) )
        {
          sub_186A4C0(a4);
          v32 = sub_180B150(v26, v25);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v32, "\n");
        }
        else
        {
          sub_180B150(v26, v25);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v27[1] + 16LL))(v27[1], v28[5], *(_QWORD *)(v29 + 40));
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v27[2] + 16LL))(v27[2], v28[6], *(_QWORD *)(v29 + 48));
      sub_565150(v28);
    }
    else
    {
      v30(v27, v19[6], (void *)v40[6]);
    }
    sub_565150(v19);
  }
  else
  {
    v21(v20, (int)v19, (void *)a3[6]);
  }
  return sub_565150(v4);
}

