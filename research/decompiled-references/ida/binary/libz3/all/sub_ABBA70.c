__int64 __fastcall sub_ABBA70(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  __int64 v3; // rdx
  char **exception; // rbp
  __int64 v5; // rdx
  char **v6; // rbp
  __int64 v7; // rdx
  char **v8; // rbp
  __int64 v9; // rdx
  _QWORD *v12; // rdi
  unsigned int v13; // r12d
  _QWORD *v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // ebp
  unsigned int **v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rbp
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  _QWORD *v29; // rcx
  unsigned __int64 v30; // r15
  unsigned int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  _QWORD *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // r15
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  _QWORD *v41; // rcx
  __int64 v42; // rdi
  unsigned int v44; // r14d
  size_t v45; // rdi
  __int64 v46; // rax
  __int64 *v47; // rbp
  __int64 *v48; // r14
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 *v51; // r8
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __m128i v55; // xmm0
  unsigned __int64 v56; // rcx
  __int64 v57; // r8
  __int64 *v58; // rax
  void *v59; // rdi
  unsigned int v60; // r14d
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rcx
  unsigned int v64; // ebp
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rdx
  unsigned int v68; // r14d
  size_t v69; // rdi
  __int64 v70; // rax
  __int64 *v71; // rbp
  __int64 *v72; // r14
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 *v75; // r8
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rcx
  __m128i v79; // xmm0
  unsigned __int64 v80; // rcx
  __int64 *v81; // rax
  __int64 v82; // r8
  __int64 *v83; // rax
  void *v84; // rdi
  __int64 *v85; // rax
  unsigned __int64 v86; // rcx
  __int64 v87; // r9
  __int64 *v88; // rax
  unsigned __int64 v89; // rcx
  __int64 v90; // r9
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  __int64 *v95; // [rsp+0h] [rbp-68h]
  __int64 *v96; // [rsp+0h] [rbp-68h]
  unsigned int v97; // [rsp+Ch] [rbp-5Ch]
  unsigned int v98; // [rsp+Ch] [rbp-5Ch]
  __int64 v99[11]; // [rsp+10h] [rbp-58h] BYREF

  v12 = *(_QWORD **)(a1 + 32);
  if ( v12 )
  {
    v13 = *((_DWORD *)v12 - 1);
    if ( v13 == *((_DWORD *)v12 - 2) )
    {
      v64 = (3 * v13 + 1) >> 1;
      v65 = 8 * v64 + 8;
      if ( 8 * v13 + 8 >= (unsigned int)v65 || v13 >= v64 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_139F3A(v99, "Overflow encountered when expanding vector", v5);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v99);
        sub_233E40((__int64)v99);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v66 = (unsigned int *)sub_186B300(v12 - 1, v65);
      v67 = v66[1];
      v12 = v66 + 2;
      *v66 = v64;
      *(_QWORD *)(a1 + 32) = v66 + 2;
      LODWORD(v66) = v67;
      v14 = &v12[v67];
      v15 = (_DWORD)v66 + 1;
    }
    else
    {
      v14 = &v12[v13];
      v15 = v13 + 1;
    }
  }
  else
  {
    v13 = 0;
    v91 = (_QWORD *)sub_186B270(0x18u);
    v12 = v91 + 1;
    *v91 = 2;
    v15 = 1;
    *(_QWORD *)(a1 + 32) = v12;
    v14 = v12;
  }
  *v14 = a2;
  *((_DWORD *)v12 - 1) = v15;
  v16 = *(_QWORD *)(a1 + 464);
  if ( !v16 )
  {
    v18 = (unsigned int **)(a1 + 464);
    v17 = 0;
    goto LABEL_23;
  }
  v17 = *(_DWORD *)(v16 - 4);
  v18 = (unsigned int **)(a1 + 464);
  v19 = v17;
  if ( v17 == *(_DWORD *)(v16 - 8) )
  {
LABEL_23:
    sub_2FD3F0(v18);
    v16 = *(_QWORD *)(a1 + 464);
    v19 = *(unsigned int *)(v16 - 4);
  }
  *(_DWORD *)(v16 + 4 * v19) = v17;
  ++*(_DWORD *)(v16 - 4);
  v20 = *(_QWORD *)(a1 + 472);
  if ( !v20 || (v21 = *(unsigned int *)(v20 - 4), (_DWORD)v21 == *(_DWORD *)(v20 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 472));
    v20 = *(_QWORD *)(a1 + 472);
    v21 = *(unsigned int *)(v20 - 4);
  }
  *(_DWORD *)(v20 + 4 * v21) = 1;
  ++*(_DWORD *)(v20 - 4);
  v22 = *(_QWORD *)(a1 + 480);
  if ( !v22 || (v23 = *(unsigned int *)(v22 - 4), (_DWORD)v23 == *(_DWORD *)(v22 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 480));
    v22 = *(_QWORD *)(a1 + 480);
    v23 = *(unsigned int *)(v22 - 4);
  }
  *(_DWORD *)(v22 + 4 * v23) = v17;
  v24 = *(_QWORD **)(a1 + 456);
  ++*(_DWORD *)(v22 - 4);
  v25 = (_QWORD *)*v24;
  if ( *v24 )
  {
    v26 = *((_DWORD *)v25 - 1);
    if ( v26 == *((_DWORD *)v25 - 2) )
    {
      v60 = (3 * v26 + 1) >> 1;
      v61 = 8 * v60 + 8;
      if ( 8 * v26 + 8 >= (unsigned int)v61 || v26 >= v60 )
      {
        v8 = (char **)__cxa_allocate_exception(0x28u);
        sub_139F3A(v99, "Overflow encountered when expanding vector", v9);
        *v8 = (char *)off_1C63128;
        sub_2333C0(v8 + 1, v99);
        sub_233E40((__int64)v99);
        __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v62 = (unsigned int *)sub_186B300(v25 - 1, v61);
      v63 = v62[1];
      v25 = v62 + 2;
      *v24 = v62 + 2;
      *v62 = v60;
      LODWORD(v62) = v63;
      v29 = &v25[v63];
      v28 = (_DWORD)v62 + 1;
    }
    else
    {
      v27 = v26;
      v28 = v26 + 1;
      v29 = &v25[v27];
    }
  }
  else
  {
    v92 = (_QWORD *)sub_186B270(0x18u);
    v25 = v92 + 1;
    *v92 = 2;
    v28 = 1;
    *v24 = v25;
    v29 = v25;
  }
  *v29 = a1 + 488;
  v30 = *(_QWORD *)(a1 + 504);
  *((_DWORD *)v25 - 1) = v28;
  if ( v30 )
  {
    v31 = *(_DWORD *)(v30 - 4);
    if ( v31 == *(_DWORD *)(v30 - 8) )
    {
      v44 = (3 * v31 + 1) >> 1;
      v45 = 8 * v44 + 8;
      v97 = v44;
      if ( 8 * v31 + 8 >= (unsigned int)v45 || v31 >= v44 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_139F3A(v99, "Overflow encountered when expanding vector", v3);
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v99);
        sub_233E40((__int64)v99);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v46 = sub_186B270(v45);
      v47 = *(__int64 **)(a1 + 504);
      v48 = (__int64 *)v46;
      v30 = v46 + 8;
      if ( v47 )
      {
        v49 = *((unsigned int *)v47 - 1);
        *(_DWORD *)(v46 + 4) = v49;
        v50 = 8 * v49;
        v51 = &v47[v49];
        if ( v51 != v47 )
        {
          v52 = v50 - 8;
          if ( (unsigned __int64)(v50 - 8) <= 8 || v47 < v48 + 3 && v30 < (unsigned __int64)(v47 + 2) )
          {
            v85 = v47;
            v86 = v30;
            do
            {
              v87 = *v85;
              *v85++ = 0;
              v86 += 8LL;
              *(_QWORD *)(v86 - 8) = v87;
            }
            while ( v51 != v85 );
          }
          else
          {
            v53 = 0;
            v54 = (v52 >> 3) + 1;
            do
            {
              v55 = _mm_loadu_si128((const __m128i *)&v47[v53]);
              *(_OWORD *)&v47[v53] = 0;
              *(__m128i *)&v48[v53 + 1] = v55;
              v53 += 2LL;
            }
            while ( 2 * (v54 >> 1) != v53 );
            if ( (v54 & 1) != 0 )
            {
              v56 = v54 & 0xFFFFFFFFFFFFFFFELL;
              v57 = v47[v56];
              v47[v56] = 0;
              v48[v56 + 1] = v57;
            }
          }
        }
        v58 = &v47[v49];
        if ( (_DWORD)v49 )
        {
          do
          {
            while ( *v47 )
            {
              v59 = (void *)(*v47 - 8);
              v95 = v58;
              ++v47;
              sub_186B220(v59);
              v58 = v95;
              if ( v47 == v95 )
                goto LABEL_41;
            }
            ++v47;
          }
          while ( v47 != v58 );
LABEL_41:
          v47 = *(__int64 **)(a1 + 504);
        }
        sub_186B220(v47 - 1);
        v34 = (_QWORD *)(v30 + 8LL * *((unsigned int *)v48 + 1));
        v33 = *((_DWORD *)v48 + 1) + 1;
      }
      else
      {
        *(_DWORD *)(v46 + 4) = 0;
        v34 = (_QWORD *)(v46 + 8);
        v33 = 1;
      }
      *(_QWORD *)(a1 + 504) = v30;
      *(_DWORD *)v48 = v97;
    }
    else
    {
      v32 = v31;
      v33 = v31 + 1;
      v34 = (_QWORD *)(v30 + 8 * v32);
    }
  }
  else
  {
    v93 = (_QWORD *)sub_186B270(0x18u);
    v30 = (unsigned __int64)(v93 + 1);
    *v93 = 2;
    v33 = 1;
    *(_QWORD *)(a1 + 504) = v30;
    v34 = (_QWORD *)v30;
  }
  *v34 = 0;
  *(_DWORD *)(v30 - 4) = v33;
  v35 = *(_QWORD *)(a1 + 520);
  if ( !v35 || (v36 = *(unsigned int *)(v35 - 4), (_DWORD)v36 == *(_DWORD *)(v35 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 520));
    v35 = *(_QWORD *)(a1 + 520);
    v36 = *(unsigned int *)(v35 - 4);
  }
  v37 = *(_QWORD *)(a1 + 528);
  *(_DWORD *)(v35 + 4 * v36) = 0;
  ++*(_DWORD *)(v35 - 4);
  if ( v37 )
  {
    v38 = *(_DWORD *)(v37 - 4);
    if ( v38 == *(_DWORD *)(v37 - 8) )
    {
      v68 = (3 * v38 + 1) >> 1;
      v69 = 8 * v68 + 8;
      v98 = v68;
      if ( 8 * v38 + 8 >= (unsigned int)v69 || v38 >= v68 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_139F3A(v99, "Overflow encountered when expanding vector", v7);
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v99);
        sub_233E40((__int64)v99);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v70 = sub_186B270(v69);
      v71 = *(__int64 **)(a1 + 528);
      v72 = (__int64 *)v70;
      v37 = v70 + 8;
      if ( v71 )
      {
        v73 = *((unsigned int *)v71 - 1);
        *(_DWORD *)(v70 + 4) = v73;
        v74 = 8 * v73;
        v75 = &v71[v73];
        if ( v75 != v71 )
        {
          v76 = v74 - 8;
          if ( (unsigned __int64)(v74 - 8) <= 8 || v37 < (unsigned __int64)(v71 + 2) && v71 < v72 + 3 )
          {
            v88 = v71;
            v89 = v37;
            do
            {
              v90 = *v88;
              *v88++ = 0;
              v89 += 8LL;
              *(_QWORD *)(v89 - 8) = v90;
            }
            while ( v75 != v88 );
          }
          else
          {
            v77 = 0;
            v78 = (v76 >> 3) + 1;
            do
            {
              v79 = _mm_loadu_si128((const __m128i *)&v71[v77]);
              *(_OWORD *)&v71[v77] = 0;
              *(__m128i *)&v72[v77 + 1] = v79;
              v77 += 2LL;
            }
            while ( v77 != 2 * (v78 >> 1) );
            if ( (v78 & 1) != 0 )
            {
              v80 = v78 & 0xFFFFFFFFFFFFFFFELL;
              v81 = &v71[v80];
              v82 = *v81;
              *v81 = 0;
              *(_QWORD *)(v37 + 8 * v80) = v82;
            }
          }
        }
        v83 = &v71[v73];
        if ( (_DWORD)v73 )
        {
          do
          {
            while ( *v71 )
            {
              v84 = (void *)(*v71 - 8);
              v96 = v83;
              ++v71;
              sub_186B220(v84);
              v83 = v96;
              if ( v71 == v96 )
                goto LABEL_66;
            }
            ++v71;
          }
          while ( v71 != v83 );
LABEL_66:
          v71 = *(__int64 **)(a1 + 528);
        }
        sub_186B220(v71 - 1);
        v41 = (_QWORD *)(v37 + 8LL * *((unsigned int *)v72 + 1));
        v40 = *((_DWORD *)v72 + 1) + 1;
      }
      else
      {
        *(_DWORD *)(v70 + 4) = 0;
        v41 = (_QWORD *)(v70 + 8);
        v40 = 1;
      }
      *(_QWORD *)(a1 + 528) = v37;
      *(_DWORD *)v72 = v98;
    }
    else
    {
      v39 = v38;
      v40 = v38 + 1;
      v41 = (_QWORD *)(v37 + 8 * v39);
    }
  }
  else
  {
    v94 = (_QWORD *)sub_186B270(0x18u);
    v37 = (unsigned __int64)(v94 + 1);
    *v94 = 2;
    v40 = 1;
    *(_QWORD *)(a1 + 528) = v37;
    v41 = (_QWORD *)v37;
  }
  *v41 = 0;
  v42 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(v37 - 4) = v40;
  sub_B66EF0(v42, a2, a1, v13);
  return v13;
}

