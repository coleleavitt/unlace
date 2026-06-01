__int64 __fastcall sub_4CC7D0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  _QWORD *v5; // rsi
  __int64 (__fastcall *v6)(__int64, __int64); // rdx
  _QWORD **v7; // rsi
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  _QWORD *v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64); // rdx
  _QWORD **v12; // rsi
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  void *v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64); // rdx
  char v16; // al
  unsigned int v17; // eax
  __int64 v18; // r14
  unsigned int v19; // ebx
  unsigned int i; // ebp
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(_QWORD *, unsigned int); // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdi
  void (__noreturn *v29)(); // rax
  void (__fastcall ***v30)(_QWORD); // rbx
  bool v31; // zf
  void (__fastcall ***v32)(_QWORD); // rbx
  __int64 v34; // [rsp+8h] [rbp-50h]
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  void *v36[8]; // [rsp+18h] [rbp-40h] BYREF

  v34 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 8) + 40LL))(*(_QWORD *)(a2 + 8), a1 + 8);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 200LL);
  if ( v4 == sub_4CBA50 )
  {
    v5 = *(_QWORD **)(a2 + 48);
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(*v5 + 200LL);
    if ( v6 == v4 )
    {
      v7 = (_QWORD **)v5[6];
      v8 = (__int64 (__fastcall *)(__int64, __int64))(*v7)[25];
      if ( v8 == v6 )
        (*(void (__fastcall **)(void **))(*v7[6] + 200LL))(&ptr);
      else
        ((void (__fastcall *)(void **))v8)(&ptr);
    }
    else
    {
      ((void (__fastcall *)(void **))v6)(&ptr);
    }
  }
  else
  {
    v4((__int64)&ptr, a2);
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 208LL);
  if ( v9 == sub_4CB960 )
  {
    v10 = *(_QWORD **)(a2 + 48);
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*v10 + 208LL);
    if ( v11 == v9 )
    {
      v12 = (_QWORD **)v10[6];
      v13 = (__int64 (__fastcall *)(__int64, __int64))(*v12)[26];
      if ( v13 == v11 )
        (*(void (__fastcall **)(void **))(*v12[6] + 208LL))(v36);
      else
        ((void (__fastcall *)(void **))v13)(v36);
    }
    else
    {
      ((void (__fastcall *)(void **))v11)(v36);
    }
  }
  else
  {
    v9((__int64)v36, a2);
  }
  while ( 1 )
  {
    v14 = v36[0];
    v15 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)ptr + 40LL);
    if ( v15 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)ptr + 16LL))() )
        goto LABEL_13;
      v16 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    else
    {
      v16 = v15((__int64)ptr, (__int64)v36[0]);
    }
    if ( v16 )
      break;
LABEL_13:
    v17 = *(_DWORD *)(a1 + 32);
    v18 = 0;
    v19 = 0;
    for ( i = 0; (unsigned int)v18 < v17; v17 = *(_DWORD *)(a1 + 32) )
    {
      while ( i < *(_DWORD *)(a1 + 36) && *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL * i) == (_DWORD)v18 )
      {
        ++v18;
        ++i;
        if ( (unsigned int)v18 >= v17 )
          goto LABEL_24;
      }
      v21 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr + 24LL))(ptr);
      v22 = *(_QWORD *)v21;
      v23 = v21;
      v24 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*(_QWORD *)v21 + 16LL);
      if ( v24 == sub_4C98C0 )
      {
        v25 = *(_QWORD *)(v23 + 16);
        if ( !v25 || !*(_DWORD *)(v25 - 4) )
        {
          (*(void (__fastcall **)(__int64, __int64))(v22 + 24))(v23, v23 + 16);
          v25 = *(_QWORD *)(v23 + 16);
        }
        v26 = *(_QWORD *)(v25 + 8 * v18);
      }
      else
      {
        v26 = v24((_QWORD *)v23, v18);
      }
      v27 = v19;
      ++v18;
      ++v19;
      *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v27) = v26;
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v27) = v26;
    }
LABEL_24:
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 136LL))(v34, a1 + 72) )
    {
      v28 = *(_QWORD *)(a1 + 48);
      v29 = *(void (__noreturn **)())(*(_QWORD *)v28 + 16LL);
      if ( v29 == sub_4C9D60 )
      {
        sub_1872CE0("");
        sub_1873130(114, 1091);
      }
      ((void (__fastcall *)(__int64, __int64, __int64))v29)(
        v28,
        *(_QWORD *)(a1 + 72) + 8LL * *(unsigned int *)(a1 + 56),
        8LL * *(unsigned int *)(a1 + 56) + *(_QWORD *)(a1 + 64));
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 152LL))(v34, a1 + 72);
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 32LL))(ptr);
  }
  v30 = (void (__fastcall ***)(_QWORD))v36[0];
  if ( v36[0] )
  {
    v31 = (*((_DWORD *)v36[0] + 2))-- == 1;
    if ( v31 )
    {
      (**v30)(v30);
      sub_186B220(v30);
    }
  }
  v32 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v31 = (*((_DWORD *)ptr + 2))-- == 1;
    if ( v31 )
    {
      (**v32)(v32);
      sub_186B220(v32);
    }
  }
  return v34;
}

