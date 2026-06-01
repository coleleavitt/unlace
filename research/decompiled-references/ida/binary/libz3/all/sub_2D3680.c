__int64 __fastcall sub_2D3680(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  int v4; // r9d
  __int64 v5; // r12
  _DWORD *v6; // rcx
  int v7; // r15d
  __int64 v8; // r14
  void *v9; // rdx
  _QWORD *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 result; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r14
  int v20; // r15d
  _QWORD *v21; // rax
  __int64 v22; // rax
  unsigned int v23; // r15d
  _QWORD *v24; // rdx
  __int64 v25; // rax
  unsigned int *v26; // rax
  unsigned int v27; // edi
  size_t v28; // rsi
  unsigned int *v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r14
  __int64 v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r14
  _QWORD *v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 *v43; // rcx
  _QWORD *v44; // rax
  unsigned int v45; // r15d
  unsigned int v46; // ecx
  unsigned int *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rsi
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  _QWORD *v54; // r14
  void *v55; // rdi
  void *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  void (__fastcall ***v59)(_QWORD); // rbx
  void *v60; // rdi
  _QWORD *v61; // rbx
  _QWORD *v62; // r15
  _QWORD *v63; // rax
  _QWORD *v64; // rcx
  _QWORD *v65; // r14
  _QWORD *v66; // r15
  __int64 v67; // rax
  _QWORD *v68; // rdi
  __int64 v69; // rax
  __int64 v70; // r14
  __int64 v71; // r15
  __int64 v72; // r12
  __int64 v73; // rax
  _QWORD *v74; // r15
  unsigned int v75; // eax
  __int64 *v76; // rcx
  unsigned __int64 v77; // r14
  __int64 v78; // rsi
  __int64 v79; // rdi
  void *v80; // rdi
  _QWORD *v81; // rcx
  _QWORD *v82; // r15
  void (__fastcall ***v83)(_QWORD); // r14
  __int64 v84; // rax
  __int64 v85; // rax
  char *v86; // r15
  int v87; // eax
  char *v88; // r14
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdi
  __int64 v92; // rcx
  unsigned int v93; // eax
  __int64 v94; // r14
  __int64 v95; // rax
  __int64 v96; // r15
  __int64 v97; // rcx
  __int64 v98; // rdi
  unsigned int v99; // eax
  __int64 v100; // r14
  __int64 v101; // rax
  __int64 v102; // r15
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  _QWORD *v110; // rdx
  char **exception; // r13
  char **v112; // rbx
  struct _Unwind_Exception *v113; // [rsp+0h] [rbp-90h]
  int v114; // [rsp+8h] [rbp-88h]
  int v115; // [rsp+Ch] [rbp-84h]
  int v116; // [rsp+10h] [rbp-80h]
  char v117[8]; // [rsp+10h] [rbp-80h]
  char v118[8]; // [rsp+10h] [rbp-80h]
  char v119[8]; // [rsp+10h] [rbp-80h]
  char v120[8]; // [rsp+10h] [rbp-80h]
  _DWORD *ptr; // [rsp+18h] [rbp-78h]
  _DWORD *ptra; // [rsp+18h] [rbp-78h]
  void *ptrb; // [rsp+18h] [rbp-78h]
  _QWORD *ptrf; // [rsp+18h] [rbp-78h]
  void (__fastcall ***ptrg)(_QWORD); // [rsp+18h] [rbp-78h]
  __int64 *ptrc; // [rsp+18h] [rbp-78h]
  _QWORD *ptrd; // [rsp+18h] [rbp-78h]
  char *ptre; // [rsp+18h] [rbp-78h]
  int v129; // [rsp+20h] [rbp-70h] BYREF
  int v130; // [rsp+24h] [rbp-6Ch] BYREF
  void *v131; // [rsp+28h] [rbp-68h] BYREF
  _DWORD *v132; // [rsp+30h] [rbp-60h] BYREF
  __int64 v133; // [rsp+38h] [rbp-58h] BYREF
  int v134[2]; // [rsp+40h] [rbp-50h] BYREF

  if ( *(_BYTE *)(a1 + 80) )
  {
    v13 = *(_QWORD *)(a1 + 88) == 0;
    *(_QWORD *)v134 = 0;
    if ( v13 )
    {
      *(_QWORD *)v119 = sub_186B270(0x13D8u);
      sub_7FA590(*(int *)v119, *(_QWORD *)(a1 + 16), (int)v134, v51, v52, v53, v113);
      v54 = *(_QWORD **)(a1 + 88);
      if ( *(_QWORD **)v119 != v54 )
      {
        if ( v54 )
        {
          v55 = (void *)v54[631];
          if ( v55 )
            sub_186B220(v55);
          v56 = (void *)v54[628];
          if ( v56 )
            sub_186B220(v56);
          v57 = v54[626];
          if ( v57 )
            sub_186B220((void *)(v57 - 8));
          v58 = v54[625];
          if ( v58 )
            sub_186B220((void *)(v58 - 8));
          sub_11ECBE0(v54 + 542);
          sub_11C05E0(v54 + 9);
          v59 = (void (__fastcall ***)(_QWORD))v54[7];
          if ( v59 )
          {
            (**v59)(v54[7]);
            sub_186B220(v59);
          }
          v60 = (void *)v54[4];
          if ( v60 )
            sub_186B220(v60);
          v61 = (_QWORD *)v54[3];
          if ( v61 )
          {
            v62 = &v61[*((unsigned int *)v61 - 1)];
            if ( v61 == v62 )
              goto LABEL_100;
            do
            {
              if ( *v61 )
              {
                ptrg = (void (__fastcall ***)(_QWORD))*v61;
                (**(void (__fastcall ***)(_QWORD))*v61)(*v61);
                sub_186B220(ptrg);
              }
              ++v61;
            }
            while ( v62 != v61 );
            v62 = (_QWORD *)v54[3];
            if ( v62 )
            {
LABEL_100:
              *((_DWORD *)v62 - 1) = 0;
              sub_186B220(v62 - 1);
            }
          }
          sub_18572D0(v54 + 1);
          sub_186B220(v54);
        }
        *(_QWORD *)(a1 + 88) = *(_QWORD *)v119;
      }
    }
    sub_18572D0(v134);
  }
  if ( *(_BYTE *)(a1 + 81) )
  {
    v30 = *(_QWORD **)(a1 + 96);
    if ( v30 )
    {
LABEL_52:
      v31 = *(_QWORD *)(a1 + 48);
      v32 = v30[1];
      v33 = *(_QWORD *)(*v30 + 864LL);
      ptrb = *(void **)(a1 + 40);
      if ( v31 )
        v34 = *(unsigned int *)(v31 - 4);
      else
        v34 = 0;
      v35 = sub_15EC240(*(_QWORD *)(a1 + 40), v34);
      v36 = v35;
      if ( v35 )
        ++*(_DWORD *)(v35 + 8);
      v37 = sub_15E08B0(v32, v35);
      v38 = v37;
      if ( v37 )
        ++*(_DWORD *)(v37 + 8);
      v39 = *(_QWORD **)(v33 + 24);
      if ( v39 )
      {
        v40 = *((_DWORD *)v39 - 1);
        if ( v40 == *((_DWORD *)v39 - 2) )
        {
          v45 = (3 * v40 + 1) >> 1;
          v46 = 8 * v45 + 8;
          if ( 8 * v40 + 8 >= v46 || v40 >= v45 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v134, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v134);
            sub_233E40((__int64)v134);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v47 = (unsigned int *)sub_186B300(v39 - 1, v46);
          v48 = v47[1];
          v39 = v47 + 2;
          *(_QWORD *)(v33 + 24) = v47 + 2;
          *v47 = v45;
          LODWORD(v47) = v48;
          v43 = &v39[v48];
          v42 = (_DWORD)v47 + 1;
        }
        else
        {
          v41 = v40;
          v42 = v40 + 1;
          v43 = &v39[v41];
        }
      }
      else
      {
        v110 = (_QWORD *)sub_186B270(0x18u);
        *v110 = 2;
        v42 = 1;
        v39 = v110 + 1;
        *(_QWORD *)(v33 + 24) = v39;
        v43 = v39;
      }
      *v43 = v38;
      *((_DWORD *)v39 - 1) = v42;
      if ( v36 )
      {
        v13 = (*(_DWORD *)(v36 + 8))-- == 1;
        if ( v13 )
          sub_15D7BC0(ptrb, v36);
      }
      goto LABEL_3;
    }
    v63 = (_QWORD *)sub_186B270(0x10u);
    v64 = *(_QWORD **)(a1 + 8);
    v30 = v63;
    *v63 = v64;
    v65 = v64;
    v66 = v64;
    sub_DFBCB0(v64);
    v30[1] = v65[37];
    v67 = v65[108];
    if ( v67 )
    {
      if ( v65[109] )
        goto LABEL_106;
    }
    else
    {
      v109 = sub_3743C0(&qword_18D6CD0);
      sub_DFF0A0(v65, v109);
      if ( v65[109] )
        goto LABEL_106;
      v67 = v65[108];
      if ( !v67 )
      {
LABEL_180:
        v66[109] = v67;
LABEL_106:
        v68 = *(_QWORD **)(a1 + 96);
        if ( v30 != v68 )
        {
          if ( v68 )
            sub_186B220(v68);
          *(_QWORD *)(a1 + 96) = v30;
        }
        goto LABEL_52;
      }
    }
    ++*(_DWORD *)(v67 + 48);
    goto LABEL_180;
  }
LABEL_3:
  if ( *(_BYTE *)(a1 + 82) )
  {
    v17 = *(_QWORD *)(a1 + 104);
    if ( !v17 )
    {
      v69 = sub_186B270(0x1168u);
      v70 = *(_QWORD *)(a1 + 8);
      v17 = v69;
      sub_DFBCB0(v70);
      v71 = *(_QWORD *)(v70 + 296);
      *(_QWORD *)v17 = v71;
      sub_17F9A60(v134, "sat");
      sub_118B450(v17 + 8, v134, v71);
      sub_18572D0(v134);
      sub_7F80F0(v17 + 4384, *(_QWORD *)v17);
      *(_BYTE *)(v17 + 4448) = 0;
      *(_QWORD *)(v17 + 4440) = 0;
      *(_OWORD *)(v17 + 4424) = 0;
      sub_180C5A0(v134, "rup");
      v72 = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(v17 + 4440) = *(_QWORD *)v134;
      if ( v17 != v72 )
      {
        if ( v72 )
        {
          v73 = *(_QWORD *)(v72 + 4432);
          if ( v73 )
            sub_186B220((void *)(v73 - 8));
          v74 = *(_QWORD **)(v72 + 4424);
          if ( v74 )
          {
            v75 = *((_DWORD *)v74 - 1);
            if ( v75 )
            {
              *(_QWORD *)v120 = &v74[2 * v75];
              do
              {
                v76 = (__int64 *)v74[1];
                ptrc = v76;
                if ( v76 )
                {
                  v77 = (unsigned __int64)&v76[*((unsigned int *)v76 - 1)];
                  if ( (unsigned __int64)v76 >= v77 )
                    goto LABEL_125;
                  do
                  {
                    while ( 1 )
                    {
                      v78 = *ptrc;
                      if ( *ptrc )
                      {
                        v79 = *v74;
                        v13 = (*(_DWORD *)(v78 + 8))-- == 1;
                        if ( v13 )
                          break;
                      }
                      if ( (unsigned __int64)++ptrc >= v77 )
                        goto LABEL_124;
                    }
                    sub_15D7BC0(v79, v78);
                    ++ptrc;
                  }
                  while ( (unsigned __int64)ptrc < v77 );
LABEL_124:
                  ptrc = (__int64 *)v74[1];
                  if ( ptrc )
LABEL_125:
                    sub_186B220(ptrc - 1);
                }
                v74 += 2;
              }
              while ( v74 != *(_QWORD **)v120 );
              v74 = *(_QWORD **)(v72 + 4424);
            }
            sub_186B220(v74 - 1);
          }
          v80 = *(void **)(v72 + 4400);
          if ( v80 )
            sub_186B220(v80);
          v81 = *(_QWORD **)(v72 + 4392);
          ptrd = v81;
          if ( v81 )
          {
            v82 = &v81[*((unsigned int *)v81 - 1)];
            if ( v81 == v82 )
              goto LABEL_137;
            do
            {
              v83 = (void (__fastcall ***)(_QWORD))*ptrd;
              if ( *ptrd )
              {
                (**v83)(*ptrd);
                sub_186B220(v83);
              }
              ++ptrd;
            }
            while ( v82 != ptrd );
            v82 = *(_QWORD **)(v72 + 4392);
            if ( v82 )
            {
LABEL_137:
              *((_DWORD *)v82 - 1) = 0;
              sub_186B220(v82 - 1);
            }
          }
          v84 = *(_QWORD *)(v72 + 4376);
          if ( v84 )
            sub_186B220((void *)(v84 - 8));
          v85 = *(_QWORD *)(v72 + 4368);
          if ( v85 )
            sub_186B220((void *)(v85 - 8));
          v86 = *(char **)(v72 + 4344);
          if ( v86 )
          {
            v87 = *(_DWORD *)(v72 + 4352);
            if ( v87 )
            {
              ptre = *(char **)(v72 + 4344);
              v88 = &v86[32 * v87];
              do
              {
                while ( 1 )
                {
                  v89 = *((_QWORD *)ptre + 2);
                  if ( v89 )
                    sub_186B220((void *)(v89 - 8));
                  v90 = *((_QWORD *)ptre + 1);
                  if ( !v90 )
                    break;
                  sub_186B220((void *)(v90 - 8));
                  ptre += 32;
                  if ( v88 == ptre )
                    goto LABEL_149;
                }
                ptre += 32;
              }
              while ( ptre != v88 );
            }
LABEL_149:
            sub_186B220(v86);
          }
          v91 = *(_QWORD *)(v72 + 4336);
          v92 = v91;
          if ( v91 )
          {
            v93 = *(_DWORD *)(v91 - 4);
            if ( v93 )
            {
              v94 = v91 + 16LL * v93;
              do
              {
                while ( 1 )
                {
                  v95 = *(_QWORD *)(v92 + 8);
                  if ( !v95 )
                    break;
                  v96 = v92 + 16;
                  sub_186B220((void *)(v95 - 8));
                  v92 = v96;
                  if ( v94 == v96 )
                    goto LABEL_155;
                }
                v92 += 16;
              }
              while ( v92 != v94 );
LABEL_155:
              v92 = *(_QWORD *)(v72 + 4336);
            }
            sub_186B220((void *)(v92 - 8));
          }
          v97 = *(_QWORD *)(v72 + 4328);
          v98 = v97;
          if ( v97 )
          {
            v99 = *(_DWORD *)(v97 - 4);
            if ( v99 )
            {
              v100 = v97 + 32LL * v99;
              do
              {
                while ( 1 )
                {
                  v101 = *(_QWORD *)(v98 + 16);
                  v102 = v98;
                  if ( !v101 )
                    break;
                  sub_186B220((void *)(v101 - 8));
                  v98 += 32;
                  if ( v102 + 32 == v100 )
                    goto LABEL_162;
                }
                v98 += 32;
              }
              while ( v98 != v100 );
LABEL_162:
              v98 = *(_QWORD *)(v72 + 4328);
            }
            sub_186B220((void *)(v98 - 8));
          }
          v103 = *(_QWORD *)(v72 + 4312);
          if ( v103 )
            sub_186B220((void *)(v103 - 8));
          v104 = *(_QWORD *)(v72 + 4304);
          if ( v104 )
            sub_186B220((void *)(v104 - 8));
          v105 = *(_QWORD *)(v72 + 4296);
          if ( v105 )
            sub_186B220((void *)(v105 - 8));
          v106 = *(_QWORD *)(v72 + 4288);
          if ( v106 )
            sub_186B220((void *)(v106 - 8));
          v107 = *(_QWORD *)(v72 + 4280);
          if ( v107 )
            sub_186B220((void *)(v107 - 8));
          v108 = *(_QWORD *)(v72 + 4272);
          if ( v108 )
            sub_186B220((void *)(v108 - 8));
          sub_11C05E0(v72 + 8);
          sub_186B220((void *)v72);
        }
        *(_QWORD *)(a1 + 104) = v17;
      }
    }
    v18 = *(_QWORD *)(v17 + 4272);
    if ( v18 )
      *(_DWORD *)(v18 - 4) = 0;
    v19 = *(_QWORD *)(a1 + 48);
    if ( v19 )
    {
      for ( *(_QWORD *)v117 = v19 + 8LL * *(unsigned int *)(v19 - 4); *(_QWORD *)v117 != v19; ++*((_DWORD *)v24 - 1) )
      {
        v20 = 0;
        ptra = *(_DWORD **)v19;
        if ( !*(_WORD *)(*(_QWORD *)v19 + 4LL) )
        {
          v21 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)v19 + 16LL) + 24LL);
          if ( v21 )
          {
            if ( *v21 == 0x800000000LL )
            {
              v20 = ptra[6];
              if ( v20 == 1 )
                ptra = *((_DWORD **)ptra + 4);
              else
                v20 = 0;
            }
          }
        }
        while ( 1 )
        {
          v22 = *(_QWORD *)(v17 + 3304);
          if ( v22 )
          {
            if ( *ptra < *(_DWORD *)(v22 - 4) )
              break;
          }
          sub_11CA540(v17 + 8, 1, 1);
        }
        v23 = v20 + 2 * *ptra;
        v24 = *(_QWORD **)(v17 + 4272);
        if ( v24 )
        {
          v25 = *((unsigned int *)v24 - 1);
          if ( (_DWORD)v25 == *((_DWORD *)v24 - 2) )
          {
            v27 = (unsigned int)(3 * v25 + 1) >> 1;
            v28 = 4 * v27 + 8;
            if ( 4 * (int)v25 + 8 >= (unsigned int)v28 || (unsigned int)v25 >= v27 )
            {
              v112 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v134, "Overflow encountered when expanding vector");
              *v112 = (char *)off_1C63128;
              sub_2333C0(v112 + 1, v134);
              sub_233E40((__int64)v134);
              __cxa_throw(v112, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v29 = (unsigned int *)sub_186B300(v24 - 1, v28);
            v24 = v29 + 2;
            *(_QWORD *)(v17 + 4272) = v29 + 2;
            *v29 = v27;
            v26 = &v29[v29[1] + 2];
          }
          else
          {
            v26 = (unsigned int *)v24 + v25;
          }
        }
        else
        {
          v44 = (_QWORD *)sub_186B270(0x10u);
          v24 = v44 + 1;
          *v44 = 2;
          *(_QWORD *)(v17 + 4272) = v44 + 1;
          v26 = (unsigned int *)(v44 + 1);
        }
        *v26 = v23;
        v19 += 8;
      }
    }
    sub_1185D70(v17 + 8);
  }
  v2 = *(_QWORD *)(a1 + 128);
  v3 = *(_QWORD **)(a1 + 48);
  if ( v2 )
  {
    if ( v3 )
      v4 = *((_DWORD *)v3 - 1);
    else
      v4 = 0;
    v5 = *(_QWORD *)(a1 + 72);
    if ( v5 )
    {
      v6 = *(_DWORD **)(a1 + 168);
      v7 = *(_DWORD *)(v5 - 4);
      ptr = v6;
      if ( v6 )
      {
LABEL_9:
        v8 = *(_QWORD *)(a1 + 176);
LABEL_10:
        ++v6[2];
LABEL_11:
        v9 = *(void **)(a1 + 144);
        v129 = v7;
        v133 = v5;
        v131 = v9;
        v132 = ptr;
        v130 = v4;
        *(_QWORD *)v134 = v3;
        if ( !v2 )
          std::__throw_bad_function_call();
        (*(void (__fastcall **)(__int64, void **, _DWORD **, int *, __int64 *, int *, int *))(a1 + 136))(
          a1 + 112,
          &v131,
          &v132,
          &v129,
          &v133,
          &v130,
          v134);
        if ( ptr )
        {
          v116 = ptr[2];
          ptr[2] = v116 - 1;
          if ( v116 == 1 )
            sub_15D7BC0(v8, ptr);
        }
        v3 = *(_QWORD **)(a1 + 48);
        goto LABEL_16;
      }
    }
    else
    {
      v6 = *(_DWORD **)(a1 + 168);
      v7 = 0;
      ptr = v6;
      if ( v6 )
        goto LABEL_9;
    }
    ptrf = *(_QWORD **)(a1 + 16);
    *(_QWORD *)v118 = ptrf[106];
    sub_180C5A0(v134, "del");
    v49 = sub_15E3760((int)ptrf, (int)v134, 0, 0, v118[0], (int)v113, v114, *(int *)v118, (int)ptrf, v129, v131);
    v4 = v115;
    ptr = (_DWORD *)v49;
    if ( v49 )
    {
      v50 = *(_QWORD *)(a1 + 168);
      ++*(_DWORD *)(v49 + 8);
      v8 = *(_QWORD *)(a1 + 176);
      if ( !v50 || (v13 = *(_DWORD *)(v50 + 8) == 1, --*(_DWORD *)(v50 + 8), !v13) )
      {
        *(_QWORD *)(a1 + 168) = v49;
        v6 = (_DWORD *)v49;
        v2 = *(_QWORD *)(a1 + 128);
        goto LABEL_10;
      }
    }
    else
    {
      v50 = *(_QWORD *)(a1 + 168);
      v8 = *(_QWORD *)(a1 + 176);
      if ( !v50 || (v13 = *(_DWORD *)(v50 + 8) == 1, --*(_DWORD *)(v50 + 8), !v13) )
      {
        *(_QWORD *)(a1 + 168) = 0;
        v2 = *(_QWORD *)(a1 + 128);
        goto LABEL_11;
      }
    }
    sub_15D7BC0(v8, v50);
    v6 = ptr;
    v8 = *(_QWORD *)(a1 + 176);
    v2 = *(_QWORD *)(a1 + 128);
    v4 = v115;
    *(_QWORD *)(a1 + 168) = ptr;
    if ( !ptr )
      goto LABEL_11;
    goto LABEL_10;
  }
LABEL_16:
  if ( v3 )
  {
    v10 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v10 )
      goto LABEL_24;
    do
    {
      while ( 1 )
      {
        v11 = *v3;
        if ( *v3 )
        {
          v12 = *(_QWORD *)(a1 + 40);
          v13 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v3 >= v10 )
          goto LABEL_23;
      }
      sub_15D7BC0(v12, v11);
      ++v3;
    }
    while ( v3 < v10 );
LABEL_23:
    v3 = *(_QWORD **)(a1 + 48);
    if ( v3 )
LABEL_24:
      *((_DWORD *)v3 - 1) = 0;
  }
  v14 = *(_QWORD *)(a1 + 56);
  if ( v14 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    v13 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v15, v14);
  }
  result = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 56) = 0;
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

