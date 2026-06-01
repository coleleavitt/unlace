__int64 __fastcall sub_DAA440(_QWORD *a1, int *a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  int v7; // r12d
  _QWORD *v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // r12d
  unsigned int v11; // eax
  unsigned int v12; // r8d
  size_t v13; // rdi
  unsigned int v14; // r15d
  unsigned int *v15; // rax
  __int64 v16; // rdi
  unsigned int *v17; // rcx
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r12
  __m128i *v22; // rcx
  __int64 v23; // r12
  __m128i *v24; // rax
  unsigned __int64 v25; // rdx
  __m128i v26; // xmm0
  __int64 v27; // rdi
  __m128i v28; // xmm0
  __m128i *v29; // rsi
  _DWORD *v30; // rdx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  __int64 v33; // rsi
  unsigned int v34; // eax
  int **v35; // rsi
  _QWORD *v36; // r12
  unsigned int v37; // eax
  __int64 v38; // rdx
  __int64 result; // rax
  _QWORD *v40; // rdx
  unsigned int v41; // ebp
  size_t v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdi
  _DWORD *v45; // r15
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rbp
  unsigned int v50; // eax
  __int64 v51; // rdx
  __int64 *v52; // rdx
  unsigned int v53; // r12d
  unsigned int v54; // ecx
  unsigned int *v55; // rax
  unsigned int v56; // r12d
  unsigned int v57; // eax
  unsigned int *v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rax
  unsigned int v61; // r14d
  unsigned int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rcx
  _DWORD *v65; // r13
  __int64 v66; // rsi
  unsigned __int64 v67; // rax
  __int64 v68; // rsi
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // r12
  char **exception; // rbp
  unsigned int *v73; // [rsp+8h] [rbp-80h]
  unsigned int v74; // [rsp+10h] [rbp-78h]
  unsigned int v75; // [rsp+14h] [rbp-74h]
  __m128i v76; // [rsp+18h] [rbp-70h] BYREF
  __int64 v77[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = a3 & 0xFFFFFFFFFFFFFFFELL;
  if ( (unsigned int)a2[1] <= 1 )
    goto LABEL_26;
  v7 = *a2;
  v8 = (_QWORD *)a1[3];
  v74 = *a2 - 0x7FFFFFFF;
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 - 1);
    v75 = v9;
    if ( v7 - 0x7FFFFFFF >= v9 )
    {
      v10 = v7 - 2147483646;
      if ( v9 < v10 )
      {
        v76.m128i_i64[0] = qword_1C7EDC0;
        goto LABEL_6;
      }
      *((_DWORD *)v8 - 1) = v10;
    }
    goto LABEL_21;
  }
  v10 = v7 - 2147483646;
  if ( !v10 )
    goto LABEL_21;
  v75 = 0;
  v76.m128i_i64[0] = qword_1C7EDC0;
  v60 = (_QWORD *)sub_186B270(0x18u);
  v8 = v60 + 1;
  *v60 = 2;
  a1[3] = v60 + 1;
LABEL_6:
  while ( 1 )
  {
    v11 = *((_DWORD *)v8 - 2);
    if ( v11 >= v10 )
      break;
    while ( 1 )
    {
      v12 = (3 * v11 + 1) >> 1;
      v13 = 8 * v12 + 8;
      v14 = v12;
      if ( 8 * v11 + 8 >= (unsigned int)v13 || v11 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v77, "Overflow encountered when expanding vector");
LABEL_68:
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v77);
        sub_233E40((__int64)v77);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v15 = (unsigned int *)sub_186B270(v13);
      v16 = a1[3];
      v17 = v15;
      v8 = v15 + 2;
      if ( !v16 )
        break;
      v18 = *(unsigned int *)(v16 - 4);
      v15[1] = v18;
      v19 = 0;
      v20 = 8 * v18;
      if ( v20 )
      {
        do
        {
          *(_QWORD *)&v17[v19 / 4 + 2] = *(_QWORD *)(v16 + v19);
          v19 += 8LL;
        }
        while ( v19 != v20 );
      }
      v73 = v17;
      sub_186B220((void *)(v16 - 8));
      a1[3] = v8;
      *v73 = v14;
      v11 = *((_DWORD *)v8 - 2);
      if ( v11 >= v10 )
        goto LABEL_13;
    }
    v15[1] = 0;
    a1[3] = v8;
    *v15 = v14;
  }
LABEL_13:
  *((_DWORD *)v8 - 1) = v10;
  v21 = 8LL * v10;
  v22 = (__m128i *)&v8[v75];
  if ( 8LL * v75 == v21 )
    goto LABEL_21;
  v23 = v21 - 8LL * v75;
  v24 = (__m128i *)&v8[v75];
  v25 = ((unsigned __int64)(v23 - 8) >> 3) + 1;
  if ( v23 != 8 )
  {
    v26 = _mm_loadl_epi64(&v76);
    v27 = v25 >> 1;
    v28 = _mm_unpacklo_epi64(v26, v26);
    v29 = &v22[v27];
    if ( ((v27 * 16) & 0x10) == 0 || (v24 = v22 + 1, *v22 = v28, v29 != &v22[1]) )
    {
      do
      {
        *v24 = v28;
        v24 += 2;
        v24[-1] = v28;
      }
      while ( v29 != v24 );
    }
    if ( (v25 & 1) == 0 )
      goto LABEL_21;
    v22 = (__m128i *)((char *)v22 + 8 * (v25 & 0xFFFFFFFFFFFFFFFELL));
  }
  v22->m128i_i64[0] = v76.m128i_i64[0];
LABEL_21:
  v30 = (_DWORD *)a1[4];
  v8[v74] = a3;
  if ( v30 )
  {
    v31 = *(v30 - 1);
    v32 = *(v30 - 2);
    if ( v31 == v32 )
    {
      v56 = (3 * v32 + 1) >> 1;
      v57 = 8 * v56 + 8;
      if ( 8 * v32 + 8 >= v57 || v32 >= v56 )
        goto LABEL_67;
      v58 = (unsigned int *)sub_186B300(v30 - 2, v57);
      v59 = v58[1];
      v30 = v58 + 2;
      *v58 = v56;
      a1[4] = v58 + 2;
      LODWORD(v58) = v59;
      v35 = (int **)&v30[2 * v59];
      v32 = v56;
      v34 = (_DWORD)v58 + 1;
    }
    else
    {
      v33 = v31;
      v34 = v31 + 1;
      v35 = (int **)&v30[2 * v33];
    }
    *v35 = a2;
    v3 = a3 & 0xFFFFFFFFFFFFFFFELL;
    *(v30 - 1) = v34;
    if ( v32 == v34 )
    {
      v53 = (3 * v34 + 1) >> 1;
      v54 = 8 * v53 + 8;
      if ( 8 * v34 + 8 >= v54 || v34 >= v53 )
        goto LABEL_67;
      v55 = (unsigned int *)sub_186B300(v30 - 2, v54);
      v30 = v55 + 2;
      *v55 = v53;
      v34 = v55[1];
      a1[4] = v30;
    }
  }
  else
  {
    v70 = (_QWORD *)sub_186B270(0x18u);
    v3 = a3 & 0xFFFFFFFFFFFFFFFELL;
    v30 = v70 + 1;
    v70[1] = a2;
    *v70 = 0x100000002LL;
    v34 = 1;
    a1[4] = v30;
  }
  *(_QWORD *)&v30[2 * v34] = v3;
  *(v30 - 1) = v34 + 1;
  ++a2[1];
  ++*(_DWORD *)(v3 + 4);
LABEL_26:
  v36 = (_QWORD *)a1[2];
  if ( a2 != (int *)v3 )
  {
    if ( !v36 )
    {
      v69 = (_QWORD *)sub_186B270(0x18u);
      v36 = v69 + 1;
      *v69 = 2;
      result = 1;
      a1[2] = v36;
      v40 = v36;
LABEL_30:
      *v40 = a3;
      *((_DWORD *)v36 - 1) = result;
      if ( a3 )
        ++*(_DWORD *)(v3 + 4);
      return result;
    }
    v37 = *((_DWORD *)v36 - 1);
    if ( v37 != *((_DWORD *)v36 - 2) )
    {
      v38 = v37;
      result = v37 + 1;
      v40 = &v36[v38];
      goto LABEL_30;
    }
    v41 = (3 * v37 + 1) >> 1;
    v42 = 8 * v41 + 8;
    if ( 8 * v37 + 8 < (unsigned int)v42 && v37 < v41 )
    {
      v43 = sub_186B270(v42);
      v44 = a1[2];
      v45 = (_DWORD *)v43;
      v36 = (_QWORD *)(v43 + 8);
      if ( v44 )
      {
        v46 = *(unsigned int *)(v44 - 4);
        *(_DWORD *)(v43 + 4) = v46;
        v47 = 0;
        v48 = 8 * v46;
        if ( v48 )
        {
          do
          {
            *(_QWORD *)&v45[v47 / 4 + 2] = *(_QWORD *)(v44 + v47);
            v47 += 8LL;
          }
          while ( v48 != v47 );
        }
        sub_186B220((void *)(v44 - 8));
        v40 = &v36[v45[1]];
        result = (unsigned int)(v45[1] + 1);
      }
      else
      {
        *(_DWORD *)(v43 + 4) = 0;
        v40 = (_QWORD *)(v43 + 8);
        result = 1;
      }
      a1[2] = v36;
      *v45 = v41;
      goto LABEL_30;
    }
LABEL_67:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v77, "Overflow encountered when expanding vector");
    goto LABEL_68;
  }
  v49 = qword_1C7EDC0;
  if ( v36 )
  {
    v50 = *((_DWORD *)v36 - 1);
    if ( v50 == *((_DWORD *)v36 - 2) )
    {
      v61 = (3 * v50 + 1) >> 1;
      v62 = 8 * v61 + 8;
      if ( 8 * v50 + 8 >= v62 || v50 >= v61 )
        goto LABEL_67;
      v63 = sub_186B270(v62);
      v64 = a1[2];
      v65 = (_DWORD *)v63;
      v36 = (_QWORD *)(v63 + 8);
      if ( v64 )
      {
        v66 = *(unsigned int *)(v64 - 4);
        *(_DWORD *)(v63 + 4) = v66;
        v67 = 0;
        v68 = 8 * v66;
        if ( v68 )
        {
          do
          {
            *(_QWORD *)&v65[v67 / 4 + 2] = *(_QWORD *)(v64 + v67);
            v67 += 8LL;
          }
          while ( v68 != v67 );
        }
        sub_186B220((void *)(v64 - 8));
        v52 = &v36[v65[1]];
        result = (unsigned int)(v65[1] + 1);
      }
      else
      {
        *(_DWORD *)(v63 + 4) = 0;
        v52 = (__int64 *)(v63 + 8);
        result = 1;
      }
      a1[2] = v36;
      *v65 = v61;
    }
    else
    {
      v51 = v50;
      result = v50 + 1;
      v52 = &v36[v51];
    }
  }
  else
  {
    v71 = (_QWORD *)sub_186B270(0x18u);
    *v71 = 2;
    result = 1;
    v36 = v71 + 1;
    a1[2] = v36;
    v52 = v36;
  }
  *v52 = v49;
  *((_DWORD *)v36 - 1) = result;
  if ( v49 )
    ++*(_DWORD *)((v49 & 0xFFFFFFFFFFFFFFFELL) + 4);
  return result;
}

