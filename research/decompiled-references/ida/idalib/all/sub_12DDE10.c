_QWORD *__fastcall sub_12DDE10(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r13
  int *v9; // rsi
  __int64 v10; // rax
  __int64 i; // rcx
  __int64 j; // rcx
  __int64 v13; // rdx
  void *v14; // rdi
  __int64 v15; // r12
  void *v16; // rdi
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  __int64 v19; // [rsp+8h] [rbp-40h]
  _QWORD *v20; // [rsp+10h] [rbp-38h]

  if ( a1 == (_QWORD *)a2 )
    return a1;
  v3 = a1[2];
  v4 = a1[4];
  v20 = a1;
  v6 = (__int64)(a1 + 1);
  v18 = v3;
  v19 = v4;
  if ( !v3 )
  {
    a1[3] = v6;
    a1[4] = v6;
    v9 = *(int **)(a2 + 16);
    v19 = 0;
    a1[5] = 0;
    if ( v9 )
      goto LABEL_6;
    return a1;
  }
  v7 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v3 + 8) = 0;
  if ( v7 )
    v19 = v7;
  a1[2] = 0;
  v8 = (__int64)a1;
  a1[3] = v6;
  a1[4] = v6;
  v9 = *(int **)(a2 + 16);
  a1[5] = 0;
  if ( v9 )
  {
LABEL_6:
    v10 = sub_12DDAA0((__int64)a1, v9, v6, &v18);
    for ( i = v10; *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 16) )
      ;
    a1[3] = i;
    for ( j = v10; *(_QWORD *)(j + 24); j = *(_QWORD *)(j + 24) )
      ;
    v13 = *(_QWORD *)(a2 + 40);
    v3 = v18;
    a1[4] = j;
    a1[2] = v10;
    v8 = (__int64)v20;
    a1[5] = v13;
    if ( v3 )
      goto LABEL_13;
    return a1;
  }
  while ( 1 )
  {
LABEL_13:
    sub_998560(v8, *(_QWORD **)(v3 + 24));
    v14 = *(void **)(v3 + 64);
    v15 = *(_QWORD *)(v3 + 16);
    if ( v14 != (void *)(v3 + 80) )
      operator delete(v14);
    v16 = *(void **)(v3 + 32);
    if ( v16 == (void *)(v3 + 48) )
      break;
    operator delete(v16);
    operator delete((void *)v3);
    if ( !v15 )
      return a1;
LABEL_17:
    v3 = v15;
  }
  operator delete((void *)v3);
  if ( v15 )
    goto LABEL_17;
  return a1;
}
