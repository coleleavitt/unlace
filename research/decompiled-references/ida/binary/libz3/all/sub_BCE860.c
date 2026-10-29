void __fastcall sub_BCE860(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  void *v7; // rdi
  _QWORD *v8; // rdi
  void *v9; // rdi
  __int64 *v10; // rbx
  __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdi

  v2 = (__int64 *)a1[33];
  *a1 = &off_1C57D80;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = a1[32];
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = (__int64 *)a1[33];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (void *)a1[29];
  if ( v7 )
    sub_186B220(v7);
  v8 = (_QWORD *)a1[25];
  if ( v8 != a1 + 27 )
    operator delete(v8, a1[27] + 1LL);
  v9 = (void *)a1[21];
  if ( v9 )
    sub_186B220(v9);
  v10 = (__int64 *)a1[16];
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 >= v11 )
      goto LABEL_24;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = a1[15];
          v6 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_23;
      }
      sub_15D7BC0(v13, v12);
      ++v10;
    }
    while ( v10 < v11 );
LABEL_23:
    v10 = (__int64 *)a1[16];
    if ( v10 )
LABEL_24:
      sub_186B220(v10 - 1);
  }
  v14 = a1[14];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  operator delete(a1, 0x110u);
}

