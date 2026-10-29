__int64 __fastcall sub_4FEB20(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r15
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // rdx
  char v12; // r14
  __int64 (__fastcall *v13)(__int64); // rdx
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  __int64 v17; // rdx
  void *v18; // r14
  __int64 (__fastcall *v19)(__int64, __int64); // rdx
  __int64 result; // rax
  __int64 *v21; // rbx
  unsigned __int64 v22; // rbp
  __int64 v23; // rsi
  bool v24; // zf
  void (__fastcall ***v25)(_QWORD); // rbx
  void (__fastcall ***v26)(_QWORD); // rbx
  __int64 v27; // rax
  __int64 (__fastcall *v28)(__int64, __int64); // rax
  __int64 v29; // rdx
  void *v30; // r13
  __int64 (__fastcall *v31)(__int64, __int64); // rdx
  _QWORD *v32; // [rsp+10h] [rbp-78h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  void *v34; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v35; // [rsp+30h] [rbp-58h] BYREF
  __int64 v36; // [rsp+38h] [rbp-50h] BYREF
  __int64 v37; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v38; // [rsp+48h] [rbp-40h]

  v7 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 24LL);
  v32 = (_QWORD *)(a3 + 16);
  (*(void (__fastcall **)(void **))(**(_QWORD **)(a3 + 32) + 200LL))(&ptr);
  (*(void (__fastcall **)(void **))(**(_QWORD **)(a3 + 32) + 208LL))(&v34);
  v8 = *(__int64 **)(v7 + 8);
  v35 = 0;
  sub_4D6590(&v37, v8);
  if ( !a4 )
  {
    while ( 1 )
    {
      v30 = v34;
      v31 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)ptr + 40LL);
      if ( v31 == sub_4C9890 )
      {
        if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)ptr + 16LL))() )
          goto LABEL_42;
        result = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v30 + 16LL))(v30);
      }
      else
      {
        result = v31((__int64)ptr, (__int64)v34);
      }
      if ( (_BYTE)result )
        goto LABEL_19;
LABEL_42:
      v27 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr + 24LL))(ptr);
      (*(void (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v27 + 24LL))(v27, &v35);
      sub_4C52B0(v7, v32, &v35, &v37);
      v28 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL);
      if ( v28 == sub_4FBCE0 )
      {
        v29 = *(_QWORD *)(a2 + 8);
        v36 = 0;
        sub_4C6580(*(_QWORD *)(v29 + 24), a2 + 16, (__int64)&v37, &v36);
        (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a2 + 32) + 40LL))(*(_QWORD *)(a2 + 32), &v36);
        if ( v36 )
          sub_186B220((void *)(v36 - 8));
      }
      else
      {
        v28(a2, (__int64)&v37);
      }
      (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 32LL))(ptr);
    }
  }
  while ( 1 )
  {
    v18 = v34;
    v19 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)ptr + 40LL);
    if ( v19 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)ptr + 16LL))() )
        goto LABEL_3;
      result = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    else
    {
      result = v19((__int64)ptr, (__int64)v34);
    }
    if ( (_BYTE)result )
      break;
LABEL_3:
    v9 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr + 24LL))(ptr);
    (*(void (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v9 + 24LL))(v9, &v35);
    sub_4C52B0(v7, v32, &v35, &v37);
    v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL);
    if ( v10 == sub_4FBD40 )
    {
      v11 = *(_QWORD *)(a2 + 8);
      v36 = 0;
      sub_4C6580(*(_QWORD *)(v11 + 24), a2 + 16, (__int64)&v37, &v36);
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a2 + 32) + 56LL))(*(_QWORD *)(a2 + 32), &v36);
      if ( v36 )
        sub_186B220((void *)(v36 - 8));
    }
    else
    {
      v12 = v10(a2, (__int64)&v37);
    }
    if ( !v12 )
    {
      v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL);
      if ( v13 == sub_4D9500 )
      {
        v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL);
        if ( v14 == sub_4FBCE0 )
        {
          v15 = *(_QWORD *)(a2 + 8);
          v36 = 0;
          sub_4C6580(*(_QWORD *)(v15 + 24), a2 + 16, (__int64)&v37, &v36);
          (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a2 + 32) + 40LL))(*(_QWORD *)(a2 + 32), &v36);
          if ( v36 )
            sub_186B220((void *)(v36 - 8));
        }
        else
        {
          v14(a2, (__int64)&v37);
        }
      }
      else
      {
        ((void (__fastcall *)(__int64, __int64 *))v13)(a2, &v37);
      }
      v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 40LL);
      if ( v16 == sub_4FBCE0 )
      {
        v17 = *(_QWORD *)(a4 + 8);
        v36 = 0;
        sub_4C6580(*(_QWORD *)(v17 + 24), a4 + 16, (__int64)&v37, &v36);
        (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a4 + 32) + 40LL))(*(_QWORD *)(a4 + 32), &v36);
        if ( v36 )
          sub_186B220((void *)(v36 - 8));
      }
      else
      {
        v16(a4, (__int64)&v37);
      }
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 32LL))(ptr);
  }
LABEL_19:
  v21 = v38;
  if ( v38 )
  {
    result = *((unsigned int *)v38 - 1);
    v22 = (unsigned __int64)&v38[result];
    if ( (unsigned __int64)v38 >= v22 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v24 )
            break;
        }
        if ( (unsigned __int64)++v21 >= v22 )
          goto LABEL_26;
      }
      result = sub_15D7BC0(v37, v23);
      ++v21;
    }
    while ( (unsigned __int64)v21 < v22 );
LABEL_26:
    v21 = v38;
    if ( v38 )
LABEL_27:
      result = sub_186B220(v21 - 1);
  }
  if ( v35 )
    result = sub_186B220((void *)(v35 - 8));
  v25 = (void (__fastcall ***)(_QWORD))v34;
  if ( v34 )
  {
    v24 = (*((_DWORD *)v34 + 2))-- == 1;
    if ( v24 )
    {
      (**v25)(v25);
      result = sub_186B220(v25);
    }
  }
  v26 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v24 = (*((_DWORD *)ptr + 2))-- == 1;
    if ( v24 )
    {
      (**v26)(v26);
      return sub_186B220(v26);
    }
  }
  return result;
}

