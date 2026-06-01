_QWORD *__fastcall sub_56C1C0(__int64 a1, unsigned int a2, unsigned int *a3)
{
  char **exception; // r12
  _QWORD *v7; // rax
  unsigned int *v8; // rax
  unsigned int *v9; // r15
  unsigned int *v10; // r14
  unsigned int *v11; // rbx
  unsigned int v12; // edx
  int v13; // edi
  __int64 v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // r8d
  size_t v17; // rsi
  unsigned int v18; // r13d
  unsigned int *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // r15
  __int64 v23; // r8
  __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // r14d
  _QWORD *v28; // rax
  int v29; // eax
  void *v30; // rdi
  int v31; // eax
  __int64 v33; // [rsp+18h] [rbp-80h]
  __int64 v34; // [rsp+18h] [rbp-80h]
  unsigned int *v35; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v36[16]; // [rsp+30h] [rbp-68h] BYREF
  void *v37[2]; // [rsp+40h] [rbp-58h] BYREF
  int v38; // [rsp+50h] [rbp-48h]

  sub_644D80(v36, "get_key_indexer", 11);
  if ( a2 )
  {
    v7 = (_QWORD *)sub_186B270(0x10u);
    *v7 = 2;
    v8 = (unsigned int *)(v7 + 1);
    v9 = a3;
    v10 = &a3[a2];
    v11 = v8;
    while ( 1 )
    {
      v12 = *v9++;
      *v8 = v12;
      v13 = *(v11 - 1);
      v14 = (unsigned int)(v13 + 1);
      *(v11 - 1) = v14;
      if ( v9 == v10 )
        break;
      v15 = *(v11 - 2);
      if ( v15 == (_DWORD)v14 )
      {
        v16 = (3 * v15 + 1) >> 1;
        v17 = 4 * v16 + 8;
        v18 = v16;
        if ( 4 * v13 + 12 >= (unsigned int)v17 || v15 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v37, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v37);
          sub_233E40((__int64)v37);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = (unsigned int *)sub_186B300(v11 - 2, v17);
        v11 = v19 + 2;
        *v19 = v18;
        v8 = &v19[v19[1] + 2];
      }
      else
      {
        v8 = &v11[v14];
      }
    }
  }
  else
  {
    v11 = nullptr;
  }
  v37[0] = nullptr;
  v35 = v11;
  v20 = sub_570C80(a1 + 160, &v35, v37);
  v22 = *(_QWORD **)(v20 + 16);
  v23 = v20;
  if ( v22 )
    goto LABEL_11;
  v25 = *(_QWORD *)(a1 + 16);
  if ( v25 )
    v26 = *(_DWORD *)(v25 - 4);
  else
    v26 = 0;
  v27 = v26 - *(_DWORD *)(a1 + 24);
  if ( a2 != v27 )
    goto LABEL_17;
  v34 = v23;
  v28 = (_QWORD *)sub_186B270(0x80u);
  *v28 = 0;
  v28[2] = 0;
  v28[4] = 0;
  v28[6] = 0;
  v28[8] = 0;
  v28[10] = 0;
  v28[12] = 0;
  v28[14] = 0;
  v37[0] = v28;
  v37[1] = &byte_8;
  v38 = 0;
  sub_148B660(v37, v27, a3, 1);
  v29 = sub_148BBB0(v37);
  v23 = v34;
  if ( v29 == 1 )
  {
    v31 = sub_148BAF0(v37);
    v30 = v37[0];
    v23 = v34;
    if ( v31 == v27 - 1 )
    {
      if ( v37[0] )
      {
        sub_186B220(v37[0]);
        v23 = v34;
      }
      v33 = v23;
      v22 = (_QWORD *)sub_186B270(0x28u);
      sub_5734E0(v22, v27, a3, a1);
      goto LABEL_18;
    }
    if ( v37[0] )
      goto LABEL_21;
  }
  else
  {
    v30 = v37[0];
    if ( v37[0] )
    {
LABEL_21:
      sub_186B220(v30);
      v23 = v34;
    }
  }
LABEL_17:
  v33 = v23;
  v22 = (_QWORD *)sub_186B270(0x88u);
  sub_573080(v22, a2, a3);
LABEL_18:
  v23 = v33;
  *(_QWORD *)(v33 + 16) = v22;
LABEL_11:
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64))(*v22 + 16LL))(v22, a1, *v22, v21, v23);
  if ( v11 )
    sub_186B220(v11 - 2);
  sub_644EE0(v36);
  return v22;
}

