__int64 __fastcall sub_86E830(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **v4; // rbp
  char **v5; // rbp
  char **v6; // rbp
  char **exception; // rbp
  unsigned int v10; // eax
  _QWORD *v11; // rdi
  unsigned int v12; // r12d
  __int64 v13; // rbp
  _DWORD *v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rax
  _DWORD *v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rax
  _DWORD *v20; // rax
  _QWORD *v21; // rbp
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  _QWORD *v26; // rcx
  unsigned __int64 v27; // r15
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  _QWORD *v31; // rcx
  _QWORD *v32; // rdi
  __int64 v33; // rax
  _DWORD *v34; // rax
  unsigned __int64 v35; // r15
  unsigned int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  _QWORD *v39; // rcx
  __int64 v40; // rdi
  unsigned int v42; // r14d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rax
  unsigned int v46; // r14d
  size_t v47; // rdi
  __int64 v48; // rax
  __int64 *v49; // rbp
  __int64 *v50; // r14
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 *v53; // r8
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  __m128i v57; // xmm0
  unsigned __int64 v58; // rcx
  __int64 *v59; // rax
  __int64 v60; // r8
  __int64 *v61; // rax
  void *v62; // rdi
  unsigned int v63; // ebp
  size_t v64; // rsi
  unsigned int *v65; // rax
  __int64 v66; // rax
  unsigned int v67; // r14d
  size_t v68; // rdi
  __int64 v69; // rax
  __int64 *v70; // rbp
  __int64 *v71; // r14
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 *v74; // r8
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rcx
  __m128i v78; // xmm0
  unsigned __int64 v79; // rcx
  __int64 v80; // r8
  __int64 *v81; // rax
  void *v82; // rdi
  unsigned int v83; // r14d
  size_t v84; // rsi
  unsigned int *v85; // rax
  __int64 v86; // rcx
  unsigned int v87; // r14d
  size_t v88; // rsi
  unsigned int *v89; // rax
  __int64 v90; // rax
  unsigned int v91; // r14d
  size_t v92; // rsi
  unsigned int *v93; // rax
  __int64 v94; // rax
  __int64 *v95; // rax
  unsigned __int64 v96; // rcx
  __int64 v97; // r9
  __int64 *v98; // rax
  unsigned __int64 v99; // rcx
  __int64 v100; // r9
  _QWORD *v101; // rax
  _QWORD *v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  _QWORD *v106; // rax
  _QWORD *v107; // rax
  __int64 *v108; // [rsp+0h] [rbp-78h]
  __int64 *v109; // [rsp+0h] [rbp-78h]
  unsigned int v110; // [rsp+Ch] [rbp-6Ch]
  unsigned int v111; // [rsp+Ch] [rbp-6Ch]
  __int64 v112[11]; // [rsp+20h] [rbp-58h] BYREF

  v10 = sub_7E69A0(a1, a2);
  v11 = *(_QWORD **)(a1 + 560);
  v12 = v10;
  if ( v11 )
  {
    v13 = *((unsigned int *)v11 - 1);
    v14 = (_DWORD *)v11 + v13;
    if ( (_DWORD)v13 == *((_DWORD *)v11 - 2) )
    {
      v42 = (unsigned int)(3 * v13 + 1) >> 1;
      v43 = 4 * v42 + 8;
      if ( 4 * (int)v13 + 8 >= (unsigned int)v43 || (unsigned int)v13 >= v42 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v112, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v112);
        sub_233E40((__int64)v112);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v44 = (unsigned int *)sub_186B300(v11 - 1, v43);
      v11 = v44 + 2;
      *v44 = v42;
      v45 = v44[1];
      *(_QWORD *)(a1 + 560) = v11;
      v14 = (_DWORD *)v11 + v45;
    }
  }
  else
  {
    LODWORD(v13) = 0;
    v101 = (_QWORD *)sub_186B270(0x10u);
    v11 = v101 + 1;
    *v101 = 2;
    *(_QWORD *)(a1 + 560) = v101 + 1;
    v14 = v101 + 1;
  }
  *v14 = v13;
  ++*((_DWORD *)v11 - 1);
  v15 = *(_QWORD **)(a1 + 568);
  if ( v15 )
  {
    v16 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v16 == *((_DWORD *)v15 - 2) )
    {
      v91 = (unsigned int)(3 * v16 + 1) >> 1;
      v92 = 4 * v91 + 8;
      if ( 4 * (int)v16 + 8 >= (unsigned int)v92 || (unsigned int)v16 >= v91 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v112, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v112);
        sub_233E40((__int64)v112);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v93 = (unsigned int *)sub_186B300(v15 - 1, v92);
      v15 = v93 + 2;
      *v93 = v91;
      v94 = v93[1];
      *(_QWORD *)(a1 + 568) = v15;
      v17 = (_DWORD *)v15 + v94;
    }
    else
    {
      v17 = (_DWORD *)v15 + v16;
    }
  }
  else
  {
    v106 = (_QWORD *)sub_186B270(0x10u);
    v15 = v106 + 1;
    *v106 = 2;
    *(_QWORD *)(a1 + 568) = v106 + 1;
    v17 = v106 + 1;
  }
  *v17 = 1;
  ++*((_DWORD *)v15 - 1);
  v18 = *(_QWORD **)(a1 + 576);
  if ( v18 )
  {
    v19 = *((unsigned int *)v18 - 1);
    if ( (_DWORD)v19 == *((_DWORD *)v18 - 2) )
    {
      v87 = (unsigned int)(3 * v19 + 1) >> 1;
      v88 = 4 * v87 + 8;
      if ( 4 * (int)v19 + 8 >= (unsigned int)v88 || (unsigned int)v19 >= v87 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v112, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v112);
        sub_233E40((__int64)v112);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v89 = (unsigned int *)sub_186B300(v18 - 1, v88);
      v18 = v89 + 2;
      *v89 = v87;
      v90 = v89[1];
      *(_QWORD *)(a1 + 576) = v18;
      v20 = (_DWORD *)v18 + v90;
    }
    else
    {
      v20 = (_DWORD *)v18 + v19;
    }
  }
  else
  {
    v102 = (_QWORD *)sub_186B270(0x10u);
    v18 = v102 + 1;
    *v102 = 2;
    *(_QWORD *)(a1 + 576) = v102 + 1;
    v20 = v102 + 1;
  }
  *v20 = v13;
  v21 = *(_QWORD **)(a1 + 552);
  ++*((_DWORD *)v18 - 1);
  v22 = (_QWORD *)*v21;
  if ( *v21 )
  {
    v23 = *((_DWORD *)v22 - 1);
    if ( v23 == *((_DWORD *)v22 - 2) )
    {
      v83 = (3 * v23 + 1) >> 1;
      v84 = 8 * v83 + 8;
      if ( 8 * v23 + 8 >= (unsigned int)v84 || v23 >= v83 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v112, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v112);
        sub_233E40((__int64)v112);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v85 = (unsigned int *)sub_186B300(v22 - 1, v84);
      v86 = v85[1];
      v22 = v85 + 2;
      *v21 = v85 + 2;
      *v85 = v83;
      LODWORD(v85) = v86;
      v26 = &v22[v86];
      v25 = (_DWORD)v85 + 1;
    }
    else
    {
      v24 = v23;
      v25 = v23 + 1;
      v26 = &v22[v24];
    }
  }
  else
  {
    v103 = (_QWORD *)sub_186B270(0x18u);
    v22 = v103 + 1;
    *v103 = 2;
    v25 = 1;
    *v21 = v22;
    v26 = v22;
  }
  *v26 = a1 + 584;
  v27 = *(_QWORD *)(a1 + 600);
  *((_DWORD *)v22 - 1) = v25;
  if ( v27 )
  {
    v28 = *(_DWORD *)(v27 - 4);
    if ( v28 == *(_DWORD *)(v27 - 8) )
    {
      v67 = (3 * v28 + 1) >> 1;
      v68 = 8 * v67 + 8;
      v111 = v67;
      if ( 8 * v28 + 8 >= (unsigned int)v68 || v28 >= v67 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v112, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v112);
        sub_233E40((__int64)v112);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v69 = sub_186B270(v68);
      v70 = *(__int64 **)(a1 + 600);
      v71 = (__int64 *)v69;
      v27 = v69 + 8;
      if ( v70 )
      {
        v72 = *((unsigned int *)v70 - 1);
        *(_DWORD *)(v69 + 4) = v72;
        v73 = 8 * v72;
        v74 = &v70[v72];
        if ( v74 != v70 )
        {
          v75 = v73 - 8;
          if ( (unsigned __int64)(v73 - 8) <= 8 || v27 < (unsigned __int64)(v70 + 2) && v70 < v71 + 3 )
          {
            v95 = v70;
            v96 = v27;
            do
            {
              v97 = *v95;
              *v95++ = 0;
              v96 += 8LL;
              *(_QWORD *)(v96 - 8) = v97;
            }
            while ( v74 != v95 );
          }
          else
          {
            v76 = 0;
            v77 = (v75 >> 3) + 1;
            do
            {
              v78 = _mm_loadu_si128((const __m128i *)&v70[v76]);
              *(_OWORD *)&v70[v76] = 0;
              *(__m128i *)&v71[v76 + 1] = v78;
              v76 += 2LL;
            }
            while ( 2 * (v77 >> 1) != v76 );
            if ( (v77 & 1) != 0 )
            {
              v79 = v77 & 0xFFFFFFFFFFFFFFFELL;
              v80 = v70[v79];
              v70[v79] = 0;
              v71[v79 + 1] = v80;
            }
          }
        }
        v81 = &v70[v72];
        if ( (_DWORD)v72 )
        {
          do
          {
            while ( *v70 )
            {
              v82 = (void *)(*v70 - 8);
              v109 = v81;
              ++v70;
              sub_186B220(v82);
              v81 = v109;
              if ( v70 == v109 )
                goto LABEL_61;
            }
            ++v70;
          }
          while ( v70 != v81 );
LABEL_61:
          v70 = *(__int64 **)(a1 + 600);
        }
        sub_186B220(v70 - 1);
        v31 = (_QWORD *)(v27 + 8LL * *((unsigned int *)v71 + 1));
        v30 = *((_DWORD *)v71 + 1) + 1;
      }
      else
      {
        *(_DWORD *)(v69 + 4) = 0;
        v31 = (_QWORD *)(v69 + 8);
        v30 = 1;
      }
      *(_QWORD *)(a1 + 600) = v27;
      *(_DWORD *)v71 = v111;
    }
    else
    {
      v29 = v28;
      v30 = v28 + 1;
      v31 = (_QWORD *)(v27 + 8 * v29);
    }
  }
  else
  {
    v104 = (_QWORD *)sub_186B270(0x18u);
    v27 = (unsigned __int64)(v104 + 1);
    *v104 = 2;
    v30 = 1;
    *(_QWORD *)(a1 + 600) = v27;
    v31 = (_QWORD *)v27;
  }
  v32 = *(_QWORD **)(a1 + 608);
  *v31 = 0;
  *(_DWORD *)(v27 - 4) = v30;
  if ( v32 )
  {
    v33 = *((unsigned int *)v32 - 1);
    if ( (_DWORD)v33 == *((_DWORD *)v32 - 2) )
    {
      v63 = (unsigned int)(3 * v33 + 1) >> 1;
      v64 = 4 * v63 + 8;
      if ( 4 * (int)v33 + 8 >= (unsigned int)v64 || (unsigned int)v33 >= v63 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v112, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v112);
        sub_233E40((__int64)v112);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v65 = (unsigned int *)sub_186B300(v32 - 1, v64);
      v32 = v65 + 2;
      *v65 = v63;
      v66 = v65[1];
      *(_QWORD *)(a1 + 608) = v32;
      v34 = (_DWORD *)v32 + v66;
    }
    else
    {
      v34 = (_DWORD *)v32 + v33;
    }
  }
  else
  {
    v105 = (_QWORD *)sub_186B270(0x10u);
    v32 = v105 + 1;
    *v105 = 2;
    *(_QWORD *)(a1 + 608) = v105 + 1;
    v34 = v105 + 1;
  }
  v35 = *(_QWORD *)(a1 + 616);
  *v34 = 0;
  ++*((_DWORD *)v32 - 1);
  if ( v35 )
  {
    v36 = *(_DWORD *)(v35 - 4);
    if ( v36 == *(_DWORD *)(v35 - 8) )
    {
      v46 = (3 * v36 + 1) >> 1;
      v47 = 8 * v46 + 8;
      v110 = v46;
      if ( 8 * v36 + 8 >= (unsigned int)v47 || v36 >= v46 )
        JUMPOUT(0x129B1C);
      v48 = sub_186B270(v47);
      v49 = *(__int64 **)(a1 + 616);
      v50 = (__int64 *)v48;
      v35 = v48 + 8;
      if ( v49 )
      {
        v51 = *((unsigned int *)v49 - 1);
        *(_DWORD *)(v48 + 4) = v51;
        v52 = 8 * v51;
        v53 = &v49[v51];
        if ( v49 != v53 )
        {
          v54 = v52 - 8;
          if ( (unsigned __int64)(v52 - 8) <= 8 || v35 < (unsigned __int64)(v49 + 2) && v49 < v50 + 3 )
          {
            v98 = v49;
            v99 = v35;
            do
            {
              v100 = *v98;
              *v98++ = 0;
              v99 += 8LL;
              *(_QWORD *)(v99 - 8) = v100;
            }
            while ( v53 != v98 );
          }
          else
          {
            v55 = 0;
            v56 = (v54 >> 3) + 1;
            do
            {
              v57 = _mm_loadu_si128((const __m128i *)&v49[v55]);
              *(_OWORD *)&v49[v55] = 0;
              *(__m128i *)&v50[v55 + 1] = v57;
              v55 += 2LL;
            }
            while ( v55 != 2 * (v56 >> 1) );
            if ( (v56 & 1) != 0 )
            {
              v58 = v56 & 0xFFFFFFFFFFFFFFFELL;
              v59 = &v49[v58];
              v60 = *v59;
              *v59 = 0;
              *(_QWORD *)(v35 + 8 * v58) = v60;
            }
          }
        }
        v61 = &v49[v51];
        if ( (_DWORD)v51 )
        {
          do
          {
            while ( *v49 )
            {
              v62 = (void *)(*v49 - 8);
              v108 = v61;
              ++v49;
              sub_186B220(v62);
              v61 = v108;
              if ( v49 == v108 )
                goto LABEL_39;
            }
            ++v49;
          }
          while ( v49 != v61 );
LABEL_39:
          v49 = *(__int64 **)(a1 + 616);
        }
        sub_186B220(v49 - 1);
        v39 = (_QWORD *)(v35 + 8LL * *((unsigned int *)v50 + 1));
        v38 = *((_DWORD *)v50 + 1) + 1;
      }
      else
      {
        *(_DWORD *)(v48 + 4) = 0;
        v39 = (_QWORD *)(v48 + 8);
        v38 = 1;
      }
      *(_QWORD *)(a1 + 616) = v35;
      *(_DWORD *)v50 = v110;
    }
    else
    {
      v37 = v36;
      v38 = v36 + 1;
      v39 = (_QWORD *)(v35 + 8 * v37);
    }
  }
  else
  {
    v107 = (_QWORD *)sub_186B270(0x18u);
    v35 = (unsigned __int64)(v107 + 1);
    *v107 = 2;
    v38 = 1;
    *(_QWORD *)(a1 + 616) = v35;
    v39 = (_QWORD *)v35;
  }
  *v39 = 0;
  v40 = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(v35 - 4) = v38;
  sub_13D7950(v40 + 1592, a2, v12, *(unsigned int *)(a1 + 12));
  return v12;
}

