__int64 __fastcall sub_753BE0(__int64 a1)
{
  __int64 result; // rax
  void ***v3; // rbx
  void ***i; // r13
  void **v5; // r12
  void ***v6; // rbx
  void ***j; // r13
  void **v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rdi
  char *v11; // r15
  __int64 v12; // rax
  char *v13; // rbx
  char *v14; // r14
  void *v15; // r13
  void *v16; // r13
  char *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r14
  void *v23; // r13
  void *v24; // r13
  __int64 v25; // rsi

  result = (__int64)&off_1C541F8;
  v3 = *(void ****)(a1 + 48);
  *(_QWORD *)a1 = &off_1C541F8;
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    for ( i = &v3[result]; i != v3; ++v3 )
    {
      v5 = *v3;
      if ( *v3 )
      {
        if ( *v5 )
          sub_186B220(*v5);
        result = sub_186B220(v5);
      }
    }
  }
  v6 = *(void ****)(a1 + 56);
  if ( v6 )
  {
    result = *((unsigned int *)v6 - 1);
    for ( j = &v6[result]; j != v6; ++v6 )
    {
      v8 = *v6;
      if ( *v6 )
      {
        if ( *v8 )
          sub_186B220(*v8);
        result = sub_186B220(v8);
      }
    }
  }
  v9 = *(_QWORD *)(a1 + 104);
  if ( v9 )
    result = sub_186B220((void *)(v9 - 8));
  v10 = *(_QWORD *)(a1 + 96);
  if ( v10 )
    result = sub_186B220((void *)(v10 - 8));
  v11 = *(char **)(a1 + 64);
  if ( v11 )
  {
    v12 = *(unsigned int *)(a1 + 72);
    if ( (_DWORD)v12 )
    {
      v13 = *(char **)(a1 + 64);
      v14 = &v11[112 * v12];
      do
      {
        v15 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v13 + 72);
        sub_182CBA0(v15, v13 + 88);
        v16 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v13 + 40);
        v17 = v13 + 56;
        v13 += 112;
        sub_182CBA0(v16, v17);
      }
      while ( v13 != v14 );
    }
    result = sub_186B220(v11);
  }
  v18 = *(_QWORD *)(a1 + 56);
  if ( v18 )
    result = sub_186B220((void *)(v18 - 8));
  v19 = *(_QWORD *)(a1 + 48);
  if ( v19 )
    result = sub_186B220((void *)(v19 - 8));
  v20 = *(_QWORD *)(a1 + 40);
  if ( v20 )
  {
    v21 = *(unsigned int *)(v20 - 4);
    if ( (_DWORD)v21 )
    {
      v22 = v20 + 120 * v21;
      do
      {
        v23 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20 + 72);
        sub_182CBA0(v23, v20 + 88);
        v24 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20 + 40);
        v25 = v20 + 56;
        v20 += 120;
        sub_182CBA0(v24, v25);
      }
      while ( v22 != v20 );
      v20 = *(_QWORD *)(a1 + 40);
    }
    return sub_186B220((void *)(v20 - 8));
  }
  return result;
}

