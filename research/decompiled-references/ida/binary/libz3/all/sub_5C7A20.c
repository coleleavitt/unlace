__int64 __fastcall sub_5C7A20(__int64 a1)
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
  __int64 result; // rax
  void *v33; // rdi
  __int64 v34; // rdi
  void *v35; // rdi
  char *v36; // r13
  __int64 v37; // r12
  __int64 v38; // rbp
  char *v39; // r12
  __int64 v40; // rdi
  void *v41; // rdi
  __int64 *v42; // rbp
  __int64 *v43; // r12
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 *v46; // rbp
  __int64 *v47; // r12
  __int64 v48; // rsi

  v2 = *(_QWORD **)(a1 + 792);
  *(_QWORD *)a1 = &off_1C524C8;
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
            v2 = *(_QWORD **)(a1 + 792);
            goto LABEL_7;
          }
        }
        ++v2;
      }
      while ( v2 != v4 );
      v2 = *(_QWORD **)(a1 + 792);
    }
LABEL_7:
    sub_186B220(v2 - 1);
  }
  v6 = *(_QWORD **)(a1 + 776);
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
            v6 = *(_QWORD **)(a1 + 776);
            goto LABEL_14;
          }
        }
        ++v6;
      }
      while ( v6 != v8 );
      v6 = *(_QWORD **)(a1 + 776);
    }
LABEL_14:
    sub_186B220(v6 - 1);
  }
  v10 = *(_QWORD *)(a1 + 768);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = *(_QWORD **)(a1 + 728);
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
            v11 = *(_QWORD **)(a1 + 728);
            goto LABEL_23;
          }
        }
        ++v11;
      }
      while ( v11 != v13 );
      v11 = *(_QWORD **)(a1 + 728);
    }
LABEL_23:
    sub_186B220(v11 - 1);
  }
  v15 = *(__int64 **)(a1 + 720);
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
          v18 = *(_QWORD *)(a1 + 712);
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
    v15 = *(__int64 **)(a1 + 720);
    if ( v15 )
LABEL_32:
      sub_186B220(v15 - 1);
  }
  v20 = *(_QWORD **)(a1 + 696);
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
            v20 = *(_QWORD **)(a1 + 696);
            goto LABEL_39;
          }
        }
        ++v20;
      }
      while ( v20 != v22 );
      v20 = *(_QWORD **)(a1 + 696);
    }
LABEL_39:
    sub_186B220(v20 - 1);
  }
  v24 = *(_QWORD *)(a1 + 688);
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = *(_QWORD *)(a1 + 680);
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = *(__int64 **)(a1 + 672);
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
          v29 = *(_QWORD *)(a1 + 664);
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
    v26 = *(__int64 **)(a1 + 672);
    if ( v26 )
LABEL_52:
      sub_186B220(v26 - 1);
  }
  v30 = *(_QWORD *)(a1 + 656);
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = *(_QWORD *)(a1 + 632);
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  result = sub_5C8660(a1 + 200);
  v33 = *(void **)(a1 + 152);
  if ( v33 )
    result = sub_186B220(v33);
  v34 = *(_QWORD *)(a1 + 144);
  if ( v34 )
    result = sub_186B220((void *)(v34 - 8));
  v35 = *(void **)(a1 + 120);
  if ( v35 )
    result = sub_186B220(v35);
  v36 = *(char **)(a1 + 96);
  if ( v36 )
  {
    v37 = *(unsigned int *)(a1 + 104);
    if ( (_DWORD)v37 )
    {
      v38 = *(_QWORD *)(a1 + 96);
      v39 = &v36[16 * v37];
      do
      {
        while ( 1 )
        {
          v40 = *(_QWORD *)(v38 + 8);
          if ( !v40 )
            break;
          v38 += 16;
          sub_186B220((void *)(v40 - 8));
          if ( v39 == (char *)v38 )
            goto LABEL_68;
        }
        v38 += 16;
      }
      while ( (char *)v38 != v39 );
    }
LABEL_68:
    result = sub_186B220(v36);
  }
  v41 = *(void **)(a1 + 72);
  if ( v41 )
    result = sub_186B220(v41);
  v42 = *(__int64 **)(a1 + 64);
  if ( v42 )
  {
    result = *((unsigned int *)v42 - 1);
    v43 = &v42[result];
    if ( v42 >= v43 )
      goto LABEL_79;
    do
    {
      while ( 1 )
      {
        v44 = *v42;
        if ( *v42 )
        {
          v45 = *(_QWORD *)(a1 + 56);
          v19 = (*(_DWORD *)(v44 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v42 >= v43 )
          goto LABEL_78;
      }
      result = sub_15D7BC0(v45, v44);
      ++v42;
    }
    while ( v42 < v43 );
LABEL_78:
    v42 = *(__int64 **)(a1 + 64);
    if ( v42 )
LABEL_79:
      result = sub_186B220(v42 - 1);
  }
  v46 = *(__int64 **)(a1 + 48);
  if ( v46 )
  {
    v47 = &v46[*((unsigned int *)v46 - 1)];
    if ( v46 >= v47 )
      return sub_186B220(v46 - 1);
    do
    {
      v48 = *v46++;
      result = sub_62A410(*(_QWORD *)(a1 + 40), v48);
    }
    while ( v46 < v47 );
    v46 = *(__int64 **)(a1 + 48);
    if ( v46 )
      return sub_186B220(v46 - 1);
  }
  return result;
}

