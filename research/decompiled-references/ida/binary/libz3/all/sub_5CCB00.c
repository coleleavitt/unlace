void __fastcall sub_5CCB00(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // r12
  void *v13; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // r12
  void *v17; // rdi
  __int64 v18; // rdi
  _QWORD *v19; // rbx
  __int64 v20; // rax
  _QWORD *v21; // r12
  void *v22; // rdi
  __int64 *v23; // rbx
  __int64 *v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdi
  _QWORD *v27; // rbx
  __int64 v28; // rax
  _QWORD *v29; // r12
  void *v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 *v33; // rbx
  __int64 *v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi

  v2 = a1[30];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (__int64 *)a1[29];
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
          v6 = a1[28];
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
    v3 = (__int64 *)a1[29];
    if ( v3 )
LABEL_11:
      sub_186B220(v3 - 1);
  }
  v8 = a1[26];
  if ( v8 )
  {
    v9 = a1[27];
    v7 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v9, v8);
  }
  v10 = (_QWORD *)a1[23];
  if ( v10 )
  {
    v11 = *((unsigned int *)v10 - 1);
    if ( (_DWORD)v11 )
    {
      v12 = &v10[v11];
      do
      {
        while ( *v10 )
        {
          v13 = (void *)(*v10++ - 8LL);
          sub_186B220(v13);
          if ( v10 == v12 )
          {
            v10 = (_QWORD *)a1[23];
            goto LABEL_21;
          }
        }
        ++v10;
      }
      while ( v10 != v12 );
      v10 = (_QWORD *)a1[23];
    }
LABEL_21:
    sub_186B220(v10 - 1);
  }
  v14 = (_QWORD *)a1[21];
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 )
    {
      v16 = &v14[v15];
      do
      {
        while ( *v14 )
        {
          v17 = (void *)(*v14++ - 8LL);
          sub_186B220(v17);
          if ( v14 == v16 )
          {
            v14 = (_QWORD *)a1[21];
            goto LABEL_28;
          }
        }
        ++v14;
      }
      while ( v14 != v16 );
      v14 = (_QWORD *)a1[21];
    }
LABEL_28:
    sub_186B220(v14 - 1);
  }
  v18 = a1[20];
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = (_QWORD *)a1[15];
  if ( v19 )
  {
    v20 = *((unsigned int *)v19 - 1);
    if ( (_DWORD)v20 )
    {
      v21 = &v19[v20];
      do
      {
        while ( *v19 )
        {
          v22 = (void *)(*v19++ - 8LL);
          sub_186B220(v22);
          if ( v21 == v19 )
          {
            v19 = (_QWORD *)a1[15];
            goto LABEL_37;
          }
        }
        ++v19;
      }
      while ( v19 != v21 );
      v19 = (_QWORD *)a1[15];
    }
LABEL_37:
    sub_186B220(v19 - 1);
  }
  v23 = (__int64 *)a1[14];
  if ( v23 )
  {
    v24 = &v23[*((unsigned int *)v23 - 1)];
    if ( v23 >= v24 )
      goto LABEL_46;
    do
    {
      while ( 1 )
      {
        v25 = *v23;
        if ( *v23 )
        {
          v26 = a1[13];
          v7 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v23 >= v24 )
          goto LABEL_45;
      }
      sub_15D7BC0(v26, v25);
      ++v23;
    }
    while ( v23 < v24 );
LABEL_45:
    v23 = (__int64 *)a1[14];
    if ( v23 )
LABEL_46:
      sub_186B220(v23 - 1);
  }
  v27 = (_QWORD *)a1[11];
  if ( v27 )
  {
    v28 = *((unsigned int *)v27 - 1);
    if ( (_DWORD)v28 )
    {
      v29 = &v27[v28];
      do
      {
        while ( *v27 )
        {
          v30 = (void *)(*v27++ - 8LL);
          sub_186B220(v30);
          if ( v29 == v27 )
          {
            v27 = (_QWORD *)a1[11];
            goto LABEL_53;
          }
        }
        ++v27;
      }
      while ( v27 != v29 );
      v27 = (_QWORD *)a1[11];
    }
LABEL_53:
    sub_186B220(v27 - 1);
  }
  v31 = a1[10];
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  v32 = a1[9];
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  v33 = (__int64 *)a1[8];
  if ( v33 )
  {
    v34 = &v33[*((unsigned int *)v33 - 1)];
    if ( v33 >= v34 )
      goto LABEL_66;
    do
    {
      while ( 1 )
      {
        v35 = *v33;
        if ( *v33 )
        {
          v36 = a1[7];
          v7 = (*(_DWORD *)(v35 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v33 >= v34 )
          goto LABEL_65;
      }
      sub_15D7BC0(v36, v35);
      ++v33;
    }
    while ( v33 < v34 );
LABEL_65:
    v33 = (__int64 *)a1[8];
    if ( v33 )
LABEL_66:
      sub_186B220(v33 - 1);
  }
  v37 = a1[6];
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  v38 = a1[3];
  if ( v38 )
    sub_186B220((void *)(v38 - 8));
}

