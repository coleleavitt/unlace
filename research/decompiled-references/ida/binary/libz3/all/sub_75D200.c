void __fastcall sub_75D200(_QWORD *a1)
{
  _QWORD *v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rdi
  bool v5; // zf
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdi
  void *v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdi

  v2 = (_QWORD *)a1[2];
  *a1 = &off_1C542D0;
  if ( !v2 )
    goto LABEL_32;
  v3 = v2[79];
  *v2 = &off_1C542B0;
  if ( v3 && (v4 = v2[80], v5 = *(_DWORD *)(v3 + 8) == 1, --*(_DWORD *)(v3 + 8), v5) )
  {
    sub_15D7BC0(v4, v3);
    v6 = v2[77];
    if ( v6 )
    {
LABEL_5:
      v7 = v2[78];
      v5 = (*(_DWORD *)(v6 + 8))-- == 1;
      if ( v5 )
        sub_15D7BC0(v7, v6);
    }
  }
  else
  {
    v6 = v2[77];
    if ( v6 )
      goto LABEL_5;
  }
  v8 = (__int64 *)v2[76];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = v2[75];
          v5 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_14;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_14:
    v8 = (__int64 *)v2[76];
    if ( v8 )
LABEL_15:
      sub_186B220(v8 - 1);
  }
  v12 = v2[74];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = (void *)v2[71];
  if ( v13 )
    sub_186B220(v13);
  v14 = v2[66];
  *v2 = &off_1C54290;
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = v2[64];
  if ( v15 && (v16 = v2[65], v5 = *(_DWORD *)(v15 + 8) == 1, --*(_DWORD *)(v15 + 8), v5) )
  {
    sub_15D7BC0(v16, v15);
    v17 = v2[62];
    if ( !v17 )
    {
LABEL_26:
      v19 = v2[60];
      if ( v19 )
        goto LABEL_27;
      goto LABEL_29;
    }
  }
  else
  {
    v17 = v2[62];
    if ( !v17 )
      goto LABEL_26;
  }
  v18 = v2[63];
  v5 = (*(_DWORD *)(v17 + 8))-- == 1;
  if ( !v5 )
    goto LABEL_26;
  sub_15D7BC0(v18, v17);
  v19 = v2[60];
  if ( v19 )
  {
LABEL_27:
    v20 = v2[61];
    v5 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v20, v19);
  }
LABEL_29:
  v2[41] = &qword_1C637E8;
  sub_15841B0(v2 + 41);
  v2[21] = &qword_1C637E8;
  sub_15841B0(v2 + 21);
  v21 = v2[20];
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  sub_15841B0(v2);
  sub_186B220(v2);
LABEL_32:
  sub_18572D0(a1 + 3);
  operator delete(a1, 0x20u);
}

