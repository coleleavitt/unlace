__int64 __fastcall sub_613520(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // r12
  void *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // r12
  void *v9; // rdi
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // r12
  void *v14; // rdi
  __int64 *v15; // rbx
  __int64 *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  _QWORD *v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // r12
  void *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 *v26; // rbx
  __int64 *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi

  v2 = (_QWORD *)a1[83];
  *a1 = &off_1C52890;
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( (_DWORD)v3 )
    {
      v4 = &v2[v3];
      do
      {
        while ( *v2 )
        {
          v5 = (void *)(*v2++ - 8LL);
          sub_186B220(v5);
          if ( v2 == v4 )
          {
            v2 = (_QWORD *)a1[83];
            goto LABEL_7;
          }
        }
        ++v2;
      }
      while ( v2 != v4 );
      v2 = (_QWORD *)a1[83];
    }
LABEL_7:
    sub_186B220(v2 - 1);
  }
  v6 = (_QWORD *)a1[81];
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 )
    {
      v8 = &v6[v7];
      do
      {
        while ( *v6 )
        {
          v9 = (void *)(*v6++ - 8LL);
          sub_186B220(v9);
          if ( v6 == v8 )
          {
            v6 = (_QWORD *)a1[81];
            goto LABEL_14;
          }
        }
        ++v6;
      }
      while ( v6 != v8 );
      v6 = (_QWORD *)a1[81];
    }
LABEL_14:
    sub_186B220(v6 - 1);
  }
  v10 = a1[80];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = (_QWORD *)a1[75];
  if ( v11 )
  {
    v12 = *((unsigned int *)v11 - 1);
    if ( (_DWORD)v12 )
    {
      v13 = &v11[v12];
      do
      {
        while ( *v11 )
        {
          v14 = (void *)(*v11++ - 8LL);
          sub_186B220(v14);
          if ( v13 == v11 )
          {
            v11 = (_QWORD *)a1[75];
            goto LABEL_23;
          }
        }
        ++v11;
      }
      while ( v11 != v13 );
      v11 = (_QWORD *)a1[75];
    }
LABEL_23:
    sub_186B220(v11 - 1);
  }
  v15 = (__int64 *)a1[74];
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    if ( v15 >= v16 )
      goto LABEL_32;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = a1[73];
          v19 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_31;
      }
      sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_31:
    v15 = (__int64 *)a1[74];
    if ( v15 )
LABEL_32:
      sub_186B220(v15 - 1);
  }
  v20 = (_QWORD *)a1[71];
  if ( v20 )
  {
    v21 = *((unsigned int *)v20 - 1);
    if ( (_DWORD)v21 )
    {
      v22 = &v20[v21];
      do
      {
        while ( *v20 )
        {
          v23 = (void *)(*v20++ - 8LL);
          sub_186B220(v23);
          if ( v22 == v20 )
          {
            v20 = (_QWORD *)a1[71];
            goto LABEL_39;
          }
        }
        ++v20;
      }
      while ( v20 != v22 );
      v20 = (_QWORD *)a1[71];
    }
LABEL_39:
    sub_186B220(v20 - 1);
  }
  v24 = a1[70];
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = a1[69];
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = (__int64 *)a1[68];
  if ( v26 )
  {
    v27 = &v26[*((unsigned int *)v26 - 1)];
    if ( v26 >= v27 )
      goto LABEL_52;
    do
    {
      while ( 1 )
      {
        v28 = *v26;
        if ( *v26 )
        {
          v29 = a1[67];
          v19 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v26 >= v27 )
          goto LABEL_51;
      }
      sub_15D7BC0(v29, v28);
      ++v26;
    }
    while ( v26 < v27 );
LABEL_51:
    v26 = (__int64 *)a1[68];
    if ( v26 )
LABEL_52:
      sub_186B220(v26 - 1);
  }
  v30 = a1[66];
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = a1[63];
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  return sub_5C8660(a1 + 9);
}

