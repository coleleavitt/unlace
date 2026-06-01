void __fastcall sub_37CC60(_QWORD *a1)
{
  _QWORD *v2; // rbp
  __int64 *v3; // rbx
  __int64 *v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 *v8; // rbx
  __int64 *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdi

  v2 = (_QWORD *)a1[2];
  *a1 = &off_1C4D990;
  if ( !v2 )
    goto LABEL_32;
  v3 = (__int64 *)v2[153];
  v2[81] = &off_1C4D970;
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_10;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = v2[152];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_9;
      }
      sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_9:
    v3 = (__int64 *)v2[153];
    if ( v3 )
LABEL_10:
      sub_186B220(v3 - 1);
  }
  v8 = (__int64 *)v2[150];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_19;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = v2[149];
          v7 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_18;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_18:
    v8 = (__int64 *)v2[150];
    if ( v8 )
LABEL_19:
      sub_186B220(v8 - 1);
  }
  v12 = v2[147];
  v2[81] = &off_1C4D950;
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = v2[145];
  if ( v13 && (v14 = v2[146], v7 = *(_DWORD *)(v13 + 8) == 1, --*(_DWORD *)(v13 + 8), v7) )
  {
    sub_15D7BC0(v14, v13);
    v15 = v2[143];
    if ( !v15 )
    {
LABEL_26:
      v17 = v2[141];
      if ( v17 )
        goto LABEL_27;
      goto LABEL_29;
    }
  }
  else
  {
    v15 = v2[143];
    if ( !v15 )
      goto LABEL_26;
  }
  v16 = v2[144];
  v7 = (*(_DWORD *)(v15 + 8))-- == 1;
  if ( !v7 )
    goto LABEL_26;
  sub_15D7BC0(v16, v15);
  v17 = v2[141];
  if ( v17 )
  {
LABEL_27:
    v18 = v2[142];
    v7 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v18, v17);
  }
LABEL_29:
  v2[122] = &qword_1C637E8;
  sub_15841B0(v2 + 122);
  v2[102] = &qword_1C637E8;
  sub_15841B0(v2 + 102);
  v19 = v2[101];
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  sub_15841B0(v2 + 81);
  sub_D81A00(v2 + 1);
  sub_186B220(v2);
LABEL_32:
  sub_18572D0(a1 + 3);
}

