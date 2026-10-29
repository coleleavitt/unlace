_QWORD *__fastcall sub_5A2270(__int64 a1, __int64 a2, unsigned int **a3)
{
  char **exception; // r12
  __int64 v5; // rax
  unsigned int *v6; // rbx
  unsigned int v7; // r12d
  unsigned int *v8; // r14
  _QWORD *v9; // rax
  unsigned int *v10; // rax
  unsigned int v11; // edx
  int v12; // edi
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // r8d
  size_t v16; // rsi
  unsigned int v17; // r15d
  unsigned int *v18; // rax
  unsigned int v19; // r15d
  unsigned int *v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // r15d
  unsigned int *v23; // rax
  unsigned int v24; // r15d
  __int64 v25; // rdx
  unsigned int v26; // edx
  _QWORD *v27; // r14
  __int64 v30; // [rsp+8h] [rbp-88h]
  int v31; // [rsp+14h] [rbp-7Ch]
  unsigned int *v32; // [rsp+18h] [rbp-78h]
  unsigned int v33; // [rsp+2Ch] [rbp-64h] BYREF
  unsigned int *v34; // [rsp+30h] [rbp-60h] BYREF
  unsigned int *v35; // [rsp+38h] [rbp-58h] BYREF
  unsigned int *v36[10]; // [rsp+40h] [rbp-50h] BYREF

  v30 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 )
    v31 = *(_DWORD *)(v5 - 4);
  else
    v31 = 0;
  v6 = *a3;
  if ( !*a3 )
  {
    v7 = 0;
    v19 = v31 - 1;
LABEL_23:
    v34 = v6;
    sub_2FD3F0(&v34);
    v6 = v34;
    v13 = *(v34 - 1);
    goto LABEL_13;
  }
  v7 = *(v6 - 1);
  if ( !v7 )
  {
    v6 = nullptr;
    v19 = v31 - 1;
    goto LABEL_23;
  }
  v8 = *a3;
  v32 = &v6[v7];
  v9 = (_QWORD *)sub_186B270(0x10u);
  *v9 = 2;
  v10 = (unsigned int *)(v9 + 1);
  v6 = v10;
  while ( 1 )
  {
    v11 = *v8++;
    *v10 = v11;
    v12 = *(v6 - 1);
    v13 = (unsigned int)(v12 + 1);
    *(v6 - 1) = v13;
    if ( v8 == v32 )
      break;
    v14 = *(v6 - 2);
    if ( v14 == (_DWORD)v13 )
    {
      v15 = (3 * v14 + 1) >> 1;
      v16 = 4 * v15 + 8;
      v17 = v15;
      if ( 4 * v12 + 12 >= (unsigned int)v16 || v14 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v36, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v36);
        sub_233E40((__int64)v36);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v18 = (unsigned int *)sub_186B300(v6 - 2, v16);
      v6 = v18 + 2;
      *v18 = v17;
      v10 = &v18[v18[1] + 2];
    }
    else
    {
      v10 = &v6[v13];
    }
  }
  v19 = v31 - 1;
  if ( (_DWORD)v13 == *(v6 - 2) )
    goto LABEL_23;
LABEL_13:
  v6[v13] = v19;
  ++*(v6 - 1);
  v35 = nullptr;
  sub_647A70(0, v7, &v35);
  v20 = v35;
  if ( !v35 || (v21 = *(v35 - 1), (_DWORD)v21 == *(v35 - 2)) )
  {
    sub_2FD3F0(&v35);
    v20 = v35;
    v21 = *(v35 - 1);
  }
  v20[v21] = v7;
  ++*(v20 - 1);
  v36[0] = nullptr;
  sub_647A70(v19, v7, v36);
  v22 = v7 + v19;
  v33 = v22;
  sub_5A21E0(v36, &v33);
  v23 = v36[0];
  v24 = v22 + 1;
  if ( !v36[0] || (v25 = *(v36[0] - 1), (_DWORD)v25 == *(v36[0] - 2)) )
  {
    sub_2FD3F0(v36);
    v23 = v36[0];
    v25 = *(v36[0] - 1);
  }
  v23[v25] = v24;
  v26 = *(v23 - 1) + 1;
  *(v23 - 1) = v26;
  v27 = sub_4C9510(*(_QWORD *)(v30 + 24), a1, a2, *(v6 - 1), v6, v35, v26, v23);
  if ( v36[0] )
    sub_186B220(v36[0] - 2);
  if ( v35 )
    sub_186B220(v35 - 2);
  sub_186B220(v6 - 2);
  return v27;
}

