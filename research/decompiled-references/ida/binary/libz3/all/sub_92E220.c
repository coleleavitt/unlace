__int64 __fastcall sub_92E220(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r14
  void *v6; // r13
  void *v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r14
  void *v12; // r13
  void *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // r13
  __int64 v18; // rax
  __int64 *v19; // r12
  __int64 *v20; // rbx
  __int64 *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r14
  void *v28; // r13
  __int64 v29; // rsi
  __int64 *v30; // r13
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // r15
  void *v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // r14
  void *v41; // r13
  void *v42; // r13
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 *v45; // r13
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // r15
  __int64 v50; // rdi
  void *v51; // r14
  void *v52; // r14
  __int64 v53; // rsi
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // r14
  void *v57; // r13
  void *v58; // r13
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  void *v64; // rdi
  __int64 v65; // rax
  __int64 result; // rax
  __int64 *v67; // [rsp+8h] [rbp-40h]
  __int64 *v68; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = off_1C6F8C8;
  *(_QWORD *)(a1 + 56) = off_1C6FA88;
  sub_92DB20(a1);
  sub_25A130((char *)(a1 + 456));
  v2 = *(void **)(a1 + 424);
  if ( v2 )
    sub_186B220(v2);
  v3 = *(_QWORD *)(a1 + 400);
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 - 4);
    if ( (_DWORD)v4 )
    {
      v5 = v3 + (v4 << 6);
      do
      {
        v6 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v3 + 32);
        sub_182CBA0(v6, v3 + 48);
        v7 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v3);
        v8 = v3 + 16;
        v3 += 64;
        sub_182CBA0(v7, v8);
      }
      while ( v3 != v5 );
      v3 = *(_QWORD *)(a1 + 400);
    }
    sub_186B220((void *)(v3 - 8));
  }
  v9 = *(_QWORD *)(a1 + 392);
  if ( v9 )
  {
    v10 = *(unsigned int *)(v9 - 4);
    if ( (_DWORD)v10 )
    {
      v11 = v9 + 72 * v10;
      do
      {
        v12 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v9 + 40);
        sub_182CBA0(v12, v9 + 56);
        v13 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v9 + 8);
        v14 = v9 + 24;
        v9 += 72;
        sub_182CBA0(v13, v14);
      }
      while ( v9 != v11 );
      v9 = *(_QWORD *)(a1 + 392);
    }
    sub_186B220((void *)(v9 - 8));
  }
  v15 = *(_QWORD *)(a1 + 384);
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = *(_QWORD *)(a1 + 376);
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = *(__int64 **)(a1 + 368);
  if ( v17 )
  {
    v18 = *((unsigned int *)v17 - 1);
    if ( (_DWORD)v18 )
    {
      v19 = &v17[2 * v18];
      do
      {
        v20 = (__int64 *)v17[1];
        if ( v20 )
        {
          v21 = &v20[*((unsigned int *)v20 - 1)];
          if ( v20 >= v21 )
            goto LABEL_30;
          do
          {
            while ( 1 )
            {
              v22 = *v20;
              if ( *v20 )
              {
                v23 = *v17;
                if ( (*(_DWORD *)(v22 + 8))-- == 1 )
                  break;
              }
              if ( ++v20 >= v21 )
                goto LABEL_29;
            }
            sub_15D7BC0(v23, v22);
            ++v20;
          }
          while ( v20 < v21 );
LABEL_29:
          v20 = (__int64 *)v17[1];
          if ( v20 )
LABEL_30:
            sub_186B220(v20 - 1);
        }
        v17 += 2;
      }
      while ( v17 != v19 );
      v17 = *(__int64 **)(a1 + 368);
    }
    sub_186B220(v17 - 1);
  }
  v25 = *(_QWORD *)(a1 + 360);
  if ( v25 )
  {
    v26 = *(unsigned int *)(v25 - 4);
    if ( (_DWORD)v26 )
    {
      v27 = v25 + 32 * v26;
      do
      {
        v28 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v25);
        v29 = v25 + 16;
        v25 += 32;
        sub_182CBA0(v28, v29);
      }
      while ( v25 != v27 );
      v25 = *(_QWORD *)(a1 + 360);
    }
    sub_186B220((void *)(v25 - 8));
  }
  v30 = *(__int64 **)(a1 + 352);
  if ( v30 )
  {
    v31 = *((unsigned int *)v30 - 1);
    if ( (_DWORD)v31 )
    {
      v67 = &v30[v31];
      do
      {
        v32 = *v30;
        if ( *v30 )
        {
          v33 = *(unsigned int *)(v32 - 4);
          if ( (_DWORD)v33 )
          {
            v34 = v32 + 40 * v33;
            do
            {
              v35 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v32 + 8);
              v36 = v32 + 24;
              v32 += 40;
              sub_182CBA0(v35, v36);
            }
            while ( v34 != v32 );
            v32 = *v30;
          }
          sub_186B220((void *)(v32 - 8));
        }
        ++v30;
      }
      while ( v67 != v30 );
      v30 = *(__int64 **)(a1 + 352);
    }
    sub_186B220(v30 - 1);
  }
  v37 = *(_QWORD *)(a1 + 336);
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  v38 = *(_QWORD *)(a1 + 328);
  if ( v38 )
  {
    v39 = *(unsigned int *)(v38 - 4);
    if ( (_DWORD)v39 )
    {
      v40 = v38 + 72 * v39;
      do
      {
        v41 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v38 + 40);
        sub_182CBA0(v41, v38 + 56);
        v42 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v38 + 8);
        v43 = v38 + 24;
        v38 += 72;
        sub_182CBA0(v42, v43);
      }
      while ( v40 != v38 );
      v38 = *(_QWORD *)(a1 + 328);
    }
    sub_186B220((void *)(v38 - 8));
  }
  v44 = *(_QWORD *)(a1 + 320);
  if ( v44 )
    sub_186B220((void *)(v44 - 8));
  v45 = *(__int64 **)(a1 + 312);
  if ( v45 )
  {
    v46 = *((unsigned int *)v45 - 1);
    if ( (_DWORD)v46 )
    {
      v68 = &v45[v46];
      do
      {
        v47 = *v45;
        if ( *v45 )
        {
          v48 = *(unsigned int *)(v47 - 4);
          if ( (_DWORD)v48 )
          {
            v49 = v47 + 80 * v48;
            do
            {
              v50 = *(_QWORD *)(v47 + 72);
              if ( v50 )
                sub_186B220((void *)(v50 - 8));
              v51 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v47 + 40);
              sub_182CBA0(v51, v47 + 56);
              v52 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v47 + 8);
              v53 = v47 + 24;
              v47 += 80;
              sub_182CBA0(v52, v53);
            }
            while ( v47 != v49 );
            v47 = *v45;
          }
          sub_186B220((void *)(v47 - 8));
        }
        ++v45;
      }
      while ( v68 != v45 );
      v45 = *(__int64 **)(a1 + 312);
    }
    sub_186B220(v45 - 1);
  }
  v54 = *(_QWORD *)(a1 + 304);
  if ( v54 )
  {
    v55 = *(unsigned int *)(v54 - 4);
    if ( (_DWORD)v55 )
    {
      v56 = v54 + 80 * v55;
      do
      {
        v57 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v54 + 40);
        sub_182CBA0(v57, v54 + 56);
        v58 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v54 + 8);
        v59 = v54 + 24;
        v54 += 80;
        sub_182CBA0(v58, v59);
      }
      while ( v54 != v56 );
      v54 = *(_QWORD *)(a1 + 304);
    }
    sub_186B220((void *)(v54 - 8));
  }
  v60 = *(_QWORD *)(a1 + 296);
  if ( v60 )
    sub_186B220((void *)(v60 - 8));
  v61 = *(_QWORD *)(a1 + 288);
  if ( v61 )
    sub_186B220((void *)(v61 - 8));
  v62 = *(_QWORD *)(a1 + 280);
  if ( v62 )
    sub_186B220((void *)(v62 - 8));
  v63 = *(_QWORD *)(a1 + 272);
  if ( v63 )
    sub_186B220((void *)(v63 - 8));
  v64 = *(void **)(a1 + 248);
  if ( v64 )
    sub_186B220(v64);
  sub_25A130((char *)(a1 + 160));
  sub_25A130((char *)(a1 + 128));
  sub_25A130((char *)(a1 + 96));
  sub_25A130((char *)(a1 + 64));
  *(_QWORD *)a1 = off_1C70148;
  v65 = *(_QWORD *)(a1 + 40);
  if ( v65 )
    sub_186B220((void *)(v65 - 8));
  result = *(_QWORD *)(a1 + 32);
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}

