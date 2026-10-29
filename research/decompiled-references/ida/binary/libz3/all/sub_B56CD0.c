void __fastcall sub_B56CD0(__int64 *a1)
{
  __int64 v1; // r12
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  _QWORD *v4; // r13
  void *v5; // rdi
  void *v6; // r14
  _QWORD *v7; // rax
  void *v8; // rdi
  void *v9; // rdi
  char *v10; // r15
  __int64 v11; // rax
  char *v12; // rbx
  char *v13; // r13
  void *v14; // rbp
  char *v15; // rsi
  void *v16; // rdi
  __int64 *v17; // rbx
  __int64 *v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(_QWORD **)(v1 + 168);
    v3 = &v2[2 * *(unsigned int *)(v1 + 176)];
    if ( v2 != v3 )
    {
      while ( *v2 <= 1u )
      {
        v2 += 2;
        if ( v3 == v2 )
          goto LABEL_14;
      }
      while ( v3 != v2 )
      {
        v4 = (_QWORD *)v2[1];
        if ( v4 )
        {
          v5 = (void *)v4[5];
          if ( v5 )
            sub_186B220(v5);
          v6 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v4 + 1);
          sub_182CBA0(v6, v4 + 3);
          sub_186B220(v4);
        }
        v7 = v2 + 2;
        if ( v3 == v2 + 2 )
          break;
        while ( 1 )
        {
          v2 = v7;
          if ( *v7 > 1u )
            break;
          v7 += 2;
          if ( v3 == v7 )
            goto LABEL_14;
        }
      }
    }
LABEL_14:
    v8 = *(void **)(v1 + 240);
    if ( v8 )
      sub_186B220(v8);
    v9 = *(void **)(v1 + 216);
    if ( v9 )
      sub_186B220(v9);
    v10 = *(char **)(v1 + 192);
    if ( v10 )
    {
      v11 = *(unsigned int *)(v1 + 200);
      if ( (_DWORD)v11 )
      {
        v12 = *(char **)(v1 + 192);
        v13 = &v10[40 * v11];
        do
        {
          v14 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v12 + 8);
          v15 = v12 + 24;
          v12 += 40;
          sub_182CBA0(v14, v15);
        }
        while ( v12 != v13 );
      }
      sub_186B220(v10);
    }
    v16 = *(void **)(v1 + 168);
    if ( v16 )
      sub_186B220(v16);
    v17 = *(__int64 **)(v1 + 160);
    if ( v17 )
    {
      v18 = &v17[*((unsigned int *)v17 - 1)];
      if ( v17 >= v18 )
        goto LABEL_33;
      do
      {
        while ( 1 )
        {
          v19 = *v17;
          if ( *v17 )
          {
            v20 = *(_QWORD *)(v1 + 152);
            if ( (*(_DWORD *)(v19 + 8))-- == 1 )
              break;
          }
          if ( ++v17 >= v18 )
            goto LABEL_32;
        }
        sub_15D7BC0(v20, v19);
        ++v17;
      }
      while ( v17 < v18 );
LABEL_32:
      v17 = *(__int64 **)(v1 + 160);
      if ( v17 )
LABEL_33:
        sub_186B220(v17 - 1);
    }
    sub_14B63F0(v1 + 48);
    sub_186B220((void *)v1);
  }
}

