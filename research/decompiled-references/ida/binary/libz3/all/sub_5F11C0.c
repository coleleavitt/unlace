void __fastcall sub_5F11C0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 *v8; // rbp
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  void *v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 *v22; // rbp
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  char *v26; // r13
  __int64 v27; // rax
  __int64 v28; // rbp
  char *v29; // r12
  __int64 v30; // rdi
  void *v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  void *v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rdi

  *a1 = &off_1C52718;
  v2 = (_QWORD *)a1[112];
  if ( v2 != a1 + 114 && v2 )
    sub_186B220(v2);
  v3 = a1[111];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[110];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[109];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[108];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[107];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = (__int64 *)a1[106];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[105];
          v12 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_21;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_21:
    v8 = (__int64 *)a1[106];
    if ( v8 )
LABEL_22:
      sub_186B220(v8 - 1);
  }
  v13 = a1[103];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = a1[102];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = a1[101];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = a1[98];
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = a1[97];
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = (void *)a1[94];
  if ( v18 )
    sub_186B220(v18);
  v19 = a1[89];
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = a1[88];
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  v21 = a1[87];
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = (__int64 *)a1[86];
  if ( v22 )
  {
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v22 >= v23 )
      goto LABEL_49;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = a1[85];
          v12 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_48;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_48:
    v22 = (__int64 *)a1[86];
    if ( v22 )
LABEL_49:
      sub_186B220(v22 - 1);
  }
  v26 = (char *)a1[82];
  if ( v26 )
  {
    v27 = *((unsigned int *)a1 + 166);
    if ( (_DWORD)v27 )
    {
      v28 = a1[82];
      v29 = &v26[24 * v27];
      do
      {
        while ( 1 )
        {
          v30 = *(_QWORD *)(v28 + 8);
          if ( !v30 )
            break;
          v28 += 24;
          sub_186B220((void *)(v30 - 8));
          if ( v29 == (char *)v28 )
            goto LABEL_55;
        }
        v28 += 24;
      }
      while ( (char *)v28 != v29 );
    }
LABEL_55:
    sub_186B220(v26);
  }
  v31 = (void *)a1[76];
  if ( v31 )
    sub_186B220(v31);
  v32 = a1[75];
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  v33 = a1[74];
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = (void *)a1[71];
  if ( v34 )
    sub_186B220(v34);
  v35 = a1[70];
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  v36 = a1[66];
  *a1 = &off_1C526F8;
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  v37 = a1[64];
  if ( v37 )
  {
    v38 = a1[65];
    v12 = (*(_DWORD *)(v37 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v38, v37);
  }
  v39 = a1[62];
  if ( v39 )
  {
    v40 = a1[63];
    v12 = (*(_DWORD *)(v39 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v40, v39);
  }
  v41 = a1[60];
  if ( v41 )
  {
    v42 = a1[61];
    v12 = (*(_DWORD *)(v41 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v42, v41);
  }
  a1[41] = &qword_1C637E8;
  sub_15841B0(a1 + 41);
  a1[21] = &qword_1C637E8;
  sub_15841B0(a1 + 21);
  v43 = a1[20];
  if ( v43 )
    sub_186B220((void *)(v43 - 8));
  sub_15841B0(a1);
  operator delete(a1, 0x410u);
}

