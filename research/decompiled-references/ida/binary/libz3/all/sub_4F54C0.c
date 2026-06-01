__int64 __fastcall sub_4F54C0(double a1, __int64 a2, _UNKNOWN **a3, const void *a4, const void *a5)
{
  _QWORD *v7; // rbp
  void *v8; // rax
  __int64 v9; // r14
  void *v10; // r12
  char *v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // r15
  __int64 (__fastcall *v16)(char *, __int64); // rbp
  __int64 v17; // rbx
  void (__fastcall *v18)(_QWORD *, __int64); // r12
  __int64 v19; // rbx
  void (__fastcall *v20)(_QWORD *, __int64); // r12
  __int64 v21; // rbx
  __int64 v22; // r15
  void (__fastcall *v23)(char *, __int64); // rbp
  __int64 v24; // rbx
  void (__fastcall *v25)(_QWORD *, __int64); // [rsp+8h] [rbp-40h]
  void (__fastcall *v26)(_QWORD *, __int64); // [rsp+8h] [rbp-40h]

  v7 = sub_4EC5D0(a3);
  v8 = sub_4EC5D0(a4);
  v9 = v7[4];
  v10 = v8;
  if ( a5 )
  {
    a3 = &`typeinfo for'datalog::relation_base;
    a4 = a5;
    v11 = (char *)__dynamic_cast(
                    a5,
                    (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                    (const struct __class_type_info *)&`typeinfo for'datalog::udoc_relation,
                    0);
    a5 = v11 + 40;
    if ( !v11 )
      a5 = nullptr;
  }
  else
  {
    v11 = nullptr;
  }
  if ( (unsigned int)sub_180B130(a4) > 2 )
  {
    if ( (unsigned __int8)sub_186A530(a1) )
    {
      sub_186A4C0(a1);
      v25 = *(void (__fastcall **)(_QWORD *, __int64))(*v7 + 120LL);
      v15 = sub_180B150(a4, a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      v25(v7, v15);
      sub_186A500(v7, v15);
    }
    else
    {
      v26 = *(void (__fastcall **)(_QWORD *, __int64))(*v7 + 120LL);
      v22 = sub_180B150(a4, a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      v26(v7, v22);
    }
  }
  v12 = v7[1];
  v13 = v9;
  sub_4ED920(v12, v9, (__int64)(v7 + 5), (__int64)v10 + 40, (__int64)a5);
  if ( (unsigned int)sub_180B130(v12) > 2 )
  {
    if ( (unsigned __int8)sub_186A530(a1) )
    {
      sub_186A4C0(a1);
      v18 = *(void (__fastcall **)(_QWORD *, __int64))(*v7 + 120LL);
      v19 = sub_180B150(v12, v9);
      std::__ostream_insert<char,std::char_traits<char>>();
      v13 = v19;
      v12 = (__int64)v7;
      v18(v7, v19);
      sub_186A500(v7, v19);
    }
    else
    {
      v20 = *(void (__fastcall **)(_QWORD *, __int64))(*v7 + 120LL);
      v21 = sub_180B150(v12, v9);
      std::__ostream_insert<char,std::char_traits<char>>();
      v13 = v21;
      v12 = (__int64)v7;
      v20(v7, v21);
    }
  }
  result = sub_180B130(v12);
  if ( (unsigned int)result > 2 )
  {
    result = sub_186A530(a1);
    if ( (_BYTE)result )
    {
      sub_186A4C0(a1);
      if ( v11 )
      {
        v23 = *(void (__fastcall **)(char *, __int64))(*(_QWORD *)v11 + 120LL);
        v24 = sub_180B150(v12, v13);
        std::__ostream_insert<char,std::char_traits<char>>();
        v13 = v24;
        v12 = (__int64)v11;
        v23(v11, v24);
      }
      return sub_186A500(v12, v13);
    }
    else if ( v11 )
    {
      v16 = *(__int64 (__fastcall **)(char *, __int64))(*(_QWORD *)v11 + 120LL);
      v17 = sub_180B150(v12, v13);
      std::__ostream_insert<char,std::char_traits<char>>();
      return v16(v11, v17);
    }
  }
  return result;
}

