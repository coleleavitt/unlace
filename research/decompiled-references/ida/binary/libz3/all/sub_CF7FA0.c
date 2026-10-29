void __fastcall sub_CF7FA0(_QWORD *a1)
{
  __int64 *v1; // rbp
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  void *v7; // rdi
  __int64 *v8; // rbp
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rbp
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdi
  void (__fastcall ***v17)(void *); // rbp
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdi

  v1 = (__int64 *)a1[104];
  *a1 = &off_1C59EA8;
  if ( v1 )
  {
    v3 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v1;
        if ( *v1 )
        {
          v5 = a1[103];
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v1 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v1;
    }
    while ( v1 < v3 );
LABEL_8:
    v1 = (__int64 *)a1[104];
    if ( v1 )
LABEL_9:
      sub_186B220(v1 - 1);
  }
  v7 = (void *)a1[100];
  if ( v7 )
    sub_186B220(v7);
  v8 = (__int64 *)a1[99];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[98];
          v6 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_19;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_19:
    v8 = (__int64 *)a1[99];
    if ( v8 )
LABEL_20:
      sub_186B220(v8 - 1);
  }
  v12 = (__int64 *)a1[93];
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_29;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = a1[92];
          v6 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_28;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_28:
    v12 = (__int64 *)a1[93];
    if ( v12 )
LABEL_29:
      sub_186B220(v12 - 1);
  }
  v16 = a1[91];
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = (void (__fastcall ***)(void *))a1[70];
  if ( v17 )
  {
    v6 = (*((_DWORD *)v17 + 2))-- == 1;
    if ( v6 )
    {
      (**v17)(v17);
      sub_186B220(v17);
    }
  }
  v18 = a1[66];
  *a1 = &off_1C59E88;
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = a1[64];
  if ( v19 )
  {
    v20 = a1[65];
    v6 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v20, v19);
  }
  v21 = a1[62];
  if ( v21 )
  {
    v22 = a1[63];
    v6 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v22, v21);
  }
  v23 = a1[60];
  if ( v23 )
  {
    v24 = a1[61];
    v6 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v24, v23);
  }
  a1[41] = &qword_1C637E8;
  sub_15841B0(a1 + 41);
  a1[21] = &qword_1C637E8;
  sub_15841B0(a1 + 21);
  v25 = a1[20];
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  sub_15841B0(a1);
  operator delete(a1, 0x358u);
}

