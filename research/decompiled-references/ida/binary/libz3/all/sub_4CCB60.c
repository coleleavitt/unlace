__int64 __fastcall sub_4CCB60(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  _QWORD *v7; // rsi
  __int64 (__fastcall *v8)(__int64, __int64); // rdx
  _QWORD *v9; // rsi
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  _QWORD **v11; // rsi
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  _QWORD *v13; // rsi
  __int64 (__fastcall *v14)(__int64, __int64); // rdx
  _QWORD *v15; // rsi
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  _QWORD **v17; // rsi
  __int64 v18; // rax
  void *v19; // r14
  __int64 (__fastcall *v20)(__int64, __int64); // rdx
  char v21; // al
  void (__fastcall ***v22)(_QWORD); // rbx
  bool v23; // zf
  void (__fastcall ***v24)(_QWORD); // rbx
  void *v26; // [rsp+0h] [rbp-38h] BYREF
  void *ptr[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = a2[1];
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 40LL))(v3, v4);
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 200LL);
  if ( v6 == sub_4CBA50 )
  {
    v7 = (_QWORD *)a2[6];
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*v7 + 200LL);
    if ( v8 != v6 )
      goto LABEL_22;
    v9 = (_QWORD *)v7[6];
    v10 = *(__int64 (__fastcall **)(__int64, __int64))(*v9 + 200LL);
    if ( v10 != v8 )
    {
      ((void (__fastcall *)(void **))v10)(&v26);
      goto LABEL_6;
    }
    v11 = (_QWORD **)v9[6];
    v8 = (__int64 (__fastcall *)(__int64, __int64))(*v11)[25];
    if ( v8 == v10 )
      (*(void (__fastcall **)(void **))(*v11[6] + 200LL))(&v26);
    else
LABEL_22:
      ((void (__fastcall *)(void **))v8)(&v26);
  }
  else
  {
    v6((__int64)&v26, (__int64)a2);
  }
LABEL_6:
  v12 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 208LL);
  if ( v12 != sub_4CB960 )
  {
    v12((__int64)ptr, (__int64)a2);
    goto LABEL_12;
  }
  v13 = (_QWORD *)a2[6];
  v14 = *(__int64 (__fastcall **)(__int64, __int64))(*v13 + 208LL);
  if ( v14 != v12 )
  {
LABEL_24:
    ((void (__fastcall *)(void **))v14)(ptr);
    goto LABEL_12;
  }
  v15 = (_QWORD *)v13[6];
  v16 = *(__int64 (__fastcall **)(__int64, __int64))(*v15 + 208LL);
  if ( v16 == v14 )
  {
    v17 = (_QWORD **)v15[6];
    v14 = (__int64 (__fastcall *)(__int64, __int64))(*v17)[26];
    if ( v14 == v16 )
    {
      (*(void (__fastcall **)(void **))(*v17[6] + 208LL))(ptr);
      goto LABEL_12;
    }
    goto LABEL_24;
  }
  ((void (__fastcall *)(void **))v16)(ptr);
  while ( 1 )
  {
LABEL_12:
    v19 = ptr[0];
    v20 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 40LL);
    if ( v20 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)v26 + 16LL))() )
        goto LABEL_11;
      v21 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    else
    {
      v21 = v20((__int64)v26, (__int64)ptr[0]);
    }
    if ( v21 )
      break;
LABEL_11:
    v18 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v26 + 24LL))(v26);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 24LL))(v18, a1 + 8);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a1 + 8);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, a1 + 8);
    (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 32LL))(v26);
  }
  v22 = (void (__fastcall ***)(_QWORD))ptr[0];
  if ( ptr[0] )
  {
    v23 = (*((_DWORD *)ptr[0] + 2))-- == 1;
    if ( v23 )
    {
      (**v22)(v22);
      sub_186B220(v22);
    }
  }
  v24 = (void (__fastcall ***)(_QWORD))v26;
  if ( !v26 )
    return v5;
  v23 = (*((_DWORD *)v26 + 2))-- == 1;
  if ( !v23 )
    return v5;
  (**v24)(v24);
  sub_186B220(v24);
  return v5;
}

