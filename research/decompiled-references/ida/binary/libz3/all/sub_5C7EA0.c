void __fastcall sub_5C7EA0(_QWORD *a1)
{
  _QWORD *v2; // rbp
  __int64 v3; // rax
  _QWORD *v4; // r12
  void *v5; // rdi
  _QWORD *v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // r12
  void *v9; // rdi
  __int64 v10; // rdi
  _QWORD *v11; // rbp
  __int64 v12; // rax
  _QWORD *v13; // r12
  void *v14; // rdi
  __int64 *v15; // rbp
  __int64 *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  _QWORD *v20; // rbp
  __int64 v21; // rax
  _QWORD *v22; // r12
  void *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 *v26; // rbp
  __int64 *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  void *v32; // rdi
  __int64 v33; // rdi
  void *v34; // rdi
  char *v35; // r13
  __int64 v36; // r12
  __int64 v37; // rbp
  char *v38; // r12
  __int64 v39; // rdi
  void *v40; // rdi
  __int64 *v41; // rbp
  __int64 *v42; // r12
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 *v45; // rbp
  __int64 *v46; // r12
  __int64 v47; // rsi

  v2 = (_QWORD *)a1[99];
  *a1 = &off_1C524C8;
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
            v2 = (_QWORD *)a1[99];
            goto LABEL_7;
          }
        }
        ++v2;
      }
      while ( v2 != v4 );
      v2 = (_QWORD *)a1[99];
    }
LABEL_7:
    sub_186B220(v2 - 1);
  }
  v6 = (_QWORD *)a1[97];
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
            v6 = (_QWORD *)a1[97];
            goto LABEL_14;
          }
        }
        ++v6;
      }
      while ( v6 != v8 );
      v6 = (_QWORD *)a1[97];
    }
LABEL_14:
    sub_186B220(v6 - 1);
  }
  v10 = a1[96];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = (_QWORD *)a1[91];
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
            v11 = (_QWORD *)a1[91];
            goto LABEL_23;
          }
        }
        ++v11;
      }
      while ( v11 != v13 );
      v11 = (_QWORD *)a1[91];
    }
LABEL_23:
    sub_186B220(v11 - 1);
  }
  v15 = (__int64 *)a1[90];
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
          v18 = a1[89];
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
    v15 = (__int64 *)a1[90];
    if ( v15 )
LABEL_32:
      sub_186B220(v15 - 1);
  }
  v20 = (_QWORD *)a1[87];
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
            v20 = (_QWORD *)a1[87];
            goto LABEL_39;
          }
        }
        ++v20;
      }
      while ( v20 != v22 );
      v20 = (_QWORD *)a1[87];
    }
LABEL_39:
    sub_186B220(v20 - 1);
  }
  v24 = a1[86];
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = a1[85];
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = (__int64 *)a1[84];
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
          v29 = a1[83];
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
    v26 = (__int64 *)a1[84];
    if ( v26 )
LABEL_52:
      sub_186B220(v26 - 1);
  }
  v30 = a1[82];
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = a1[79];
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  sub_5C8660(a1 + 25);
  v32 = (void *)a1[19];
  if ( v32 )
    sub_186B220(v32);
  v33 = a1[18];
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = (void *)a1[15];
  if ( v34 )
    sub_186B220(v34);
  v35 = (char *)a1[12];
  if ( v35 )
  {
    v36 = *((unsigned int *)a1 + 26);
    if ( (_DWORD)v36 )
    {
      v37 = a1[12];
      v38 = &v35[16 * v36];
      do
      {
        while ( 1 )
        {
          v39 = *(_QWORD *)(v37 + 8);
          if ( !v39 )
            break;
          v37 += 16;
          sub_186B220((void *)(v39 - 8));
          if ( v38 == (char *)v37 )
            goto LABEL_68;
        }
        v37 += 16;
      }
      while ( (char *)v37 != v38 );
    }
LABEL_68:
    sub_186B220(v35);
  }
  v40 = (void *)a1[9];
  if ( v40 )
    sub_186B220(v40);
  v41 = (__int64 *)a1[8];
  if ( v41 )
  {
    v42 = &v41[*((unsigned int *)v41 - 1)];
    if ( v41 >= v42 )
      goto LABEL_79;
    do
    {
      while ( 1 )
      {
        v43 = *v41;
        if ( *v41 )
        {
          v44 = a1[7];
          v19 = (*(_DWORD *)(v43 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v41 >= v42 )
          goto LABEL_78;
      }
      sub_15D7BC0(v44, v43);
      ++v41;
    }
    while ( v41 < v42 );
LABEL_78:
    v41 = (__int64 *)a1[8];
    if ( v41 )
LABEL_79:
      sub_186B220(v41 - 1);
  }
  v45 = (__int64 *)a1[6];
  if ( v45 )
  {
    v46 = &v45[*((unsigned int *)v45 - 1)];
    if ( v45 >= v46 )
      goto LABEL_84;
    do
    {
      v47 = *v45++;
      sub_62A410(a1[5], v47);
    }
    while ( v45 < v46 );
    v45 = (__int64 *)a1[6];
    if ( v45 )
LABEL_84:
      sub_186B220(v45 - 1);
  }
  operator delete(a1, 0x340u);
}

