__int64 (__fastcall **__fastcall sub_606B00(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  _QWORD *v2; // rbx
  void *v3; // rdi
  __int64 *v4; // rbp
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  __int64 *v9; // rbp
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // rbp
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 *v17; // rbp
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 *v21; // rbp
  __int64 *v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rdi

  result = &off_1C52860;
  v2 = (_QWORD *)a1[3];
  *a1 = &off_1C52860;
  if ( !v2 )
    return result;
  v3 = (void *)v2[141];
  v2[57] = &off_1C52840;
  if ( v3 )
    sub_186B220(v3);
  v4 = (__int64 *)v2[138];
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = v2[137];
          v8 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_11;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_11:
    v4 = (__int64 *)v2[138];
    if ( v4 )
LABEL_12:
      sub_186B220(v4 - 1);
  }
  v9 = (__int64 *)v2[136];
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = v2[135];
          v8 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_20;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_20:
    v9 = (__int64 *)v2[136];
    if ( v9 )
LABEL_21:
      sub_186B220(v9 - 1);
  }
  v13 = (__int64 *)v2[134];
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 >= v14 )
      goto LABEL_30;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = v2[133];
          v8 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_29;
      }
      sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_29:
    v13 = (__int64 *)v2[134];
    if ( v13 )
LABEL_30:
      sub_186B220(v13 - 1);
  }
  v17 = (__int64 *)v2[132];
  if ( v17 )
  {
    v18 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v18 )
      goto LABEL_39;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = v2[131];
          v8 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_38;
      }
      sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_38:
    v17 = (__int64 *)v2[132];
    if ( v17 )
LABEL_39:
      sub_186B220(v17 - 1);
  }
  v21 = (__int64 *)v2[130];
  if ( v21 )
  {
    v22 = &v21[*((unsigned int *)v21 - 1)];
    if ( v21 >= v22 )
      goto LABEL_48;
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = v2[129];
          v8 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v21 >= v22 )
          goto LABEL_47;
      }
      sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( v21 < v22 );
LABEL_47:
    v21 = (__int64 *)v2[130];
    if ( v21 )
LABEL_48:
      sub_186B220(v21 - 1);
  }
  v25 = v2[123];
  v2[57] = &off_1C52820;
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = v2[121];
  if ( v26 && (v27 = v2[122], v8 = *(_DWORD *)(v26 + 8) == 1, --*(_DWORD *)(v26 + 8), v8) )
  {
    sub_15D7BC0(v27, v26);
    v28 = v2[119];
    if ( !v28 )
    {
LABEL_55:
      v30 = v2[117];
      if ( v30 )
        goto LABEL_56;
      goto LABEL_58;
    }
  }
  else
  {
    v28 = v2[119];
    if ( !v28 )
      goto LABEL_55;
  }
  v29 = v2[120];
  v8 = (*(_DWORD *)(v28 + 8))-- == 1;
  if ( !v8 )
    goto LABEL_55;
  sub_15D7BC0(v29, v28);
  v30 = v2[117];
  if ( v30 )
  {
LABEL_56:
    v31 = v2[118];
    v8 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v31, v30);
  }
LABEL_58:
  v2[98] = &qword_1C637E8;
  sub_15841B0(v2 + 98);
  v2[78] = &qword_1C637E8;
  sub_15841B0(v2 + 78);
  v32 = v2[77];
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  sub_15841B0(v2 + 57);
  sub_FC0640(v2 + 56);
  sub_5C8660(v2 + 3);
  sub_18572D0(v2 + 2);
  return (__int64 (__fastcall **)())sub_186B220(v2);
}

