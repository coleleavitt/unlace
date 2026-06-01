__int64 __fastcall sub_603540(__int64 a1)
{
  char *v1; // r12
  __int64 v3; // r14
  char *v4; // rbp
  char *v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  char *v10; // r13
  __int64 v11; // r12
  __int64 v12; // rbp
  char *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  _QWORD *v18; // rbp
  __int64 v19; // rax
  _QWORD *v20; // r12
  void *v21; // rdi
  __int64 *v22; // rbp
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  bool v26; // zf
  _QWORD *v27; // rbp
  __int64 v28; // rax
  _QWORD *v29; // r12
  void *v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 *v33; // rbp
  __int64 *v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  _QWORD *v39; // rbp
  __int64 v40; // rax
  _QWORD *v41; // r12
  void *v42; // rdi
  _QWORD *v43; // rbp
  __int64 v44; // rax
  _QWORD *v45; // r12
  void *v46; // rdi
  __int64 v47; // rdi
  _QWORD *v48; // rbp
  __int64 v49; // rax
  _QWORD *v50; // r12
  void *v51; // rdi
  __int64 *v52; // rbp
  __int64 *v53; // r12
  __int64 v54; // rsi
  __int64 v55; // rdi
  _QWORD *v56; // rbp
  __int64 v57; // rax
  _QWORD *v58; // r12
  void *v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // rdi
  __int64 *v62; // rbp
  __int64 *v63; // r12
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 result; // rax
  void *v69; // rdi
  void *v70; // rdi
  void *v71; // rdi
  void *v72; // rdi
  void *v73; // rdi
  void *v74; // rdi
  __int64 *v75; // rbp
  __int64 *v76; // r12
  __int64 v77; // rsi

  v1 = *(char **)(a1 + 1648);
  *(_QWORD *)a1 = &off_1C527C0;
  *(_QWORD *)(a1 + 1600) = &off_1C52798;
  if ( v1 )
  {
    v3 = *(unsigned int *)(a1 + 1656);
    if ( (_DWORD)v3 )
    {
      v4 = v1;
      v5 = &v1[16 * v3];
      do
      {
        while ( 1 )
        {
          v6 = *((_QWORD *)v4 + 1);
          if ( !v6 )
            break;
          v4 += 16;
          sub_186B220((void *)(v6 - 8));
          if ( v4 == v5 )
            goto LABEL_6;
        }
        v4 += 16;
      }
      while ( v4 != v5 );
    }
LABEL_6:
    sub_186B220(v1);
  }
  v7 = *(_QWORD *)(a1 + 1640);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(_QWORD *)(a1 + 1632);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *(_QWORD *)(a1 + 1624);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  *(_QWORD *)(a1 + 1528) = &off_1C52798;
  v10 = *(char **)(a1 + 1576);
  if ( v10 )
  {
    v11 = *(unsigned int *)(a1 + 1584);
    if ( (_DWORD)v11 )
    {
      v12 = *(_QWORD *)(a1 + 1576);
      v13 = &v10[16 * v11];
      do
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)(v12 + 8);
          if ( !v14 )
            break;
          v12 += 16;
          sub_186B220((void *)(v14 - 8));
          if ( (char *)v12 == v13 )
            goto LABEL_18;
        }
        v12 += 16;
      }
      while ( (char *)v12 != v13 );
    }
LABEL_18:
    sub_186B220(v10);
  }
  v15 = *(_QWORD *)(a1 + 1568);
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = *(_QWORD *)(a1 + 1560);
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = *(_QWORD *)(a1 + 1552);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = *(_QWORD **)(a1 + 1504);
  if ( v18 )
  {
    v19 = *((unsigned int *)v18 - 1);
    if ( (_DWORD)v19 )
    {
      v20 = &v18[v19];
      do
      {
        while ( *v18 )
        {
          v21 = (void *)(*v18++ - 8LL);
          sub_186B220(v21);
          if ( v20 == v18 )
          {
            v18 = *(_QWORD **)(a1 + 1504);
            goto LABEL_31;
          }
        }
        ++v18;
      }
      while ( v18 != v20 );
      v18 = *(_QWORD **)(a1 + 1504);
    }
LABEL_31:
    sub_186B220(v18 - 1);
  }
  v22 = *(__int64 **)(a1 + 1496);
  if ( v22 )
  {
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v22 >= v23 )
      goto LABEL_40;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = *(_QWORD *)(a1 + 1488);
          v26 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_39;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_39:
    v22 = *(__int64 **)(a1 + 1496);
    if ( v22 )
LABEL_40:
      sub_186B220(v22 - 1);
  }
  v27 = *(_QWORD **)(a1 + 1472);
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
          if ( v27 == v29 )
          {
            v27 = *(_QWORD **)(a1 + 1472);
            goto LABEL_47;
          }
        }
        ++v27;
      }
      while ( v27 != v29 );
      v27 = *(_QWORD **)(a1 + 1472);
    }
LABEL_47:
    sub_186B220(v27 - 1);
  }
  v31 = *(_QWORD *)(a1 + 1464);
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  v32 = *(_QWORD *)(a1 + 1456);
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  v33 = *(__int64 **)(a1 + 1448);
  if ( v33 )
  {
    v34 = &v33[*((unsigned int *)v33 - 1)];
    if ( v33 >= v34 )
      goto LABEL_60;
    do
    {
      while ( 1 )
      {
        v35 = *v33;
        if ( *v33 )
        {
          v36 = *(_QWORD *)(a1 + 1440);
          v26 = (*(_DWORD *)(v35 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( ++v33 >= v34 )
          goto LABEL_59;
      }
      sub_15D7BC0(v36, v35);
      ++v33;
    }
    while ( v33 < v34 );
LABEL_59:
    v33 = *(__int64 **)(a1 + 1448);
    if ( v33 )
LABEL_60:
      sub_186B220(v33 - 1);
  }
  v37 = *(_QWORD *)(a1 + 1432);
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  v38 = *(_QWORD *)(a1 + 1408);
  if ( v38 )
    sub_186B220((void *)(v38 - 8));
  sub_FB8420(a1 + 1264);
  sub_FB8420(a1 + 1128);
  v39 = *(_QWORD **)(a1 + 1088);
  if ( v39 )
  {
    v40 = *((unsigned int *)v39 - 1);
    if ( (_DWORD)v40 )
    {
      v41 = &v39[v40];
      do
      {
        while ( *v39 )
        {
          v42 = (void *)(*v39++ - 8LL);
          sub_186B220(v42);
          if ( v41 == v39 )
          {
            v39 = *(_QWORD **)(a1 + 1088);
            goto LABEL_71;
          }
        }
        ++v39;
      }
      while ( v39 != v41 );
      v39 = *(_QWORD **)(a1 + 1088);
    }
LABEL_71:
    sub_186B220(v39 - 1);
  }
  v43 = *(_QWORD **)(a1 + 1072);
  if ( v43 )
  {
    v44 = *((unsigned int *)v43 - 1);
    if ( (_DWORD)v44 )
    {
      v45 = &v43[v44];
      do
      {
        while ( *v43 )
        {
          v46 = (void *)(*v43++ - 8LL);
          sub_186B220(v46);
          if ( v45 == v43 )
          {
            v43 = *(_QWORD **)(a1 + 1072);
            goto LABEL_78;
          }
        }
        ++v43;
      }
      while ( v43 != v45 );
      v43 = *(_QWORD **)(a1 + 1072);
    }
LABEL_78:
    sub_186B220(v43 - 1);
  }
  v47 = *(_QWORD *)(a1 + 1064);
  if ( v47 )
    sub_186B220((void *)(v47 - 8));
  v48 = *(_QWORD **)(a1 + 1024);
  if ( v48 )
  {
    v49 = *((unsigned int *)v48 - 1);
    if ( (_DWORD)v49 )
    {
      v50 = &v48[v49];
      do
      {
        while ( *v48 )
        {
          v51 = (void *)(*v48++ - 8LL);
          sub_186B220(v51);
          if ( v50 == v48 )
          {
            v48 = *(_QWORD **)(a1 + 1024);
            goto LABEL_87;
          }
        }
        ++v48;
      }
      while ( v48 != v50 );
      v48 = *(_QWORD **)(a1 + 1024);
    }
LABEL_87:
    sub_186B220(v48 - 1);
  }
  v52 = *(__int64 **)(a1 + 1016);
  if ( v52 )
  {
    v53 = &v52[*((unsigned int *)v52 - 1)];
    if ( v52 >= v53 )
      goto LABEL_96;
    do
    {
      while ( 1 )
      {
        v54 = *v52;
        if ( *v52 )
        {
          v55 = *(_QWORD *)(a1 + 1008);
          v26 = (*(_DWORD *)(v54 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( ++v52 >= v53 )
          goto LABEL_95;
      }
      sub_15D7BC0(v55, v54);
      ++v52;
    }
    while ( v52 < v53 );
LABEL_95:
    v52 = *(__int64 **)(a1 + 1016);
    if ( v52 )
LABEL_96:
      sub_186B220(v52 - 1);
  }
  v56 = *(_QWORD **)(a1 + 992);
  if ( v56 )
  {
    v57 = *((unsigned int *)v56 - 1);
    if ( (_DWORD)v57 )
    {
      v58 = &v56[v57];
      do
      {
        while ( *v56 )
        {
          v59 = (void *)(*v56++ - 8LL);
          sub_186B220(v59);
          if ( v58 == v56 )
          {
            v56 = *(_QWORD **)(a1 + 992);
            goto LABEL_103;
          }
        }
        ++v56;
      }
      while ( v56 != v58 );
      v56 = *(_QWORD **)(a1 + 992);
    }
LABEL_103:
    sub_186B220(v56 - 1);
  }
  v60 = *(_QWORD *)(a1 + 984);
  if ( v60 )
    sub_186B220((void *)(v60 - 8));
  v61 = *(_QWORD *)(a1 + 976);
  if ( v61 )
    sub_186B220((void *)(v61 - 8));
  v62 = *(__int64 **)(a1 + 968);
  if ( v62 )
  {
    v63 = &v62[*((unsigned int *)v62 - 1)];
    if ( v62 >= v63 )
      goto LABEL_116;
    do
    {
      while ( 1 )
      {
        v64 = *v62;
        if ( *v62 )
        {
          v65 = *(_QWORD *)(a1 + 960);
          v26 = (*(_DWORD *)(v64 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( ++v62 >= v63 )
          goto LABEL_115;
      }
      sub_15D7BC0(v65, v64);
      ++v62;
    }
    while ( v62 < v63 );
LABEL_115:
    v62 = *(__int64 **)(a1 + 968);
    if ( v62 )
LABEL_116:
      sub_186B220(v62 - 1);
  }
  v66 = *(_QWORD *)(a1 + 952);
  if ( v66 )
    sub_186B220((void *)(v66 - 8));
  v67 = *(_QWORD *)(a1 + 928);
  if ( v67 )
    sub_186B220((void *)(v67 - 8));
  sub_5C8660((_QWORD *)(a1 + 496));
  result = sub_63D960(a1 + 216);
  v69 = *(void **)(a1 + 192);
  if ( v69 )
    result = sub_186B220(v69);
  v70 = *(void **)(a1 + 168);
  if ( v70 )
    result = sub_186B220(v70);
  v71 = *(void **)(a1 + 144);
  if ( v71 )
    result = sub_186B220(v71);
  v72 = *(void **)(a1 + 120);
  if ( v72 )
    result = sub_186B220(v72);
  v73 = *(void **)(a1 + 96);
  if ( v73 )
    result = sub_186B220(v73);
  v74 = *(void **)(a1 + 72);
  if ( v74 )
    result = sub_186B220(v74);
  v75 = *(__int64 **)(a1 + 64);
  if ( v75 )
  {
    v76 = &v75[*((unsigned int *)v75 - 1)];
    if ( v75 >= v76 )
      return sub_186B220(v75 - 1);
    do
    {
      v77 = *v75++;
      result = sub_62A410(*(_QWORD *)(a1 + 56), v77);
    }
    while ( v75 < v76 );
    v75 = *(__int64 **)(a1 + 64);
    if ( v75 )
      return sub_186B220(v75 - 1);
  }
  return result;
}

