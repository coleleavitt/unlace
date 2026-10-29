__int64 __fastcall sub_CF57E0(__int64 a1, unsigned int *a2, __int64 a3)
{
  char **exception; // r12
  __int64 v4; // rdx
  char **v5; // rbx
  __int64 v6; // rdx
  char **v7; // rbx
  __int64 v8; // rdx
  char **v9; // r12
  __int64 v10; // rdx
  __int64 v12; // r12
  __int64 v14; // r14
  char v15; // al
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // edx
  _DWORD **v19; // rax
  _DWORD *v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rax
  _DWORD *v23; // r15
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 result; // rax
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rax
  unsigned int *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rcx
  char i; // al
  unsigned int v34; // eax
  __int64 v35; // rbx
  int v36; // eax
  __int64 *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rbp
  unsigned int *v43; // rbx
  unsigned int v44; // eax
  unsigned int *v45; // r12
  unsigned int v46; // eax
  unsigned int v47; // ebx
  unsigned int *v48; // r14
  unsigned int *v49; // rbp
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rdi
  bool v54; // zf
  __int64 v55; // rdx
  unsigned int *v56; // rcx
  unsigned int v57; // ebp
  size_t v58; // rsi
  __int64 v59; // rsi
  _DWORD *v60; // rdx
  __int64 v61; // rax
  int v62; // esi
  __int64 v63; // rax
  __int64 v64; // r15
  unsigned int v65; // edi
  unsigned int *v66; // r8
  unsigned int v67; // eax
  unsigned int *v68; // rdx
  unsigned int v69; // eax
  unsigned int v70; // esi
  __int64 v71; // rdx
  unsigned int *v72; // r14
  __int64 v73; // rcx
  __int64 v74; // r15
  __int64 v75; // rax
  unsigned int v76; // r15d
  size_t v77; // rsi
  unsigned int *v78; // rax
  __int64 v79; // rdi
  _QWORD *v80; // rdx
  __int64 v81; // rsi
  __int64 v82; // rdi
  unsigned int v83; // eax
  _DWORD *v84; // rdx
  int v85; // eax
  unsigned int v86; // r14d
  unsigned int v87; // eax
  unsigned int *v88; // rax
  unsigned int v89; // r12d
  size_t v90; // rsi
  unsigned int *v91; // rax
  _QWORD *v92; // rdi
  __int64 v93; // rax
  _DWORD *v94; // rdx
  int v95; // eax
  unsigned int v96; // r8d
  unsigned int v97; // eax
  unsigned int *v98; // rax
  unsigned int v99; // r10d
  unsigned int v100; // eax
  unsigned int *v101; // rax
  _QWORD *v102; // rdx
  _QWORD *v103; // rdi
  _QWORD *v104; // [rsp+8h] [rbp-80h]
  __int64 v105; // [rsp+8h] [rbp-80h]
  __int64 v106; // [rsp+10h] [rbp-78h]
  __int64 v107; // [rsp+10h] [rbp-78h]
  __int64 v108; // [rsp+10h] [rbp-78h]
  __int64 v109; // [rsp+10h] [rbp-78h]
  unsigned int v110; // [rsp+10h] [rbp-78h]
  __int64 v111; // [rsp+10h] [rbp-78h]
  __int64 v112; // [rsp+20h] [rbp-68h]
  unsigned int *v113; // [rsp+20h] [rbp-68h]
  unsigned int *v114; // [rsp+20h] [rbp-68h]
  unsigned int *v115; // [rsp+28h] [rbp-60h]
  __int64 v116; // [rsp+28h] [rbp-60h]
  __int64 v117[11]; // [rsp+30h] [rbp-58h] BYREF

  v12 = 0;
  v14 = *(_QWORD *)(a1 + 48);
  v15 = *(_BYTE *)(v14 + 123);
  if ( (v15 & 8) != 0 )
  {
    v31 = *(_QWORD *)(v14 + 88);
    if ( v31 )
    {
      v32 = *(_QWORD *)(v14 + 88);
      for ( i = *(_BYTE *)(v31 + 3) >> 6; !i; i = *(_BYTE *)(v32 + 3) >> 6 )
        v32 = *(_QWORD *)(v32 + 16);
      if ( i == 1 )
      {
        v34 = *(_DWORD *)(v32 + 4) + 1;
      }
      else if ( i == 2 )
      {
        v34 = *(_DWORD *)(v32 + 4) - 1;
      }
      else
      {
        v34 = *(_DWORD *)(v32 + 4);
      }
      v35 = *(unsigned int *)(a1 + 96);
      if ( (unsigned int)v35 >= v34 )
      {
        v31 = 0;
      }
      else
      {
        v36 = 18;
        while ( --v36 )
        {
          if ( *(char *)(v31 + 3) >= 0 )
          {
            if ( *(_DWORD *)(v31 + 4) == (_DWORD)v35 )
            {
              v37 = (__int64 *)(v31 + 8);
              goto LABEL_42;
            }
          }
          else if ( *(_BYTE *)(v31 + 3) >> 6 != 2 )
          {
            v37 = (__int64 *)(*(_QWORD *)(v31 + 16) + 8 * v35);
            goto LABEL_42;
          }
          v31 = *(_QWORD *)(v31 + 16);
        }
        v105 = a3;
        sub_233F80((__int64 *)(*(_QWORD *)v14 + 616LL), (_DWORD *)(v14 + 88));
        a3 = v105;
        v37 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v14 + 88) + 16LL) + 8 * v35);
LABEL_42:
        v31 = *v37;
      }
    }
    v38 = sub_15DE0E0(*(_QWORD *)(a1 + 16), v31, a3);
    v14 = *(_QWORD *)(a1 + 48);
    v12 = v38;
    v15 = *(_BYTE *)(v14 + 123);
  }
  v104 = *(_QWORD **)(a1 + 16);
  if ( (v15 & 0x10) != 0 )
  {
    v16 = *(unsigned int *)(a1 + 96);
    v17 = *(_QWORD *)(v14 + 104);
    v18 = 18;
    while ( --v18 )
    {
      if ( *(char *)(v17 + 3) >= 0 )
      {
        if ( *(_DWORD *)(v17 + 4) == (_DWORD)v16 )
        {
          v19 = (_DWORD **)(v17 + 8);
          goto LABEL_8;
        }
      }
      else if ( *(_BYTE *)(v17 + 3) >> 6 != 2 )
      {
        v19 = (_DWORD **)(*(_QWORD *)(v17 + 16) + 8 * v16);
        goto LABEL_8;
      }
      v17 = *(_QWORD *)(v17 + 16);
    }
    sub_236900((_QWORD *)(*(_QWORD *)v14 + 672LL), (__int64 *)(v14 + 104));
    v19 = (_DWORD **)(*(_QWORD *)(*(_QWORD *)(v14 + 104) + 16LL) + 8 * v16);
LABEL_8:
    v20 = *v19;
    if ( *v19 )
    {
      v21 = a1 + 24;
      *v20 = (*v20 + 1) & 0x3FFFFFFF | *v20 & 0xC0000000;
      v22 = sub_14B6570(a1 + 24);
      v23 = (_DWORD *)v22;
      if ( v22 )
      {
        if ( v20 == (_DWORD *)v22 )
        {
          v24 = (__int64)v20;
          *v20 = (*v20 + 1) & 0x3FFFFFFF | *v20 & 0xC0000000;
        }
        else
        {
          v24 = sub_17E9C90(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 656LL), 24);
          *v20 = (*v20 + 1) & 0x3FFFFFFF | *v20 & 0xC0000000;
          *v23 = (*v23 + 1) & 0x3FFFFFFF | *v23 & 0xC0000000;
          *(_QWORD *)v24 = 0;
          *(_DWORD *)v24 = 1;
          *(__m128i *)(v24 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, (__m128i)(unsigned __int64)v23);
        }
        v25 = (*v20 + 0x3FFFFFFF) & 0x3FFFFFFF | *v20 & 0xC0000000;
        *v20 = v25;
        if ( (v25 & 0x3FFFFFFF) == 0 )
        {
          v60 = (_DWORD *)v104[83];
          if ( v60 )
          {
            v61 = (unsigned int)*(v60 - 1);
            if ( (_DWORD)v61 == *(v60 - 2) )
            {
              v76 = (unsigned int)(3 * v61 + 1) >> 1;
              v77 = 8 * v76 + 8;
              if ( 8 * (int)v61 + 8 >= (unsigned int)v77 || (unsigned int)v61 >= v76 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_16514C(v117, "Overflow encountered when expanding vector", v4);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v117);
                sub_233E40((__int64)v117);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v107 = v24;
              v78 = (unsigned int *)sub_186B300(v60 - 2, v77);
              v79 = v78[1];
              v60 = v78 + 2;
              v62 = v79 + 1;
              v104[83] = v78 + 2;
              v24 = v107;
              *v78 = v76;
              *(_QWORD *)&v78[2 * v79 + 2] = v20;
              v78[1] = v79 + 1;
            }
            else
            {
              v62 = v61 + 1;
              *(_QWORD *)&v60[2 * v61] = v20;
              *(v60 - 1) = v61 + 1;
            }
          }
          else
          {
            v108 = v24;
            v93 = sub_186B270(0x18u);
            v60 = (_DWORD *)(v93 + 8);
            v62 = 1;
            *(_QWORD *)v93 = 2;
            v104[83] = v93 + 8;
            v24 = v108;
            *(_QWORD *)(v93 + 8) = v20;
            *(_DWORD *)(v93 + 4) = 1;
          }
          if ( v62 )
          {
            while ( 1 )
            {
              v63 = (unsigned int)(v62 - 1);
              v64 = *(_QWORD *)&v60[2 * v63];
              v65 = v62 - 1;
              *(v60 - 1) = v63;
              if ( *(char *)(v64 + 3) < 0 )
              {
                v81 = *(_QWORD *)(v64 + 8);
                if ( v81 )
                {
                  v82 = v104[81];
                  v54 = (*(_DWORD *)(v81 + 8))-- == 1;
                  if ( v54 )
                  {
                    v109 = v24;
                    sub_15D7BC0(v82, v81);
                    v24 = v109;
                  }
                }
                v106 = v24;
                sub_17E9C40(v104[82], 16, v64);
              }
              else
              {
                v66 = *(unsigned int **)(v64 + 8);
                v67 = (*v66 + 0x3FFFFFFF) & 0x3FFFFFFF | *v66 & 0xC0000000;
                *v66 = v67;
                if ( (v67 & 0x3FFFFFFF) == 0 )
                {
                  if ( v65 == *(v60 - 2) )
                  {
                    v116 = v24;
                    v99 = (3 * v65 + 1) >> 1;
                    v113 = v66;
                    v100 = 8 * v99 + 8;
                    if ( 8 * v62 >= v100 || v65 >= v99 )
                    {
LABEL_145:
                      v9 = (char **)__cxa_allocate_exception(0x28u);
                      sub_16514C(v117, "Overflow encountered when expanding vector", v10);
                      *v9 = (char *)off_1C63128;
                      sub_2333C0(v9 + 1, v117);
                      sub_233E40((__int64)v117);
                      __cxa_throw(
                        v9,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v101 = (unsigned int *)sub_186B300(v60 - 2, v100);
                    v94 = v101 + 2;
                    v66 = v113;
                    v104[83] = v101 + 2;
                    v24 = v116;
                    *v101 = (3 * v65 + 1) >> 1;
                  }
                  else
                  {
                    v94 = (_DWORD *)v104[83];
                  }
                  v95 = *(v94 - 1);
                  *(_QWORD *)&v94[2 * v95] = v66;
                  *(v94 - 1) = v95 + 1;
                }
                v68 = *(unsigned int **)(v64 + 16);
                v69 = (*v68 + 0x3FFFFFFF) & 0x3FFFFFFF | *v68 & 0xC0000000;
                *v68 = v69;
                v70 = v69 & 0x3FFFFFFF;
                if ( (v69 & 0x3FFFFFFF) == 0 )
                {
                  v92 = (_QWORD *)v104[83];
                  if ( v92 )
                  {
                    v70 = *((_DWORD *)v92 - 1);
                    if ( v70 == *((_DWORD *)v92 - 2) )
                    {
                      v115 = v68;
                      v96 = (3 * v70 + 1) >> 1;
                      v112 = v24;
                      v97 = 8 * v96 + 8;
                      if ( 8 * v70 + 8 >= v97 )
                        goto LABEL_145;
                      v110 = (3 * v70 + 1) >> 1;
                      if ( v70 >= v96 )
                        goto LABEL_145;
                      v98 = (unsigned int *)sub_186B300(v92 - 1, v97);
                      v92 = v98 + 2;
                      v70 = v98[1];
                      v68 = v115;
                      v104[83] = v98 + 2;
                      v24 = v112;
                      *v98 = v110;
                    }
                  }
                  else
                  {
                    v114 = v68;
                    v111 = v24;
                    v103 = (_QWORD *)sub_186B270(0x18u);
                    *v103 = 2;
                    v92 = v103 + 1;
                    v24 = v111;
                    v68 = v114;
                    v104[83] = v92;
                  }
                  v92[v70] = v68;
                  *((_DWORD *)v92 - 1) = v70 + 1;
                }
                v106 = v24;
                sub_17E9C40(v104[82], 24, v64);
              }
              v24 = v106;
              v60 = (_DWORD *)v104[83];
              if ( v60 )
              {
                v62 = *(v60 - 1);
                if ( v62 )
                  continue;
              }
              break;
            }
          }
        }
        v20 = (_DWORD *)v24;
        goto LABEL_29;
      }
    }
    else
    {
      v21 = a1 + 24;
      v30 = (unsigned int *)sub_14B6570(a1 + 24);
      v20 = v30;
      if ( v30 )
      {
        *v30 = (*v30 + 1) & 0x3FFFFFFF | *v30 & 0xC0000000;
LABEL_29:
        sub_14B7D00(v21);
      }
    }
    v14 = *(_QWORD *)(a1 + 48);
    goto LABEL_17;
  }
  v20 = nullptr;
LABEL_17:
  sub_EDBFA0(v14);
  result = *(_QWORD *)(a1 + 80);
  if ( result )
  {
    v27 = *a2;
    if ( (unsigned int)v27 < *(_DWORD *)(result - 4) )
    {
      if ( *(_QWORD *)(result + 8 * v27) )
      {
        v28 = *(_QWORD *)(a1 + 40);
        v29 = sub_15DE270(*(_QWORD *)(a1 + 16));
        result = sub_1692DB0(v28, a2, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 856LL), v29, v20);
      }
    }
  }
  if ( !*((_WORD *)a2 + 2) )
  {
    result = *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL);
    if ( result )
    {
      if ( !*(_DWORD *)result )
      {
        if ( *(_DWORD *)(result + 4) != 8
          || a2[6] != 1
          || ((v71 = *(_QWORD *)(a1 + 80)) == 0
           || (v72 = *((unsigned int **)a2 + 4), v73 = *v72, (unsigned int)v73 >= *(_DWORD *)(v71 - 4))
           || !*(_QWORD *)(v71 + 8 * v73)
           || (v74 = *(_QWORD *)(a1 + 40),
               v75 = sub_15DE2F0(*(_QWORD *)(a1 + 16)),
               result = sub_1692DB0(v74, v72, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 864LL), v75, v20),
               !*((_WORD *)a2 + 2))
           && (result = *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL)) != 0)
          && !*(_DWORD *)result )
        {
          if ( *(_DWORD *)(result + 4) == 2 && a2[6] == 2 )
          {
            v48 = *((unsigned int **)a2 + 4);
            v49 = *((unsigned int **)a2 + 5);
            if ( (unsigned __int8)sub_15D26C0(*(_QWORD *)(a1 + 16), v48) )
            {
              v50 = *(_QWORD *)(a1 + 80);
              if ( v50 )
              {
                v51 = *v49;
                if ( (unsigned int)v51 < *(_DWORD *)(v50 - 4) )
                {
                  if ( *(_QWORD *)(v50 + 8 * v51) )
                  {
                    if ( v12 )
                      v12 = sub_15E2180(*(_QWORD *)(a1 + 16));
                    goto LABEL_63;
                  }
                }
              }
            }
            result = sub_15D26C0(*(_QWORD *)(a1 + 16), v49);
            if ( (_BYTE)result )
            {
              result = *(_QWORD *)(a1 + 80);
              if ( result )
              {
                v55 = *v48;
                if ( (unsigned int)v55 < *(_DWORD *)(result - 4) )
                {
                  v56 = v49;
                  v49 = v48;
                  v48 = v56;
                  if ( *(_QWORD *)(result + 8 * v55) )
LABEL_63:
                    result = sub_1692DB0(*(_QWORD *)(a1 + 40), v49, v48, v12, v20);
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v20 )
  {
    result = (*v20 + 0x3FFFFFFF) & 0x3FFFFFFF | *v20 & 0xC0000000;
    *v20 = result;
    if ( (result & 0x3FFFFFFF) == 0 )
    {
      v39 = v104[83];
      if ( v39 )
      {
        result = *(unsigned int *)(v39 - 4);
        if ( (_DWORD)result == *(_DWORD *)(v39 - 8) )
        {
          v57 = (unsigned int)(3 * result + 1) >> 1;
          v58 = 8 * v57 + 8;
          if ( 8 * (int)result + 8 >= (unsigned int)v58 || (unsigned int)result >= v57 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_16514C(v117, "Overflow encountered when expanding vector", v6);
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v117);
            sub_233E40((__int64)v117);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          result = sub_186B300((void *)(v39 - 8), v58);
          v59 = *(unsigned int *)(result + 4);
          v39 = result + 8;
          v104[83] = result + 8;
          v40 = v59 + 1;
          *(_DWORD *)result = v57;
          *(_QWORD *)(result + 8 + 8 * v59) = v20;
          *(_DWORD *)(result + 4) = v59 + 1;
        }
        else
        {
          v40 = result + 1;
          *(_QWORD *)(v39 + 8 * result) = v20;
          *(_DWORD *)(v39 - 4) = result + 1;
        }
      }
      else
      {
        result = sub_186B270(0x18u);
        v39 = result + 8;
        *(_QWORD *)result = 2;
        v104[83] = result + 8;
        v40 = 1;
        *(_QWORD *)(result + 8) = v20;
        *(_DWORD *)(result + 4) = 1;
      }
      while ( v40 )
      {
        v41 = (unsigned int)(v40 - 1);
        v42 = *(_QWORD *)(v39 + 8 * v41);
        *(_DWORD *)(v39 - 4) = v41;
        if ( *(char *)(v42 + 3) < 0 )
        {
          v52 = *(_QWORD *)(v42 + 8);
          if ( v52 )
          {
            v53 = v104[81];
            v54 = (*(_DWORD *)(v52 + 8))-- == 1;
            if ( v54 )
              sub_15D7BC0(v53, v52);
          }
          sub_17E9C40(v104[82], 16, v42);
        }
        else
        {
          v43 = *(unsigned int **)(v42 + 8);
          v44 = (*v43 + 0x3FFFFFFF) & 0x3FFFFFFF | *v43 & 0xC0000000;
          *v43 = v44;
          if ( (v44 & 0x3FFFFFFF) == 0 )
          {
            v83 = *(_DWORD *)(v39 - 8);
            if ( v83 == v40 - 1 )
            {
              v89 = (3 * v83 + 1) >> 1;
              v90 = 8 * v89 + 8;
              if ( 8 * v40 >= (unsigned int)v90 || v83 >= v89 )
              {
LABEL_144:
                v7 = (char **)__cxa_allocate_exception(0x28u);
                sub_16514C(v117, "Overflow encountered when expanding vector", v8);
                *v7 = (char *)off_1C63128;
                sub_2333C0(v7 + 1, v117);
                sub_233E40((__int64)v117);
                __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v91 = (unsigned int *)sub_186B300((void *)(v39 - 8), v90);
              v84 = v91 + 2;
              v104[83] = v91 + 2;
              *v91 = v89;
            }
            else
            {
              v84 = (_DWORD *)v104[83];
            }
            v85 = *(v84 - 1);
            *(_QWORD *)&v84[2 * v85] = v43;
            *(v84 - 1) = v85 + 1;
          }
          v45 = *(unsigned int **)(v42 + 16);
          v46 = (*v45 + 0x3FFFFFFF) & 0x3FFFFFFF | *v45 & 0xC0000000;
          *v45 = v46;
          v47 = v46 & 0x3FFFFFFF;
          if ( (v46 & 0x3FFFFFFF) == 0 )
          {
            v80 = (_QWORD *)v104[83];
            if ( v80 )
            {
              v47 = *((_DWORD *)v80 - 1);
              if ( *((_DWORD *)v80 - 2) == v47 )
              {
                v86 = (3 * v47 + 1) >> 1;
                v87 = 8 * v86 + 8;
                if ( 8 * v47 + 8 >= v87 || v47 >= v86 )
                  goto LABEL_144;
                v88 = (unsigned int *)sub_186B300(v80 - 1, v87);
                v80 = v88 + 2;
                v47 = v88[1];
                v104[83] = v88 + 2;
                *v88 = v86;
              }
            }
            else
            {
              v102 = (_QWORD *)sub_186B270(0x18u);
              *v102 = 2;
              v80 = v102 + 1;
              v104[83] = v80;
            }
            v80[v47] = v45;
            *((_DWORD *)v80 - 1) = v47 + 1;
          }
          sub_17E9C40(v104[82], 24, v42);
        }
        result = (__int64)v104;
        v39 = v104[83];
        if ( !v39 )
          return result;
        v40 = *(_DWORD *)(v39 - 4);
      }
    }
  }
  return result;
}

