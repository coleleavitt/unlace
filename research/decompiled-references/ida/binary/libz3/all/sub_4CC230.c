__int64 __fastcall sub_4CC230(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  _QWORD *v8; // rsi
  __int64 (__fastcall *v9)(__int64, __int64); // rdx
  _QWORD **v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  _QWORD *v13; // rsi
  __int64 (__fastcall *v14)(__int64, __int64); // rdx
  _QWORD *v15; // rsi
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  _QWORD **v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64); // rdx
  void *v21; // rbp
  __int64 (__fastcall *v22)(__int64, __int64); // rdx
  __int64 result; // rax
  void (__fastcall ***v24)(_QWORD); // rbx
  bool v25; // zf
  void (__fastcall ***v26)(_QWORD); // rbx
  __int64 v27; // r12
  __int64 v28; // rax
  void *v29; // rbp
  __int64 (__fastcall *v30)(__int64, __int64); // rdx
  void *v31; // [rsp+0h] [rbp-48h] BYREF
  void *ptr[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*a3 + 200LL);
  if ( v7 == sub_4CBA50 )
  {
    v8 = (_QWORD *)a3[6];
    v9 = *(__int64 (__fastcall **)(__int64, __int64))(*v8 + 200LL);
    if ( v9 == v7 )
    {
      v10 = (_QWORD **)v8[6];
      v11 = (__int64 (__fastcall *)(__int64, __int64))(*v10)[25];
      if ( v11 == v9 )
        (*(void (__fastcall **)(void **))(*v10[6] + 200LL))(&v31);
      else
        ((void (__fastcall *)(void **))v11)(&v31);
    }
    else
    {
      ((void (__fastcall *)(void **))v9)(&v31);
    }
  }
  else
  {
    v7((__int64)&v31, (__int64)a3);
  }
  v12 = *(__int64 (__fastcall **)(__int64, __int64))(*a3 + 208LL);
  if ( v12 == sub_4CB960 )
  {
    v13 = (_QWORD *)a3[6];
    v14 = *(__int64 (__fastcall **)(__int64, __int64))(*v13 + 208LL);
    if ( v14 != v12 )
    {
LABEL_27:
      ((void (__fastcall *)(void **))v14)(ptr);
      goto LABEL_10;
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
        goto LABEL_10;
      }
      goto LABEL_27;
    }
    ((void (__fastcall *)(void **))v16)(ptr);
  }
  else
  {
    v12((__int64)ptr, (__int64)a3);
  }
LABEL_10:
  if ( !a4 )
  {
    v27 = a1 + 8;
    while ( 1 )
    {
      v29 = ptr[0];
      v30 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 40LL);
      if ( v30 == sub_4C9890 )
      {
        if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)v31 + 16LL))() )
          goto LABEL_30;
        result = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v29 + 16LL))(v29);
      }
      else
      {
        result = v30((__int64)v31, (__int64)ptr[0]);
      }
      if ( (_BYTE)result )
        goto LABEL_21;
LABEL_30:
      v28 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v31 + 24LL))(v31);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 24LL))(v28, v27);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, v27);
      (*(void (__fastcall **)(void *))(*(_QWORD *)v31 + 32LL))(v31);
    }
  }
  while ( 1 )
  {
    v21 = ptr[0];
    v22 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 40LL);
    if ( v22 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)v31 + 16LL))() )
        goto LABEL_12;
      result = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    else
    {
      result = v22((__int64)v31, (__int64)ptr[0]);
    }
    if ( (_BYTE)result )
      break;
LABEL_12:
    v18 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v31 + 24LL))(v31);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 24LL))(v18, a1 + 8);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, a1 + 8) )
    {
      v19 = a1 + 8;
      v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL);
      if ( v20 == sub_4C9AC0 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, v19);
      else
        ((void (__fastcall *)(__int64, __int64))v20)(a2, v19);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 40LL))(a4, a1 + 8);
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)v31 + 32LL))(v31);
  }
LABEL_21:
  v24 = (void (__fastcall ***)(_QWORD))ptr[0];
  if ( ptr[0] )
  {
    v25 = (*((_DWORD *)ptr[0] + 2))-- == 1;
    if ( v25 )
    {
      (**v24)(v24);
      result = sub_186B220(v24);
    }
  }
  v26 = (void (__fastcall ***)(_QWORD))v31;
  if ( v31 )
  {
    v25 = (*((_DWORD *)v31 + 2))-- == 1;
    if ( v25 )
    {
      (**v26)(v26);
      return sub_186B220(v26);
    }
  }
  return result;
}

