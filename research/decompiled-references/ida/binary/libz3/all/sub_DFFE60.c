__int64 (__fastcall **__fastcall sub_DFFE60(
        _QWORD *a1,
        std::ostream *a2,
        unsigned int a3,
        _QWORD *a4,
        const char **a5))()
{
  std::ostream *v7; // r12
  __int64 v8; // r15
  _QWORD *v9; // r14
  _QWORD *v10; // r12
  _QWORD *v11; // r14
  char v12; // si
  std::ostream *v13; // rax
  _BYTE *v14; // r15
  __int64 (__fastcall *v15)(__int64, unsigned int); // rax
  _QWORD *v16; // r12
  _QWORD *v17; // r14
  char v18; // si
  std::ostream *v19; // rax
  _BYTE *v20; // r15
  __int64 (__fastcall *v21)(__int64, unsigned int); // rax
  __int64 *v22; // rbx
  unsigned __int64 v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 (__fastcall **result)(); // rax
  _BYTE v30[8]; // [rsp+10h] [rbp-108h] BYREF
  __int64 v31; // [rsp+18h] [rbp-100h]
  __int64 v32; // [rsp+20h] [rbp-F8h]
  _QWORD *v33; // [rsp+28h] [rbp-F0h]
  __int64 v34; // [rsp+30h] [rbp-E8h]
  __int64 v35; // [rsp+38h] [rbp-E0h]
  __int64 v36; // [rsp+40h] [rbp-D8h]
  __int64 (__fastcall **v37)(); // [rsp+48h] [rbp-D0h]
  void *v38; // [rsp+60h] [rbp-B8h]
  void *ptr; // [rsp+78h] [rbp-A0h]
  __int64 v40; // [rsp+80h] [rbp-98h]
  __int64 *v41; // [rsp+88h] [rbp-90h]
  __int64 v42; // [rsp+90h] [rbp-88h]
  __int64 v43; // [rsp+D0h] [rbp-48h]

  if ( *a5 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    v7 = (std::ostream *)sub_39A600((__int64)a2, *a5);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_DF6320(v7);
  }
  sub_DFBCB0(a1);
  sub_15C0990(v30, a1[37]);
  if ( a3 )
  {
    v8 = a3;
    v9 = a4;
    do
      sub_15C3050(v30, *v9++);
    while ( v9 != &a4[a3] );
    v10 = v33;
    if ( !v33 || (v11 = &v33[*((unsigned int *)v33 - 1)], v33 == v11) )
    {
LABEL_16:
      v16 = a4;
      v17 = &a4[v8];
      do
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        (*(void (__fastcall **)(_QWORD *, std::ostream *, _QWORD, __int64))(*a1 + 104LL))(a1, a2, *v16, 8);
        std::__ostream_insert<char,std::char_traits<char>>();
        v20 = *(_BYTE **)((char *)a2 + *(_QWORD *)(*(_QWORD *)a2 - 24LL) + 240);
        if ( !v20 )
          std::__throw_bad_cast();
        if ( v20[56] )
        {
          v18 = v20[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v18 = 10;
          v21 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v20 + 48LL);
          if ( v21 != sub_26BE90 )
            v18 = v21((__int64)v20, 10u);
        }
        v19 = (std::ostream *)std::ostream::put(a2, v18);
        std::ostream::flush(v19);
        ++v16;
      }
      while ( v17 != v16 );
      goto LABEL_25;
    }
    do
    {
LABEL_11:
      (*(void (__fastcall **)(_QWORD *, std::ostream *, _QWORD, _QWORD))(*a1 + 112LL))(a1, a2, *v10, 0);
      v14 = *(_BYTE **)((char *)a2 + *(_QWORD *)(*(_QWORD *)a2 - 24LL) + 240);
      if ( !v14 )
        std::__throw_bad_cast();
      if ( v14[56] )
      {
        v12 = v14[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v12 = 10;
        v15 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v14 + 48LL);
        if ( v15 != sub_26BE90 )
          v12 = v15((__int64)v14, 10u);
      }
      v13 = (std::ostream *)std::ostream::put(a2, v12);
      std::ostream::flush(v13);
      ++v10;
    }
    while ( v11 != v10 );
    v8 = a3;
    if ( !a3 )
      goto LABEL_25;
    goto LABEL_16;
  }
  v10 = v33;
  if ( v33 )
  {
    v11 = &v33[*((unsigned int *)v33 - 1)];
    if ( v33 != v11 )
      goto LABEL_11;
  }
LABEL_25:
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_DF6320(a2);
  if ( v43 )
    sub_186B220((void *)(v43 - 8));
  if ( v42 )
    sub_186B220((void *)(v42 - 8));
  v22 = v41;
  if ( v41 )
  {
    v23 = (unsigned __int64)&v41[*((unsigned int *)v41 - 1)];
    if ( (unsigned __int64)v41 >= v23 )
      goto LABEL_37;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = v40;
          if ( (*(_DWORD *)(v24 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v22 >= v23 )
          goto LABEL_36;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( (unsigned __int64)v22 < v23 );
LABEL_36:
    v22 = v41;
    if ( v41 )
LABEL_37:
      sub_186B220(v22 - 1);
  }
  result = &off_1C62200;
  v37 = &off_1C62200;
  if ( ptr )
    result = (__int64 (__fastcall **)())sub_186B220(ptr);
  if ( v38 )
    result = (__int64 (__fastcall **)())sub_186B220(v38);
  if ( v36 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v36 - 8));
  if ( v35 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v35 - 8));
  if ( v34 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v34 - 8));
  if ( v33 )
    result = (__int64 (__fastcall **)())sub_186B220(v33 - 1);
  if ( v32 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v32 - 8));
  if ( v31 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v31 - 8));
  return result;
}

