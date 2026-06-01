__int64 __fastcall sub_AFBF00(_QWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  _DWORD *v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  _QWORD *v11; // rcx
  unsigned __int64 v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  _QWORD *v16; // rdx
  _QWORD *v17; // rdi
  __int64 v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  _BYTE *v22; // rdi
  _QWORD *v23; // rdi
  __int64 v24; // rax
  _DWORD *v25; // rax
  _QWORD *v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // ebx
  size_t v29; // rsi
  unsigned int *v30; // rax
  _DWORD *v31; // rdi
  __int64 v32; // rax
  _QWORD *v33; // rax
  unsigned int v34; // ebx
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rax
  unsigned int v38; // ebx
  size_t v39; // rsi
  unsigned int *v40; // rax
  _DWORD *v41; // rdi
  __int64 v42; // rax
  unsigned int v43; // ebx
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rax
  unsigned int v47; // r13d
  size_t v48; // rdi
  __int64 v49; // rax
  __int64 *v50; // rbx
  __int64 *v51; // r15
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 *v54; // r8
  unsigned __int64 v55; // rdx
  __int64 *v56; // rdi
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rdx
  __m128i v59; // xmm0
  unsigned __int64 v60; // rdx
  __int64 v61; // rdi
  __int64 *v62; // rbp
  void *v63; // rdi
  unsigned int v64; // r13d
  size_t v65; // rdi
  __int64 v66; // rax
  __int64 *v67; // rbx
  __int64 *v68; // rbp
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 *v71; // r9
  unsigned __int64 v72; // rcx
  __int64 *v73; // r8
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rcx
  __m128i v76; // xmm0
  unsigned __int64 v77; // rcx
  __int64 v78; // r8
  __int64 *v79; // r15
  void *v80; // rdi
  __int64 v81; // rax
  _QWORD *v82; // rax
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  unsigned __int64 v87; // rax
  __int64 v88; // rcx
  unsigned __int64 v89; // rax
  __int64 v90; // rdx
  char **exception; // rbp
  __int64 v92; // rdx
  __int64 v94[11]; // [rsp+10h] [rbp-58h] BYREF

  result = a2;
  v4 = a1[6];
  if ( v4 && a2 < *(_DWORD *)(v4 - 4) )
  {
    v5 = *(_QWORD *)(v4 + 8LL * a2);
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 - 4) )
        return result;
    }
    v6 = *(_QWORD *)(a1[7] + 8LL * a2);
    if ( v6 )
    {
      result = *(unsigned int *)(v6 - 4);
      if ( (_DWORD)result )
        return result;
    }
  }
  while ( !v4 || a2 >= *(_DWORD *)(v4 - 4) )
  {
    v26 = (_QWORD *)a1[3];
    if ( !v26 )
    {
      v82 = (_QWORD *)sub_186B270(0x10u);
      v4 = a1[6];
      v26 = v82 + 1;
      *v82 = 2;
      a1[3] = v82 + 1;
      v7 = v82 + 1;
LABEL_9:
      *v7 = 0;
      ++*((_DWORD *)v26 - 1);
      if ( !v4 )
        goto LABEL_32;
      goto LABEL_10;
    }
    v27 = *((unsigned int *)v26 - 1);
    if ( (_DWORD)v27 != *((_DWORD *)v26 - 2) )
    {
      v7 = (_DWORD *)v26 + v27;
      goto LABEL_9;
    }
    v28 = (unsigned int)(3 * v27 + 1) >> 1;
    v29 = 4 * v28 + 8;
    if ( 4 * (int)v27 + 8 >= (unsigned int)v29 || (unsigned int)v27 >= v28 )
    {
LABEL_98:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_140FB4(v94, "Overflow encountered when expanding vector", v92);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v94);
      sub_233E40((__int64)v94);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v30 = (unsigned int *)sub_186B300(v26 - 1, v29);
    v4 = a1[6];
    v31 = v30 + 2;
    *v30 = v28;
    v32 = v30[1];
    a1[3] = v31;
    v31[v32] = 0;
    ++*(v31 - 1);
    if ( !v4 )
    {
LABEL_32:
      v33 = (_QWORD *)sub_186B270(0x18u);
      v4 = (unsigned __int64)(v33 + 1);
      *v33 = 2;
      v10 = 1;
      a1[6] = v4;
      v11 = (_QWORD *)v4;
      goto LABEL_12;
    }
LABEL_10:
    v8 = *(_DWORD *)(v4 - 4);
    if ( v8 == *(_DWORD *)(v4 - 8) )
    {
      v64 = (3 * v8 + 1) >> 1;
      v65 = 8 * v64 + 8;
      if ( 8 * v8 + 8 >= (unsigned int)v65 || v8 >= v64 )
        goto LABEL_98;
      v66 = sub_186B270(v65);
      v67 = (__int64 *)a1[6];
      v68 = (__int64 *)v66;
      v4 = v66 + 8;
      if ( v67 )
      {
        v69 = *((unsigned int *)v67 - 1);
        *(_DWORD *)(v66 + 4) = v69;
        v70 = 8 * v69;
        v71 = &v67[v69];
        if ( v71 != v67 )
        {
          v72 = v70 - 8;
          v73 = v67;
          if ( (unsigned __int64)(v70 - 8) <= 8 || v4 < (unsigned __int64)(v67 + 2) && v67 < v68 + 3 )
          {
            v87 = v4;
            do
            {
              v88 = *v73;
              *v73++ = 0;
              v87 += 8LL;
              *(_QWORD *)(v87 - 8) = v88;
            }
            while ( v73 != v71 );
          }
          else
          {
            v74 = 0;
            v75 = (v72 >> 3) + 1;
            do
            {
              v76 = _mm_loadu_si128((const __m128i *)&v67[v74]);
              *(_OWORD *)&v67[v74] = 0;
              *(__m128i *)&v68[v74 + 1] = v76;
              v74 += 2LL;
            }
            while ( v74 != 2 * (v75 >> 1) );
            if ( (v75 & 1) != 0 )
            {
              v77 = v75 & 0xFFFFFFFFFFFFFFFELL;
              v78 = v67[v77];
              v67[v77] = 0;
              v68[v77 + 1] = v78;
            }
          }
        }
        v79 = &v67[v69];
        if ( (_DWORD)v69 )
        {
          do
          {
            while ( *v67 )
            {
              v80 = (void *)(*v67++ - 8);
              sub_186B220(v80);
              if ( v79 == v67 )
                goto LABEL_75;
            }
            ++v67;
          }
          while ( v79 != v67 );
LABEL_75:
          v67 = (__int64 *)a1[6];
        }
        sub_186B220(v67 - 1);
        v11 = (_QWORD *)(v4 + 8LL * *((unsigned int *)v68 + 1));
        v10 = *((_DWORD *)v68 + 1) + 1;
      }
      else
      {
        *(_DWORD *)(v66 + 4) = 0;
        v11 = (_QWORD *)(v66 + 8);
        v10 = 1;
      }
      a1[6] = v4;
      *(_DWORD *)v68 = v64;
    }
    else
    {
      v9 = v8;
      v10 = v8 + 1;
      v11 = (_QWORD *)(v4 + 8 * v9);
    }
LABEL_12:
    *v11 = 0;
    *(_DWORD *)(v4 - 4) = v10;
    v12 = a1[7];
    if ( v12 )
    {
      v13 = *(_DWORD *)(v12 - 4);
      if ( v13 == *(_DWORD *)(v12 - 8) )
      {
        v47 = (3 * v13 + 1) >> 1;
        v48 = 8 * v47 + 8;
        if ( 8 * v13 + 8 >= (unsigned int)v48 || v13 >= v47 )
          goto LABEL_98;
        v49 = sub_186B270(v48);
        v50 = (__int64 *)a1[7];
        v51 = (__int64 *)v49;
        v12 = v49 + 8;
        if ( v50 )
        {
          v52 = *((unsigned int *)v50 - 1);
          *(_DWORD *)(v49 + 4) = v52;
          v53 = 8 * v52;
          v54 = &v50[v52];
          if ( v54 != v50 )
          {
            v55 = v53 - 8;
            v56 = v50;
            if ( (unsigned __int64)(v53 - 8) <= 8 || v12 < (unsigned __int64)(v50 + 2) && v50 < v51 + 3 )
            {
              v89 = v12;
              do
              {
                v90 = *v56;
                *v56++ = 0;
                v89 += 8LL;
                *(_QWORD *)(v89 - 8) = v90;
              }
              while ( v54 != v56 );
            }
            else
            {
              v57 = 0;
              v58 = (v55 >> 3) + 1;
              do
              {
                v59 = _mm_loadu_si128((const __m128i *)&v50[v57]);
                *(_OWORD *)&v50[v57] = 0;
                *(__m128i *)&v51[v57 + 1] = v59;
                v57 += 2LL;
              }
              while ( 2 * (v58 >> 1) != v57 );
              if ( (v58 & 1) != 0 )
              {
                v60 = v58 & 0xFFFFFFFFFFFFFFFELL;
                v61 = v50[v60];
                v50[v60] = 0;
                v51[v60 + 1] = v61;
              }
            }
          }
          v62 = &v50[v52];
          if ( (_DWORD)v52 )
          {
            do
            {
              while ( *v50 )
              {
                v63 = (void *)(*v50++ - 8);
                sub_186B220(v63);
                if ( v50 == v62 )
                  goto LABEL_56;
              }
              ++v50;
            }
            while ( v50 != v62 );
LABEL_56:
            v50 = (__int64 *)a1[7];
          }
          sub_186B220(v50 - 1);
          v16 = (_QWORD *)(v12 + 8LL * *((unsigned int *)v51 + 1));
          v15 = *((_DWORD *)v51 + 1) + 1;
        }
        else
        {
          *(_DWORD *)(v49 + 4) = 0;
          v16 = (_QWORD *)(v49 + 8);
          v15 = 1;
        }
        a1[7] = v12;
        *(_DWORD *)v51 = v47;
      }
      else
      {
        v14 = v13;
        v15 = v13 + 1;
        v16 = (_QWORD *)(v12 + 8 * v14);
      }
    }
    else
    {
      v86 = (_QWORD *)sub_186B270(0x18u);
      v12 = (unsigned __int64)(v86 + 1);
      *v86 = 2;
      v15 = 1;
      a1[7] = v12;
      v16 = (_QWORD *)v12;
    }
    v17 = (_QWORD *)a1[9];
    *v16 = 0;
    *(_DWORD *)(v12 - 4) = v15;
    if ( v17 )
    {
      v18 = *((unsigned int *)v17 - 1);
      if ( (_DWORD)v18 == *((_DWORD *)v17 - 2) )
      {
        v43 = (unsigned int)(3 * v18 + 1) >> 1;
        v44 = 4 * v43 + 8;
        if ( 4 * (int)v18 + 8 >= (unsigned int)v44 || (unsigned int)v18 >= v43 )
          goto LABEL_98;
        v45 = (unsigned int *)sub_186B300(v17 - 1, v44);
        v17 = v45 + 2;
        *v45 = v43;
        v46 = v45[1];
        a1[9] = v17;
        v19 = (_DWORD *)v17 + v46;
      }
      else
      {
        v19 = (_DWORD *)v17 + v18;
      }
    }
    else
    {
      v85 = (_QWORD *)sub_186B270(0x10u);
      v17 = v85 + 1;
      *v85 = 2;
      a1[9] = v85 + 1;
      v19 = v85 + 1;
    }
    *v19 = 0;
    ++*((_DWORD *)v17 - 1);
    v20 = a1[10];
    if ( v20 )
    {
      v21 = *(unsigned int *)(v20 - 4);
      if ( (_DWORD)v21 == *(_DWORD *)(v20 - 8) )
      {
        v38 = (unsigned int)(3 * v21 + 1) >> 1;
        v39 = v38 + 8;
        if ( (int)v21 + 8 >= (unsigned int)v39 || (unsigned int)v21 >= v38 )
          goto LABEL_98;
        v40 = (unsigned int *)sub_186B300((void *)(v20 - 8), v39);
        v41 = v40 + 2;
        *v40 = v38;
        v42 = v40[1];
        a1[10] = v41;
        v22 = (char *)v41 + v42;
      }
      else
      {
        v22 = (_BYTE *)(v21 + v20);
      }
    }
    else
    {
      v84 = (_QWORD *)sub_186B270(0xAu);
      *v84 = 2;
      v22 = v84 + 1;
      a1[10] = v84 + 1;
    }
    *v22 = 0;
    v23 = (_QWORD *)a1[11];
    ++*(_DWORD *)(a1[10] - 4LL);
    if ( v23 )
    {
      v24 = *((unsigned int *)v23 - 1);
      if ( (_DWORD)v24 == *((_DWORD *)v23 - 2) )
      {
        v34 = (unsigned int)(3 * v24 + 1) >> 1;
        v35 = 4 * v34 + 8;
        if ( 4 * (int)v24 + 8 >= (unsigned int)v35 || (unsigned int)v24 >= v34 )
          goto LABEL_98;
        v36 = (unsigned int *)sub_186B300(v23 - 1, v35);
        v23 = v36 + 2;
        *v36 = v34;
        v37 = v36[1];
        a1[11] = v23;
        v25 = (_DWORD *)v23 + v37;
      }
      else
      {
        v25 = (_DWORD *)v23 + v24;
      }
    }
    else
    {
      v83 = (_QWORD *)sub_186B270(0x10u);
      v23 = v83 + 1;
      *v83 = 2;
      a1[11] = v83 + 1;
      v25 = v83 + 1;
    }
    *v25 = -1;
    v4 = a1[6];
    ++*((_DWORD *)v23 - 1);
  }
  v81 = a1[15];
  if ( !v81 || a2 >= *(_DWORD *)(v81 - 4) )
    sub_8C3430(a1 + 15, a2 + 1, 0);
  result = a1[3];
  *(_DWORD *)(result + 4LL * a2) = 0;
  return result;
}

