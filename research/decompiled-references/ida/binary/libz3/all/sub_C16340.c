void __fastcall sub_C16340(char *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  char *v4; // rdi
  __int64 *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 *v13; // rbx
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 *v17; // rbx
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi

  v2 = *((_QWORD **)a1 + 16);
  *(_QWORD *)a1 = &off_1C58368;
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    operator delete(v3, 0x18u);
  }
  memset(*((void **)a1 + 14), 0, 8LL * *((_QWORD *)a1 + 15));
  v4 = *((char **)a1 + 14);
  *((_QWORD *)a1 + 17) = 0;
  *((_QWORD *)a1 + 16) = 0;
  if ( v4 != a1 + 160 )
    operator delete(v4, 8LL * *((_QWORD *)a1 + 15));
  v5 = *((__int64 **)a1 + 13);
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v6 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = *((_QWORD *)a1 + 12);
          v9 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_12;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_12:
    v5 = *((__int64 **)a1 + 13);
    if ( v5 )
LABEL_13:
      sub_186B220(v5 - 1);
  }
  v10 = *((_QWORD *)a1 + 11);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = *((_QWORD *)a1 + 10);
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = *((_QWORD *)a1 + 9);
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = *((__int64 **)a1 + 8);
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 >= v14 )
      goto LABEL_28;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = *((_QWORD *)a1 + 7);
          v9 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_27;
      }
      sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_27:
    v13 = *((__int64 **)a1 + 8);
    if ( v13 )
LABEL_28:
      sub_186B220(v13 - 1);
  }
  v17 = *((__int64 **)a1 + 6);
  if ( v17 )
  {
    v18 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v18 )
      goto LABEL_37;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = *((_QWORD *)a1 + 5);
          v9 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_36;
      }
      sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_36:
    v17 = *((__int64 **)a1 + 6);
    if ( v17 )
LABEL_37:
      sub_186B220(v17 - 1);
  }
  operator delete(a1, 0xA8u);
}

