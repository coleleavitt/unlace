void __fastcall sub_37B8C0(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdi

  v2 = (__int64 *)a1[72];
  *a1 = &off_1C4D970;
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
          v5 = a1[71];
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
    v2 = (__int64 *)a1[72];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (__int64 *)a1[69];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[68];
          v6 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_17;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_17:
    v7 = (__int64 *)a1[69];
    if ( v7 )
LABEL_18:
      sub_186B220(v7 - 1);
  }
  v11 = a1[66];
  *a1 = &off_1C4D950;
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = a1[64];
  if ( v12 )
  {
    v13 = a1[65];
    v6 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v13, v12);
  }
  v14 = a1[62];
  if ( v14 )
  {
    v15 = a1[63];
    v6 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v15, v14);
  }
  v16 = a1[60];
  if ( v16 )
  {
    v17 = a1[61];
    v6 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v17, v16);
  }
  a1[41] = &qword_1C637E8;
  sub_15841B0(a1 + 41);
  a1[21] = &qword_1C637E8;
  sub_15841B0(a1 + 21);
  v18 = a1[20];
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  sub_15841B0(a1);
  operator delete(a1, 0x258u);
}

