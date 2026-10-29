__int64 __fastcall sub_2FC8A0(__int64 a1)
{
  void **v2; // rbx
  void **v3; // r13
  void (__fastcall ***v4)(void *); // r12
  bool v5; // zf
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r14
  void *v16; // r13
  void *v17; // r13
  void *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r14
  void *v23; // r13
  void *v24; // r13
  void *v25; // r13
  __int64 v26; // rsi

  v2 = *(void ***)(a1 + 112);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = (void (__fastcall ***)(void *))*v2;
        if ( *v2 )
        {
          v5 = (*((_DWORD *)v4 + 4))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      ++v2;
      (**v4)(v4);
      sub_186B220(v4);
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = *(void ***)(a1 + 112);
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  sub_2EB6D0(*(void (****)(void))(a1 + 96));
  sub_2EB6D0(*(void (****)(void))(a1 + 88));
  v7 = *(_QWORD *)(a1 + 72);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  result = sub_2334C0((__int64 *)(a1 + 56));
  v9 = *(__int64 **)(a1 + 48);
  if ( v9 )
  {
    result = *((unsigned int *)v9 - 1);
    v10 = &v9[result];
    if ( v9 >= v10 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = *(_QWORD *)(a1 + 40);
          v5 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_21;
      }
      result = sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_21:
    v9 = *(__int64 **)(a1 + 48);
    if ( v9 )
LABEL_22:
      result = sub_186B220(v9 - 1);
  }
  v13 = *(_QWORD *)(a1 + 32);
  if ( v13 )
  {
    v14 = *(unsigned int *)(v13 - 4);
    if ( (_DWORD)v14 )
    {
      v15 = v13 + 96 * v14;
      do
      {
        v16 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v13 + 64);
        sub_182CBA0(v16, v13 + 80);
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v13 + 32);
        sub_182CBA0(v17, v13 + 48);
        v18 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v13);
        v19 = v13 + 16;
        v13 += 96;
        sub_182CBA0(v18, v19);
      }
      while ( v13 != v15 );
      v13 = *(_QWORD *)(a1 + 32);
    }
    result = sub_186B220((void *)(v13 - 8));
  }
  v20 = *(_QWORD *)(a1 + 24);
  if ( v20 )
  {
    v21 = *(unsigned int *)(v20 - 4);
    if ( (_DWORD)v21 )
    {
      v22 = v20 + 96 * v21;
      do
      {
        v23 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20 + 64);
        sub_182CBA0(v23, v20 + 80);
        v24 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20 + 32);
        sub_182CBA0(v24, v20 + 48);
        v25 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20);
        v26 = v20 + 16;
        v20 += 96;
        sub_182CBA0(v25, v26);
      }
      while ( v22 != v20 );
      v20 = *(_QWORD *)(a1 + 24);
    }
    return sub_186B220((void *)(v20 - 8));
  }
  return result;
}

