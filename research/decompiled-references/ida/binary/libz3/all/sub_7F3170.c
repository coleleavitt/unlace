void __fastcall sub_7F3170(__int64 a1, unsigned int a2, unsigned int *a3)
{
  char **v3; // rbp
  char **v4; // rbp
  char **v5; // rbp
  char **v6; // rbp
  char **exception; // rbp
  char **v8; // rbp
  __int64 v12; // rax
  _QWORD *v13; // rdx
  int v14; // r13d
  _QWORD *v15; // rax
  _DWORD *i; // rax
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // r13
  unsigned int v24; // ebx
  __int64 *v25; // rcx
  int v26; // eax
  _BYTE *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  _BYTE *v31; // rcx
  _QWORD *v32; // r12
  __int64 v33; // rax
  _QWORD *v34; // rax
  _DWORD *v35; // r14
  __int64 v36; // rax
  unsigned int *v37; // rax
  __int64 v38; // r13
  unsigned __int64 v39; // r15
  _QWORD *v40; // r13
  _QWORD *v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // r15d
  size_t v44; // rsi
  unsigned int *v45; // rax
  unsigned int v46; // r14d
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  unsigned int v52; // r12d
  unsigned int v53; // eax
  unsigned int *v54; // rax
  __int64 v55; // rcx
  unsigned int v56; // eax
  unsigned int v57; // ecx
  unsigned int v58; // ebx
  size_t v59; // rdi
  unsigned int *v60; // rax
  __int64 *v61; // r14
  unsigned int *v62; // r12
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 *v65; // r10
  unsigned __int64 v66; // rsi
  __int64 *v67; // r9
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rsi
  __m128i v70; // xmm0
  unsigned __int64 v71; // rsi
  __int64 v72; // r9
  __int64 *v73; // r13
  void *v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rax
  _DWORD *v77; // rdx
  __int64 v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  unsigned int v81; // r12d
  unsigned int *v82; // rax
  __int64 v83; // rcx
  unsigned int v84; // r14d
  unsigned int v85; // edx
  __int64 v86; // rax
  __int64 v87; // rsi
  _DWORD *v88; // r15
  __int64 v89; // rcx
  unsigned __int64 v90; // rax
  __int64 v91; // rcx
  _QWORD *v92; // rdx
  _QWORD *v93; // rdx
  _QWORD *v94; // rax
  unsigned int v95; // [rsp+0h] [rbp-88h]
  unsigned int v96; // [rsp+4h] [rbp-84h]
  _DWORD *v97; // [rsp+8h] [rbp-80h]
  unsigned int v98; // [rsp+10h] [rbp-78h]
  unsigned int v99; // [rsp+14h] [rbp-74h]
  _DWORD *v100; // [rsp+18h] [rbp-70h]
  __int64 v101[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( !*(_BYTE *)(a1 + 8) )
    return;
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
    for ( i = v15 + 1; ; i = (_DWORD *)v13 + v49 )
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
      v46 = (unsigned int)(3 * v19 + 1) >> 1;
      v47 = 4 * v46 + 8;
      if ( 4 * (int)v19 + 8 >= (unsigned int)v47 || (unsigned int)v19 >= v46 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v101, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v101);
        sub_233E40((__int64)v101);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v48 = (unsigned int *)sub_186B300(v13 - 1, v47);
      v13 = v48 + 2;
      *v48 = v46;
      v49 = v48[1];
      *(_QWORD *)(a1 + 24) = v13;
    }
  }
LABEL_12:
  if ( !a2 )
  {
LABEL_16:
    v21 = sub_11716A0(a1 + 48, a2, a3, 0);
    v22 = *(_QWORD **)(a1 + 616);
    v23 = v21;
    if ( v22 )
    {
      v24 = *((_DWORD *)v22 - 1);
      if ( v24 == *((_DWORD *)v22 - 2) )
      {
        v52 = (3 * v24 + 1) >> 1;
        v53 = 8 * v52 + 8;
        if ( 8 * v24 + 8 >= v53 || v24 >= v52 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v101, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v101);
          sub_233E40((__int64)v101);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v54 = (unsigned int *)sub_186B300(v22 - 1, v53);
        v55 = v54[1];
        v22 = v54 + 2;
        *v54 = v52;
        *(_QWORD *)(a1 + 616) = v54 + 2;
        LODWORD(v54) = v55;
        v25 = &v22[v55];
        v26 = (_DWORD)v54 + 1;
      }
      else
      {
        v25 = &v22[v24];
        v26 = v24 + 1;
      }
    }
    else
    {
      v24 = 0;
      v92 = (_QWORD *)sub_186B270(0x18u);
      *v92 = 2;
      v26 = 1;
      v22 = v92 + 1;
      *(_QWORD *)(a1 + 616) = v22;
      v25 = v22;
    }
    *v25 = v23;
    *((_DWORD *)v22 - 1) = v26;
    v27 = *(_BYTE **)(a1 + 624);
    if ( v27 )
    {
      v28 = *((_DWORD *)v27 - 1);
      if ( v28 == *((_DWORD *)v27 - 2) )
      {
        v81 = (3 * v28 + 1) >> 1;
        if ( v28 + 8 >= v81 + 8 || v28 >= v81 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v101, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v101);
          sub_233E40((__int64)v101);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v82 = (unsigned int *)sub_186B300(v27 - 8, v81 + 8);
        v83 = v82[1];
        v27 = v82 + 2;
        *v82 = v81;
        *(_QWORD *)(a1 + 624) = v82 + 2;
        LODWORD(v82) = v83;
        v31 = &v27[v83];
        v30 = (_DWORD)v82 + 1;
      }
      else
      {
        v29 = v28;
        v30 = v28 + 1;
        v31 = &v27[v29];
      }
    }
    else
    {
      v93 = (_QWORD *)sub_186B270(0xAu);
      *v93 = 2;
      v30 = 1;
      v27 = v93 + 1;
      *(_QWORD *)(a1 + 624) = v27;
      v31 = v27;
    }
    v32 = *(_QWORD **)(a1 + 16);
    *v31 = 0;
    *((_DWORD *)v27 - 1) = v30;
    if ( v32 )
    {
      v33 = *((unsigned int *)v32 - 1);
      if ( (_DWORD)v33 == *((_DWORD *)v32 - 2) )
      {
        v84 = (unsigned int)(3 * v33 + 1) >> 1;
        v85 = 8 * v84 + 8;
        if ( 8 * (int)v33 + 8 >= v85 || (unsigned int)v33 >= v84 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v101, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v101);
          sub_233E40((__int64)v101);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v86 = sub_186B270(v85);
        v87 = *(_QWORD *)(a1 + 16);
        v88 = (_DWORD *)v86;
        v32 = (_QWORD *)(v86 + 8);
        if ( v87 )
        {
          v89 = *(unsigned int *)(v87 - 4);
          *(_DWORD *)(v86 + 4) = v89;
          v90 = 0;
          v91 = 8 * v89;
          if ( v91 )
          {
            do
            {
              *(_QWORD *)&v88[v90 / 4 + 2] = *(_QWORD *)(v87 + v90);
              v90 += 8LL;
            }
            while ( v91 != v90 );
          }
          sub_186B220((void *)(v87 - 8));
          v34 = &v32[v88[1]];
        }
        else
        {
          *(_DWORD *)(v86 + 4) = 0;
          v34 = (_QWORD *)(v86 + 8);
        }
        *(_QWORD *)(a1 + 16) = v32;
        *v88 = v84;
      }
      else
      {
        v34 = &v32[v33];
      }
    }
    else
    {
      v94 = (_QWORD *)sub_186B270(0x18u);
      *v94 = 2;
      v32 = v94 + 1;
      *(_QWORD *)(a1 + 16) = v94 + 1;
      v34 = v94 + 1;
    }
    *v34 = 2;
    v35 = (_DWORD *)(v23 + 20);
    ++*((_DWORD *)v32 - 1);
    v36 = 4LL * *(unsigned int *)(v23 + 4);
    if ( !v36 )
      return;
    v98 = v24;
    v97 = (_DWORD *)(v23 + 20 + v36);
    while ( 1 )
    {
      v38 = (unsigned int)*v35;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 24LL) + 32LL))(
        *(_QWORD *)(*(_QWORD *)a1 + 24LL),
        *v35 >> 1);
      v39 = *(_QWORD *)(a1 + 632);
      if ( v39 )
      {
        v96 = *(_DWORD *)(v39 - 4);
        if ( v96 < (int)v38 + 1 )
        {
          v99 = v38;
          v95 = v38 + 1;
          v100 = v35;
LABEL_51:
          while ( 1 )
          {
            v56 = *(_DWORD *)(v39 - 8);
            v57 = v95;
            if ( v56 >= v95 )
              break;
            while ( 1 )
            {
              v58 = (3 * v56 + 1) >> 1;
              v59 = 8 * v58 + 8;
              if ( 8 * v56 + 8 >= (unsigned int)v59 || v56 >= v58 )
              {
                v5 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v101, "Overflow encountered when expanding vector");
                *v5 = (char *)off_1C63128;
                sub_2333C0(v5 + 1, v101);
                sub_233E40((__int64)v101);
                __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v60 = (unsigned int *)sub_186B270(v59);
              v61 = *(__int64 **)(a1 + 632);
              v62 = v60;
              v39 = (unsigned __int64)(v60 + 2);
              if ( !v61 )
                break;
              v63 = *((unsigned int *)v61 - 1);
              v64 = 8 * v63;
              v60[1] = v63;
              v65 = &v61[v63];
              if ( v61 != v65 )
              {
                v66 = v64 - 8;
                v67 = v61;
                if ( (unsigned __int64)(v64 - 8) <= 8 || v39 < (unsigned __int64)(v61 + 2) && v61 < (__int64 *)v60 + 3 )
                {
                  v77 = v60 + 2;
                  do
                  {
                    v78 = *v67;
                    *v67++ = 0;
                    v77 += 2;
                    *((_QWORD *)v77 - 1) = v78;
                  }
                  while ( v65 != v67 );
                }
                else
                {
                  v68 = 0;
                  v69 = (v66 >> 3) + 1;
                  do
                  {
                    v70 = _mm_loadu_si128((const __m128i *)&v61[v68 / 2]);
                    *(_OWORD *)&v61[v68 / 2] = 0;
                    *(__m128i *)&v60[v68 + 2] = v70;
                    v68 += 4LL;
                  }
                  while ( 4 * (v69 >> 1) != v68 );
                  if ( (v69 & 1) != 0 )
                  {
                    v71 = 2 * (v69 & 0xFFFFFFFFFFFFFFFELL);
                    v72 = v61[v71 / 2];
                    v61[v71 / 2] = 0;
                    *(_QWORD *)&v60[v71 + 2] = v72;
                  }
                }
              }
              v73 = &v61[v63];
              if ( (_DWORD)v63 )
              {
                do
                {
                  while ( *v61 )
                  {
                    v74 = (void *)(*v61++ - 8);
                    sub_186B220(v74);
                    if ( v61 == v73 )
                      goto LABEL_66;
                  }
                  ++v61;
                }
                while ( v61 != v73 );
LABEL_66:
                v61 = *(__int64 **)(a1 + 632);
              }
              sub_186B220(v61 - 1);
              *v62 = v58;
              v57 = v95;
              v56 = *(_DWORD *)(v39 - 8);
              *(_QWORD *)(a1 + 632) = v39;
              if ( v56 >= v95 )
                goto LABEL_68;
            }
            v60[1] = 0;
            *(_QWORD *)(a1 + 632) = v39;
            *v60 = v58;
          }
LABEL_68:
          v38 = v99;
          *(_DWORD *)(v39 - 4) = v57;
          v75 = 8LL * v57;
          v35 = v100;
          v76 = 8LL * v96;
          if ( v76 != v75 )
            memset((void *)(v39 + v76), 0, v75 - v76);
        }
      }
      else if ( (_DWORD)v38 != -1 )
      {
        v95 = v38 + 1;
        v96 = 0;
        v79 = (_QWORD *)sub_186B270(0x18u);
        v99 = v38;
        v100 = v35;
        v39 = (unsigned __int64)(v79 + 1);
        *v79 = 2;
        *(_QWORD *)(a1 + 632) = v79 + 1;
        goto LABEL_51;
      }
      v40 = (_QWORD *)(v39 + 8 * v38);
      v41 = (_QWORD *)*v40;
      if ( *v40 )
      {
        v42 = *((unsigned int *)v41 - 1);
        if ( (_DWORD)v42 == *((_DWORD *)v41 - 2) )
        {
          v43 = (unsigned int)(3 * v42 + 1) >> 1;
          v44 = 4 * v43 + 8;
          if ( 4 * (int)v42 + 8 >= (unsigned int)v44 || (unsigned int)v42 >= v43 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v101, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v101);
            sub_233E40((__int64)v101);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v45 = (unsigned int *)sub_186B300(v41 - 1, v44);
          v41 = v45 + 2;
          *v40 = v45 + 2;
          *v45 = v43;
          v37 = &v45[v45[1] + 2];
        }
        else
        {
          v37 = (unsigned int *)v41 + v42;
        }
      }
      else
      {
        v80 = (_QWORD *)sub_186B270(0x10u);
        v41 = v80 + 1;
        *v80 = 2;
        *v40 = v80 + 1;
        v37 = (unsigned int *)(v80 + 1);
      }
      ++v35;
      *v37 = v98;
      ++*((_DWORD *)v41 - 1);
      if ( v97 == v35 )
        return;
    }
  }
  v20 = a3;
  while ( 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 3288LL) + 4LL * *v20) == -1 )
    {
      if ( !*(_BYTE *)(a1 + 8) )
        break;
      v50 = *(_QWORD *)(a1 + 40);
      if ( v50 )
      {
        v51 = *v20 >> 1;
        if ( (unsigned int)v51 < *(_DWORD *)(v50 - 4) )
        {
          if ( *(_BYTE *)(v50 + v51) )
            break;
        }
      }
    }
    if ( &a3[a2] == ++v20 )
      goto LABEL_16;
  }
  sub_7F1790(a1, a2, a3);
}

