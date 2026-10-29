__int64 *__fastcall sub_6B0440(_QWORD *a1)
{
  __int64 **v2; // rbp
  __int64 **v3; // r13
  __int64 *v4; // r14
  __int64 *v5; // rbx
  __int64 *v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  __int64 v18; // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // rdi

  v2 = (__int64 **)a1[104];
  *a1 = &off_1C53028;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 == v3 )
      goto LABEL_27;
    do
    {
      v4 = *v2;
      if ( *v2 )
      {
        v5 = (__int64 *)v4[20];
        if ( v5 )
        {
          v6 = &v5[*((unsigned int *)v5 - 1)];
          if ( v5 >= v6 )
            goto LABEL_12;
          do
          {
            while ( 1 )
            {
              v7 = *v5;
              if ( *v5 )
              {
                v8 = v4[19];
                v9 = (*(_DWORD *)(v7 + 8))-- == 1;
                if ( v9 )
                  break;
              }
              if ( ++v5 >= v6 )
                goto LABEL_11;
            }
            sub_15D7BC0(v8, v7);
            ++v5;
          }
          while ( v5 < v6 );
LABEL_11:
          v5 = (__int64 *)v4[20];
          if ( v5 )
LABEL_12:
            sub_186B220(v5 - 1);
        }
        v10 = (void *)v4[18];
        v4[12] = (__int64)&off_1C62200;
        if ( v10 )
          sub_186B220(v10);
        v11 = (void *)v4[15];
        if ( v11 )
          sub_186B220(v11);
        v12 = (void *)v4[11];
        v4[5] = (__int64)&off_1C62200;
        if ( v12 )
          sub_186B220(v12);
        v13 = (void *)v4[8];
        if ( v13 )
          sub_186B220(v13);
        v14 = *v4;
        if ( *v4 )
        {
          v15 = v4[1];
          v9 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v9 )
            sub_15D7BC0(v15, v14);
        }
        sub_186B220(v4);
      }
      ++v2;
    }
    while ( v3 != v2 );
    v3 = (__int64 **)a1[104];
    if ( v3 )
LABEL_27:
      *((_DWORD *)v3 - 1) = 0;
  }
  v16 = (void *)a1[108];
  if ( v16 )
    sub_186B220(v16);
  v17 = (void *)a1[105];
  if ( v17 )
    sub_186B220(v17);
  v18 = a1[104];
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = (_QWORD *)a1[24];
  if ( v19 != a1 + 26 )
    operator delete(v19, a1[26] + 1LL);
  v20 = (_QWORD *)a1[20];
  if ( v20 != a1 + 22 )
    operator delete(v20, a1[22] + 1LL);
  return sub_6AA340(a1);
}

