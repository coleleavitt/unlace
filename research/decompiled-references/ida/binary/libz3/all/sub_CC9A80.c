void __fastcall sub_CC9A80(_QWORD *a1)
{
  _QWORD *v2; // rbp
  __int64 v3; // rdi
  void *v4; // r13
  void *v5; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // r13
  void *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  void *v13; // rdi
  __int64 *v14; // rbx
  __int64 *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rdi

  v2 = (_QWORD *)a1[2];
  *a1 = &off_1C59470;
  if ( v2 )
  {
    v3 = v2[22];
    if ( v3 )
      sub_186B220((void *)(v3 - 8));
    v4 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v2 + 17);
    sub_182CBA0(v4, v2 + 19);
    v5 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v2 + 13);
    sub_182CBA0(v5, v2 + 15);
    v6 = v2[11];
    if ( v6 )
      sub_186B220((void *)(v6 - 8));
    v7 = (_QWORD *)v2[10];
    if ( v7 )
    {
      v8 = *((unsigned int *)v7 - 1);
      if ( (_DWORD)v8 )
      {
        v9 = &v7[v8];
        do
        {
          while ( *v7 )
          {
            v10 = (void *)(*v7++ - 8LL);
            sub_186B220(v10);
            if ( v7 == v9 )
              goto LABEL_11;
          }
          ++v7;
        }
        while ( v7 != v9 );
LABEL_11:
        v7 = (_QWORD *)v2[10];
      }
      sub_186B220(v7 - 1);
    }
    v11 = v2[9];
    if ( v11 )
      sub_186B220((void *)(v11 - 8));
    v12 = v2[8];
    if ( v12 )
      sub_186B220((void *)(v12 - 8));
    v13 = (void *)v2[5];
    if ( v13 )
      sub_186B220(v13);
    v14 = (__int64 *)v2[4];
    if ( v14 )
    {
      v15 = &v14[*((unsigned int *)v14 - 1)];
      if ( v14 >= v15 )
        goto LABEL_27;
      do
      {
        while ( 1 )
        {
          v16 = *v14;
          if ( *v14 )
          {
            v17 = v2[3];
            if ( (*(_DWORD *)(v16 + 8))-- == 1 )
              break;
          }
          if ( ++v14 >= v15 )
            goto LABEL_26;
        }
        sub_15D7BC0(v17, v16);
        ++v14;
      }
      while ( v14 < v15 );
LABEL_26:
      v14 = (__int64 *)v2[4];
      if ( v14 )
LABEL_27:
        sub_186B220(v14 - 1);
    }
    sub_186B220(v2);
  }
  sub_18572D0(a1 + 3);
}

