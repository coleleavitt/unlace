__int64 __fastcall sub_5C8660(_QWORD *a1)
{
  __int64 result; // rax
  void (__fastcall ***v3)(_QWORD); // rbp
  __int64 v4; // r12
  __int64 *v5; // rbp
  __int64 *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 *v10; // rdi
  __int64 *v11; // rcx
  __int64 *i; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 *v19; // rbp
  __int64 *v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 *v23; // rbp
  __int64 *v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 *v27; // rbp
  __int64 *v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rdi
  void *v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 *v34; // rbp
  __int64 *v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdi
  _QWORD *v40; // rbp
  __int64 v41; // rax
  _QWORD *v42; // r12
  void *v43; // rdi
  _QWORD *v44; // rbp
  __int64 v45; // rax
  _QWORD *v46; // r12
  void *v47; // rdi
  __int64 v48; // rdi
  _QWORD *v49; // rbp
  __int64 v50; // rax
  _QWORD *v51; // r12
  void *v52; // rdi
  __int64 *v53; // rbp
  __int64 *v54; // r12
  __int64 v55; // rsi
  __int64 v56; // rdi
  _QWORD *v57; // rbp
  __int64 v58; // rax
  _QWORD *v59; // r12
  void *v60; // rdi
  __int64 v61; // rdi
  __int64 v62; // rdi
  __int64 *v63; // rbp
  __int64 *v64; // r12
  __int64 v65; // rsi
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 v68; // rdi

  result = (__int64)&off_1C52578;
  v3 = (void (__fastcall ***)(_QWORD))a1[52];
  *a1 = &off_1C52578;
  if ( v3 )
  {
    (**v3)(v3);
    result = sub_186B220(v3);
  }
  v4 = a1[51];
  if ( v4 )
  {
    v5 = *(__int64 **)(v4 + 232);
    if ( v5 )
    {
      v6 = &v5[*((unsigned int *)v5 - 1)];
      if ( v5 >= v6 )
        goto LABEL_12;
      do
      {
        while ( 1 )
        {
          v7 = *v5;
          if ( *v5 )
          {
            v8 = *(_QWORD *)(v4 + 224);
            v9 = (*(_DWORD *)(v7 + 8))-- == 1;
            if ( v9 )
              break;
          }
          if ( ++v5 >= v6 )
            goto LABEL_11;
        }
        sub_15D7BC0(v8, v7);
        ++v5;
      }
      while ( v5 < v6 );
LABEL_11:
      v5 = *(__int64 **)(v4 + 232);
      if ( v5 )
LABEL_12:
        sub_186B220(v5 - 1);
    }
    v10 = *(__int64 **)(v4 + 80);
    v11 = &v10[*(unsigned int *)(v4 + 88)];
    for ( i = v10; v11 != i; *(_BYTE *)(v13 + 6) &= ~1u )
      v13 = *i++;
    *(_DWORD *)(v4 + 88) = 0;
    if ( v10 != (__int64 *)(v4 + 96) && v10 )
      sub_186B220(v10);
    v14 = *(_QWORD *)(v4 + 72);
    if ( v14 )
      sub_186B220((void *)(v14 - 8));
    v15 = *(_QWORD *)(v4 + 64);
    if ( v15 )
      sub_186B220((void *)(v15 - 8));
    v16 = *(_QWORD *)(v4 + 56);
    if ( v16 )
      sub_186B220((void *)(v16 - 8));
    v17 = *(_QWORD *)(v4 + 48);
    if ( v17 )
      sub_186B220((void *)(v17 - 8));
    result = sub_186B220((void *)v4);
  }
  v18 = a1[50];
  if ( v18 )
    result = sub_186B220((void *)(v18 - 8));
  v19 = (__int64 *)a1[49];
  if ( v19 )
  {
    result = *((unsigned int *)v19 - 1);
    v20 = &v19[result];
    if ( v19 >= v20 )
      goto LABEL_37;
    do
    {
      while ( 1 )
      {
        v21 = *v19;
        if ( *v19 )
        {
          v22 = a1[48];
          v9 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v19 >= v20 )
          goto LABEL_36;
      }
      result = sub_15D7BC0(v22, v21);
      ++v19;
    }
    while ( v19 < v20 );
LABEL_36:
    v19 = (__int64 *)a1[49];
    if ( v19 )
LABEL_37:
      result = sub_186B220(v19 - 1);
  }
  v23 = (__int64 *)a1[47];
  if ( v23 )
  {
    result = *((unsigned int *)v23 - 1);
    v24 = &v23[result];
    if ( v23 >= v24 )
      goto LABEL_46;
    do
    {
      while ( 1 )
      {
        v25 = *v23;
        if ( *v23 )
        {
          v26 = a1[46];
          v9 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v23 >= v24 )
          goto LABEL_45;
      }
      result = sub_15D7BC0(v26, v25);
      ++v23;
    }
    while ( v23 < v24 );
LABEL_45:
    v23 = (__int64 *)a1[47];
    if ( v23 )
LABEL_46:
      result = sub_186B220(v23 - 1);
  }
  v27 = (__int64 *)a1[45];
  if ( v27 )
  {
    result = *((unsigned int *)v27 - 1);
    v28 = &v27[result];
    if ( v27 >= v28 )
      goto LABEL_55;
    do
    {
      while ( 1 )
      {
        v29 = *v27;
        if ( *v27 )
        {
          v30 = a1[44];
          v9 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v27 >= v28 )
          goto LABEL_54;
      }
      result = sub_15D7BC0(v30, v29);
      ++v27;
    }
    while ( v27 < v28 );
LABEL_54:
    v27 = (__int64 *)a1[45];
    if ( v27 )
LABEL_55:
      result = sub_186B220(v27 - 1);
  }
  v31 = (void *)a1[41];
  if ( v31 )
    result = sub_186B220(v31);
  v32 = a1[40];
  if ( v32 )
    result = sub_186B220((void *)(v32 - 8));
  v33 = a1[38];
  if ( v33 )
    result = sub_186B220((void *)(v33 - 8));
  v34 = (__int64 *)a1[37];
  if ( v34 )
  {
    result = *((unsigned int *)v34 - 1);
    v35 = &v34[result];
    if ( v34 >= v35 )
      goto LABEL_70;
    do
    {
      while ( 1 )
      {
        v36 = *v34;
        if ( *v34 )
        {
          v37 = a1[36];
          v9 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v34 >= v35 )
          goto LABEL_69;
      }
      result = sub_15D7BC0(v37, v36);
      ++v34;
    }
    while ( v34 < v35 );
LABEL_69:
    v34 = (__int64 *)a1[37];
    if ( v34 )
LABEL_70:
      result = sub_186B220(v34 - 1);
  }
  v38 = a1[34];
  if ( v38 )
  {
    v39 = a1[35];
    v9 = (*(_DWORD *)(v38 + 8))-- == 1;
    if ( v9 )
      result = sub_15D7BC0(v39, v38);
  }
  v40 = (_QWORD *)a1[31];
  if ( v40 )
  {
    v41 = *((unsigned int *)v40 - 1);
    if ( (_DWORD)v41 )
    {
      v42 = &v40[v41];
      do
      {
        while ( *v40 )
        {
          v43 = (void *)(*v40++ - 8LL);
          sub_186B220(v43);
          if ( v42 == v40 )
          {
            v40 = (_QWORD *)a1[31];
            goto LABEL_80;
          }
        }
        ++v40;
      }
      while ( v40 != v42 );
      v40 = (_QWORD *)a1[31];
    }
LABEL_80:
    result = sub_186B220(v40 - 1);
  }
  v44 = (_QWORD *)a1[29];
  if ( v44 )
  {
    v45 = *((unsigned int *)v44 - 1);
    if ( (_DWORD)v45 )
    {
      v46 = &v44[v45];
      do
      {
        while ( *v44 )
        {
          v47 = (void *)(*v44++ - 8LL);
          sub_186B220(v47);
          if ( v46 == v44 )
          {
            v44 = (_QWORD *)a1[29];
            goto LABEL_87;
          }
        }
        ++v44;
      }
      while ( v44 != v46 );
      v44 = (_QWORD *)a1[29];
    }
LABEL_87:
    result = sub_186B220(v44 - 1);
  }
  v48 = a1[28];
  if ( v48 )
    result = sub_186B220((void *)(v48 - 8));
  v49 = (_QWORD *)a1[23];
  if ( v49 )
  {
    v50 = *((unsigned int *)v49 - 1);
    if ( (_DWORD)v50 )
    {
      v51 = &v49[v50];
      do
      {
        while ( *v49 )
        {
          v52 = (void *)(*v49++ - 8LL);
          sub_186B220(v52);
          if ( v51 == v49 )
          {
            v49 = (_QWORD *)a1[23];
            goto LABEL_96;
          }
        }
        ++v49;
      }
      while ( v49 != v51 );
      v49 = (_QWORD *)a1[23];
    }
LABEL_96:
    result = sub_186B220(v49 - 1);
  }
  v53 = (__int64 *)a1[22];
  if ( v53 )
  {
    result = *((unsigned int *)v53 - 1);
    v54 = &v53[result];
    if ( v53 >= v54 )
      goto LABEL_105;
    do
    {
      while ( 1 )
      {
        v55 = *v53;
        if ( *v53 )
        {
          v56 = a1[21];
          v9 = (*(_DWORD *)(v55 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v53 >= v54 )
          goto LABEL_104;
      }
      result = sub_15D7BC0(v56, v55);
      ++v53;
    }
    while ( v53 < v54 );
LABEL_104:
    v53 = (__int64 *)a1[22];
    if ( v53 )
LABEL_105:
      result = sub_186B220(v53 - 1);
  }
  v57 = (_QWORD *)a1[19];
  if ( v57 )
  {
    v58 = *((unsigned int *)v57 - 1);
    if ( (_DWORD)v58 )
    {
      v59 = &v57[v58];
      do
      {
        while ( *v57 )
        {
          v60 = (void *)(*v57++ - 8LL);
          sub_186B220(v60);
          if ( v59 == v57 )
          {
            v57 = (_QWORD *)a1[19];
            goto LABEL_112;
          }
        }
        ++v57;
      }
      while ( v57 != v59 );
      v57 = (_QWORD *)a1[19];
    }
LABEL_112:
    result = sub_186B220(v57 - 1);
  }
  v61 = a1[18];
  if ( v61 )
    result = sub_186B220((void *)(v61 - 8));
  v62 = a1[17];
  if ( v62 )
    result = sub_186B220((void *)(v62 - 8));
  v63 = (__int64 *)a1[16];
  if ( v63 )
  {
    result = *((unsigned int *)v63 - 1);
    v64 = &v63[result];
    if ( v63 >= v64 )
      goto LABEL_125;
    do
    {
      while ( 1 )
      {
        v65 = *v63;
        if ( *v63 )
        {
          v66 = a1[15];
          v9 = (*(_DWORD *)(v65 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v63 >= v64 )
          goto LABEL_124;
      }
      result = sub_15D7BC0(v66, v65);
      ++v63;
    }
    while ( v63 < v64 );
LABEL_124:
    v63 = (__int64 *)a1[16];
    if ( v63 )
LABEL_125:
      result = sub_186B220(v63 - 1);
  }
  v67 = a1[14];
  if ( v67 )
    result = sub_186B220((void *)(v67 - 8));
  v68 = a1[11];
  if ( v68 )
    return sub_186B220((void *)(v68 - 8));
  return result;
}

