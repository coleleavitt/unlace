void __fastcall sub_238B20(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // rax
  void (__fastcall ***v4)(_QWORD); // r13
  __int64 v5; // r12
  __int64 v6; // rax
  int v7; // r14d
  _QWORD *v8; // rdx
  __int64 v9; // rax
  _DWORD *v10; // rax
  int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r15d
  __int64 v15; // rax
  __int64 *v16; // r12
  __int64 *v17; // r13
  __int64 v18; // rsi
  __m128i *v19; // rax
  __m128i *v20; // r15
  __m128i v21; // xmm0
  __m128i *v22; // r12
  void *v23; // rdi
  void *v24; // rdi
  __int64 *v25; // rbx
  __int64 *v26; // r13
  __int64 v27; // rsi
  __int64 v28; // rdi
  bool v29; // zf
  unsigned int v30; // r13d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // r12
  void *v36; // rbx
  _QWORD **v37; // r13
  _QWORD **v38; // rdi
  __int64 v39; // rax
  _QWORD **v40; // r14
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // r12
  __int64 v44; // rsi
  __int64 v45; // rdi
  unsigned int *v46; // rdx
  _QWORD *v47; // rbp
  unsigned int v48; // eax
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 *v54; // rbp
  __int64 *v55; // rbx
  _QWORD *v56; // r12
  unsigned int *v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rsi
  _DWORD *v61; // rdi
  __int64 v62; // rax
  int v63; // esi
  __int64 v64; // rax
  __int64 v65; // rdx
  unsigned int v66; // r8d
  unsigned int *v67; // rcx
  unsigned int v68; // eax
  unsigned int *v69; // r8
  unsigned int v70; // eax
  unsigned int v71; // r9d
  size_t v72; // rsi
  unsigned int *v73; // rax
  __int64 v74; // r9
  __int64 v75; // rsi
  __int64 v76; // rdi
  _QWORD *v77; // rcx
  unsigned int v78; // eax
  __int64 v79; // rsi
  int v80; // eax
  unsigned int **v81; // rsi
  _DWORD *v82; // rsi
  int v83; // eax
  _QWORD *v84; // rax
  __int64 v85; // rax
  unsigned int v86; // r9d
  size_t v87; // rsi
  unsigned int *v88; // rax
  __int64 v89; // rsi
  unsigned int v90; // r9d
  unsigned int v91; // eax
  unsigned int *v92; // rax
  _QWORD *v93; // rax
  _QWORD *v94; // rcx
  char **v95; // rbx
  __int64 v96; // rdx
  char **exception; // rbx
  __int64 v98; // rdx
  _QWORD *ptra; // [rsp+8h] [rbp-90h]
  _QWORD *ptrb; // [rsp+8h] [rbp-90h]
  _QWORD *ptr; // [rsp+8h] [rbp-90h]
  _QWORD *ptrc; // [rsp+8h] [rbp-90h]
  _QWORD *ptrd; // [rsp+8h] [rbp-90h]
  unsigned int *v104; // [rsp+10h] [rbp-88h]
  __int64 v105; // [rsp+10h] [rbp-88h]
  unsigned int *v106; // [rsp+10h] [rbp-88h]
  unsigned int v107; // [rsp+10h] [rbp-88h]
  unsigned int v108; // [rsp+10h] [rbp-88h]
  __int64 v109; // [rsp+10h] [rbp-88h]
  unsigned int v110; // [rsp+18h] [rbp-80h]
  __int64 v111; // [rsp+18h] [rbp-80h]
  __int64 v112; // [rsp+18h] [rbp-80h]
  unsigned int *v113; // [rsp+18h] [rbp-80h]
  __m128i *v114; // [rsp+20h] [rbp-78h]
  __int64 v115; // [rsp+28h] [rbp-70h]
  unsigned int *v116; // [rsp+30h] [rbp-68h]
  unsigned int *v117; // [rsp+30h] [rbp-68h]
  __int64 v118[11]; // [rsp+40h] [rbp-58h] BYREF

  v1 = a1;
  if ( *(_QWORD *)(a1 + 328) )
    goto LABEL_120;
  v2 = a1 + 16;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 304))(*(_QWORD *)(a1 + 176), a1 + 184, a1 + 16);
  v4 = *(void (__fastcall ****)(_QWORD))(a1 + 328);
  v5 = v3;
  if ( (void (__fastcall ***)(_QWORD))v3 != v4 )
  {
    if ( v4 )
    {
      (**v4)(*(_QWORD *)(a1 + 328));
      sub_186B220(v4);
    }
    *(_QWORD *)(a1 + 328) = v5;
  }
  sub_1816990(a1 + 288);
  sub_180C250(a1 + 136);
  v6 = *(_QWORD *)(a1 + 120);
  v7 = v6 ? *(_DWORD *)(v6 - 4) : 0;
  v8 = *(_QWORD **)(a1 + 128);
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    if ( (_DWORD)v9 == *((_DWORD *)v8 - 2) )
    {
      v30 = (unsigned int)(3 * v9 + 1) >> 1;
      v31 = 4 * v30 + 8;
      if ( 4 * (int)v9 + 8 >= (unsigned int)v31 || (unsigned int)v9 >= v30 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_A3E10(v118, "Overflow encountered when expanding vector", v98);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v118);
        sub_233E40((__int64)v118);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v32 = (unsigned int *)sub_186B300(v8 - 1, v31);
      v8 = v32 + 2;
      *v32 = v30;
      v33 = v32[1];
      *(_QWORD *)(a1 + 128) = v8;
      v10 = (_DWORD *)v8 + v33;
    }
    else
    {
      v10 = (_DWORD *)v8 + v9;
    }
  }
  else
  {
    v84 = (_QWORD *)sub_186B270(0x10u);
    v8 = v84 + 1;
    *v84 = 2;
    *(_QWORD *)(a1 + 128) = v84 + 1;
    v10 = v84 + 1;
  }
  *v10 = v7;
  ++*((_DWORD *)v8 - 1);
  v11 = *(_DWORD *)(a1 + 24);
  v12 = sub_180C100(a1 + 136, 24);
  *(_DWORD *)(v12 + 16) = v11;
  *(_QWORD *)v12 = &off_1C4C070;
  *(_QWORD *)(v12 + 8) = a1 + 24;
  v118[0] = v12;
  sub_22FEE0((_QWORD *)(a1 + 120), v118);
  v13 = *(_QWORD *)(a1 + 112);
  v14 = v13 ? *(_DWORD *)(v13 - 4) : 0;
  v15 = sub_180C100(a1 + 136, 24);
  *(_QWORD *)v15 = off_1C4C048;
  *(_DWORD *)(v15 + 8) = v14;
  *(_QWORD *)(v15 + 16) = v2;
  v118[0] = v15;
  sub_22FEE0((_QWORD *)(a1 + 120), v118);
  v16 = *(__int64 **)(a1 + 320);
  if ( !v16 || (v17 = &v16[*((unsigned int *)v16 - 1)], v17 == v16) )
  {
LABEL_120:
    if ( *(_QWORD *)(a1 + 336) )
      return;
  }
  else
  {
    do
    {
      v18 = *v16++;
      sub_F87F20(v2, v18);
    }
    while ( v17 != v16 );
    if ( *(_QWORD *)(a1 + 336) )
      return;
  }
  v19 = (__m128i *)sub_186B270(0x68u);
  v20 = *(__m128i **)(a1 + 336);
  v21 = _mm_loadl_epi64((const __m128i *)(a1 + 176));
  v22 = v19;
  v19[1].m128i_i64[0] = 0;
  v19[6].m128i_i8[0] = 0;
  *v19 = _mm_unpacklo_epi64(v21, (__m128i)(unsigned __int64)(a1 + 192));
  v19[2].m128i_i64[0] = 0;
  v19[2].m128i_i64[1] = (__int64)&off_1C62200;
  v19[3].m128i_i64[1] = 0;
  v19[4].m128i_i64[0] = 0;
  v19[5].m128i_i64[0] = 0;
  v19[5].m128i_i64[1] = 0;
  v19[1].m128i_i64[1] = v21.m128i_i64[0];
  if ( v19 != v20 )
  {
    if ( v20 )
    {
      v23 = (void *)v20[5].m128i_i64[1];
      v20[2].m128i_i64[1] = (__int64)&off_1C62200;
      if ( v23 )
        sub_186B220(v23);
      v24 = (void *)v20[4].m128i_i64[0];
      if ( v24 )
        sub_186B220(v24);
      v25 = (__int64 *)v20[2].m128i_i64[0];
      if ( v25 )
      {
        v26 = &v25[*((unsigned int *)v25 - 1)];
        if ( v25 >= v26 )
          goto LABEL_46;
        do
        {
          v27 = *v25;
          if ( *v25 )
          {
            v28 = v20[1].m128i_i64[1];
            v29 = (*(_DWORD *)(v27 + 8))-- == 1;
            if ( v29 )
              sub_15D7BC0(v28, v27);
          }
          ++v25;
        }
        while ( v25 < v26 );
        v25 = (__int64 *)v20[2].m128i_i64[0];
        if ( v25 )
LABEL_46:
          sub_186B220(v25 - 1);
      }
      v37 = (_QWORD **)v20[1].m128i_i64[0];
      if ( v37 )
      {
        v39 = *((unsigned int *)v37 - 1);
        v38 = &v37[v39];
        if ( v37 == v38 )
          goto LABEL_42;
        v114 = v22;
        v40 = &v37[v39];
        v115 = v1;
        do
        {
          v34 = *v37;
          if ( *v37 )
          {
            v41 = v34[5];
            if ( v41 )
            {
              v42 = *(unsigned int *)(v41 - 4);
              if ( (_DWORD)v42 )
              {
                ptr = *v37;
                v43 = v41 + 48 * v42;
                do
                {
                  v49 = *(_QWORD *)(v41 + 32);
                  if ( v49 )
                  {
                    v50 = *(_QWORD *)(v41 + 40);
                    v29 = (*(_DWORD *)(v49 + 8))-- == 1;
                    if ( v29 )
                      sub_15D7BC0(v50, v49);
                  }
                  v44 = *(_QWORD *)(v41 + 16);
                  if ( v44 )
                  {
                    v45 = *(_QWORD *)(v41 + 24);
                    v29 = (*(_DWORD *)(v44 + 8))-- == 1;
                    if ( v29 )
                      sub_15D7BC0(v45, v44);
                  }
                  v46 = *(unsigned int **)v41;
                  if ( *(_QWORD *)v41 )
                  {
                    v47 = *(_QWORD **)(v41 + 8);
                    v48 = (*v46 + 0x3FFFFFFF) & 0x3FFFFFFF | *v46 & 0xC0000000;
                    *v46 = v48;
                    if ( (v48 & 0x3FFFFFFF) == 0 )
                    {
                      v61 = (_DWORD *)v47[83];
                      if ( v61 )
                      {
                        v62 = (unsigned int)*(v61 - 1);
                        if ( (_DWORD)v62 != *(v61 - 2) )
                        {
                          v63 = v62 + 1;
                          *(_QWORD *)&v61[2 * v62] = v46;
                          *(v61 - 1) = v62 + 1;
                          goto LABEL_83;
                        }
                        v71 = (unsigned int)(3 * v62 + 1) >> 1;
                        v72 = 8 * v71 + 8;
                        if ( 8 * (int)v62 + 8 < (unsigned int)v72 && (unsigned int)v62 < v71 )
                        {
                          v110 = (unsigned int)(3 * v62 + 1) >> 1;
                          v104 = v46;
                          v73 = (unsigned int *)sub_186B300(v61 - 2, v72);
                          v61 = v73 + 2;
                          v47[83] = v73 + 2;
                          *v73 = v110;
                          v74 = v73[1];
                          v63 = v74 + 1;
                          *(_QWORD *)&v73[2 * v74 + 2] = v104;
                          v73[1] = v74 + 1;
                          goto LABEL_83;
                        }
LABEL_115:
                        v95 = (char **)__cxa_allocate_exception(0x28u);
                        sub_A3E10(v118, "Overflow encountered when expanding vector", v96);
                        *v95 = (char *)off_1C63128;
                        sub_2333C0(v95 + 1, v118);
                        sub_233E40((__int64)v118);
                        __cxa_throw(
                          v95,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v106 = v46;
                      v85 = sub_186B270(0x18u);
                      v63 = 1;
                      v61 = (_DWORD *)(v85 + 8);
                      *(_QWORD *)v85 = 2;
                      v47[83] = v85 + 8;
                      *(_QWORD *)(v85 + 8) = v106;
                      *(_DWORD *)(v85 + 4) = 1;
LABEL_83:
                      while ( v63 )
                      {
                        v64 = (unsigned int)(v63 - 1);
                        v65 = *(_QWORD *)&v61[2 * v64];
                        v66 = v63 - 1;
                        *(v61 - 1) = v64;
                        if ( *(char *)(v65 + 3) < 0 )
                        {
                          v75 = *(_QWORD *)(v65 + 8);
                          if ( v75 )
                          {
                            v76 = v47[81];
                            v29 = (*(_DWORD *)(v75 + 8))-- == 1;
                            if ( v29 )
                            {
                              v105 = v65;
                              sub_15D7BC0(v76, v75);
                              v65 = v105;
                            }
                          }
                          sub_17E9C40(v47[82], 16, v65);
                        }
                        else
                        {
                          v67 = *(unsigned int **)(v65 + 8);
                          v68 = (*v67 + 0x3FFFFFFF) & 0x3FFFFFFF | *v67 & 0xC0000000;
                          *v67 = v68;
                          if ( (v68 & 0x3FFFFFFF) == 0 )
                          {
                            if ( v66 == *(v61 - 2) )
                            {
                              v117 = v67;
                              v90 = (3 * v66 + 1) >> 1;
                              v112 = v65;
                              v91 = 8 * v90 + 8;
                              if ( 8 * v63 >= v91 )
                                goto LABEL_115;
                              v108 = (3 * v66 + 1) >> 1;
                              if ( v66 >= v90 )
                                goto LABEL_115;
                              v92 = (unsigned int *)sub_186B300(v61 - 2, v91);
                              v65 = v112;
                              v82 = v92 + 2;
                              v67 = v117;
                              v47[83] = v92 + 2;
                              *v92 = v108;
                            }
                            else
                            {
                              v82 = (_DWORD *)v47[83];
                            }
                            v83 = *(v82 - 1);
                            *(_QWORD *)&v82[2 * v83] = v67;
                            *(v82 - 1) = v83 + 1;
                          }
                          v69 = *(unsigned int **)(v65 + 16);
                          v70 = (*v69 + 0x3FFFFFFF) & 0x3FFFFFFF | *v69 & 0xC0000000;
                          *v69 = v70;
                          if ( (v70 & 0x3FFFFFFF) == 0 )
                          {
                            v77 = (_QWORD *)v47[83];
                            if ( v77 )
                            {
                              v78 = *((_DWORD *)v77 - 1);
                              if ( v78 == *((_DWORD *)v77 - 2) )
                              {
                                v116 = v69;
                                v86 = (3 * v78 + 1) >> 1;
                                v111 = v65;
                                v87 = 8 * v86 + 8;
                                if ( 8 * v78 + 8 >= (unsigned int)v87 )
                                  goto LABEL_115;
                                v107 = (3 * v78 + 1) >> 1;
                                if ( v78 >= v86 )
                                  goto LABEL_115;
                                v88 = (unsigned int *)sub_186B300(v77 - 1, v87);
                                v65 = v111;
                                v89 = v88[1];
                                v77 = v88 + 2;
                                v69 = v116;
                                v47[83] = v88 + 2;
                                *v88 = v107;
                                LODWORD(v88) = v89;
                                v81 = (unsigned int **)&v77[v89];
                                v80 = (_DWORD)v88 + 1;
                              }
                              else
                              {
                                v79 = v78;
                                v80 = v78 + 1;
                                v81 = (unsigned int **)&v77[v79];
                              }
                            }
                            else
                            {
                              v113 = v69;
                              v109 = v65;
                              v93 = (_QWORD *)sub_186B270(0x18u);
                              v65 = v109;
                              v69 = v113;
                              v94 = v93;
                              *v93 = 2;
                              v80 = 1;
                              v77 = v94 + 1;
                              v47[83] = v77;
                              v81 = (unsigned int **)v77;
                            }
                            *v81 = v69;
                            *((_DWORD *)v77 - 1) = v80;
                          }
                          sub_17E9C40(v47[82], 24, v65);
                        }
                        v61 = (_DWORD *)v47[83];
                        if ( !v61 )
                          break;
                        v63 = *(v61 - 1);
                      }
                    }
                  }
                  v41 += 48;
                }
                while ( v41 != v43 );
                v34 = ptr;
                v41 = ptr[5];
              }
              ptrc = v34;
              sub_186B220((void *)(v41 - 8));
              v34 = ptrc;
            }
            v51 = v34[3];
            if ( v51 )
            {
              v52 = v34[4];
              v29 = (*(_DWORD *)(v51 + 8))-- == 1;
              if ( v29 )
              {
                ptrd = v34;
                sub_15D7BC0(v52, v51);
                v34 = ptrd;
              }
            }
            v35 = v34[2];
            if ( v35 )
            {
              v53 = *(unsigned int *)(v35 - 4);
              if ( (_DWORD)v53 )
              {
                v54 = (__int64 *)v34[2];
                v55 = (__int64 *)(v35 + 32 * v53);
                v56 = v34;
                do
                {
                  v60 = v54[1];
                  v58 = *v54;
                  if ( v60 )
                  {
                    v29 = (*(_DWORD *)(v60 + 8))-- == 1;
                    if ( v29 )
                    {
                      sub_15D7BC0(v58, v60);
                      v58 = *v54;
                    }
                  }
                  v57 = (unsigned int *)v54[3];
                  if ( v57 )
                  {
                    sub_234C20((__int64 *)(v58 + 648), v57);
                    v58 = *v54;
                  }
                  v59 = v54[2];
                  if ( v59 )
                  {
                    v29 = (*(_DWORD *)(v59 + 8))-- == 1;
                    if ( v29 )
                      sub_15D7BC0(v58, v59);
                  }
                  v54 += 4;
                }
                while ( v54 != v55 );
                v34 = v56;
                v35 = v56[2];
              }
              ptra = v34;
              sub_186B220((void *)(v35 - 8));
              v34 = ptra;
            }
            v36 = (void *)v34[1];
            if ( v36 )
            {
              ptrb = v34;
              sub_1695230(v34[1]);
              sub_186B220(v36);
              v34 = ptrb;
            }
            sub_186B220(v34);
          }
          ++v37;
        }
        while ( v40 != v37 );
        v38 = (_QWORD **)v20[1].m128i_i64[0];
        v22 = v114;
        v1 = v115;
        if ( v38 )
        {
LABEL_42:
          *((_DWORD *)v38 - 1) = 0;
          sub_186B220(v38 - 1);
        }
      }
      sub_186B220(v20);
    }
    *(_QWORD *)(v1 + 336) = v22;
  }
}

