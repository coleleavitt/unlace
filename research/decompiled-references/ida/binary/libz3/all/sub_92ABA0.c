__int64 __fastcall sub_92ABA0(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r14
  void *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r14
  void *v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // r13
  __int64 v16; // rax
  __int64 *v17; // r12
  __int64 *v18; // rbx
  __int64 *v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r14
  void *v26; // r13
  __int64 v27; // rsi
  __int64 *v28; // r13
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r15
  void *v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r14
  void *v39; // r13
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 *v42; // r13
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rdi
  void *v48; // r14
  __int64 v49; // rsi
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // r14
  void *v53; // r13
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  void *v59; // rdi
  __int64 v60; // rax
  __int64 result; // rax
  __int64 *v62; // [rsp+8h] [rbp-40h]
  __int64 *v63; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = off_1C6FAC0;
  *(_QWORD *)(a1 + 56) = off_1C6FC80;
  sub_92A620(a1);
  sub_25A130((char *)(a1 + 392));
  v2 = *(void **)(a1 + 360);
  if ( v2 )
    sub_186B220(v2);
  v3 = *(_QWORD *)(a1 + 336);
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 - 4);
    if ( (_DWORD)v4 )
    {
      v5 = v3 + 32 * v4;
      do
      {
        v6 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v3);
        v7 = v3 + 16;
        v3 += 32;
        sub_182CBA0(v6, v7);
      }
      while ( v3 != v5 );
      v3 = *(_QWORD *)(a1 + 336);
    }
    sub_186B220((void *)(v3 - 8));
  }
  v8 = *(_QWORD *)(a1 + 328);
  if ( v8 )
  {
    v9 = *(unsigned int *)(v8 - 4);
    if ( (_DWORD)v9 )
    {
      v10 = v8 + 40 * v9;
      do
      {
        v11 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v8 + 8);
        v12 = v8 + 24;
        v8 += 40;
        sub_182CBA0(v11, v12);
      }
      while ( v8 != v10 );
      v8 = *(_QWORD *)(a1 + 328);
    }
    sub_186B220((void *)(v8 - 8));
  }
  v13 = *(_QWORD *)(a1 + 320);
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = *(_QWORD *)(a1 + 312);
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = *(__int64 **)(a1 + 304);
  if ( v15 )
  {
    v16 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v16 )
    {
      v17 = &v15[2 * v16];
      do
      {
        v18 = (__int64 *)v15[1];
        if ( v18 )
        {
          v19 = &v18[*((unsigned int *)v18 - 1)];
          if ( v18 >= v19 )
            goto LABEL_30;
          do
          {
            while ( 1 )
            {
              v20 = *v18;
              if ( *v18 )
              {
                v21 = *v15;
                if ( (*(_DWORD *)(v20 + 8))-- == 1 )
                  break;
              }
              if ( ++v18 >= v19 )
                goto LABEL_29;
            }
            sub_15D7BC0(v21, v20);
            ++v18;
          }
          while ( v18 < v19 );
LABEL_29:
          v18 = (__int64 *)v15[1];
          if ( v18 )
LABEL_30:
            sub_186B220(v18 - 1);
        }
        v15 += 2;
      }
      while ( v17 != v15 );
      v15 = *(__int64 **)(a1 + 304);
    }
    sub_186B220(v15 - 1);
  }
  v23 = *(_QWORD *)(a1 + 296);
  if ( v23 )
  {
    v24 = *(unsigned int *)(v23 - 4);
    if ( (_DWORD)v24 )
    {
      v25 = v23 + 32 * v24;
      do
      {
        v26 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v23);
        v27 = v23 + 16;
        v23 += 32;
        sub_182CBA0(v26, v27);
      }
      while ( v25 != v23 );
      v23 = *(_QWORD *)(a1 + 296);
    }
    sub_186B220((void *)(v23 - 8));
  }
  v28 = *(__int64 **)(a1 + 288);
  if ( v28 )
  {
    v29 = *((unsigned int *)v28 - 1);
    if ( (_DWORD)v29 )
    {
      v62 = &v28[v29];
      do
      {
        v30 = *v28;
        if ( *v28 )
        {
          v31 = *(unsigned int *)(v30 - 4);
          if ( (_DWORD)v31 )
          {
            v32 = v30 + 40 * v31;
            do
            {
              v33 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v30 + 8);
              v34 = v30 + 24;
              v30 += 40;
              sub_182CBA0(v33, v34);
            }
            while ( v32 != v30 );
            v30 = *v28;
          }
          sub_186B220((void *)(v30 - 8));
        }
        ++v28;
      }
      while ( v62 != v28 );
      v28 = *(__int64 **)(a1 + 288);
    }
    sub_186B220(v28 - 1);
  }
  v35 = *(_QWORD *)(a1 + 272);
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  v36 = *(_QWORD *)(a1 + 264);
  if ( v36 )
  {
    v37 = *(unsigned int *)(v36 - 4);
    if ( (_DWORD)v37 )
    {
      v38 = v36 + 40 * v37;
      do
      {
        v39 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v36 + 8);
        v40 = v36 + 24;
        v36 += 40;
        sub_182CBA0(v39, v40);
      }
      while ( v36 != v38 );
      v36 = *(_QWORD *)(a1 + 264);
    }
    sub_186B220((void *)(v36 - 8));
  }
  v41 = *(_QWORD *)(a1 + 256);
  if ( v41 )
    sub_186B220((void *)(v41 - 8));
  v42 = *(__int64 **)(a1 + 248);
  if ( v42 )
  {
    v43 = *((unsigned int *)v42 - 1);
    if ( (_DWORD)v43 )
    {
      v63 = &v42[v43];
      do
      {
        v44 = *v42;
        if ( *v42 )
        {
          v45 = *(unsigned int *)(v44 - 4);
          if ( (_DWORD)v45 )
          {
            v46 = v44 + 48 * v45;
            do
            {
              v47 = *(_QWORD *)(v44 + 40);
              if ( v47 )
                sub_186B220((void *)(v47 - 8));
              v48 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v44 + 8);
              v49 = v44 + 24;
              v44 += 48;
              sub_182CBA0(v48, v49);
            }
            while ( v44 != v46 );
            v44 = *v42;
          }
          sub_186B220((void *)(v44 - 8));
        }
        ++v42;
      }
      while ( v42 != v63 );
      v42 = *(__int64 **)(a1 + 248);
    }
    sub_186B220(v42 - 1);
  }
  v50 = *(_QWORD *)(a1 + 240);
  if ( v50 )
  {
    v51 = *(unsigned int *)(v50 - 4);
    if ( (_DWORD)v51 )
    {
      v52 = v50 + 48 * v51;
      do
      {
        v53 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v50 + 8);
        v54 = v50 + 24;
        v50 += 48;
        sub_182CBA0(v53, v54);
      }
      while ( v50 != v52 );
      v50 = *(_QWORD *)(a1 + 240);
    }
    sub_186B220((void *)(v50 - 8));
  }
  v55 = *(_QWORD *)(a1 + 232);
  if ( v55 )
    sub_186B220((void *)(v55 - 8));
  v56 = *(_QWORD *)(a1 + 224);
  if ( v56 )
    sub_186B220((void *)(v56 - 8));
  v57 = *(_QWORD *)(a1 + 216);
  if ( v57 )
    sub_186B220((void *)(v57 - 8));
  v58 = *(_QWORD *)(a1 + 208);
  if ( v58 )
    sub_186B220((void *)(v58 - 8));
  v59 = *(void **)(a1 + 184);
  if ( v59 )
    sub_186B220(v59);
  sub_25A130((char *)(a1 + 96));
  sub_25A130((char *)(a1 + 64));
  *(_QWORD *)a1 = off_1C70148;
  v60 = *(_QWORD *)(a1 + 40);
  if ( v60 )
    sub_186B220((void *)(v60 - 8));
  result = *(_QWORD *)(a1 + 32);
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}

