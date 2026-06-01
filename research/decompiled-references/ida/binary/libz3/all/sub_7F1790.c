void __fastcall sub_7F1790(__int64 a1, unsigned int a2, unsigned int *a3)
{
  char **exception; // rbp
  char **v4; // rbp
  char **v5; // rbp
  char **v6; // rbp
  char **v7; // rbp
  char **v8; // rbp
  __int64 v12; // rax
  _QWORD *v13; // rdx
  int v14; // r13d
  _QWORD *v15; // rax
  _DWORD *i; // rax
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // r8d
  unsigned int *v21; // rax
  unsigned int v22; // r14d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // r13
  unsigned int v31; // ebp
  __int64 *v32; // rcx
  int v33; // eax
  _BYTE *v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  _BYTE *v38; // rcx
  _QWORD *v39; // r12
  __int64 v40; // rax
  _QWORD *v41; // rax
  _DWORD *v42; // r14
  __int64 v43; // rax
  unsigned int *v44; // rax
  __int64 v45; // r13
  unsigned __int64 v46; // r15
  _QWORD *v47; // r13
  _QWORD *v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // r15d
  size_t v51; // rsi
  unsigned int *v52; // rax
  unsigned int v53; // eax
  unsigned int v54; // ebp
  size_t v55; // rdi
  unsigned int *v56; // rax
  __int64 *v57; // r14
  unsigned int *v58; // r13
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 *v61; // r10
  unsigned __int64 v62; // rsi
  __int64 *v63; // r9
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rsi
  __m128i v66; // xmm0
  unsigned __int64 v67; // rsi
  __int64 v68; // r9
  __int64 *v69; // r12
  void *v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // rax
  _DWORD *v73; // rdx
  __int64 v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  unsigned int v77; // r14d
  unsigned int v78; // edx
  __int64 v79; // rax
  __int64 v80; // rsi
  _DWORD *v81; // r15
  __int64 v82; // rcx
  unsigned __int64 v83; // rax
  __int64 v84; // rcx
  unsigned int v85; // r12d
  unsigned int *v86; // rax
  __int64 v87; // rcx
  unsigned int v88; // r12d
  unsigned int v89; // eax
  unsigned int *v90; // rax
  __int64 v91; // rcx
  _QWORD *v92; // rdx
  _QWORD *v93; // rax
  _QWORD *v94; // rdx
  unsigned int v95; // [rsp+0h] [rbp-88h]
  unsigned int v96; // [rsp+4h] [rbp-84h]
  _DWORD *v97; // [rsp+8h] [rbp-80h]
  unsigned int v98; // [rsp+10h] [rbp-78h]
  unsigned int v99; // [rsp+14h] [rbp-74h]
  _DWORD *v100; // [rsp+18h] [rbp-70h]
  __int64 v101[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      v12 = *(_QWORD *)(a1 + 16);
      v13 = *(_QWORD **)(a1 + 24);
      if ( v12 )
        v14 = *(_DWORD *)(v12 - 4);
      else
        v14 = 0;
      if ( v13 )
        goto LABEL_10;
      v15 = (_QWORD *)sub_186B270(0x10u);
      v13 = v15 + 1;
      *v15 = 2;
      *(_QWORD *)(a1 + 24) = v15 + 1;
      for ( i = v15 + 1; ; i = (_DWORD *)v13 + v25 )
      {
        *i = v14;
        ++*((_DWORD *)v13 - 1);
        v17 = (*(_DWORD *)(a1 + 32))-- == 1;
        if ( v17 )
          break;
        while ( 1 )
        {
          v18 = *(_QWORD *)(a1 + 16);
          v14 = v18 ? *(_DWORD *)(v18 - 4) : 0;
LABEL_10:
          v19 = *((unsigned int *)v13 - 1);
          if ( (_DWORD)v19 == *((_DWORD *)v13 - 2) )
            break;
          *((_DWORD *)v13 + v19) = v14;
          ++*((_DWORD *)v13 - 1);
          v17 = (*(_DWORD *)(a1 + 32))-- == 1;
          if ( v17 )
            goto LABEL_12;
        }
        v22 = (unsigned int)(3 * v19 + 1) >> 1;
        v23 = 4 * v22 + 8;
        if ( 4 * (int)v19 + 8 >= (unsigned int)v23 || (unsigned int)v19 >= v22 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v101, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v101);
          sub_233E40((__int64)v101);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v24 = (unsigned int *)sub_186B300(v13 - 1, v23);
        v13 = v24 + 2;
        *v24 = v22;
        v25 = v24[1];
        *(_QWORD *)(a1 + 24) = v13;
      }
    }
LABEL_12:
    if ( a2 )
    {
      v20 = -2;
      v21 = a3;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 3288LL) + 4LL * *v21) == 1 )
        {
          if ( !*(_BYTE *)(a1 + 8) )
            return;
          v26 = *(_QWORD *)(a1 + 40);
          v20 = *v21;
          if ( v26 )
          {
            v27 = *v21 >> 1;
            if ( (unsigned int)v27 < *(_DWORD *)(v26 - 4) && *(_BYTE *)(v26 + v27) )
              return;
            v20 = *v21;
          }
        }
        ++v21;
      }
      while ( &a3[a2] != v21 );
      if ( v20 != -2 )
      {
        sub_7F15F0(a1, v20);
        return;
      }
    }
    v28 = sub_11716A0(a1 + 48, a2, a3, 0);
    v29 = *(_QWORD **)(a1 + 616);
    v30 = v28;
    if ( v29 )
    {
      v31 = *((_DWORD *)v29 - 1);
      if ( v31 == *((_DWORD *)v29 - 2) )
      {
        v88 = (3 * v31 + 1) >> 1;
        v89 = 8 * v88 + 8;
        if ( 8 * v31 + 8 >= v89 || v31 >= v88 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v101, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v101);
          sub_233E40((__int64)v101);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v90 = (unsigned int *)sub_186B300(v29 - 1, v89);
        v91 = v90[1];
        v29 = v90 + 2;
        *v90 = v88;
        *(_QWORD *)(a1 + 616) = v90 + 2;
        LODWORD(v90) = v91;
        v32 = &v29[v91];
        v33 = (_DWORD)v90 + 1;
      }
      else
      {
        v32 = &v29[v31];
        v33 = v31 + 1;
      }
    }
    else
    {
      v31 = 0;
      v92 = (_QWORD *)sub_186B270(0x18u);
      *v92 = 2;
      v33 = 1;
      v29 = v92 + 1;
      *(_QWORD *)(a1 + 616) = v29;
      v32 = v29;
    }
    *v32 = v30;
    *((_DWORD *)v29 - 1) = v33;
    v34 = *(_BYTE **)(a1 + 624);
    if ( v34 )
    {
      v35 = *((_DWORD *)v34 - 1);
      if ( v35 == *((_DWORD *)v34 - 2) )
      {
        v85 = (3 * v35 + 1) >> 1;
        if ( v35 + 8 >= v85 + 8 || v35 >= v85 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v101, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v101);
          sub_233E40((__int64)v101);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v86 = (unsigned int *)sub_186B300(v34 - 8, v85 + 8);
        v87 = v86[1];
        v34 = v86 + 2;
        *v86 = v85;
        *(_QWORD *)(a1 + 624) = v86 + 2;
        LODWORD(v86) = v87;
        v38 = &v34[v87];
        v37 = (_DWORD)v86 + 1;
      }
      else
      {
        v36 = v35;
        v37 = v35 + 1;
        v38 = &v34[v36];
      }
    }
    else
    {
      v94 = (_QWORD *)sub_186B270(0xAu);
      *v94 = 2;
      v37 = 1;
      v34 = v94 + 1;
      *(_QWORD *)(a1 + 624) = v34;
      v38 = v34;
    }
    v39 = *(_QWORD **)(a1 + 16);
    *v38 = 1;
    *((_DWORD *)v34 - 1) = v37;
    if ( v39 )
    {
      v40 = *((unsigned int *)v39 - 1);
      if ( (_DWORD)v40 == *((_DWORD *)v39 - 2) )
      {
        v77 = (unsigned int)(3 * v40 + 1) >> 1;
        v78 = 8 * v77 + 8;
        if ( 8 * (int)v40 + 8 >= v78 || (unsigned int)v40 >= v77 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v101, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v101);
          sub_233E40((__int64)v101);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v79 = sub_186B270(v78);
        v80 = *(_QWORD *)(a1 + 16);
        v81 = (_DWORD *)v79;
        v39 = (_QWORD *)(v79 + 8);
        if ( v80 )
        {
          v82 = *(unsigned int *)(v80 - 4);
          *(_DWORD *)(v79 + 4) = v82;
          v83 = 0;
          v84 = 8 * v82;
          if ( v84 )
          {
            do
            {
              *(_QWORD *)&v81[v83 / 4 + 2] = *(_QWORD *)(v80 + v83);
              v83 += 8LL;
            }
            while ( v84 != v83 );
          }
          sub_186B220((void *)(v80 - 8));
          v41 = &v39[v81[1]];
        }
        else
        {
          *(_DWORD *)(v79 + 4) = 0;
          v41 = (_QWORD *)(v79 + 8);
        }
        *(_QWORD *)(a1 + 16) = v39;
        *v81 = v77;
      }
      else
      {
        v41 = &v39[v40];
      }
    }
    else
    {
      v93 = (_QWORD *)sub_186B270(0x18u);
      *v93 = 2;
      v39 = v93 + 1;
      *(_QWORD *)(a1 + 16) = v93 + 1;
      v41 = v93 + 1;
    }
    *v41 = 2;
    v42 = (_DWORD *)(v30 + 20);
    ++*((_DWORD *)v39 - 1);
    v43 = 4LL * *(unsigned int *)(v30 + 4);
    if ( v43 )
    {
      v98 = v31;
      v97 = (_DWORD *)(v30 + 20 + v43);
      do
      {
        v45 = (unsigned int)*v42;
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 24LL) + 32LL))(
          *(_QWORD *)(*(_QWORD *)a1 + 24LL),
          *v42 >> 1);
        v46 = *(_QWORD *)(a1 + 632);
        if ( v46 )
        {
          v96 = *(_DWORD *)(v46 - 4);
          if ( v96 < (int)v45 + 1 )
          {
            v99 = v45;
            v95 = v45 + 1;
            v100 = v42;
LABEL_50:
            while ( 1 )
            {
              v53 = *(_DWORD *)(v46 - 8);
              if ( v53 >= v95 )
                break;
              v54 = (3 * v53 + 1) >> 1;
              v55 = 8 * v54 + 8;
              if ( 8 * v53 + 8 >= (unsigned int)v55 || v53 >= v54 )
              {
                v8 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v101, "Overflow encountered when expanding vector");
                *v8 = (char *)off_1C63128;
                sub_2333C0(v8 + 1, v101);
                sub_233E40((__int64)v101);
                __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v56 = (unsigned int *)sub_186B270(v55);
              v57 = *(__int64 **)(a1 + 632);
              v58 = v56;
              v46 = (unsigned __int64)(v56 + 2);
              if ( v57 )
              {
                v59 = *((unsigned int *)v57 - 1);
                v60 = 8 * v59;
                v56[1] = v59;
                v61 = &v57[v59];
                if ( v57 != v61 )
                {
                  v62 = v60 - 8;
                  v63 = v57;
                  if ( (unsigned __int64)(v60 - 8) <= 8 || v46 < (unsigned __int64)(v57 + 2) && v57 < (__int64 *)v56 + 3 )
                  {
                    v73 = v56 + 2;
                    do
                    {
                      v74 = *v63;
                      *v63++ = 0;
                      v73 += 2;
                      *((_QWORD *)v73 - 1) = v74;
                    }
                    while ( v63 != v61 );
                  }
                  else
                  {
                    v64 = 0;
                    v65 = (v62 >> 3) + 1;
                    do
                    {
                      v66 = _mm_loadu_si128((const __m128i *)&v57[v64 / 2]);
                      *(_OWORD *)&v57[v64 / 2] = 0;
                      *(__m128i *)&v56[v64 + 2] = v66;
                      v64 += 4LL;
                    }
                    while ( 4 * (v65 >> 1) != v64 );
                    if ( (v65 & 1) != 0 )
                    {
                      v67 = 2 * (v65 & 0xFFFFFFFFFFFFFFFELL);
                      v68 = v57[v67 / 2];
                      v57[v67 / 2] = 0;
                      *(_QWORD *)&v56[v67 + 2] = v68;
                    }
                  }
                }
                v69 = &v57[v59];
                if ( (_DWORD)v59 )
                {
                  do
                  {
                    while ( *v57 )
                    {
                      v70 = (void *)(*v57++ - 8);
                      sub_186B220(v70);
                      if ( v57 == v69 )
                        goto LABEL_65;
                    }
                    ++v57;
                  }
                  while ( v57 != v69 );
LABEL_65:
                  v57 = *(__int64 **)(a1 + 632);
                }
                sub_186B220(v57 - 1);
                *(_QWORD *)(a1 + 632) = v46;
                *v58 = v54;
              }
              else
              {
                v56[1] = 0;
                *(_QWORD *)(a1 + 632) = v46;
                *v56 = v54;
              }
            }
            v45 = v99;
            *(_DWORD *)(v46 - 4) = v95;
            v71 = 8LL * v95;
            v42 = v100;
            v72 = 8LL * v96;
            if ( v72 != v71 )
              memset((void *)(v46 + v72), 0, v71 - v72);
          }
        }
        else if ( (_DWORD)v45 != -1 )
        {
          v95 = v45 + 1;
          v96 = 0;
          v75 = (_QWORD *)sub_186B270(0x18u);
          v99 = v45;
          v100 = v42;
          v46 = (unsigned __int64)(v75 + 1);
          *v75 = 2;
          *(_QWORD *)(a1 + 632) = v75 + 1;
          goto LABEL_50;
        }
        v47 = (_QWORD *)(v46 + 8 * v45);
        v48 = (_QWORD *)*v47;
        if ( *v47 )
        {
          v49 = *((unsigned int *)v48 - 1);
          if ( (_DWORD)v49 == *((_DWORD *)v48 - 2) )
          {
            v50 = (unsigned int)(3 * v49 + 1) >> 1;
            v51 = 4 * v50 + 8;
            if ( 4 * (int)v49 + 8 >= (unsigned int)v51 || (unsigned int)v49 >= v50 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v101, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v101);
              sub_233E40((__int64)v101);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v52 = (unsigned int *)sub_186B300(v48 - 1, v51);
            v48 = v52 + 2;
            *v47 = v52 + 2;
            *v52 = v50;
            v44 = &v52[v52[1] + 2];
          }
          else
          {
            v44 = (unsigned int *)v48 + v49;
          }
        }
        else
        {
          v76 = (_QWORD *)sub_186B270(0x10u);
          v48 = v76 + 1;
          *v76 = 2;
          *v47 = v76 + 1;
          v44 = (unsigned int *)(v76 + 1);
        }
        ++v42;
        *v44 = v98;
        ++*((_DWORD *)v48 - 1);
      }
      while ( v97 != v42 );
    }
  }
}

