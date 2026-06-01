void __fastcall sub_607980(_QWORD *a1)
{
  void *v2; // rdi
  __int64 *v3; // rbp
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 *v8; // rbp
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rbp
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 *v16; // rbp
  __int64 *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 *v20; // rbp
  __int64 *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rdi

  *a1 = &off_1C52840;
  v2 = (void *)a1[84];
  if ( v2 )
    sub_186B220(v2);
  v3 = (__int64 *)a1[81];
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = a1[80];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_10;
      }
      sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_10:
    v3 = (__int64 *)a1[81];
    if ( v3 )
LABEL_11:
      sub_186B220(v3 - 1);
  }
  v8 = (__int64 *)a1[79];
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
          v11 = a1[78];
          v7 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v7 )
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
    v8 = (__int64 *)a1[79];
    if ( v8 )
LABEL_20:
      sub_186B220(v8 - 1);
  }
  v12 = (__int64 *)a1[77];
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
          v15 = a1[76];
          v7 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v7 )
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
    v12 = (__int64 *)a1[77];
    if ( v12 )
LABEL_29:
      sub_186B220(v12 - 1);
  }
  v16 = (__int64 *)a1[75];
  if ( v16 )
  {
    v17 = &v16[*((unsigned int *)v16 - 1)];
    if ( v16 >= v17 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v18 = *v16;
        if ( *v16 )
        {
          v19 = a1[74];
          v7 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v16 >= v17 )
          goto LABEL_37;
      }
      sub_15D7BC0(v19, v18);
      ++v16;
    }
    while ( v16 < v17 );
LABEL_37:
    v16 = (__int64 *)a1[75];
    if ( v16 )
LABEL_38:
      sub_186B220(v16 - 1);
  }
  v20 = (__int64 *)a1[73];
  if ( v20 )
  {
    v21 = &v20[*((unsigned int *)v20 - 1)];
    if ( v20 >= v21 )
      goto LABEL_47;
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = a1[72];
          v7 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v20 >= v21 )
          goto LABEL_46;
      }
      sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( v20 < v21 );
LABEL_46:
    v20 = (__int64 *)a1[73];
    if ( v20 )
LABEL_47:
      sub_186B220(v20 - 1);
  }
  v24 = a1[66];
  *a1 = &off_1C52820;
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = a1[64];
  if ( v25 )
  {
    v26 = a1[65];
    v7 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v26, v25);
  }
  v27 = a1[62];
  if ( v27 )
  {
    v28 = a1[63];
    v7 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v28, v27);
  }
  v29 = a1[60];
  if ( v29 )
  {
    v30 = a1[61];
    v7 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v30, v29);
  }
  a1[41] = &qword_1C637E8;
  sub_15841B0(a1 + 41);
  a1[21] = &qword_1C637E8;
  sub_15841B0(a1 + 21);
  v31 = a1[20];
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  sub_15841B0(a1);
  operator delete(a1, 0x2B8u);
}

