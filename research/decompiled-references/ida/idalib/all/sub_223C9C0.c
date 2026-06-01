__m128i **__fastcall sub_223C9C0(__m128i **a1, const __m128i *a2, __int64 a3, __int32 *a4)
{
  signed __int64 v6; // r13
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  __int64 v9; // rbp
  __m128i *v10; // r13
  _BYTE *v11; // r15
  __int32 v12; // r14d
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __m128i si128; // xmm0
  __m128i *v16; // rbp
  const __m128i *v17; // rax
  __int32 v18; // edx
  __int64 v19; // rdx
  __m128i v20; // xmm1
  __int64 v21; // rdx
  const __m128i *v22; // rdx
  const __m128i *v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __m128i v27; // xmm2
  __int64 v28; // rdx
  const __m128i *v29; // rdx
  __m128i *v30; // rdi
  char *v31; // rdi
  __int32 v32; // eax
  __int64 v33; // r15
  char *v34; // rdi
  int v35; // eax
  __int64 v36; // r15
  _QWORD *v37; // rbx
  void **v38; // r12
  void **v39; // rbp
  void *v40; // r13
  void **v41; // rdi
  __int64 *v42; // rbp
  __int64 v43; // r13
  char *v44; // r14
  char *v45; // r12
  char *v46; // r14
  char *v47; // rdi
  char *v48; // rcx
  __int64 v49; // r12
  void *v50; // rdi
  __int64 v51; // r13
  void **v52; // r12
  void **v53; // rbx
  void *v54; // rbp
  void **v55; // rdi
  __int64 *v56; // rbp
  __int64 v57; // r12
  char *v58; // r14
  char *v59; // rbx
  char *v60; // rdi
  char *v61; // r15
  __int64 v62; // r13
  void *v63; // rdi
  __m128i *v65; // rsi
  __m128i *i; // [rsp+0h] [rbp-B8h]
  __int64 v67; // [rsp+8h] [rbp-B0h]
  __int64 *v68; // [rsp+8h] [rbp-B0h]
  char *v69; // [rsp+10h] [rbp-A8h]
  __int64 **v70; // [rsp+10h] [rbp-A8h]
  __int64 v71; // [rsp+18h] [rbp-A0h]
  __int64 v72; // [rsp+20h] [rbp-98h]
  __int64 v73; // [rsp+28h] [rbp-90h]
  __int64 *v74; // [rsp+30h] [rbp-88h]
  char *v75; // [rsp+38h] [rbp-80h]
  __int64 v76; // [rsp+40h] [rbp-78h]
  __int64 v77; // [rsp+48h] [rbp-70h]
  __m128i *v78; // [rsp+50h] [rbp-68h]
  __m128i *v79; // [rsp+58h] [rbp-60h]
  __m128i *v80; // [rsp+60h] [rbp-58h]
  unsigned __int64 v82; // [rsp+70h] [rbp-48h] BYREF
  __m128i *v83; // [rsp+78h] [rbp-40h]

  v78 = a1[1];
  v6 = (char *)a2 - (char *)*a1;
  v79 = *a1;
  if ( !(0x8E38E38E38E38E39LL * (((char *)v78 - (char *)*a1) >> 3)) )
  {
    v7 = 1;
    goto LABEL_114;
  }
  v7 = 0x1C71C71C71C71C72LL * (((char *)v78 - (char *)*a1) >> 3);
  v8 = -16;
  if ( 0x8E38E38E38E38E39LL * (((char *)v78 - (char *)*a1) >> 3) > v7 || v7 > 0x38E38E38E38E38ELL )
    goto LABEL_3;
  if ( v7 )
  {
LABEL_114:
    v8 = 72 * v7;
LABEL_3:
    v80 = (__m128i *)operator new(v8);
    v83 = (__m128i *)((char *)v80 + v8);
    v9 = (__int64)&v80[4].m128i_i64[1];
    goto LABEL_4;
  }
  v83 = nullptr;
  v9 = 72;
  v80 = nullptr;
LABEL_4:
  v10 = (__m128i *)((char *)v80 + v6);
  v11 = *(_BYTE **)a3;
  v12 = *a4;
  v13 = *(_QWORD *)(a3 + 8);
  v14 = (_QWORD *)operator new(0x30u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9340);
  *v14 = 0;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = 0;
  v14[4] = 0;
  v14[5] = 0;
  v10->m128i_i64[0] = (__int64)v14;
  v10->m128i_i64[1] = 0;
  v10[2].m128i_i64[0] = (__int64)v10[3].m128i_i64;
  v10[1] = si128;
  sub_223C020((__m128i *)v10[2].m128i_i64, v11, (__int64)&v11[v13]);
  v10[4].m128i_i32[0] = v12;
  if ( a2 != v79 )
  {
    v16 = v80;
    v17 = v79 + 3;
    do
    {
      v19 = v17[-3].m128i_i64[0];
      v17[-3].m128i_i64[0] = 0;
      v20 = _mm_loadu_si128(v17 - 2);
      v16->m128i_i64[0] = v19;
      v21 = v17[-3].m128i_i64[1];
      v16[1] = v20;
      v16->m128i_i64[1] = v21;
      v17[-3].m128i_i64[1] = 0;
      v17[-2].m128i_i32[0] = 0;
      v17[-2].m128i_i32[1] = 0;
      v17[-2].m128i_i32[2] = 0;
      v16[2].m128i_i64[0] = (__int64)v16[3].m128i_i64;
      v22 = (const __m128i *)v17[-1].m128i_i64[0];
      if ( v22 == v17 )
      {
        v16[3] = _mm_loadu_si128(v17);
      }
      else
      {
        v16[2].m128i_i64[0] = (__int64)v22;
        v16[3].m128i_i64[0] = v17->m128i_i64[0];
      }
      v16 = (__m128i *)((char *)v16 + 72);
      v16[-2].m128i_i64[0] = v17[-1].m128i_i64[1];
      v18 = v17[1].m128i_i32[0];
      v17[-1].m128i_i64[0] = (__int64)v17;
      v17 = (const __m128i *)((char *)v17 + 72);
      v17[-5].m128i_i64[0] = 0;
      v17[-5].m128i_i8[8] = 0;
      v16[-1].m128i_i32[2] = v18;
    }
    while ( v16 != (__m128i *)&v80[4].m128i_u64[((unsigned __int64)((char *)&a2[-5].m128i_u64[1] - (char *)v79) >> 3)
                                              + 1] );
    v9 = (__int64)&v16[4].m128i_i64[1];
  }
  if ( a2 == v78 )
  {
    v82 = v9;
  }
  else
  {
    v23 = a2 + 3;
    v24 = v9 + 8 * ((unsigned __int64)((char *)v78 - (char *)a2 - 72) >> 3) + 72;
    v82 = v24;
    do
    {
      v26 = v23[-3].m128i_i64[0];
      v27 = _mm_loadu_si128(v23 - 2);
      v23[-3].m128i_i64[0] = 0;
      v23[-2].m128i_i32[0] = 0;
      *(_QWORD *)v9 = v26;
      v28 = v23[-3].m128i_i64[1];
      *(__m128i *)(v9 + 16) = v27;
      *(_QWORD *)(v9 + 8) = v28;
      *(_QWORD *)(v9 + 32) = v9 + 48;
      v29 = (const __m128i *)v23[-1].m128i_i64[0];
      v23[-3].m128i_i64[1] = 0;
      v23[-2].m128i_i32[1] = 0;
      v23[-2].m128i_i32[2] = 0;
      if ( v23 == v29 )
      {
        *(__m128i *)(v9 + 48) = _mm_loadu_si128(v23);
      }
      else
      {
        *(_QWORD *)(v9 + 32) = v29;
        *(_QWORD *)(v9 + 48) = v23->m128i_i64[0];
      }
      v25 = v23[-1].m128i_i64[1];
      v9 += 72;
      v23[-1].m128i_i64[0] = (__int64)v23;
      v23 = (const __m128i *)((char *)v23 + 72);
      v23[-5].m128i_i64[0] = 0;
      *(_QWORD *)(v9 - 32) = v25;
      LODWORD(v25) = v23[-4].m128i_i32[2];
      v23[-5].m128i_i8[8] = 0;
      *(_DWORD *)(v9 - 8) = v25;
    }
    while ( v9 != v24 );
  }
  for ( i = v79; i != v78; i = (__m128i *)((char *)i + 72) )
  {
    v30 = (__m128i *)i[2].m128i_i64[0];
    if ( v30 != &i[3] )
      operator delete(v30);
    v31 = (char *)i->m128i_i64[1];
    if ( i[1].m128i_i32[1] )
    {
      v32 = i[1].m128i_i32[0];
      if ( v32 )
      {
        v67 = 0;
        v77 = 8LL * (unsigned int)(v32 - 1) + 8;
        do
        {
          v33 = *(_QWORD *)&v31[v67];
          if ( v33 != -8 && v33 )
          {
            v34 = *(char **)(v33 + 8);
            v72 = *(_QWORD *)v33 + 33LL;
            if ( *(_DWORD *)(v33 + 20) )
            {
              v35 = *(_DWORD *)(v33 + 16);
              if ( v35 )
              {
                v71 = v33;
                v76 = 8LL * (unsigned int)(v35 - 1) + 8;
                v36 = 0;
                do
                {
                  v37 = *(_QWORD **)&v34[v36];
                  if ( v37 && v37 != (_QWORD *)-8LL )
                  {
                    v38 = (void **)v37[5];
                    v39 = (void **)v37[4];
                    v73 = *v37 + 57LL;
                    if ( v38 != v39 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v40 = *v39;
                          if ( !*v39 )
                            break;
                          v41 = (void **)*v39;
                          v39 += 2;
                          sub_22339F0(v41);
                          operator delete(v40, 0x10u);
                          if ( v38 == v39 )
                            goto LABEL_34;
                        }
                        v39 += 2;
                      }
                      while ( v38 != v39 );
LABEL_34:
                      v39 = (void **)v37[4];
                    }
                    if ( v39 )
                      operator delete(v39);
                    v42 = (__int64 *)v37[1];
                    v74 = (__int64 *)v37[2];
                    if ( v74 != v42 )
                    {
                      do
                      {
                        v43 = *v42;
                        if ( *v42 )
                        {
                          v44 = *(char **)(v43 + 56);
                          v45 = &v44[40 * *(unsigned int *)(v43 + 64)];
                          if ( v44 != v45 )
                          {
                            v69 = *(char **)(v43 + 56);
                            v46 = &v44[40 * *(unsigned int *)(v43 + 64)];
                            do
                            {
                              while ( 1 )
                              {
                                v46 -= 40;
                                v47 = *((char **)v46 + 2);
                                if ( v47 != v46 + 40 )
                                  free(v47);
                                v48 = *(char **)v46;
                                v49 = *(_QWORD *)v46 + 80LL * *((unsigned int *)v46 + 2);
                                if ( *(_QWORD *)v46 != v49 )
                                {
                                  do
                                  {
                                    while ( 1 )
                                    {
                                      v49 -= 80;
                                      v50 = *(void **)(v49 + 8);
                                      if ( v50 == (void *)(v49 + 24) )
                                        break;
                                      v75 = v48;
                                      free(v50);
                                      v48 = v75;
                                      if ( v75 == (char *)v49 )
                                        goto LABEL_46;
                                    }
                                  }
                                  while ( v48 != (char *)v49 );
LABEL_46:
                                  v48 = *(char **)v46;
                                }
                                if ( v48 == v46 + 16 )
                                  break;
                                free(v48);
                                if ( v69 == v46 )
                                  goto LABEL_49;
                              }
                            }
                            while ( v69 != v46 );
LABEL_49:
                            v45 = *(char **)(v43 + 56);
                          }
                          if ( v45 != (char *)(v43 + 72) )
                            free(v45);
                          if ( *(_QWORD *)v43 != v43 + 16 )
                            operator delete(*(void **)v43);
                          operator delete((void *)v43, 0x70u);
                        }
                        ++v42;
                      }
                      while ( v74 != v42 );
                      v42 = (__int64 *)v37[1];
                    }
                    if ( v42 )
                      operator delete(v42);
                    operator delete(v37, v73, 8);
                    v34 = *(char **)(v71 + 8);
                  }
                  v36 += 8;
                }
                while ( v76 != v36 );
                v33 = v71;
              }
            }
            free(v34);
            operator delete(v33, v72, 8);
            v31 = (char *)i->m128i_i64[1];
          }
          v67 += 8;
        }
        while ( v77 != v67 );
      }
    }
    free(v31);
    v51 = i->m128i_i64[0];
    if ( i->m128i_i64[0] )
    {
      v52 = *(void ***)(v51 + 32);
      v53 = *(void ***)(v51 + 24);
      if ( v52 != v53 )
      {
        do
        {
          while ( 1 )
          {
            v54 = *v53;
            if ( !*v53 )
              break;
            v55 = (void **)*v53;
            v53 += 2;
            sub_22339F0(v55);
            operator delete(v54, 0x10u);
            if ( v53 == v52 )
              goto LABEL_68;
          }
          v53 += 2;
        }
        while ( v52 != v53 );
LABEL_68:
        v53 = *(void ***)(v51 + 24);
      }
      if ( v53 )
        operator delete(v53);
      v56 = *(__int64 **)v51;
      v68 = *(__int64 **)(v51 + 8);
      if ( v68 != *(__int64 **)v51 )
      {
        v70 = (__int64 **)v51;
        do
        {
          v57 = *v56;
          if ( *v56 )
          {
            v58 = *(char **)(v57 + 56);
            v59 = &v58[40 * *(unsigned int *)(v57 + 64)];
            if ( v58 != v59 )
            {
              do
              {
                while ( 1 )
                {
                  v59 -= 40;
                  v60 = *((char **)v59 + 2);
                  if ( v60 != v59 + 40 )
                    free(v60);
                  v61 = *(char **)v59;
                  v62 = *(_QWORD *)v59 + 80LL * *((unsigned int *)v59 + 2);
                  if ( *(_QWORD *)v59 != v62 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v62 -= 80;
                        v63 = *(void **)(v62 + 8);
                        if ( v63 == (void *)(v62 + 24) )
                          break;
                        free(v63);
                        if ( v61 == (char *)v62 )
                          goto LABEL_80;
                      }
                    }
                    while ( v61 != (char *)v62 );
LABEL_80:
                    v61 = *(char **)v59;
                  }
                  if ( v61 == v59 + 16 )
                    break;
                  free(v61);
                  if ( v58 == v59 )
                    goto LABEL_83;
                }
              }
              while ( v58 != v59 );
LABEL_83:
              v59 = *(char **)(v57 + 56);
            }
            if ( v59 != (char *)(v57 + 72) )
              free(v59);
            if ( *(_QWORD *)v57 != v57 + 16 )
              operator delete(*(void **)v57);
            operator delete((void *)v57, 0x70u);
          }
          ++v56;
        }
        while ( v68 != v56 );
        v51 = (__int64)v70;
        v56 = *v70;
      }
      if ( v56 )
        operator delete(v56);
      operator delete((void *)v51, 0x30u);
    }
  }
  if ( v79 )
    operator delete(v79);
  v65 = v83;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v82);
  a1[2] = v65;
  return a1;
}
