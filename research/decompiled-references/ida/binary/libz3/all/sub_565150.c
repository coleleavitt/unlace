__int64 __fastcall sub_565150(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  void *v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64); // rdx
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rdi
  void *v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64); // rdx
  char v12; // al
  void (__fastcall ***v13)(_QWORD); // rbp
  bool v14; // zf
  void (__fastcall ***v15)(void *); // rbp
  void (__fastcall ***v16)(_QWORD); // rbp
  void (__fastcall ***v17)(_QWORD); // rbp
  __int64 v19; // r12
  void (__fastcall *v20)(__int64, __int64); // r13
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // r12
  void (__fastcall *v24)(__int64, __int64); // r13
  __int64 v25; // rsi
  __int64 v26; // r12
  void (__fastcall *v27)(__int64, __int64); // r13
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // r12
  void (__fastcall *v31)(__int64, __int64); // r13
  __int64 v32; // rsi
  void *ptr; // [rsp+8h] [rbp-50h] BYREF
  void *v34; // [rsp+10h] [rbp-48h] BYREF
  void *v35; // [rsp+18h] [rbp-40h] BYREF
  void *v36; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v37[6]; // [rsp+28h] [rbp-30h] BYREF

  v2 = a1[6];
  ++*(_DWORD *)(a1[1] + 48LL);
  (*(void (__fastcall **)(void **))(*(_QWORD *)v2 + 200LL))(&ptr);
  (*(void (__fastcall **)(void **))(*(_QWORD *)a1[6] + 208LL))(&v34);
  while ( 1 )
  {
    v5 = v34;
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)ptr + 40LL);
    if ( v6 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)ptr + 16LL))() )
        goto LABEL_2;
      v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    else
    {
      v7 = v6((__int64)ptr, (__int64)v34);
    }
    if ( v7 )
      break;
LABEL_2:
    v37[0] = 0;
    v3 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr + 24LL))(ptr);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 24LL))(v3, v37);
    v4 = a1[5];
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 56LL))(v4, v37) )
    {
      v19 = a1[6];
      v20 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 120LL);
      v21 = sub_180B150(v4, v37);
      v22 = v19;
      v20(v19, v21);
      v23 = a1[5];
      v24 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 120LL);
      v25 = sub_180B150(v22, v21);
      v24(v23, v25);
      sub_180B150(v23, v25);
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1872CE0("");
      sub_1873130(114, 377);
    }
    if ( v37[0] )
      sub_186B220((void *)(v37[0] - 8LL));
    (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 32LL))(ptr);
  }
  (*(void (__fastcall **)(void **))(*(_QWORD *)a1[5] + 200LL))(&v35);
  (*(void (__fastcall **)(void **))(*(_QWORD *)a1[5] + 208LL))(&v36);
  while ( 1 )
  {
    v10 = v36;
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 40LL);
    if ( v11 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)v35 + 16LL))() )
        goto LABEL_11;
      v12 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else
    {
      v12 = v11((__int64)v35, (__int64)v36);
    }
    if ( v12 )
      break;
LABEL_11:
    v37[0] = 0;
    v8 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v35 + 24LL))(v35);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 24LL))(v8, v37);
    v9 = a1[6];
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 56LL))(v9, v37) )
    {
      v26 = a1[6];
      v27 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 120LL);
      v28 = sub_180B150(v9, v37);
      v29 = v26;
      v27(v26, v28);
      v30 = a1[5];
      v31 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 120LL);
      v32 = sub_180B150(v29, v28);
      v31(v30, v32);
      sub_180B150(v30, v32);
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1872CE0("");
      sub_1873130(114, 390);
    }
    if ( v37[0] )
      sub_186B220((void *)(v37[0] - 8LL));
    (*(void (__fastcall **)(void *))(*(_QWORD *)v35 + 32LL))(v35);
  }
  v13 = (void (__fastcall ***)(_QWORD))v36;
  if ( v36 && (v14 = *((_DWORD *)v36 + 2) == 1, --*((_DWORD *)v36 + 2), v14) )
  {
    (**v13)(v13);
    sub_186B220(v13);
    v15 = (void (__fastcall ***)(void *))v35;
    if ( v35 )
      goto LABEL_22;
  }
  else
  {
    v15 = (void (__fastcall ***)(void *))v35;
    if ( v35 )
    {
LABEL_22:
      v14 = (*((_DWORD *)v15 + 2))-- == 1;
      if ( v14 )
      {
        (**v15)(v15);
        sub_186B220(v15);
      }
    }
  }
  v16 = (void (__fastcall ***)(_QWORD))v34;
  if ( v34 )
  {
    v14 = (*((_DWORD *)v34 + 2))-- == 1;
    if ( v14 )
    {
      (**v16)(v16);
      sub_186B220(v16);
    }
  }
  v17 = (void (__fastcall ***)(_QWORD))ptr;
  if ( !ptr )
    return 1;
  v14 = (*((_DWORD *)ptr + 2))-- == 1;
  if ( !v14 )
    return 1;
  (**v17)(v17);
  sub_186B220(v17);
  return 1;
}

