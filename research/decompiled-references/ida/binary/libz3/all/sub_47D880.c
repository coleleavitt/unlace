_DWORD **__fastcall sub_47D880(__int64 *a1, __int64 *a2)
{
  char **exception; // rbp
  __int64 *v4; // rdi
  __int64 v6; // rsi
  __m128i v7; // xmm0
  int v8; // eax
  __int64 v9; // rsi
  _DWORD **result; // rax
  _DWORD **v11; // r12
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  _DWORD *v14; // rax
  __int64 v15; // rdx
  size_t v16; // rdi
  __int64 v17; // rax
  const __m128i *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  const __m128i *v23; // rsi
  const __m128i *i; // rax
  __m128i v25; // xmm0
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  const __m128i *v34; // r15
  _QWORD *v35; // r14
  __int64 v36; // rdx
  _QWORD *v37; // rbp
  void *v38; // rdi
  __int64 *v39; // rbp
  __int64 *v40; // r14
  __int64 v41; // rsi
  __int64 v42; // rdi
  bool v43; // zf
  _QWORD *v44; // r14
  __int64 v45; // rdx
  _QWORD *v46; // rbp
  void *v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 *v50; // rbp
  __int64 *v51; // r14
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rdi
  _QWORD *v56; // rbp
  void (***v57)(void); // rdi
  _QWORD *v58; // rdi
  char *v59; // rax
  char *v60; // rcx
  __int64 v61; // rsi
  __int64 v62; // rdi
  char *v63; // rax
  char *v64; // rcx
  __int64 v65; // rsi
  __int64 v66; // rdi
  char *v67; // rax
  char *v68; // rcx
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rdi
  _DWORD **v73; // [rsp+8h] [rbp-A0h]
  char *ptr; // [rsp+10h] [rbp-98h]
  char *ptra; // [rsp+10h] [rbp-98h]
  char *ptrb; // [rsp+10h] [rbp-98h]
  unsigned __int64 v77; // [rsp+18h] [rbp-90h]
  unsigned __int64 v78; // [rsp+18h] [rbp-90h]
  unsigned __int64 v79; // [rsp+18h] [rbp-90h]
  _DWORD *v80; // [rsp+20h] [rbp-88h]
  __int64 v81; // [rsp+28h] [rbp-80h]
  unsigned int v82; // [rsp+34h] [rbp-74h]
  __int64 v83[11]; // [rsp+50h] [rbp-58h] BYREF

  v4 = a1 + 1;
  v6 = *a2;
  *(v4 - 1) = v6;
  sub_16669D0(v4, v6);
  sub_16744A0(a1 + 3, *a1);
  *((_DWORD *)a1 + 12) = 0;
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 7));
  *(__m128i *)(a1 + 7) = v7;
  if ( v7.m128i_i64[0] )
    ++*(_DWORD *)(v7.m128i_i64[0] + 8);
  v8 = *((_DWORD *)a2 + 18);
  v9 = *a1;
  a1[10] = 0;
  *((_DWORD *)a1 + 18) = v8;
  sub_4B0740(a1 + 11, v9);
  result = (_DWORD **)*((unsigned int *)a2 + 36);
  v11 = (_DWORD **)a2[10];
  *((_DWORD *)a1 + 36) = (_DWORD)result;
  if ( v11 )
  {
    result = &v11[17 * *((unsigned int *)v11 - 1)];
    v73 = result;
    if ( result != v11 )
    {
      result = (_DWORD **)a1[10];
      if ( result )
        goto LABEL_11;
      v12 = (_QWORD *)sub_186B270(0x118u);
      v13 = v12 + 1;
      *v12 = 2;
      a1[10] = (__int64)(v12 + 1);
      while ( 1 )
      {
        v14 = *v11;
        *v13 = *v11;
        if ( v14 )
          ++*v14;
        sub_482680(v13 + 1, v11 + 1);
        result = (_DWORD **)a1[10];
        v11 += 17;
        ++*((_DWORD *)result - 1);
        if ( v73 == v11 )
          break;
LABEL_11:
        v15 = *((unsigned int *)result - 1);
        if ( (_DWORD)v15 == *((_DWORD *)result - 2) )
        {
          v82 = (unsigned int)(3 * v15 + 1) >> 1;
          v16 = 136 * v82 + 8;
          if ( 136 * (int)v15 + 8 >= (unsigned int)v16 || (unsigned int)v15 >= (unsigned int)(3 * v15 + 1) >> 1 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v83, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v83);
            sub_233E40((__int64)v83);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v17 = sub_186B270(v16);
          v18 = (const __m128i *)a1[10];
          v19 = v17 + 8;
          v80 = (_DWORD *)v17;
          v20 = v17;
          v81 = v17 + 8;
          if ( v18 )
          {
            v21 = v18[-1].m128i_u32[3];
            *(_DWORD *)(v20 + 4) = v21;
            v22 = v19;
            v23 = (const __m128i *)((char *)v18 + 136 * v21);
            for ( i = v18; v23 != i; *(_DWORD *)(v22 - 8) = i[-1].m128i_i32[2] )
            {
              v25 = _mm_loadu_si128(i);
              i->m128i_i64[0] = 0;
              i = (const __m128i *)((char *)i + 136);
              v22 += 136;
              *(__m128i *)(v22 - 136) = v25;
              v26 = i[-8].m128i_i64[1];
              i[-8].m128i_i64[1] = 0;
              *(_QWORD *)(v22 - 120) = v26;
              *(_QWORD *)(v22 - 112) = i[-7].m128i_i64[0];
              *(_DWORD *)(v22 - 104) = i[-7].m128i_i32[2];
              v27 = i[-6].m128i_i64[0];
              i[-6].m128i_i64[0] = 0;
              *(_QWORD *)(v22 - 96) = v27;
              *(_QWORD *)(v22 - 88) = i[-6].m128i_i64[1];
              v28 = i[-5].m128i_i64[0];
              i[-5].m128i_i64[0] = 0;
              *(_QWORD *)(v22 - 80) = v28;
              v29 = i[-5].m128i_i64[1];
              i[-5].m128i_i64[1] = 0;
              *(_QWORD *)(v22 - 72) = v29;
              v30 = i[-4].m128i_i64[0];
              i[-4].m128i_i64[0] = 0;
              *(_QWORD *)(v22 - 64) = v30;
              v31 = i[-4].m128i_i64[1];
              i[-4].m128i_i64[1] = 0;
              *(_QWORD *)(v22 - 56) = v31;
              *(_DWORD *)(v22 - 48) = i[-3].m128i_i32[0];
              *(_QWORD *)(v22 - 40) = i[-3].m128i_i64[1];
              *(_QWORD *)(v22 - 32) = i[-2].m128i_i64[0];
              v32 = i[-2].m128i_i64[1];
              i[-2].m128i_i64[0] = 0;
              *(_QWORD *)(v22 - 24) = v32;
              LODWORD(v32) = i[-1].m128i_i32[0];
              i[-2].m128i_i64[1] = 0;
              *(_DWORD *)(v22 - 16) = v32;
            }
            v33 = v18[-1].m128i_u32[3];
            if ( (_DWORD)v33 )
            {
              v34 = (const __m128i *)((char *)v18 + 136 * v33);
              do
              {
                v35 = (_QWORD *)v18[7].m128i_i64[0];
                if ( v35 )
                {
                  v36 = *((unsigned int *)v35 - 1);
                  if ( (_DWORD)v36 )
                  {
                    v37 = &v35[v36];
                    do
                    {
                      while ( *v35 )
                      {
                        v38 = (void *)(*v35++ - 8LL);
                        sub_186B220(v38);
                        if ( v37 == v35 )
                          goto LABEL_24;
                      }
                      ++v35;
                    }
                    while ( v35 != v37 );
LABEL_24:
                    v35 = (_QWORD *)v18[7].m128i_i64[0];
                  }
                  sub_186B220(v35 - 1);
                }
                v39 = (__int64 *)v18[6].m128i_i64[1];
                if ( v39 )
                {
                  v40 = &v39[*((unsigned int *)v39 - 1)];
                  if ( v39 >= v40 )
                    goto LABEL_34;
                  do
                  {
                    while ( 1 )
                    {
                      v41 = *v39;
                      if ( *v39 )
                      {
                        v42 = v18[6].m128i_i64[0];
                        v43 = (*(_DWORD *)(v41 + 8))-- == 1;
                        if ( v43 )
                          break;
                      }
                      if ( ++v39 >= v40 )
                        goto LABEL_33;
                    }
                    sub_15D7BC0(v42, v41);
                    ++v39;
                  }
                  while ( v39 < v40 );
LABEL_33:
                  v39 = (__int64 *)v18[6].m128i_i64[1];
                  if ( v39 )
LABEL_34:
                    sub_186B220(v39 - 1);
                }
                v44 = (_QWORD *)v18[5].m128i_i64[0];
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
                          goto LABEL_40;
                      }
                      ++v44;
                    }
                    while ( v44 != v46 );
LABEL_40:
                    v44 = (_QWORD *)v18[5].m128i_i64[0];
                  }
                  sub_186B220(v44 - 1);
                }
                v48 = v18[4].m128i_i64[1];
                if ( v48 )
                  sub_186B220((void *)(v48 - 8));
                v49 = v18[4].m128i_i64[0];
                if ( v49 )
                  sub_186B220((void *)(v49 - 8));
                v50 = (__int64 *)v18[3].m128i_i64[1];
                if ( v50 )
                {
                  v51 = &v50[*((unsigned int *)v50 - 1)];
                  if ( v50 >= v51 )
                    goto LABEL_54;
                  do
                  {
                    while ( 1 )
                    {
                      v52 = *v50;
                      if ( *v50 )
                      {
                        v53 = v18[3].m128i_i64[0];
                        v43 = (*(_DWORD *)(v52 + 8))-- == 1;
                        if ( v43 )
                          break;
                      }
                      if ( ++v50 >= v51 )
                        goto LABEL_53;
                    }
                    sub_15D7BC0(v53, v52);
                    ++v50;
                  }
                  while ( v50 < v51 );
LABEL_53:
                  v50 = (__int64 *)v18[3].m128i_i64[1];
                  if ( v50 )
LABEL_54:
                    sub_186B220(v50 - 1);
                }
                v54 = v18[2].m128i_i64[1];
                if ( v54 )
                  sub_186B220((void *)(v54 - 8));
                v55 = v18[1].m128i_i64[0];
                if ( v55 )
                  sub_186B220((void *)(v55 - 8));
                v56 = (_QWORD *)v18->m128i_i64[0];
                if ( v18->m128i_i64[0] )
                {
                  v43 = (*(_DWORD *)v56)-- == 1;
                  if ( v43 )
                  {
                    v57 = (void (***)(void))v56[11];
                    if ( v57 )
                    {
                      v43 = (*((_DWORD *)v57 + 4))-- == 1;
                      if ( v43 )
                      {
                        (**v57)();
                        sub_186B220(v57);
                      }
                    }
                    v58 = (_QWORD *)v56[10];
                    if ( v58 )
                    {
                      v43 = (*(_DWORD *)v58)-- == 1;
                      if ( v43 )
                      {
                        sub_41CB00(v58);
                        sub_186B220(v58);
                      }
                    }
                    v59 = (char *)v56[9];
                    if ( v59 )
                    {
                      v60 = &v59[8 * *((unsigned int *)v59 - 1)];
                      if ( v59 >= v60 )
                        goto LABEL_83;
                      do
                      {
                        while ( 1 )
                        {
                          v61 = *(_QWORD *)v59;
                          if ( *(_QWORD *)v59 )
                          {
                            v62 = v56[8];
                            v43 = (*(_DWORD *)(v61 + 8))-- == 1;
                            if ( v43 )
                              break;
                          }
                          v59 += 8;
                          if ( v59 >= v60 )
                            goto LABEL_82;
                        }
                        v77 = (unsigned __int64)v60;
                        ptr = v59;
                        sub_15D7BC0(v62, v61);
                        v60 = (char *)v77;
                        v59 = ptr + 8;
                      }
                      while ( (unsigned __int64)(ptr + 8) < v77 );
LABEL_82:
                      v59 = (char *)v56[9];
                      if ( v59 )
LABEL_83:
                        sub_186B220(v59 - 8);
                    }
                    v63 = (char *)v56[7];
                    if ( v63 )
                    {
                      v64 = &v63[8 * *((unsigned int *)v63 - 1)];
                      if ( v63 >= v64 )
                        goto LABEL_92;
                      do
                      {
                        while ( 1 )
                        {
                          v65 = *(_QWORD *)v63;
                          if ( *(_QWORD *)v63 )
                          {
                            v66 = v56[6];
                            v43 = (*(_DWORD *)(v65 + 8))-- == 1;
                            if ( v43 )
                              break;
                          }
                          v63 += 8;
                          if ( v63 >= v64 )
                            goto LABEL_91;
                        }
                        v78 = (unsigned __int64)v64;
                        ptra = v63;
                        sub_15D7BC0(v66, v65);
                        v64 = (char *)v78;
                        v63 = ptra + 8;
                      }
                      while ( (unsigned __int64)(ptra + 8) < v78 );
LABEL_91:
                      v63 = (char *)v56[7];
                      if ( v63 )
LABEL_92:
                        sub_186B220(v63 - 8);
                    }
                    v67 = (char *)v56[5];
                    if ( v67 )
                    {
                      v68 = &v67[8 * *((unsigned int *)v67 - 1)];
                      if ( v67 >= v68 )
                        goto LABEL_101;
                      do
                      {
                        while ( 1 )
                        {
                          v69 = *(_QWORD *)v67;
                          if ( *(_QWORD *)v67 )
                          {
                            v70 = v56[4];
                            v43 = (*(_DWORD *)(v69 + 8))-- == 1;
                            if ( v43 )
                              break;
                          }
                          v67 += 8;
                          if ( v67 >= v68 )
                            goto LABEL_100;
                        }
                        v79 = (unsigned __int64)v68;
                        ptrb = v67;
                        sub_15D7BC0(v70, v69);
                        v68 = (char *)v79;
                        v67 = ptrb + 8;
                      }
                      while ( (unsigned __int64)(ptrb + 8) < v79 );
LABEL_100:
                      v67 = (char *)v56[5];
                      if ( v67 )
LABEL_101:
                        sub_186B220(v67 - 8);
                    }
                    v71 = v56[2];
                    if ( v71 )
                    {
                      v72 = v56[3];
                      v43 = (*(_DWORD *)(v71 + 8))-- == 1;
                      if ( v43 )
                        sub_15D7BC0(v72, v71);
                    }
                    sub_186B220(v56);
                  }
                }
                v18 = (const __m128i *)((char *)v18 + 136);
              }
              while ( v18 != v34 );
              v18 = (const __m128i *)a1[10];
            }
            sub_186B220(&v18[-1].m128i_u64[1]);
            v13 = (_QWORD *)(v81 + 136LL * (unsigned int)v80[1]);
          }
          else
          {
            *(_DWORD *)(v17 + 4) = 0;
            v13 = (_QWORD *)(v17 + 8);
          }
          a1[10] = v81;
          *v80 = v82;
        }
        else
        {
          v13 = &result[17 * v15];
        }
      }
    }
  }
  return result;
}

