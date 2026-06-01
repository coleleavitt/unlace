void __fastcall sub_737840(_QWORD *a1)
{
  _QWORD *v2; // rbx
  char *v3; // rdi
  char *v4; // rcx
  char *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdi

  v2 = (_QWORD *)a1[2];
  *a1 = &off_1C53F30;
  if ( !v2 )
    goto LABEL_28;
  v3 = (char *)v2[78];
  *v2 = &off_1C53F10;
  v4 = &v3[8 * *((unsigned int *)v2 + 158)];
  if ( v3 != v4 )
  {
    v5 = v3;
    do
    {
      v6 = *(_QWORD *)v5;
      v5 += 8;
      *(_BYTE *)(v6 + 6) &= ~1u;
    }
    while ( v5 != v4 );
  }
  *((_DWORD *)v2 + 158) = 0;
  if ( v3 != (char *)(v2 + 80) && v3 )
    sub_186B220(v3);
  v7 = v2[77];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = v2[76];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = v2[75];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = v2[74];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = v2[66];
  *v2 = &off_1C53EF0;
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = v2[64];
  if ( v12 && (v13 = v2[65], v14 = *(_DWORD *)(v12 + 8) == 1, --*(_DWORD *)(v12 + 8), v14) )
  {
    sub_15D7BC0(v13, v12);
    v15 = v2[62];
    if ( !v15 )
    {
LABEL_22:
      v17 = v2[60];
      if ( v17 )
        goto LABEL_23;
      goto LABEL_25;
    }
  }
  else
  {
    v15 = v2[62];
    if ( !v15 )
      goto LABEL_22;
  }
  v16 = v2[63];
  v14 = (*(_DWORD *)(v15 + 8))-- == 1;
  if ( !v14 )
    goto LABEL_22;
  sub_15D7BC0(v16, v15);
  v17 = v2[60];
  if ( v17 )
  {
LABEL_23:
    v18 = v2[61];
    v14 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v18, v17);
  }
LABEL_25:
  v2[41] = &qword_1C637E8;
  sub_15841B0(v2 + 41);
  v2[21] = &qword_1C637E8;
  sub_15841B0(v2 + 21);
  v19 = v2[20];
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  sub_15841B0(v2);
  sub_186B220(v2);
LABEL_28:
  sub_18572D0(a1 + 3);
}

