__int64 __fastcall sub_2F3100(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        __int64 a21,
        __int64 a22)
{
  char **exception; // rbx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // ebp
  __int64 i; // rax
  __int64 v28; // rbx
  const char *v29; // rbx
  void *v30; // r15
  bool v31; // al
  void *v32; // r15
  void *v33; // r15
  void *v34; // r15
  void *v35; // rbx
  __int64 v36; // rbx
  void *v38; // [rsp+10h] [rbp-128h]
  void *v39; // [rsp+10h] [rbp-128h]
  bool v40; // [rsp+2Fh] [rbp-109h]
  __m128i v41; // [rsp+30h] [rbp-108h] BYREF
  __m128i v42; // [rsp+40h] [rbp-F8h] BYREF
  int v43; // [rsp+50h] [rbp-E8h] BYREF
  char v44; // [rsp+54h] [rbp-E4h]
  int v45; // [rsp+60h] [rbp-D8h] BYREF
  char v46; // [rsp+64h] [rbp-D4h]
  int v47; // [rsp+70h] [rbp-C8h] BYREF
  char v48; // [rsp+74h] [rbp-C4h]
  int v49; // [rsp+80h] [rbp-B8h] BYREF
  char v50; // [rsp+84h] [rbp-B4h]
  _Unwind_Exception v51; // [rsp+90h] [rbp-A8h] BYREF
  int v52; // [rsp+B0h] [rbp-88h] BYREF
  char v53; // [rsp+B4h] [rbp-84h]
  int v54; // [rsp+C0h] [rbp-78h] BYREF
  char v55; // [rsp+C4h] [rbp-74h]
  int v56; // [rsp+D0h] [rbp-68h] BYREF
  char v57; // [rsp+D4h] [rbp-64h]
  int v58; // [rsp+E0h] [rbp-58h] BYREF
  char v59; // [rsp+E4h] [rbp-54h]
  int v60; // [rsp+F0h] [rbp-48h] BYREF
  char v61; // [rsp+F4h] [rbp-44h]

  v23 = a1[74];
  v24 = a1[76];
  if ( !v23 )
  {
    if ( !v24 )
      goto LABEL_5;
    goto LABEL_3;
  }
  LODWORD(v23) = *(_DWORD *)(v23 - 4);
  if ( v24 )
  {
LABEL_3:
    v25 = *(_DWORD *)(v24 - 4);
    goto LABEL_4;
  }
  v25 = 0;
LABEL_4:
  if ( v25 != (_DWORD)v23 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_2EB560((__int64 *)&v51.private_1, "check-sat has not been called with latest objectives");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v51.private_1);
    sub_233E40((__int64)&v51.private_1);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
LABEL_5:
  v26 = 0;
  std::__ostream_insert<char,std::char_traits<char>>();
  for ( i = a1[74]; i; i = a1[74] )
  {
    if ( v26 >= *(_DWORD *)(i - 4) )
      return std::__ostream_insert<char,std::char_traits<char>>();
    v28 = i + 104LL * v26;
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( *(_DWORD *)v28 == 2 )
    {
      v29 = *(const char **)(v28 + 88);
      if ( v29 )
      {
        if ( ((unsigned __int8)v29 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          strlen(v29);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
    }
    else
    {
      sub_160EC40(a2, v28 + 8);
    }
    sub_2EEDE0((__int64)&v51.private_1, (__int64)a1, v26);
    sub_2EEB30((__int64)&v42, (__int64)a1, v26);
    v30 = qword_1C7F2C0;
    if ( (v42.m128i_i8[4] & 1) != 0 || (v51.private_1 & 0x100000000LL) != 0 )
    {
      v31 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v42, &v51.private_1) == 0;
      if ( !v31 )
        goto LABEL_14;
    }
    else
    {
      v31 = v42.m128i_i32[0] == LODWORD(v51.private_1);
      if ( v42.m128i_i32[0] != LODWORD(v51.private_1) )
        goto LABEL_14;
    }
    if ( (v44 & 1) != 0 || (v53 & 1) != 0 )
      v31 = (unsigned int)sub_182C7B0(v30, &v43, &v52) == 0;
    else
      v31 = v43 == v52;
    v32 = qword_1C7F2C0;
    if ( !v31 )
      goto LABEL_15;
    if ( (v46 & 1) != 0 || (v55 & 1) != 0 )
    {
      if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, &v45, &v54) )
      {
        v32 = qword_1C7F2C0;
        v31 = 0;
        goto LABEL_15;
      }
    }
    else if ( v45 != v54 )
    {
      v31 = 0;
      goto LABEL_15;
    }
    if ( (v48 & 1) != 0 || (v57 & 1) != 0 )
      v31 = (unsigned int)sub_182C7B0(v32, &v47, &v56) == 0;
    else
      v31 = v47 == v56;
    v32 = qword_1C7F2C0;
    if ( !v31 )
      goto LABEL_15;
    if ( (v50 & 1) != 0 || (v59 & 1) != 0 )
      v31 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v49, &v58) == 0;
    else
      v31 = v49 == v58;
    if ( v31 )
    {
      if ( (v51.exception_class & 0x100000000LL) != 0 || (v61 & 1) != 0 )
        v31 = (unsigned int)sub_182C7B0(v32, &v51, &v60) == 0;
      else
        v31 = LODWORD(v51.exception_class) == v60;
      v32 = qword_1C7F2C0;
      goto LABEL_15;
    }
LABEL_14:
    v32 = qword_1C7F2C0;
LABEL_15:
    v40 = v31;
    sub_182CBA0(v32, &v49);
    sub_182CBA0(v32, &v51);
    v33 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v45);
    sub_182CBA0(v33, &v47);
    v34 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v42);
    sub_182CBA0(v34, &v43);
    v38 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v58);
    sub_182CBA0(v38, &v60);
    v39 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v54);
    sub_182CBA0(v39, &v56);
    v35 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v51.private_1);
    sub_182CBA0(v35, &v52);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v40 )
    {
      sub_2F2FC0((__m128i *)&v51.private_1, a1, v26);
      sub_160EBE0(a2, &v51.private_1);
      sub_2EB430(v51.private_1, v51.private_2);
    }
    else
    {
      sub_2F2FC0(&v41, a1, v26);
      v36 = sub_160EBE0(a2, &v41);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_2EEDE0((__int64)&v51.private_1, (__int64)a1, v26);
      sub_2F2920(&v42, a1, (int *)&v51.private_1);
      sub_25A130((char *)&v58);
      sub_25A130((char *)&v54);
      sub_25A130((char *)&v51.private_1);
      sub_160EBE0(v36, &v42);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_2EB430(v42.m128i_i64[0], v42.m128i_i64[1]);
      sub_2EB430(v41.m128i_i64[0], v41.m128i_i64[1]);
    }
    ++v26;
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

