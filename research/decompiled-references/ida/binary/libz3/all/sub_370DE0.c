void __fastcall sub_370DE0(char *a1)
{
  char *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  void *v5; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  void *v11; // rdi
  __int64 *v12; // rbx
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  void (__fastcall ***v16)(_QWORD); // rbx

  v2 = a1 + 128;
  *((_QWORD *)v2 - 16) = &off_1C4D738;
  sub_180C0E0(v2);
  v3 = *((_QWORD *)a1 + 15);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *((_QWORD *)a1 + 14);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *((void **)a1 + 11);
  if ( v5 )
    sub_186B220(v5);
  v6 = *((__int64 **)a1 + 10);
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v7 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = *((_QWORD *)a1 + 9);
          v10 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_14;
      }
      sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_14:
    v6 = *((__int64 **)a1 + 10);
    if ( v6 )
LABEL_15:
      sub_186B220(v6 - 1);
  }
  v11 = *((void **)a1 + 6);
  if ( v11 )
    sub_186B220(v11);
  v12 = *((__int64 **)a1 + 5);
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = *((_QWORD *)a1 + 4);
          v10 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_25;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_25:
    v12 = *((__int64 **)a1 + 5);
    if ( v12 )
LABEL_26:
      sub_186B220(v12 - 1);
  }
  v16 = *((void (__fastcall ****)(_QWORD))a1 + 3);
  if ( v16 )
  {
    (**v16)(*((_QWORD *)a1 + 3));
    sub_186B220(v16);
  }
  sub_18572D0(a1 + 16);
  operator delete(a1, 0xA8u);
}

