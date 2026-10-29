void __fastcall sub_E2CF70(_QWORD **a1)
{
  _QWORD *v1; // rbp
  _QWORD *v2; // rdi
  void *v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r14
  void *v11; // r12
  __int64 v12; // rsi
  __int64 *v13; // rbx
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v18; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (_QWORD *)v1[39];
    if ( v2 != v1 + 41 )
      operator delete(v2, v1[41] + 1LL);
    v3 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v1 + 33);
    sub_182CBA0(v3, v1 + 35);
    v4 = v1[32];
    if ( v4 )
    {
      v5 = *(unsigned int *)(v4 - 4);
      if ( (_DWORD)v5 )
      {
        v6 = v4 + 16 * v5;
        do
        {
          v7 = v4;
          v4 += 16;
          sub_15D0DF0(v7);
        }
        while ( v6 != v4 );
        v4 = v1[32];
      }
      sub_186B220((void *)(v4 - 8));
    }
    v8 = v1[31];
    if ( v8 )
    {
      v9 = *(unsigned int *)(v8 - 4);
      if ( (_DWORD)v9 )
      {
        v10 = v8 + 32 * v9;
        do
        {
          v11 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v8);
          v12 = v8 + 16;
          v8 += 32;
          sub_182CBA0(v11, v12);
        }
        while ( v8 != v10 );
        v8 = v1[31];
      }
      sub_186B220((void *)(v8 - 8));
    }
    v13 = (__int64 *)v1[21];
    if ( v13 )
    {
      v14 = &v13[*((unsigned int *)v13 - 1)];
      if ( v13 >= v14 )
        goto LABEL_24;
      do
      {
        while ( 1 )
        {
          v15 = *v13;
          if ( *v13 )
          {
            v16 = v1[20];
            if ( (*(_DWORD *)(v15 + 8))-- == 1 )
              break;
          }
          if ( ++v13 >= v14 )
            goto LABEL_23;
        }
        sub_15D7BC0(v16, v15);
        ++v13;
      }
      while ( v13 < v14 );
LABEL_23:
      v13 = (__int64 *)v1[21];
      if ( v13 )
LABEL_24:
        sub_186B220(v13 - 1);
    }
    v18 = v1[19];
    if ( v18 )
      sub_186B220((void *)(v18 - 8));
    sub_186B220(v1);
  }
}

