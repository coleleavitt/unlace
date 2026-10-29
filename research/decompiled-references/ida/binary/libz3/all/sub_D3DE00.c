void __fastcall sub_D3DE00(char *a1)
{
  char *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  char *v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbx
  char *v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rdi
  void *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r14
  void *v19; // r12
  __int64 v20; // rsi
  __int64 *v21; // rbx
  __int64 *v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi

  v2 = a1 + 152;
  *((_QWORD *)v2 - 19) = &off_1C5A590;
  sub_14B63F0(v2);
  v3 = *((_QWORD *)a1 + 17);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *((_QWORD *)a1 + 16);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *((char **)a1 + 13);
  if ( v5 )
  {
    v6 = *((unsigned int *)a1 + 28);
    if ( (_DWORD)v6 )
    {
      v7 = *((_QWORD *)a1 + 13);
      v8 = &v5[24 * v6];
      do
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(v7 + 16);
          if ( v9 )
            sub_186B220((void *)(v9 - 8));
          v10 = *(_QWORD *)(v7 + 8);
          if ( !v10 )
            break;
          v7 += 24;
          sub_186B220((void *)(v10 - 8));
          if ( v8 == (char *)v7 )
            goto LABEL_12;
        }
        v7 += 24;
      }
      while ( (char *)v7 != v8 );
    }
LABEL_12:
    sub_186B220(v5);
  }
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 72);
  sub_182CBA0(v11, a1 + 88);
  v12 = *((_QWORD *)a1 + 8);
  if ( v12 )
  {
    v13 = *(unsigned int *)(v12 - 4);
    if ( (_DWORD)v13 )
    {
      v14 = v12 + 16 * v13;
      do
      {
        v15 = v12;
        v12 += 16;
        sub_15D0DF0(v15);
      }
      while ( v14 != v12 );
      v12 = *((_QWORD *)a1 + 8);
    }
    sub_186B220((void *)(v12 - 8));
  }
  v16 = *((_QWORD *)a1 + 7);
  if ( v16 )
  {
    v17 = *(unsigned int *)(v16 - 4);
    if ( (_DWORD)v17 )
    {
      v18 = v16 + 32 * v17;
      do
      {
        v19 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v16);
        v20 = v16 + 16;
        v16 += 32;
        sub_182CBA0(v19, v20);
      }
      while ( v16 != v18 );
      v16 = *((_QWORD *)a1 + 7);
    }
    sub_186B220((void *)(v16 - 8));
  }
  v21 = *((__int64 **)a1 + 4);
  if ( v21 )
  {
    v22 = &v21[*((unsigned int *)v21 - 1)];
    if ( v21 >= v22 )
      goto LABEL_33;
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = *((_QWORD *)a1 + 3);
          if ( (*(_DWORD *)(v23 + 8))-- == 1 )
            break;
        }
        if ( ++v21 >= v22 )
          goto LABEL_32;
      }
      sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( v21 < v22 );
LABEL_32:
    v21 = *((__int64 **)a1 + 4);
    if ( v21 )
LABEL_33:
      sub_186B220(v21 - 1);
  }
  operator delete(a1, 0xA8u);
}

