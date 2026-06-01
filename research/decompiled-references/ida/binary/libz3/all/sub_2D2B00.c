void __fastcall sub_2D2B00(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  __int64 v5; // rsi
  __int64 v6; // rdi
  void (__fastcall *v7)(_QWORD *, _QWORD *, __int64); // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 *v10; // r14
  __int64 v11; // rax
  __int64 *v12; // r13
  __int64 *v13; // rbx
  __int64 *v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rdi
  void *v17; // rdi
  _QWORD *v18; // rbx
  _QWORD *v19; // r14
  void (__fastcall ***v20)(_QWORD); // r13
  __int64 v21; // rax
  __int64 v22; // rax
  char *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rbx
  char *v26; // r13
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  void *v43; // rdi
  _QWORD *v44; // r13
  void *v45; // rdi
  void *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  void (__fastcall ***v49)(_QWORD); // rbx
  void *v50; // rdi
  _QWORD *v51; // rbx
  _QWORD *v52; // r14
  void (__fastcall ***v53)(_QWORD); // r12
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 *v57; // rbx
  __int64 *v58; // r12
  __int64 v59; // rsi
  __int64 v60; // rdi

  v2 = a1[21];
  *a1 = &off_1C4CDC0;
  if ( v2 )
  {
    v3 = a1[22];
    v4 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v3, v2);
  }
  v5 = a1[19];
  if ( v5 )
  {
    v6 = a1[20];
    v4 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v6, v5);
  }
  v7 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[16];
  if ( v7 )
    v7(a1 + 14, a1 + 14, 3);
  v8 = a1[13];
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 4432);
    if ( v9 )
      sub_186B220((void *)(v9 - 8));
    v10 = *(__int64 **)(v8 + 4424);
    if ( v10 )
    {
      v11 = *((unsigned int *)v10 - 1);
      if ( (_DWORD)v11 )
      {
        v12 = &v10[2 * v11];
        do
        {
          v13 = (__int64 *)v10[1];
          if ( v13 )
          {
            v14 = &v13[*((unsigned int *)v13 - 1)];
            if ( v13 >= v14 )
              goto LABEL_23;
            do
            {
              while ( 1 )
              {
                v15 = *v13;
                if ( *v13 )
                {
                  v16 = *v10;
                  v4 = (*(_DWORD *)(v15 + 8))-- == 1;
                  if ( v4 )
                    break;
                }
                if ( ++v13 >= v14 )
                  goto LABEL_22;
              }
              sub_15D7BC0(v16, v15);
              ++v13;
            }
            while ( v13 < v14 );
LABEL_22:
            v13 = (__int64 *)v10[1];
            if ( v13 )
LABEL_23:
              sub_186B220(v13 - 1);
          }
          v10 += 2;
        }
        while ( v10 != v12 );
        v10 = *(__int64 **)(v8 + 4424);
      }
      sub_186B220(v10 - 1);
    }
    v17 = *(void **)(v8 + 4400);
    if ( v17 )
      sub_186B220(v17);
    v18 = *(_QWORD **)(v8 + 4392);
    if ( v18 )
    {
      v19 = &v18[*((unsigned int *)v18 - 1)];
      if ( v18 == v19 )
        goto LABEL_35;
      do
      {
        v20 = (void (__fastcall ***)(_QWORD))*v18;
        if ( *v18 )
        {
          (**v20)(*v18);
          sub_186B220(v20);
        }
        ++v18;
      }
      while ( v19 != v18 );
      v19 = *(_QWORD **)(v8 + 4392);
      if ( v19 )
      {
LABEL_35:
        *((_DWORD *)v19 - 1) = 0;
        sub_186B220(v19 - 1);
      }
    }
    v21 = *(_QWORD *)(v8 + 4376);
    if ( v21 )
      sub_186B220((void *)(v21 - 8));
    v22 = *(_QWORD *)(v8 + 4368);
    if ( v22 )
      sub_186B220((void *)(v22 - 8));
    v23 = *(char **)(v8 + 4344);
    if ( v23 )
    {
      v24 = *(unsigned int *)(v8 + 4352);
      if ( (_DWORD)v24 )
      {
        v25 = *(_QWORD *)(v8 + 4344);
        v26 = &v23[32 * v24];
        do
        {
          while ( 1 )
          {
            v27 = *(_QWORD *)(v25 + 16);
            if ( v27 )
              sub_186B220((void *)(v27 - 8));
            v28 = *(_QWORD *)(v25 + 8);
            if ( !v28 )
              break;
            v25 += 32;
            sub_186B220((void *)(v28 - 8));
            if ( (char *)v25 == v26 )
              goto LABEL_47;
          }
          v25 += 32;
        }
        while ( (char *)v25 != v26 );
      }
LABEL_47:
      sub_186B220(v23);
    }
    v29 = *(_QWORD *)(v8 + 4336);
    if ( v29 )
    {
      v30 = *(unsigned int *)(v29 - 4);
      if ( (_DWORD)v30 )
      {
        v31 = v29 + 16 * v30;
        do
        {
          while ( 1 )
          {
            v32 = *(_QWORD *)(v29 + 8);
            if ( !v32 )
              break;
            v29 += 16;
            sub_186B220((void *)(v32 - 8));
            if ( v31 == v29 )
              goto LABEL_53;
          }
          v29 += 16;
        }
        while ( v29 != v31 );
LABEL_53:
        v29 = *(_QWORD *)(v8 + 4336);
      }
      sub_186B220((void *)(v29 - 8));
    }
    v33 = *(_QWORD *)(v8 + 4328);
    if ( v33 )
    {
      v34 = *(unsigned int *)(v33 - 4);
      if ( (_DWORD)v34 )
      {
        v35 = v33 + 32 * v34;
        do
        {
          while ( 1 )
          {
            v36 = *(_QWORD *)(v33 + 16);
            if ( !v36 )
              break;
            v33 += 32;
            sub_186B220((void *)(v36 - 8));
            if ( v35 == v33 )
              goto LABEL_60;
          }
          v33 += 32;
        }
        while ( v33 != v35 );
LABEL_60:
        v33 = *(_QWORD *)(v8 + 4328);
      }
      sub_186B220((void *)(v33 - 8));
    }
    v37 = *(_QWORD *)(v8 + 4312);
    if ( v37 )
      sub_186B220((void *)(v37 - 8));
    v38 = *(_QWORD *)(v8 + 4304);
    if ( v38 )
      sub_186B220((void *)(v38 - 8));
    v39 = *(_QWORD *)(v8 + 4296);
    if ( v39 )
      sub_186B220((void *)(v39 - 8));
    v40 = *(_QWORD *)(v8 + 4288);
    if ( v40 )
      sub_186B220((void *)(v40 - 8));
    v41 = *(_QWORD *)(v8 + 4280);
    if ( v41 )
      sub_186B220((void *)(v41 - 8));
    v42 = *(_QWORD *)(v8 + 4272);
    if ( v42 )
      sub_186B220((void *)(v42 - 8));
    sub_11C05E0(v8 + 8);
    sub_186B220((void *)v8);
  }
  v43 = (void *)a1[12];
  if ( v43 )
    sub_186B220(v43);
  v44 = (_QWORD *)a1[11];
  if ( v44 )
  {
    v45 = (void *)v44[631];
    if ( v45 )
      sub_186B220(v45);
    v46 = (void *)v44[628];
    if ( v46 )
      sub_186B220(v46);
    v47 = v44[626];
    if ( v47 )
      sub_186B220((void *)(v47 - 8));
    v48 = v44[625];
    if ( v48 )
      sub_186B220((void *)(v48 - 8));
    sub_11ECBE0(v44 + 542);
    sub_11C05E0(v44 + 9);
    v49 = (void (__fastcall ***)(_QWORD))v44[7];
    if ( v49 )
    {
      (**v49)(v44[7]);
      sub_186B220(v49);
    }
    v50 = (void *)v44[4];
    if ( v50 )
      sub_186B220(v50);
    v51 = (_QWORD *)v44[3];
    if ( v51 )
    {
      v52 = &v51[*((unsigned int *)v51 - 1)];
      if ( v51 == v52 )
        goto LABEL_96;
      do
      {
        v53 = (void (__fastcall ***)(_QWORD))*v51;
        if ( *v51 )
        {
          (**v53)(*v51);
          sub_186B220(v53);
        }
        ++v51;
      }
      while ( v52 != v51 );
      v52 = (_QWORD *)v44[3];
      if ( v52 )
      {
LABEL_96:
        *((_DWORD *)v52 - 1) = 0;
        sub_186B220(v52 - 1);
      }
    }
    sub_18572D0(v44 + 1);
    sub_186B220(v44);
  }
  v54 = a1[9];
  if ( v54 )
    sub_186B220((void *)(v54 - 8));
  v55 = a1[7];
  if ( v55 )
  {
    v56 = a1[8];
    v4 = (*(_DWORD *)(v55 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v56, v55);
  }
  v57 = (__int64 *)a1[6];
  if ( v57 )
  {
    v58 = &v57[*((unsigned int *)v57 - 1)];
    if ( v57 >= v58 )
      goto LABEL_111;
    do
    {
      while ( 1 )
      {
        v59 = *v57;
        if ( *v57 )
        {
          v60 = a1[5];
          v4 = (*(_DWORD *)(v59 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v57 >= v58 )
          goto LABEL_110;
      }
      sub_15D7BC0(v60, v59);
      ++v57;
    }
    while ( v57 < v58 );
LABEL_110:
    v57 = (__int64 *)a1[6];
    if ( v57 )
LABEL_111:
      sub_186B220(v57 - 1);
  }
  operator delete(a1, 0xB8u);
}

