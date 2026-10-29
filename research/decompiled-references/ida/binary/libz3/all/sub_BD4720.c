__int64 (__fastcall **__fastcall sub_BD4720(_QWORD *a1))()
{
  _QWORD **v2; // r12
  _QWORD **i; // r13
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  __int64 *v13; // rbx
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  __int64 *v18; // rbx
  __int64 *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  void *v22; // rdi
  __int64 *v23; // rbx
  __int64 *v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 *v27; // rbx
  __int64 *v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rdi

  v2 = (_QWORD **)a1[56];
  *a1 = &off_1C73EB0;
  if ( v2 )
  {
    for ( i = &v2[*((unsigned int *)v2 - 1)]; i != v2; ++v2 )
    {
      v4 = *v2;
      if ( *v2 )
      {
        v5 = v4[4];
        if ( v5 )
          sub_186B220((void *)(v5 - 8));
        v6 = v4[3];
        if ( v6 )
          sub_186B220((void *)(v6 - 8));
        v7 = v4[2];
        if ( v7 )
          sub_186B220((void *)(v7 - 8));
        v8 = v4[1];
        if ( v8 )
          sub_186B220((void *)(v8 - 8));
        if ( *v4 )
          sub_186B220((void *)(*v4 - 8LL));
        sub_186B220(v4);
      }
    }
  }
  v9 = a1[75];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = a1[74];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = (void *)a1[71];
  if ( v11 )
    sub_186B220(v11);
  v12 = (void *)a1[68];
  if ( v12 )
    sub_186B220(v12);
  v13 = (__int64 *)a1[67];
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 >= v14 )
      goto LABEL_32;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = a1[66];
          v17 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_31;
      }
      sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_31:
    v13 = (__int64 *)a1[67];
    if ( v13 )
LABEL_32:
      sub_186B220(v13 - 1);
  }
  v18 = (__int64 *)a1[65];
  if ( v18 )
  {
    v19 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 >= v19 )
      goto LABEL_41;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = a1[64];
          v17 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_40;
      }
      sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_40:
    v18 = (__int64 *)a1[65];
    if ( v18 )
LABEL_41:
      sub_186B220(v18 - 1);
  }
  v22 = (void *)a1[61];
  if ( v22 )
    sub_186B220(v22);
  v23 = (__int64 *)a1[60];
  if ( v23 )
  {
    v24 = &v23[*((unsigned int *)v23 - 1)];
    if ( v23 >= v24 )
      goto LABEL_52;
    do
    {
      while ( 1 )
      {
        v25 = *v23;
        if ( *v23 )
        {
          v26 = a1[59];
          v17 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( ++v23 >= v24 )
          goto LABEL_51;
      }
      sub_15D7BC0(v26, v25);
      ++v23;
    }
    while ( v23 < v24 );
LABEL_51:
    v23 = (__int64 *)a1[60];
    if ( v23 )
LABEL_52:
      sub_186B220(v23 - 1);
  }
  v27 = (__int64 *)a1[58];
  if ( v27 )
  {
    v28 = &v27[*((unsigned int *)v27 - 1)];
    if ( v27 >= v28 )
      goto LABEL_61;
    do
    {
      while ( 1 )
      {
        v29 = *v27;
        if ( *v27 )
        {
          v30 = a1[57];
          v17 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( ++v27 >= v28 )
          goto LABEL_60;
      }
      sub_15D7BC0(v30, v29);
      ++v27;
    }
    while ( v27 < v28 );
LABEL_60:
    v27 = (__int64 *)a1[58];
    if ( v27 )
LABEL_61:
      sub_186B220(v27 - 1);
  }
  v31 = a1[56];
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  return sub_B31460(a1);
}

