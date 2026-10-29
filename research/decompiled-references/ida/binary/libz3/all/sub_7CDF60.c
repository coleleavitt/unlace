__int64 __fastcall sub_7CDF60(_QWORD *a1, __int64 a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  __int64 v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rsi
  void (__fastcall *v9)(__int64, __int64); // rax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 (*v12)(void); // rdx
  __int64 v13; // rdx
  int v14; // r13d
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // rax
  int v17; // ebp
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rcx
  _QWORD *v23; // rbp
  unsigned int v24; // eax
  unsigned int v25; // r13d
  unsigned int v26; // edx
  size_t v27; // rsi
  unsigned int v28; // r15d
  unsigned int *v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r15
  __int64 result; // rax
  unsigned int v34; // ebp
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rcx
  int v38; // eax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  unsigned int v41; // [rsp+Ch] [rbp-5Ch]
  __int64 v42[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = *(_QWORD *)a2;
  v7 = *(_DWORD *)(a2 + 12);
  v8 = a1[3];
  v9 = *(void (__fastcall **)(__int64, __int64))(v6 + 16);
  if ( v9 == sub_7ABB60 )
    *(_QWORD *)(a2 + 24) = v8;
  else
    v9(a2, v8);
  v10 = (_QWORD *)a1[3];
  v11 = *v10;
  v12 = *(__int64 (**)(void))(*v10 + 80LL);
  if ( v12 != sub_7D3B90 )
  {
    v38 = v12();
    v10 = (_QWORD *)a1[3];
    v14 = v38;
    v11 = *v10;
LABEL_6:
    v15 = *(__int64 (__fastcall **)(__int64))(v11 + 72);
    if ( v15 == sub_7C9C70 )
    {
      v16 = v10[525];
      if ( !v16 )
        goto LABEL_9;
      goto LABEL_8;
    }
    goto LABEL_31;
  }
  v13 = v10[482];
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 - 4);
    goto LABEL_6;
  }
  v15 = *(__int64 (__fastcall **)(__int64))(v11 + 72);
  if ( v15 == sub_7C9C70 )
  {
    v16 = v10[525];
    if ( !v16 )
      goto LABEL_11;
    v14 = 0;
LABEL_8:
    v14 += *(_DWORD *)(v16 - 4);
    goto LABEL_9;
  }
  v14 = 0;
LABEL_31:
  v14 += ((__int64 (*)(void))v15)();
LABEL_9:
  v17 = 0;
  if ( v14 )
  {
    do
    {
      ++v17;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 144LL))(a2);
    }
    while ( v17 != v14 );
  }
LABEL_11:
  v18 = (_QWORD *)a1[299];
  if ( v18 )
  {
    v19 = *((_DWORD *)v18 - 1);
    if ( v19 == *((_DWORD *)v18 - 2) )
    {
      v34 = (3 * v19 + 1) >> 1;
      v35 = 8 * v34 + 8;
      if ( 8 * v19 + 8 >= (unsigned int)v35 || v19 >= v34 )
      {
LABEL_40:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_116834(v42, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v42);
        sub_233E40((__int64)v42);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v36 = (unsigned int *)sub_186B300(v18 - 1, v35);
      v37 = v36[1];
      v18 = v36 + 2;
      *v36 = v34;
      a1[299] = v36 + 2;
      LODWORD(v36) = v37;
      v22 = &v18[v37];
      v21 = (_DWORD)v36 + 1;
    }
    else
    {
      v20 = v19;
      v21 = v19 + 1;
      v22 = &v18[v20];
    }
  }
  else
  {
    v40 = (_QWORD *)sub_186B270(0x18u);
    v18 = v40 + 1;
    *v40 = 2;
    v21 = 1;
    a1[299] = v18;
    v22 = v18;
  }
  v23 = (_QWORD *)a1[300];
  *v22 = a2;
  *((_DWORD *)v18 - 1) = v21;
  if ( v23 )
  {
    v24 = *((_DWORD *)v23 - 1);
    v41 = v24;
    if ( v7 >= v24 )
    {
      v25 = v7 + 1;
      if ( v24 < v7 + 1 )
        goto LABEL_21;
      *((_DWORD *)v23 - 1) = v25;
    }
  }
  else
  {
    v25 = v7 + 1;
    if ( v7 != -1 )
    {
      v39 = (_QWORD *)sub_186B270(0x18u);
      v41 = 0;
      v23 = v39 + 1;
      *v39 = 2;
      a1[300] = v39 + 1;
LABEL_21:
      while ( 1 )
      {
        v30 = *((_DWORD *)v23 - 2);
        if ( v30 >= v25 )
          break;
        v26 = (3 * v30 + 1) >> 1;
        v27 = 8 * v26 + 8;
        v28 = v26;
        if ( 8 * v30 + 8 >= (unsigned int)v27 || v30 >= v26 )
          goto LABEL_40;
        v29 = (unsigned int *)sub_186B300(v23 - 1, v27);
        v23 = v29 + 2;
        *v29 = v28;
        a1[300] = v29 + 2;
      }
      *((_DWORD *)v23 - 1) = v25;
      v31 = 8LL * v25;
      v32 = 8LL * v41;
      if ( v32 != v31 )
        memset(&v23[(unsigned __int64)v32 / 8], 0, v31 - v32);
    }
  }
  v23[v7] = a2;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 408LL))(a2);
  if ( (_BYTE)result )
    return sub_13D5AB0(a1 + 199, v7);
  return result;
}

