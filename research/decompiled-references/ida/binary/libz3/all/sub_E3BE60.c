void __fastcall sub_E3BE60(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 *v8; // rbp
  __int64 *v9; // rbx
  __int64 *v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  void **v14; // rbx
  void **v15; // r13
  void (__fastcall ***v16)(void *); // rbp
  void *v17; // rbx
  void (__fastcall ***v18)(void *); // rbx

  *a1 = &off_1C5CCF0;
  v2 = (_QWORD *)a1[39];
  if ( v2 != a1 + 41 )
    operator delete(v2, a1[41] + 1LL);
  v3 = (_QWORD *)a1[35];
  if ( v3 != a1 + 37 )
    operator delete(v3, a1[37] + 1LL);
  sub_E3B820((__int64)(a1 + 11));
  v4 = a1[23];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[22];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  std::condition_variable::~condition_variable((std::condition_variable *)(a1 + 16));
  v6 = a1[10];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[9];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = (__int64 *)a1[7];
  if ( v8 )
  {
    v9 = (__int64 *)v8[1];
    if ( v9 )
    {
      v10 = &v9[*((unsigned int *)v9 - 1)];
      if ( v9 >= v10 )
        goto LABEL_22;
      do
      {
        while ( 1 )
        {
          v11 = *v9;
          if ( *v9 )
          {
            v12 = *v8;
            v13 = (*(_DWORD *)(v11 + 8))-- == 1;
            if ( v13 )
              break;
          }
          if ( ++v9 >= v10 )
            goto LABEL_21;
        }
        sub_15D7BC0(v12, v11);
        ++v9;
      }
      while ( v9 < v10 );
LABEL_21:
      v9 = (__int64 *)v8[1];
      if ( v9 )
LABEL_22:
        sub_186B220(v9 - 1);
    }
    sub_186B220(v8);
  }
  v14 = (void **)a1[6];
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v15 )
      goto LABEL_32;
    do
    {
      while ( 1 )
      {
        v16 = (void (__fastcall ***)(void *))*v14;
        if ( *v14 )
        {
          v13 = (*((_DWORD *)v16 + 4))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_31;
      }
      ++v14;
      (**v16)(v16);
      sub_186B220(v16);
    }
    while ( v14 < v15 );
LABEL_31:
    v14 = (void **)a1[6];
    if ( v14 )
LABEL_32:
      sub_186B220(v14 - 1);
  }
  sub_18572D0(a1 + 5);
  v17 = (void *)a1[4];
  if ( v17 )
  {
    sub_15D95C0(a1[4]);
    sub_186B220(v17);
  }
  v18 = (void (__fastcall ***)(void *))a1[2];
  if ( v18 )
  {
    v13 = (*((_DWORD *)v18 + 12))-- == 1;
    if ( v13 )
    {
      (**v18)(v18);
      sub_186B220(v18);
    }
  }
}

