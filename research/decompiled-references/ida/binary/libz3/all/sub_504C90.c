__int64 (__fastcall **__fastcall sub_504C90(__int64 a1, __int64 a2, _QWORD *a3, char a4))()
{
  char **v4; // rbp
  char **v5; // rbp
  char **exception; // rbp
  char **v7; // rbp
  char **v8; // rbp
  _QWORD *v12; // rax
  unsigned int v13; // r12d
  __int64 v14; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  size_t v18; // rdx
  int v19; // eax
  _QWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 *v23; // rbx
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // esi
  unsigned int v27; // r12d
  size_t v28; // rdi
  unsigned int *v29; // r15
  __int64 *v30; // r14
  __int64 v31; // rbp
  int v32; // r8d
  __int64 *v33; // r9
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __m128i v36; // xmm0
  __int64 *v37; // rbp
  __int64 v38; // rdi
  void *v39; // rdi
  __int64 v40; // r15
  __int64 v41; // rax
  char *v42; // rsi
  __int64 *v43; // rbx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rdi
  unsigned int v46; // ebx
  _QWORD *v47; // rbp
  _QWORD *v48; // rdx
  unsigned int v49; // r12d
  unsigned int *v50; // rax
  _QWORD *v51; // rdx
  __int64 v52; // rax
  unsigned int *v53; // rax
  _QWORD *v54; // rdx
  __int64 v55; // rax
  unsigned int *v56; // rax
  _QWORD *v57; // r12
  _QWORD *v58; // rbp
  _QWORD *v59; // rdx
  unsigned int v60; // eax
  __int64 v61; // rcx
  int v62; // eax
  _QWORD *v63; // rcx
  unsigned int v65; // r14d
  size_t v66; // rsi
  unsigned int *v67; // rax
  __int64 v68; // rcx
  unsigned int v69; // r14d
  size_t v70; // rsi
  unsigned int *v71; // rax
  unsigned int v72; // r14d
  size_t v73; // rsi
  unsigned int *v74; // rax
  unsigned int v75; // r14d
  size_t v76; // rsi
  unsigned int *v77; // rax
  _QWORD *v78; // rax
  __int64 *v79; // rdx
  _DWORD *v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rax
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rax
  __int64 *v87; // rbp
  __int64 v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  unsigned int v93; // [rsp+0h] [rbp-A8h]
  __int64 **v94; // [rsp+0h] [rbp-A8h]
  unsigned int v96; // [rsp+10h] [rbp-98h]
  unsigned int v97; // [rsp+14h] [rbp-94h]
  __int64 v98[11]; // [rsp+50h] [rbp-58h] BYREF

  *(_QWORD *)a1 = qword_1C665B0;
  v12 = (_QWORD *)*a3;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v12 )
  {
    v13 = *((_DWORD *)v12 - 1);
    v14 = *((unsigned int *)v12 - 2);
    v93 = v14;
    v16 = (_QWORD *)sub_186B270(8 * v14 + 8);
    v17 = (_QWORD *)*a3;
    *(_QWORD *)(a1 + 16) = v16 + 1;
    *v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v93), _mm_cvtsi32_si128(v13)).m128i_u64[0];
    if ( v17 )
    {
      v18 = 8LL * *((unsigned int *)v17 - 1);
      if ( v18 <= 8 )
      {
        if ( v18 == 8 )
          v16[1] = *v17;
      }
      else
      {
        memmove(v16 + 1, v17, v18);
      }
    }
  }
  v19 = *(_DWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 24) = v19;
  *(_QWORD *)a1 = qword_1C66BA8;
  v20 = (_QWORD *)sub_186B270(8u);
  *v20 = 0;
  *(_QWORD *)(a1 + 48) = v20;
  *(_BYTE *)(a1 + 56) = a4;
  *(_OWORD *)(a1 + 64) = 0;
  sub_180C0A0(a1 + 80);
  v21 = sub_186B270(0x38u);
  *(_QWORD *)(v21 + 32) = 0;
  *(_QWORD *)(v21 + 40) = off_1C4F498;
  *(__m128i *)v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 64), (__m128i)(unsigned __int64)(a1 + 64));
  *(_QWORD *)(v21 + 48) = v21;
  v22 = (_QWORD *)*a3;
  *(_QWORD *)(a1 + 120) = v21;
  *(_OWORD *)(v21 + 16) = 0;
  v94 = *(__int64 ***)(a1 + 48);
  v23 = *v94;
  if ( !v22 )
  {
    if ( v23 )
    {
      v96 = 0;
      v86 = 2LL * *((unsigned int *)v23 - 1);
      v87 = &v23[v86];
      if ( v86 * 8 )
        goto LABEL_67;
      *((_DWORD *)v23 - 1) = 0;
    }
    goto LABEL_42;
  }
  v24 = *((_DWORD *)v22 - 1);
  v96 = v24;
  if ( !v23 )
  {
    v97 = 0;
    if ( !v24 )
      goto LABEL_42;
    v90 = (_QWORD *)sub_186B270(0x28u);
    *v90 = 2;
    v23 = v90 + 1;
    *v94 = v90 + 1;
    goto LABEL_8;
  }
  v97 = *((_DWORD *)v23 - 1);
  if ( v97 < v24 )
  {
LABEL_8:
    while ( 1 )
    {
      v25 = *((_DWORD *)v23 - 2);
      v26 = v96;
      if ( v25 >= v96 )
        break;
      while ( 1 )
      {
        v27 = (3 * v25 + 1) >> 1;
        v28 = 16 * v27 + 8;
        if ( 16 * v25 + 8 >= (unsigned int)v28 || v25 >= v27 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v98, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v98);
          sub_233E40((__int64)v98);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v29 = (unsigned int *)sub_186B270(v28);
        v23 = (__int64 *)(v29 + 2);
        v30 = *v94;
        if ( !*v94 )
          break;
        v31 = *((unsigned int *)v30 - 1);
        v29[1] = v31;
        v32 = v31;
        v33 = &v30[2 * v31];
        if ( v30 != v33 )
        {
          if ( v23 < v30 + 2 && v30 < (__int64 *)v29 + 3 )
          {
            v79 = v30;
            v80 = v29 + 2;
            do
            {
              v81 = *v79;
              *v79 = 0;
              v79 += 2;
              v80 += 4;
              *((_QWORD *)v80 - 2) = v81;
              v82 = *(v79 - 1);
              *(v79 - 1) = 0;
              *((_QWORD *)v80 - 1) = v82;
            }
            while ( v33 != v79 );
          }
          else
          {
            v34 = 0;
            v35 = 0;
            do
            {
              v36 = _mm_loadu_si128((const __m128i *)&v30[v34 / 2]);
              ++v35;
              *(_OWORD *)&v30[v34 / 2] = 0;
              *(__m128i *)&v29[v34 + 2] = v36;
              v34 += 4LL;
            }
            while ( v35 < ((unsigned __int64)(16 * v31 - 16) >> 4) + 1 );
          }
        }
        v37 = &v30[2 * v31];
        if ( v32 )
        {
          do
          {
            while ( 1 )
            {
              v38 = v30[1];
              if ( v38 )
                sub_186B220((void *)(v38 - 8));
              if ( !*v30 )
                break;
              v39 = (void *)(*v30 - 8);
              v30 += 2;
              sub_186B220(v39);
              if ( v30 == v37 )
                goto LABEL_22;
            }
            v30 += 2;
          }
          while ( v30 != v37 );
LABEL_22:
          v30 = *v94;
        }
        sub_186B220(v30 - 1);
        v26 = v96;
        *v94 = v23;
        *v29 = v27;
        v25 = *v29;
        if ( *v29 >= v96 )
          goto LABEL_24;
      }
      v29[1] = 0;
      *v94 = v23;
      *v29 = v27;
    }
LABEL_24:
    *((_DWORD *)v23 - 1) = v26;
    v40 = 16LL * v26;
    v41 = 16LL * v97;
    v22 = (_QWORD *)*a3;
    v42 = (char *)&v23[(unsigned __int64)v41 / 8];
    v43 = &v23[(unsigned __int64)v40 / 8];
    if ( v41 != v40 )
    {
      v44 = 0;
      do
      {
        v45 = v44++;
        *(_OWORD *)&v42[16 * v45] = 0;
      }
      while ( v44 < ((unsigned __int64)((char *)(v43 - 2) - v42) >> 4) + 1 );
    }
    if ( v22 )
      goto LABEL_28;
    goto LABEL_42;
  }
  v91 = 16LL * v24;
  v92 = 16LL * v97;
  v87 = &v23[(unsigned __int64)v92 / 8];
  if ( v91 == v92 )
  {
    *((_DWORD *)v23 - 1) = v96;
LABEL_28:
    v46 = 0;
    while ( 1 )
    {
      if ( v46 >= *((_DWORD *)v22 - 1) )
        goto LABEL_42;
      v47 = *(_QWORD **)(a1 + 120);
      v48 = (_QWORD *)v47[2];
      if ( !v48 )
        break;
      v49 = *((_DWORD *)v48 - 1);
      v50 = (unsigned int *)v48 + v49;
      if ( v49 != *((_DWORD *)v48 - 2) )
        goto LABEL_32;
      v75 = (3 * v49 + 1) >> 1;
      v76 = 4 * v75 + 8;
      if ( 4 * v49 + 8 >= (unsigned int)v76 || v49 >= v75 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v98, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v98);
        sub_233E40((__int64)v98);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v77 = (unsigned int *)sub_186B300(v48 - 1, v76);
      v47[2] = v77 + 2;
      *v77 = v75;
      v77[v77[1]++ + 2] = v49;
      v51 = (_QWORD *)v47[3];
      if ( v51 )
      {
LABEL_33:
        v52 = *((unsigned int *)v51 - 1);
        if ( (_DWORD)v52 == *((_DWORD *)v51 - 2) )
        {
          v72 = (unsigned int)(3 * v52 + 1) >> 1;
          v73 = 4 * v72 + 8;
          if ( 4 * (int)v52 + 8 >= (unsigned int)v73 || (unsigned int)v52 >= v72 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v98, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v98);
            sub_233E40((__int64)v98);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v74 = (unsigned int *)sub_186B300(v51 - 1, v73);
          v51 = v74 + 2;
          v47[3] = v74 + 2;
          *v74 = v72;
          v53 = &v74[v74[1] + 2];
        }
        else
        {
          v53 = (unsigned int *)v51 + v52;
        }
        goto LABEL_35;
      }
LABEL_58:
      v78 = (_QWORD *)sub_186B270(0x10u);
      v51 = v78 + 1;
      *v78 = 2;
      v47[3] = v78 + 1;
      v53 = (unsigned int *)(v78 + 1);
LABEL_35:
      *v53 = 1;
      ++*((_DWORD *)v51 - 1);
      v54 = (_QWORD *)v47[4];
      if ( v54 )
      {
        v55 = *((unsigned int *)v54 - 1);
        if ( (_DWORD)v55 == *((_DWORD *)v54 - 2) )
        {
          v69 = (unsigned int)(3 * v55 + 1) >> 1;
          v70 = 4 * v69 + 8;
          if ( 4 * (int)v55 + 8 >= (unsigned int)v70 || (unsigned int)v55 >= v69 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v98, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v98);
            sub_233E40((__int64)v98);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v71 = (unsigned int *)sub_186B300(v54 - 1, v70);
          v54 = v71 + 2;
          v47[4] = v71 + 2;
          *v71 = v69;
          v56 = &v71[v71[1] + 2];
        }
        else
        {
          v56 = (unsigned int *)v54 + v55;
        }
      }
      else
      {
        v85 = (_QWORD *)sub_186B270(0x10u);
        v54 = v85 + 1;
        *v85 = 2;
        v47[4] = v85 + 1;
        v56 = (unsigned int *)(v85 + 1);
      }
      *v56 = v49;
      v57 = (_QWORD *)v47[1];
      v58 = v47 + 5;
      ++*((_DWORD *)v54 - 1);
      v59 = (_QWORD *)*v57;
      if ( *v57 )
      {
        v60 = *((_DWORD *)v59 - 1);
        if ( v60 == *((_DWORD *)v59 - 2) )
        {
          v65 = (3 * v60 + 1) >> 1;
          v66 = 8 * v65 + 8;
          if ( 8 * v60 + 8 >= (unsigned int)v66 || v60 >= v65 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v98, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v98);
            sub_233E40((__int64)v98);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v67 = (unsigned int *)sub_186B300(v59 - 1, v66);
          v68 = v67[1];
          v59 = v67 + 2;
          *v57 = v67 + 2;
          *v67 = v65;
          LODWORD(v67) = v68;
          v63 = &v59[v68];
          v62 = (_DWORD)v67 + 1;
        }
        else
        {
          v61 = v60;
          v62 = v60 + 1;
          v63 = &v59[v61];
        }
      }
      else
      {
        v84 = (_QWORD *)sub_186B270(0x18u);
        v59 = v84 + 1;
        *v84 = 2;
        v62 = 1;
        *v57 = v59;
        v63 = v59;
      }
      *v63 = v58;
      ++v46;
      *((_DWORD *)v59 - 1) = v62;
      v22 = (_QWORD *)*a3;
      if ( !*a3 )
        goto LABEL_42;
    }
    v83 = (_QWORD *)sub_186B270(0x10u);
    v48 = v83 + 1;
    *v83 = 2;
    v49 = 0;
    v47[2] = v83 + 1;
    v50 = (unsigned int *)(v83 + 1);
LABEL_32:
    *v50 = v49;
    ++*((_DWORD *)v48 - 1);
    v51 = (_QWORD *)v47[3];
    if ( v51 )
      goto LABEL_33;
    goto LABEL_58;
  }
  v23 = (__int64 *)((char *)v23 + v91);
  do
  {
    while ( 1 )
    {
LABEL_67:
      v88 = v23[1];
      if ( v88 )
        sub_186B220((void *)(v88 - 8));
      v89 = *v23;
      if ( !*v23 )
        break;
      v23 += 2;
      sub_186B220((void *)(v89 - 8));
      if ( v87 == v23 )
        goto LABEL_71;
    }
    v23 += 2;
  }
  while ( v87 != v23 );
LABEL_71:
  v22 = (_QWORD *)*a3;
  *((_DWORD *)*v94 - 1) = v96;
  if ( v22 )
    goto LABEL_28;
LABEL_42:
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)a1 = &off_1C66CA0;
  return &off_1C66CA0;
}

