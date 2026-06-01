unsigned int *__fastcall sub_572100(__int64 a1, const void *a2)
{
  unsigned int *v3; // rax
  __int64 v4; // r14
  unsigned int *v5; // r12
  unsigned int *v6; // rax
  unsigned int *v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  unsigned int *v11; // rcx
  __int64 v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int *v17; // rsi
  unsigned int v18; // edx
  __int64 v19; // r15
  __int64 v20; // rsi
  unsigned int *v21; // rsi
  unsigned int *v22; // rsi
  unsigned int *i; // rdi
  __int64 v24; // rbx
  unsigned int *v25; // r15
  unsigned int *v26; // rbx
  unsigned int v27; // edx
  __int64 v28; // r14
  unsigned int v29; // ebx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // r9d
  __int64 v33; // r13
  unsigned int v34; // eax
  unsigned int v35; // edx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // r10
  __int64 v39; // r12
  unsigned int *v40; // r13
  __int64 v41; // rbp
  __int64 v42; // rbx
  __int64 v43; // r14
  int v44; // r15d
  int v45; // eax
  __int64 v46; // r14
  __int64 v48; // r15
  unsigned int *v49; // rbx
  __int64 v50; // r12
  int v51; // ebp
  int v52; // eax
  __int64 v53; // r14
  __int64 v54; // rbx
  int v55; // r9d
  unsigned int v56; // eax
  __m128i *v57; // rax
  __int64 v58; // r8
  __m128i *v59; // r15
  __m128i *v60; // rdx
  const __m128i *v61; // r12
  __m128i *v62; // r13
  __int64 v63; // rdx
  __m128i *v64; // rsi
  __m128i *v65; // rdx
  __m128i v66; // xmm0
  __int64 v67; // [rsp+8h] [rbp-80h]
  __int64 v68; // [rsp+8h] [rbp-80h]
  unsigned int v69; // [rsp+14h] [rbp-74h]
  unsigned int v70; // [rsp+14h] [rbp-74h]
  unsigned int v71; // [rsp+14h] [rbp-74h]
  __int64 v72; // [rsp+18h] [rbp-70h]
  __int64 v73; // [rsp+20h] [rbp-68h]
  __int64 v74; // [rsp+28h] [rbp-60h]
  unsigned __int64 v75; // [rsp+30h] [rbp-58h]
  _BYTE v76[72]; // [rsp+40h] [rbp-48h] BYREF

  sub_644D80(v76, "rename", 11);
  v3 = (unsigned int *)__dynamic_cast(
                         a2,
                         (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                         (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
                         0);
  if ( !v3 )
    __cxa_bad_cast();
  v4 = v3[16];
  v5 = v3;
  v6 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v3 + 1) + 40LL))(
                         *((_QWORD *)v3 + 1),
                         a1 + 8);
  v7 = v6;
  if ( v6 )
    v7 = (unsigned int *)__dynamic_cast(
                           v6,
                           (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                           (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
                           0);
  v74 = v7[16];
  v75 = v74 * v5[35];
  sub_5716E0((__int64)(v7 + 18), v75);
  v8 = *((_QWORD *)v7 + 11);
  v9 = *((_QWORD *)v5 + 11);
  v10 = v8 + v75;
  if ( v8 == v8 + v75 )
    goto LABEL_25;
  do
  {
    v11 = *(unsigned int **)(a1 + 24);
    if ( !v11 )
LABEL_67:
      BUG();
    v12 = 0;
    v13 = 1;
    while ( 1 )
    {
      v18 = *(v11 - 1);
      v19 = *((_QWORD *)v5 + 5);
      v20 = *((_QWORD *)v7 + 5);
      if ( v13 >= v18 )
        break;
      v14 = v13++;
      v15 = v11[v14];
      v16 = v11[v12++];
      v17 = (unsigned int *)(32 * v16 + v20);
      *(_QWORD *)(v8 + *v17) = *((_QWORD *)v17 + 2) & *(_QWORD *)(v8 + *v17)
                             | ((*(_QWORD *)(32 * v15 + v19 + 8)
                               & (*(_QWORD *)(v9 + *(unsigned int *)(32 * v15 + v19)) >> *(_DWORD *)(32 * v15 + v19 + 4))) << v17[1]);
      v11 = *(unsigned int **)(a1 + 24);
      if ( !v11 )
        goto LABEL_67;
    }
    v21 = (unsigned int *)(32LL * v11[v18 - 1] + v20);
    *(_QWORD *)(v8 + *v21) = *((_QWORD *)v21 + 2) & *(_QWORD *)(v8 + *v21)
                           | ((*(_QWORD *)(v19 + 32LL * *v11 + 8)
                             & (*(_QWORD *)(v9 + *(unsigned int *)(v19 + 32LL * *v11)) >> *(_DWORD *)(v19 + 32LL * *v11 + 4))) << v21[1]);
    v22 = *(unsigned int **)(a1 + 32);
    if ( v22 )
    {
      for ( i = &v22[*(v22 - 1)];
            i != v22;
            *(_QWORD *)(v8 + *v26) = *((_QWORD *)v26 + 2) & *(_QWORD *)(v8 + *v26)
                                   | ((*((_QWORD *)v25 + 1) & (*(_QWORD *)(v9 + *v25) >> v25[1])) << v26[1]) )
      {
        v24 = *v22++;
        v24 *= 32;
        v25 = (unsigned int *)(v24 + *((_QWORD *)v5 + 5));
        v26 = (unsigned int *)(*((_QWORD *)v7 + 5) + v24);
      }
    }
    v8 += v74;
    v9 += v4;
  }
  while ( v10 != v8 );
  v27 = v7[34];
  v28 = 0;
  do
  {
    v29 = 2 * v27;
    if ( 3 * v27 < 4 * (v7[35] + v7[36]) )
    {
      v71 = v27;
      v57 = (__m128i *)sub_186B270(16LL * v29);
      v58 = 16LL * v29;
      v59 = v57;
      if ( v29 )
      {
        v60 = &v57[2 * (v71 & 0x7FFFFFFF)];
        do
        {
          v57->m128i_i64[0] = 0;
          v57 += 2;
          v57[-1].m128i_i64[0] = 0;
        }
        while ( v57 != v60 );
      }
      v61 = *((const __m128i **)v7 + 16);
      v62 = (__m128i *)&v61[v7[34]];
      if ( v61 != v62 )
      {
        do
        {
          while ( v61->m128i_i32[1] != 2 )
          {
            if ( v62 == ++v61 )
              goto LABEL_52;
          }
          v63 = 16LL * (v61->m128i_i32[0] & (v29 - 1));
          v64 = &v59[(unsigned __int64)v63 / 0x10];
          if ( v58 == v63 )
          {
LABEL_57:
            if ( v59 == v64 )
            {
LABEL_64:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v65 = v59;
            while ( v65->m128i_i32[1] )
            {
              if ( v64 == ++v65 )
                goto LABEL_64;
            }
          }
          else
          {
            v65 = &v59[(unsigned __int64)v63 / 0x10];
            while ( v65->m128i_i32[1] )
            {
              if ( &v59[(unsigned __int64)v58 / 0x10] == ++v65 )
                goto LABEL_57;
            }
          }
          v66 = _mm_loadu_si128(v61++);
          *v65 = v66;
        }
        while ( v62 != v61 );
LABEL_52:
        v62 = *((__m128i **)v7 + 16);
      }
      if ( v62 )
        sub_186B220(v62);
      *((_QWORD *)v7 + 16) = v59;
      v7[34] = v29;
      v7[36] = 0;
    }
    v30 = sub_17E8B20(v28 + **((_QWORD **)v7 + 12), v7[26], 0);
    v31 = v7[34];
    v32 = v30;
    v33 = *((_QWORD *)v7 + 16);
    v34 = v31 - 1;
    v35 = v7[34];
    v31 *= 16;
    v36 = v33 + v31;
    v37 = 16LL * (v32 & v34);
    v38 = v33 + v37;
    if ( v37 == v31 )
    {
      v48 = 0;
      goto LABEL_27;
    }
    v73 = *((_QWORD *)v7 + 16);
    v39 = v33 + v37;
    v40 = v7;
    v69 = v7[34];
    v41 = v28;
    v42 = v36;
    v43 = 0;
    v72 = v38;
    v44 = v32;
    while ( 1 )
    {
      v45 = *(_DWORD *)(v39 + 4);
      if ( v45 == 2 )
      {
        if ( v44 == *(_DWORD *)v39 )
        {
          v67 = *(_QWORD *)(v39 + 8);
          if ( !memcmp(
                  (const void *)(v67 + **((_QWORD **)v40 + 14)),
                  (const void *)(**((_QWORD **)v40 + 14) + v41),
                  v40[30]) )
          {
            v46 = v41;
            v27 = v69;
            v7 = v40;
            if ( v46 != v67 )
              goto LABEL_36;
            goto LABEL_24;
          }
        }
        goto LABEL_19;
      }
      if ( !v45 )
        break;
      v43 = v39;
LABEL_19:
      v39 += 16;
      if ( v42 == v39 )
      {
        v32 = v44;
        v35 = v69;
        v48 = v43;
        v38 = v72;
        v28 = v41;
        v7 = v40;
        v33 = v73;
LABEL_27:
        if ( v33 == v38 )
        {
LABEL_56:
          sub_1872CE0("");
          sub_1873130(114, 461);
        }
        v49 = v7;
        v68 = v28;
        v50 = v38;
        v51 = v32;
        v70 = v35;
        while ( 1 )
        {
          v52 = *(_DWORD *)(v33 + 4);
          if ( v52 == 2 )
          {
            if ( v51 == *(_DWORD *)v33 )
            {
              v53 = *(_QWORD *)(v33 + 8);
              if ( !memcmp(
                      (const void *)(v53 + **((_QWORD **)v49 + 14)),
                      (const void *)(**((_QWORD **)v49 + 14) + v68),
                      v49[30]) )
              {
                v7 = v49;
                v54 = v53;
                v46 = v68;
                v27 = v70;
                if ( v68 != v54 )
                {
LABEL_36:
                  sub_1872CE0("");
                  sub_1873130(114, 1103);
                }
                goto LABEL_24;
              }
            }
          }
          else
          {
            if ( !v52 )
            {
              v55 = v51;
              v46 = v68;
              v27 = v70;
              v7 = v49;
              if ( v48 )
                goto LABEL_38;
              v48 = v33;
              goto LABEL_39;
            }
            v48 = v33;
          }
          v33 += 16;
          if ( v50 == v33 )
            goto LABEL_56;
        }
      }
    }
    v55 = v44;
    v48 = v43;
    v27 = v69;
    v46 = v41;
    v7 = v40;
    if ( v48 )
LABEL_38:
      --v7[36];
    else
      v48 = v39;
LABEL_39:
    *(_DWORD *)v48 = v55;
    v56 = v7[35];
    *(_QWORD *)(v48 + 8) = v46;
    *(_DWORD *)(v48 + 4) = 2;
    v7[35] = v56 + 1;
LABEL_24:
    v28 = v74 + v46;
  }
  while ( v75 != v28 );
LABEL_25:
  sub_644EE0(v76);
  return v7;
}

