__int64 __fastcall sub_B99B70(_QWORD *a1)
{
  unsigned int *v2; // rax
  int v3; // r13d
  _QWORD *v4; // r12
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdx
  int i; // ebp
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rdi
  void *v17; // rdi
  __int64 v18; // rdi
  _QWORD *v19; // rbp
  __int64 v20; // rax
  _QWORD *v21; // r13
  void *v22; // rdi
  _QWORD **v23; // rbp
  _QWORD **v24; // r14
  _QWORD *v25; // r13
  _QWORD *v26; // rbp
  __int64 v27; // rax
  _QWORD *v28; // r13
  void *v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  _QWORD **v36; // rbp
  _QWORD **v37; // r14
  _QWORD *v38; // r13
  __int64 v39; // rdi
  _QWORD **v40; // rbp
  _QWORD **v41; // r14
  _QWORD *v42; // r13
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rdi
  void *v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // rdi
  __int64 v62; // rdi
  __int64 result; // rax
  __int64 v64; // rdi
  __int64 v65; // rdi

  *a1 = &off_1C57B70;
  v2 = (unsigned int *)a1[5];
  if ( v2 )
  {
    v3 = *(v2 - 1);
    v4 = a1 + 6;
    if ( v3 )
    {
      v5 = a1[4];
      v6 = *v2;
      v7 = 8 * v6;
      v8 = v5 + 8 * v6;
      if ( v5 )
      {
        v9 = 8LL * *(unsigned int *)(v5 - 4);
        v10 = v5 + v9;
        if ( v7 != v9 )
          goto LABEL_5;
        *(_DWORD *)(v5 - 4) = v6;
      }
      else
      {
        v10 = 0;
        if ( v7 )
        {
          do
          {
LABEL_5:
            v11 = *(_QWORD *)(v10 - 8);
            v10 -= 8;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
          while ( v8 != v10 );
          v12 = a1[4];
          v2 = (unsigned int *)a1[5];
          if ( v12 )
            *(_DWORD *)(v12 - 4) = v6;
          if ( !v2 )
            goto LABEL_10;
        }
      }
      *(v2 - 1) = 0;
LABEL_10:
      v4 = a1 + 6;
      for ( i = 0; i != v3; ++i )
        sub_180C2E0(a1 + 6);
    }
  }
  else
  {
    v4 = a1 + 6;
  }
  v14 = a1[4];
  if ( v14 )
  {
    v15 = v14 + 8LL * *(unsigned int *)(v14 - 4);
    if ( v14 == v15 )
      goto LABEL_16;
    do
    {
      v16 = *(_QWORD *)(v15 - 8);
      v15 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    while ( v14 != v15 );
    v15 = a1[4];
    if ( v15 )
LABEL_16:
      *(_DWORD *)(v15 - 4) = 0;
  }
  v17 = *(void **)((char *)&stru_18278.r_offset + (_QWORD)a1);
  if ( v17 )
    sub_186B220(v17);
  v18 = a1[12366];
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = (_QWORD *)a1[12365];
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
            v19 = (_QWORD *)a1[12365];
            goto LABEL_27;
          }
        }
        ++v19;
      }
      while ( v19 != v21 );
      v19 = (_QWORD *)a1[12365];
    }
LABEL_27:
    sub_186B220(v19 - 1);
  }
  v23 = *(_QWORD ***)((char *)&stru_18260.r_offset + (_QWORD)a1);
  if ( v23 )
  {
    v24 = &v23[*((unsigned int *)v23 - 1)];
    if ( v23 == v24 )
      goto LABEL_36;
    do
    {
      v25 = *v23;
      if ( *v23 )
      {
        if ( *v25 )
          sub_186B220((void *)(*v25 - 8LL));
        sub_186B220(v25);
      }
      ++v23;
    }
    while ( v24 != v23 );
    v24 = *(_QWORD ***)((char *)&stru_18260.r_offset + (_QWORD)a1);
    if ( v24 )
LABEL_36:
      sub_186B220(v24 - 1);
  }
  sub_180C0E0(a1 + 71);
  v26 = (_QWORD *)a1[69];
  if ( v26 )
  {
    v27 = *((unsigned int *)v26 - 1);
    if ( (_DWORD)v27 )
    {
      v28 = &v26[v27];
      do
      {
        while ( *v26 )
        {
          v29 = (void *)(*v26++ - 8LL);
          sub_186B220(v29);
          if ( v28 == v26 )
          {
            v26 = (_QWORD *)a1[69];
            goto LABEL_43;
          }
        }
        ++v26;
      }
      while ( v26 != v28 );
      v26 = (_QWORD *)a1[69];
    }
LABEL_43:
    sub_186B220(v26 - 1);
  }
  v30 = a1[68];
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = a1[67];
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  v32 = a1[66];
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  v33 = a1[65];
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = a1[64];
  if ( v34 )
    sub_186B220((void *)(v34 - 8));
  v35 = a1[63];
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  v36 = (_QWORD **)a1[61];
  if ( v36 )
  {
    v37 = &v36[*((unsigned int *)v36 - 1)];
    if ( v36 == v37 )
      goto LABEL_64;
    do
    {
      v38 = *v36;
      if ( *v36 )
      {
        v39 = v38[5];
        if ( v39 )
          sub_186B220((void *)(v39 - 8));
        sub_186B220(v38);
      }
      ++v36;
    }
    while ( v37 != v36 );
    v37 = (_QWORD **)a1[61];
    if ( v37 )
LABEL_64:
      sub_186B220(v37 - 1);
  }
  v40 = (_QWORD **)a1[58];
  if ( v40 )
  {
    v41 = &v40[*((unsigned int *)v40 - 1)];
    if ( v40 == v41 )
      goto LABEL_73;
    do
    {
      v42 = *v40;
      if ( *v40 )
      {
        if ( *v42 )
          sub_186B220((void *)(*v42 - 8LL));
        sub_186B220(v42);
      }
      ++v40;
    }
    while ( v41 != v40 );
    v41 = (_QWORD **)a1[58];
    if ( v41 )
LABEL_73:
      sub_186B220(v41 - 1);
  }
  v43 = a1[57];
  if ( v43 )
    sub_186B220((void *)(v43 - 8));
  v44 = a1[56];
  if ( v44 )
    sub_186B220((void *)(v44 - 8));
  v45 = a1[55];
  if ( v45 )
    sub_186B220((void *)(v45 - 8));
  v46 = a1[53];
  if ( v46 )
    sub_186B220((void *)(v46 - 8));
  v47 = a1[44];
  if ( v47 )
    sub_186B220((void *)(v47 - 8));
  v48 = a1[43];
  if ( v48 )
    sub_186B220((void *)(v48 - 8));
  v49 = a1[42];
  if ( v49 )
    sub_186B220((void *)(v49 - 8));
  v50 = a1[41];
  if ( v50 )
    sub_186B220((void *)(v50 - 8));
  v51 = a1[36];
  if ( v51 )
    sub_186B220((void *)(v51 - 8));
  v52 = a1[35];
  if ( v52 )
    sub_186B220((void *)(v52 - 8));
  v53 = a1[34];
  if ( v53 )
    sub_186B220((void *)(v53 - 8));
  v54 = a1[33];
  if ( v54 )
    sub_186B220((void *)(v54 - 8));
  v55 = a1[32];
  if ( v55 )
    sub_186B220((void *)(v55 - 8));
  v56 = (void *)a1[29];
  if ( v56 )
    sub_186B220(v56);
  v57 = a1[28];
  if ( v57 )
    sub_186B220((void *)(v57 - 8));
  v58 = a1[23];
  if ( v58 )
    sub_186B220((void *)(v58 - 8));
  v59 = a1[22];
  if ( v59 )
    sub_186B220((void *)(v59 - 8));
  v60 = a1[21];
  if ( v60 )
    sub_186B220((void *)(v60 - 8));
  v61 = a1[20];
  if ( v61 )
    sub_186B220((void *)(v61 - 8));
  v62 = a1[11];
  if ( v62 )
    sub_186B220((void *)(v62 - 8));
  result = sub_180C0E0(v4);
  v64 = a1[5];
  if ( v64 )
    result = sub_186B220((void *)(v64 - 8));
  v65 = a1[4];
  if ( v65 )
    return sub_186B220((void *)(v65 - 8));
  return result;
}

