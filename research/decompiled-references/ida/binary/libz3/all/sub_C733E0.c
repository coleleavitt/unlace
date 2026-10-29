__int64 __fastcall sub_C733E0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 *a4, _BYTE *a5, int a6)
{
  _QWORD *v7; // rdx
  __int64 v8; // r12
  __int64 *v9; // r13
  __int64 *v10; // rbp
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // r15d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // r13
  __int64 *v21; // rbp
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r14
  unsigned int v26; // eax
  unsigned int v27; // r15d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r13
  __int64 v32; // rbp
  __int64 v33; // rax
  _QWORD *v34; // rcx
  _QWORD *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  _QWORD *v39; // rcx
  unsigned __int64 v40; // r14
  unsigned int v41; // eax
  __int64 v42; // rdx
  int v43; // eax
  _QWORD *v44; // rdx
  __int64 result; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  unsigned int v48; // r12d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  unsigned int v53; // r12d
  size_t v54; // rdi
  __int64 v55; // rax
  __int64 *v56; // rbp
  __int64 *v57; // r15
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 *v60; // rdi
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rdx
  __m128i v64; // xmm0
  unsigned __int64 v65; // rdx
  __int64 v66; // rdi
  __int64 *v67; // r12
  void *v68; // rdi
  __int64 *v69; // rax
  unsigned __int64 v70; // rdx
  __int64 v71; // r8
  _QWORD *v72; // rax
  char **exception; // rbp
  __int64 v74; // rdx
  unsigned int v75; // [rsp+Ch] [rbp-5Ch]
  __int64 v76[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = (_QWORD *)a1[101];
  if ( v7 )
    *((_DWORD *)v7 - 1) = 0;
  v8 = a2;
  v9 = *(__int64 **)(a1[83] + 8LL * a2);
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 != v10 )
    {
      while ( 1 )
      {
        v13 = sub_C6FBE0(a1, *v9, (int)v7, (int)a4, a5, a6);
        v7 = (_QWORD *)a1[101];
        v14 = v13;
        if ( !v7 )
          break;
        v15 = *((_DWORD *)v7 - 1);
        if ( v15 == *((_DWORD *)v7 - 2) )
        {
          v16 = (3 * v15 + 1) >> 1;
          v17 = 8 * v16 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
            goto LABEL_70;
          ++v9;
          v18 = (unsigned int *)sub_186B300(v7 - 1, v17);
          v19 = v18[1];
          v7 = v18 + 2;
          *v18 = v16;
          a1[101] = v18 + 2;
          LODWORD(v18) = v19;
          a4 = &v7[v19];
          *a4 = v14;
          *((_DWORD *)v7 - 1) = (_DWORD)v18 + 1;
          if ( v10 == v9 )
            goto LABEL_13;
        }
        else
        {
          v11 = v15;
          v12 = v15 + 1;
          a4 = &v7[v11];
LABEL_7:
          ++v9;
          *a4 = v14;
          *((_DWORD *)v7 - 1) = v12;
          if ( v10 == v9 )
            goto LABEL_13;
        }
      }
      v47 = (_QWORD *)sub_186B270(0x18u);
      v7 = v47 + 1;
      *v47 = 2;
      v12 = 1;
      a1[101] = v7;
      a4 = v7;
      goto LABEL_7;
    }
  }
LABEL_13:
  v20 = *(__int64 **)(a1[84] + 8 * v8);
  if ( !v20 || (v21 = &v20[*((unsigned int *)v20 - 1)], v20 == v21) )
  {
    v31 = a1[89];
    v32 = *(_QWORD *)(*(_QWORD *)(a1[78] + 8 * v8) + 16LL);
    if ( v32 )
      ++*(_DWORD *)(v32 + 8);
    if ( v7 )
      goto LABEL_25;
    goto LABEL_29;
  }
  do
  {
    while ( 1 )
    {
      v24 = sub_C6FBE0(a1, *v20, (int)v7, (int)a4, a5, a6);
      v7 = (_QWORD *)a1[101];
      v25 = v24;
      if ( !v7 )
      {
        v46 = (_QWORD *)sub_186B270(0x18u);
        v7 = v46 + 1;
        *v46 = 2;
        v23 = 1;
        a1[101] = v7;
        a4 = v7;
        goto LABEL_17;
      }
      v26 = *((_DWORD *)v7 - 1);
      if ( v26 == *((_DWORD *)v7 - 2) )
        break;
      v22 = v26;
      v23 = v26 + 1;
      a4 = &v7[v22];
LABEL_17:
      ++v20;
      *a4 = v25;
      *((_DWORD *)v7 - 1) = v23;
      if ( v21 == v20 )
        goto LABEL_23;
    }
    v27 = (3 * v26 + 1) >> 1;
    v28 = 8 * v27 + 8;
    if ( 8 * v26 + 8 >= (unsigned int)v28 || v26 >= v27 )
      goto LABEL_70;
    ++v20;
    v29 = (unsigned int *)sub_186B300(v7 - 1, v28);
    v30 = v29[1];
    v7 = v29 + 2;
    *v29 = v27;
    a1[101] = v29 + 2;
    LODWORD(v29) = v30;
    a4 = &v7[v30];
    *a4 = v25;
    *((_DWORD *)v7 - 1) = (_DWORD)v29 + 1;
  }
  while ( v21 != v20 );
LABEL_23:
  v31 = a1[89];
  v32 = *(_QWORD *)(*(_QWORD *)(a1[78] + 8 * v8) + 16LL);
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
LABEL_25:
  v33 = *((unsigned int *)v7 - 1);
  v34 = &v7[v33];
  if ( (_DWORD)v33 )
  {
    do
    {
      if ( *v7 )
        ++*(_DWORD *)(*v7 + 8LL);
      ++v7;
    }
    while ( v7 != v34 );
  }
LABEL_29:
  v35 = *(_QWORD **)(v31 + 40);
  if ( v35 )
  {
    v36 = *((_DWORD *)v35 - 1);
    if ( v36 != *((_DWORD *)v35 - 2) )
    {
      v37 = v36;
      v38 = v36 + 1;
      v39 = &v35[v37];
      goto LABEL_32;
    }
    v48 = (3 * v36 + 1) >> 1;
    v49 = 8 * v48 + 8;
    if ( 8 * v36 + 8 < (unsigned int)v49 && v36 < v48 )
    {
      v50 = (unsigned int *)sub_186B300(v35 - 1, v49);
      v40 = *(_QWORD *)(v31 + 48);
      v51 = v50[1];
      *(_QWORD *)(v31 + 40) = v50 + 2;
      *v50 = v48;
      *(_QWORD *)&v50[2 * v51 + 2] = v32;
      v50[1] = v51 + 1;
      if ( !v40 )
        goto LABEL_41;
LABEL_33:
      v41 = *(_DWORD *)(v40 - 4);
      if ( v41 != *(_DWORD *)(v40 - 8) )
      {
        v42 = v41;
        v43 = v41 + 1;
        v44 = (_QWORD *)(v40 + 8 * v42);
        goto LABEL_35;
      }
      v53 = (3 * v41 + 1) >> 1;
      v54 = 8 * v53 + 8;
      v75 = v53;
      if ( 8 * v41 + 8 < (unsigned int)v54 && v41 < v53 )
      {
        v55 = sub_186B270(v54);
        v56 = *(__int64 **)(v31 + 48);
        v57 = (__int64 *)v55;
        v40 = v55 + 8;
        if ( v56 )
        {
          v58 = *((unsigned int *)v56 - 1);
          *(_DWORD *)(v55 + 4) = v58;
          v59 = 8 * v58;
          v60 = &v56[v58];
          if ( v60 != v56 )
          {
            v61 = v59 - 8;
            if ( (unsigned __int64)(v59 - 8) <= 8 || v40 < (unsigned __int64)(v56 + 2) && v56 < v57 + 3 )
            {
              v69 = v56;
              v70 = v40;
              do
              {
                v71 = *v69;
                *v69++ = 0;
                v70 += 8LL;
                *(_QWORD *)(v70 - 8) = v71;
              }
              while ( v60 != v69 );
            }
            else
            {
              v62 = 0;
              v63 = (v61 >> 3) + 1;
              do
              {
                v64 = _mm_loadu_si128((const __m128i *)&v56[v62]);
                *(_OWORD *)&v56[v62] = 0;
                *(__m128i *)&v57[v62 + 1] = v64;
                v62 += 2LL;
              }
              while ( 2 * (v63 >> 1) != v62 );
              if ( (v63 & 1) != 0 )
              {
                v65 = v63 & 0xFFFFFFFFFFFFFFFELL;
                v66 = v56[v65];
                v56[v65] = 0;
                v57[v65 + 1] = v66;
              }
            }
          }
          v67 = &v56[v58];
          if ( (_DWORD)v58 )
          {
            do
            {
              while ( *v56 )
              {
                v68 = (void *)(*v56++ - 8);
                sub_186B220(v68);
                if ( v67 == v56 )
                  goto LABEL_56;
              }
              ++v56;
            }
            while ( v56 != v67 );
LABEL_56:
            v56 = *(__int64 **)(v31 + 48);
          }
          sub_186B220(v56 - 1);
          v44 = (_QWORD *)(v40 + 8LL * *((unsigned int *)v57 + 1));
          v43 = *((_DWORD *)v57 + 1) + 1;
        }
        else
        {
          *(_DWORD *)(v55 + 4) = 0;
          v44 = (_QWORD *)(v55 + 8);
          v43 = 1;
        }
        *(_QWORD *)(v31 + 48) = v40;
        *(_DWORD *)v57 = v75;
        goto LABEL_35;
      }
    }
LABEL_70:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_161886(v76, "Overflow encountered when expanding vector", v74);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v76);
    sub_233E40((__int64)v76);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v72 = (_QWORD *)sub_186B270(0x18u);
  v35 = v72 + 1;
  *v72 = 2;
  v38 = 1;
  *(_QWORD *)(v31 + 40) = v35;
  v39 = v35;
LABEL_32:
  v40 = *(_QWORD *)(v31 + 48);
  *v39 = v32;
  *((_DWORD *)v35 - 1) = v38;
  if ( v40 )
    goto LABEL_33;
LABEL_41:
  v52 = (_QWORD *)sub_186B270(0x18u);
  v40 = (unsigned __int64)(v52 + 1);
  *v52 = 2;
  v43 = 1;
  *(_QWORD *)(v31 + 48) = v40;
  v44 = (_QWORD *)v40;
LABEL_35:
  *v44 = 0;
  *(_DWORD *)(v40 - 4) = v43;
  result = a1[101];
  *v44 = result;
  a1[101] = 0;
  return result;
}

