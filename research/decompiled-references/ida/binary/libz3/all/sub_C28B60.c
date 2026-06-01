__int64 __fastcall sub_C28B60(_QWORD *a1)
{
  __int64 *v1; // rbp
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 *v18; // rbp
  __int64 *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 *v22; // rbp
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 *v26; // rbp
  __int64 *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rdi
  void *v30; // rdi
  void *v31; // rdi
  void *v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rdi

  v1 = (__int64 *)a1[95];
  *a1 = &off_1C584E0;
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
          v5 = a1[94];
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
    v1 = (__int64 *)a1[95];
    if ( v1 )
LABEL_9:
      sub_186B220(v1 - 1);
  }
  v7 = a1[92];
  if ( v7 )
  {
    v8 = a1[93];
    v6 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v8, v7);
  }
  v9 = a1[90];
  if ( v9 )
  {
    v10 = a1[91];
    v6 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v10, v9);
  }
  v11 = a1[88];
  if ( v11 )
  {
    v12 = a1[89];
    v6 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v12, v11);
  }
  v13 = a1[86];
  if ( v13 )
  {
    v14 = a1[87];
    v6 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v14, v13);
  }
  v15 = a1[85];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = a1[84];
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = a1[83];
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = (__int64 *)a1[82];
  if ( v18 )
  {
    v19 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 >= v19 )
      goto LABEL_36;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = a1[81];
          v6 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_35;
      }
      sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_35:
    v18 = (__int64 *)a1[82];
    if ( v18 )
LABEL_36:
      sub_186B220(v18 - 1);
  }
  v22 = (__int64 *)a1[80];
  if ( v22 )
  {
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v22 >= v23 )
      goto LABEL_45;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = a1[79];
          v6 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_44;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_44:
    v22 = (__int64 *)a1[80];
    if ( v22 )
LABEL_45:
      sub_186B220(v22 - 1);
  }
  v26 = (__int64 *)a1[78];
  if ( v26 )
  {
    v27 = &v26[*((unsigned int *)v26 - 1)];
    if ( v26 >= v27 )
      goto LABEL_54;
    do
    {
      while ( 1 )
      {
        v28 = *v26;
        if ( *v26 )
        {
          v29 = a1[77];
          v6 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v26 >= v27 )
          goto LABEL_53;
      }
      sub_15D7BC0(v29, v28);
      ++v26;
    }
    while ( v26 < v27 );
LABEL_53:
    v26 = (__int64 *)a1[78];
    if ( v26 )
LABEL_54:
      sub_186B220(v26 - 1);
  }
  v30 = (void *)a1[74];
  if ( v30 )
    sub_186B220(v30);
  v31 = (void *)a1[71];
  if ( v31 )
    sub_186B220(v31);
  v32 = (void *)a1[68];
  if ( v32 )
    sub_186B220(v32);
  v33 = a1[66];
  *a1 = &off_1C584C0;
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = a1[64];
  if ( v34 )
  {
    v35 = a1[65];
    v6 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v35, v34);
  }
  v36 = a1[62];
  if ( v36 )
  {
    v37 = a1[63];
    v6 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v37, v36);
  }
  v38 = a1[60];
  if ( v38 )
  {
    v39 = a1[61];
    v6 = (*(_DWORD *)(v38 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v39, v38);
  }
  a1[41] = &qword_1C637E8;
  sub_15841B0(a1 + 41);
  a1[21] = &qword_1C637E8;
  sub_15841B0(a1 + 21);
  v40 = a1[20];
  if ( v40 )
    sub_186B220((void *)(v40 - 8));
  return sub_15841B0(a1);
}

