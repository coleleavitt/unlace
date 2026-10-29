__int64 __fastcall sub_4CB6C0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  _QWORD *v14; // rsi
  __int64 (__fastcall *v15)(); // rax
  _QWORD **v16; // rsi
  __int64 (__fastcall *v17)(); // rdx
  _QWORD *v18; // rsi
  __int64 (__fastcall *v19)(); // rax
  _QWORD **v20; // rsi
  __int64 (__fastcall *v21)(); // rdx
  void *v22; // rbx
  __int64 (__fastcall *v23)(__int64, __int64); // rdx
  char v24; // al
  __int64 v25; // rax
  _QWORD *v26; // r14
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 (__fastcall *v30)(_QWORD *, unsigned int); // rax
  __int64 v31; // rbp
  unsigned int v32; // ebx
  __int64 v33; // [rsp+8h] [rbp-50h]
  void *v34; // [rsp+10h] [rbp-48h] BYREF
  void *ptr[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( *(_BYTE *)(a1 + 32) && !*(_BYTE *)(a1 + 33) )
  {
    v4 = *(unsigned int *)(a1 + 8);
    if ( (_DWORD)v4 )
    {
      v5 = *a2;
      v6 = *(_QWORD *)(a1 + 16);
      v7 = *(_QWORD *)(a1 + 24);
      v8 = *(_QWORD *)(a1 + 80);
      v9 = 4 * v4;
      v10 = 0;
      do
      {
        v11 = *(_QWORD *)(v5 + 8LL * *(unsigned int *)(v6 + v10));
        v12 = *(unsigned int *)(v7 + v10);
        v10 += 4;
        *(_QWORD *)(v8 + 8 * v12) = v11;
      }
      while ( v9 != v10 );
    }
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 56LL))(*(_QWORD *)(a1 + 72), a1 + 80);
  }
  v14 = *(_QWORD **)(a1 + 72);
  v15 = *(__int64 (__fastcall **)())(*v14 + 200LL);
  if ( v15 == sub_4CBA50 )
  {
    v16 = (_QWORD **)v14[6];
    v17 = (__int64 (__fastcall *)())(*v16)[25];
    if ( v17 == v15 )
      (*(void (__fastcall **)(void **))(*v16[6] + 200LL))(&v34);
    else
      ((void (__fastcall *)(void **))v17)(&v34);
  }
  else
  {
    ((void (__fastcall *)(void **))v15)(&v34);
  }
  v18 = *(_QWORD **)(a1 + 72);
  v19 = *(__int64 (__fastcall **)())(*v18 + 208LL);
  if ( v19 == sub_4CB960 )
  {
    v20 = (_QWORD **)v18[6];
    v21 = (__int64 (__fastcall *)())(*v20)[26];
    if ( v21 == v19 )
      (*(void (__fastcall **)(void **))(*v20[6] + 208LL))(ptr);
    else
      ((void (__fastcall *)(void **))v21)(ptr);
  }
  else
  {
    ((void (__fastcall *)(void **))v19)(ptr);
  }
  while ( 1 )
  {
    v22 = ptr[0];
    v23 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 40LL);
    if ( v23 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)v34 + 16LL))() )
        goto LABEL_17;
      v24 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    else
    {
      v24 = v23((__int64)v34, (__int64)ptr[0]);
    }
    if ( v24 )
      break;
LABEL_17:
    v25 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v34 + 24LL))(v34);
    v26 = (_QWORD *)v25;
    if ( !*(_DWORD *)(a1 + 8) )
    {
LABEL_28:
      v32 = 1;
      goto LABEL_29;
    }
    v27 = 0;
    v33 = v25 + 16;
    while ( 1 )
    {
      v30 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*v26 + 16LL);
      v31 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 4 * v27);
      if ( v30 == sub_4C98C0 )
      {
        v28 = v26[2];
        if ( !v28 || !*(_DWORD *)(v28 - 4) )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*v26 + 24LL))(v26, v33);
          v28 = v26[2];
        }
        v29 = *(_QWORD *)(v28 + 8 * v31);
      }
      else
      {
        v29 = v30(v26, v31);
      }
      if ( v29 != *(_QWORD *)(*a2 + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4 * v27)) )
        break;
      if ( (unsigned int)++v27 >= *(_DWORD *)(a1 + 8) )
        goto LABEL_28;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)v34 + 32LL))(v34);
  }
  v32 = 0;
LABEL_29:
  sub_4C2420((void (__fastcall ***)(_QWORD))ptr[0]);
  sub_4C2420((void (__fastcall ***)(_QWORD))v34);
  return v32;
}

