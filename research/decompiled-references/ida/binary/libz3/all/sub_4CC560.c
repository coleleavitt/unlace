__int64 __fastcall sub_4CC560(__int64 a1, _QWORD *a2, int a3, int a4, int a5, int a6, void *a7)
{
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  _QWORD *v9; // rsi
  __int64 (__fastcall *v10)(__int64, __int64); // rdx
  _QWORD **v11; // rsi
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  _QWORD *v14; // rsi
  __int64 (__fastcall *v15)(__int64, __int64); // rdx
  _QWORD **v16; // rsi
  __int64 (__fastcall *v17)(__int64, __int64); // rax
  __int64 v18; // rax
  void *v19; // r14
  __int64 (__fastcall *v20)(__int64, __int64); // rdx
  char v21; // al
  void (__fastcall ***v22)(_QWORD); // rbp
  bool v23; // zf
  void (__fastcall ***v24)(_QWORD); // rbp
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  void *v27[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24)) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 64LL))(*(_QWORD *)(a1 + 24));
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 200LL);
  if ( v8 == sub_4CBA50 )
  {
    v9 = (_QWORD *)a2[6];
    v10 = *(__int64 (__fastcall **)(__int64, __int64))(*v9 + 200LL);
    if ( v10 == v8 )
    {
      v11 = (_QWORD **)v9[6];
      v12 = (__int64 (__fastcall *)(__int64, __int64))(*v11)[25];
      if ( v12 == v10 )
        (*(void (__fastcall **)(void **))(*v11[6] + 200LL))(&ptr);
      else
        ((void (__fastcall *)(void **))v12)(&ptr);
    }
    else
    {
      ((void (__fastcall *)(void **))v10)(&ptr);
    }
  }
  else
  {
    v8((__int64)&ptr, (__int64)a2);
  }
  v13 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 208LL);
  if ( v13 == sub_4CB960 )
  {
    v14 = (_QWORD *)a2[6];
    v15 = *(__int64 (__fastcall **)(__int64, __int64))(*v14 + 208LL);
    if ( v15 == v13 )
    {
      v16 = (_QWORD **)v14[6];
      v17 = (__int64 (__fastcall *)(__int64, __int64))(*v16)[26];
      if ( v17 == v15 )
        (*(void (__fastcall **)(void **))(*v16[6] + 208LL))(v27);
      else
        ((void (__fastcall *)(void **))v17)(v27);
    }
    else
    {
      ((void (__fastcall *)(void **))v15)(v27);
    }
  }
  else
  {
    v13((__int64)v27, (__int64)a2);
  }
  while ( 1 )
  {
    v19 = v27[0];
    v20 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)ptr + 40LL);
    if ( v20 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)ptr + 16LL))() )
        goto LABEL_11;
      v21 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    else
    {
      v21 = v20((__int64)ptr, (__int64)v27[0]);
    }
    if ( v21 )
      break;
LABEL_11:
    v18 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr + 24LL))(ptr);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 24LL))(v18, a1 + 40);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 16LL))(
           *(_QWORD *)(a1 + 8),
           *(_QWORD *)(a1 + 40) + 8LL * *(unsigned int *)(a1 + 16)) )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 40LL))(*(_QWORD *)(a1 + 24), a1 + 40);
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 32LL))(ptr);
  }
  v22 = (void (__fastcall ***)(_QWORD))v27[0];
  if ( v27[0] )
  {
    v23 = (*((_DWORD *)v27[0] + 2))-- == 1;
    if ( v23 )
    {
      (**v22)(v22);
      sub_186B220(v22);
    }
  }
  v24 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v23 = (*((_DWORD *)ptr + 2))-- == 1;
    if ( v23 )
    {
      (**v24)(v24);
      sub_186B220(v24);
    }
  }
  (*(void (__fastcall **)(_QWORD *))(*a2 + 64LL))(a2);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 16LL))(
           *(_QWORD *)(a1 + 32),
           a2,
           *(_QWORD *)(a1 + 24),
           0);
}

