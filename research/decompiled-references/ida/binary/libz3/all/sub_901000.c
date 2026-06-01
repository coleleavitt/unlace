__int64 __fastcall sub_901000(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  void (__fastcall ***v11)(_QWORD); // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rbx
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 *v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rdi
  void *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  void *v35; // rdi
  void *v36; // rdi
  __int64 *v37; // rbx
  __int64 *v38; // r12
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rax
  void *v42; // rdi
  void *v43; // rdi
  void *v44; // rdi
  __int64 result; // rax
  _QWORD *v46; // r13
  __int64 v47; // rax
  _QWORD *v48; // r12
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 *v51; // rbx
  __int64 *v52; // r14
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 *v55; // rbx
  __int64 *v56; // r12
  __int64 v57; // rsi
  __int64 v58; // rdi

  v2 = a1[106];
  if ( v2 )
  {
    v3 = a1[107];
    v4 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v3, v2);
  }
  v5 = a1[104];
  if ( v5 )
  {
    v6 = a1[105];
    v4 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v6, v5);
  }
  v7 = a1[102];
  if ( v7 )
  {
    v8 = a1[103];
    v4 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v8, v7);
  }
  v9 = a1[100];
  if ( v9 )
  {
    v10 = a1[101];
    v4 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v10, v9);
  }
  v11 = (void (__fastcall ***)(_QWORD))a1[99];
  if ( v11 )
  {
    (**v11)(a1[99]);
    sub_186B220(v11);
  }
  v12 = a1[98];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = a1[90];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = (__int64 *)a1[89];
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v15 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = a1[88];
          v4 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_26;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_26:
    v14 = (__int64 *)a1[89];
    if ( v14 )
LABEL_27:
      sub_186B220(v14 - 1);
  }
  v18 = (void *)a1[87];
  a1[81] = &off_1C62200;
  if ( v18 )
    sub_186B220(v18);
  v19 = (void *)a1[84];
  if ( v19 )
    sub_186B220(v19);
  v20 = a1[80];
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  v21 = a1[79];
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = a1[78];
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  v23 = a1[77];
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  v24 = a1[76];
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = a1[75];
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = a1[73];
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  v27 = (__int64 *)a1[72];
  if ( v27 )
  {
    v28 = &v27[*((unsigned int *)v27 - 1)];
    if ( v27 >= v28 )
      goto LABEL_54;
    do
    {
      while ( 1 )
      {
        v29 = *v27;
        if ( *v27 )
        {
          v30 = a1[71];
          v4 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v27 >= v28 )
          goto LABEL_53;
      }
      sub_15D7BC0(v30, v29);
      ++v27;
    }
    while ( v27 < v28 );
LABEL_53:
    v27 = (__int64 *)a1[72];
    if ( v27 )
LABEL_54:
      sub_186B220(v27 - 1);
  }
  v31 = (void *)a1[70];
  if ( v31 )
    sub_186B220(v31);
  v32 = a1[67];
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  v33 = a1[65];
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = a1[63];
  if ( v34 )
    sub_186B220((void *)(v34 - 8));
  v35 = (void *)a1[60];
  a1[15] = &off_1C63D10;
  if ( v35 )
    sub_186B220(v35);
  v36 = (void *)a1[59];
  if ( v36 )
    sub_186B220(v36);
  v37 = (__int64 *)a1[50];
  if ( v37 )
  {
    v38 = &v37[*((unsigned int *)v37 - 1)];
    if ( v37 >= v38 )
      goto LABEL_75;
    do
    {
      while ( 1 )
      {
        v39 = *v37;
        if ( *v37 )
        {
          v40 = a1[49];
          v4 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v37 >= v38 )
          goto LABEL_74;
      }
      sub_15D7BC0(v40, v39);
      ++v37;
    }
    while ( v37 < v38 );
LABEL_74:
    v37 = (__int64 *)a1[50];
    if ( v37 )
LABEL_75:
      sub_186B220(v37 - 1);
  }
  v41 = a1[48];
  if ( v41 )
    sub_186B220((void *)(v41 - 8));
  v42 = (void *)a1[19];
  a1[15] = qword_1C7A350;
  if ( v42 )
    sub_186B220(v42);
  v43 = (void *)a1[16];
  if ( v43 )
    sub_186B220(v43);
  v44 = (void *)a1[12];
  if ( v44 )
    sub_186B220(v44);
  result = a1[8];
  if ( result )
    result = ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))result)(a1 + 6, a1 + 6, 3);
  v46 = (_QWORD *)a1[4];
  if ( v46 )
  {
    v47 = *((unsigned int *)v46 - 1);
    if ( (_DWORD)v47 )
    {
      v48 = &v46[5 * v47];
      do
      {
        v49 = v46[3];
        if ( v49 )
        {
          v50 = v46[4];
          v4 = (*(_DWORD *)(v49 + 8))-- == 1;
          if ( v4 )
            sub_15D7BC0(v50, v49);
        }
        v51 = (__int64 *)v46[2];
        if ( v51 )
        {
          v52 = &v51[*((unsigned int *)v51 - 1)];
          if ( v51 >= v52 )
            goto LABEL_100;
          do
          {
            while ( 1 )
            {
              v53 = *v51;
              if ( *v51 )
              {
                v54 = v46[1];
                v4 = (*(_DWORD *)(v53 + 8))-- == 1;
                if ( v4 )
                  break;
              }
              if ( ++v51 >= v52 )
                goto LABEL_99;
            }
            sub_15D7BC0(v54, v53);
            ++v51;
          }
          while ( v51 < v52 );
LABEL_99:
          v51 = (__int64 *)v46[2];
          if ( v51 )
LABEL_100:
            sub_186B220(v51 - 1);
        }
        v46 += 5;
      }
      while ( v46 != v48 );
      v46 = (_QWORD *)a1[4];
    }
    result = sub_186B220(v46 - 1);
  }
  v55 = (__int64 *)a1[3];
  if ( v55 )
  {
    result = *((unsigned int *)v55 - 1);
    v56 = &v55[result];
    if ( v55 >= v56 )
      return sub_186B220(v55 - 1);
    do
    {
      while ( 1 )
      {
        v57 = *v55;
        if ( *v55 )
        {
          v58 = a1[2];
          v4 = (*(_DWORD *)(v57 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v55 >= v56 )
          goto LABEL_111;
      }
      result = sub_15D7BC0(v58, v57);
      ++v55;
    }
    while ( v55 < v56 );
LABEL_111:
    v55 = (__int64 *)a1[3];
    if ( v55 )
      return sub_186B220(v55 - 1);
  }
  return result;
}

