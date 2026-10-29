unsigned __int64 __fastcall sub_6283A0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  _QWORD *v4; // rax
  unsigned __int64 v6; // rbx
  _QWORD *v7; // r13
  __int64 v8; // rcx
  __int64 v9; // r12
  int v10; // eax
  const char *v11; // r15
  int v12; // r14d
  __int64 v13; // rax
  size_t v14; // r13
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rbp
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rbp
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // [rsp+18h] [rbp-80h] BYREF
  __int64 v28; // [rsp+20h] [rbp-78h] BYREF
  __int64 v29; // [rsp+28h] [rbp-70h] BYREF
  __int64 v30; // [rsp+30h] [rbp-68h] BYREF
  void *ptr; // [rsp+38h] [rbp-60h] BYREF
  __int128 v32; // [rsp+40h] [rbp-58h]
  int v33; // [rsp+50h] [rbp-48h]
  unsigned __int64 v34; // [rsp+58h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v3 = a2;
  v27 = a3;
  v4 = *(_QWORD **)(a2 + 56);
  if ( !v4 )
    goto LABEL_33;
  a2 += 48;
  v6 = a3;
  v7 = (_QWORD *)a2;
  do
  {
    while ( 1 )
    {
      v8 = v4[2];
      a3 = v4[3];
      if ( v4[4] < v6 )
        break;
      v7 = v4;
      v4 = (_QWORD *)v4[2];
      if ( !v8 )
        goto LABEL_6;
    }
    v4 = (_QWORD *)v4[3];
  }
  while ( a3 );
LABEL_6:
  if ( (_QWORD *)a2 == v7 || v6 < v7[4] )
LABEL_33:
    sub_622410(a1, a2, a3);
  v9 = switch_dbctx(*(int *)(a1 + 8));
  v10 = sub_627240(*(_QWORD *)(a1 + 112), a1, *((_DWORD *)v7 + 18), v3);
  v11 = (const char *)v7[6];
  v12 = v10;
  v13 = v7[5];
  v32 = 0;
  ptr = nullptr;
  v30 = v13;
  if ( v11 )
  {
    v14 = strlen(v11);
    ptr = (void *)qvector_reserve(&ptr, 0, v14 + 1, 1);
    *(_QWORD *)&v32 = v14 + 1;
    memmove(ptr, v11, v14);
    *((_BYTE *)ptr + v14) = 0;
  }
  v15 = *(_QWORD **)(a1 + 56);
  v16 = (_QWORD *)(a1 + 48);
  v33 = v12;
  v17 = (_QWORD *)(a1 + 48);
  if ( v15 )
  {
    do
    {
      while ( 1 )
      {
        v18 = v15[2];
        v19 = v15[3];
        if ( v15[4] < v6 )
          break;
        v17 = v15;
        v15 = (_QWORD *)v15[2];
        if ( !v18 )
          goto LABEL_15;
      }
      v15 = (_QWORD *)v15[3];
    }
    while ( v19 );
LABEL_15:
    if ( v16 != v17 && v6 >= v17[4] )
    {
      if ( ptr )
      {
        *(_QWORD *)&v32 = 0;
        qfree(ptr);
      }
      if ( !under_debugger )
        interr(2448);
      BUG();
    }
  }
  v20 = sub_6281E0((_QWORD *)(a1 + 40), v17, &v27, (__int64)&v30);
  if ( ptr )
  {
    *(_QWORD *)&v32 = 0;
    qfree(ptr);
  }
  v21 = -1;
  if ( (unsigned __int8)sub_7BEFD0(*(_QWORD *)(v9 + 1672) + 2328LL, v9, &v30, *((int *)v20 + 18), 65) )
    v21 = v30;
  v22 = v20[6];
  if ( v22 )
  {
    v30 = v21;
    sub_622EE0((_QWORD *)(*(_QWORD *)(v9 + 1672) + 2336LL), v6);
    sub_7BE7C0(&v30, v9, v6, v22, 0, 339);
  }
  v23 = v20[5];
  if ( v23 != -1 )
  {
    v25 = *(_QWORD *)(v9 + 1672);
    v28 = v21;
    sub_622EE0((_QWORD *)(v25 + 2336), v6);
    v26 = sub_3BDD60(*(_QWORD **)(v9 + 1672), v6);
    if ( (unsigned __int8)sub_7BEFD0(&v28, v9, &v29, v23, 65) )
    {
      if ( v26 != v29 )
      {
        v30 = v23;
        sub_7BE7C0(&v28, v9, v26, &v30, 8, 79);
      }
    }
    else
    {
      v30 = v26;
      sub_7BE7C0(&v28, v9, v23, &v30, 8, 65);
    }
  }
  return v34 - __readfsqword(0x28u);
}
