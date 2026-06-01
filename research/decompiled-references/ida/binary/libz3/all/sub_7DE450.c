__int64 __fastcall sub_7DE450(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char **exception; // rbp
  char **v7; // r13
  char **v8; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rax
  int v15; // ebx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rsi
  unsigned int *v21; // rbx
  __int64 *v22; // rbp
  __int64 v23; // rdx
  int v24; // eax
  unsigned int *v25; // rdx
  __int64 v26; // r14
  int v27; // r9d
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // rsi
  __int64 v31; // rdi
  bool v32; // zf
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // r14
  unsigned int v38; // eax
  unsigned int v39; // r15d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rdx
  unsigned int *v43; // rcx
  __int64 v44; // rdx
  _QWORD *v45; // rbp
  unsigned int v46; // r15d
  __int64 v47; // r12
  unsigned int v48; // eax
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // r14
  __int64 *v52; // r12
  unsigned __int64 v53; // r15
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // r14
  __int64 *v57; // rbp
  unsigned __int64 v58; // r12
  __int64 v59; // rsi
  __int64 v60; // rcx
  unsigned int v62; // edx
  size_t v63; // rsi
  unsigned int v64; // r14d
  unsigned int *v65; // rax
  __int64 v66; // rdx
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // rdx
  unsigned int v71; // ebp
  size_t v72; // rsi
  unsigned int *v73; // rax
  _DWORD *v74; // rcx
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // r14
  __int64 v78; // r14
  __int64 *v79; // rbp
  unsigned __int64 v80; // r12
  __int64 v81; // rbx
  __int64 v82; // rsi
  _QWORD *v83; // rax
  int v84[2]; // [rsp+0h] [rbp-2F8h]
  unsigned int *v85; // [rsp+8h] [rbp-2F0h] BYREF
  _BYTE *v86; // [rsp+10h] [rbp-2E8h]
  __int64 *v87; // [rsp+18h] [rbp-2E0h]
  int v88[2]; // [rsp+20h] [rbp-2D8h]
  __int64 v89; // [rsp+28h] [rbp-2D0h]
  int v90[2]; // [rsp+30h] [rbp-2C8h]
  int v91[2]; // [rsp+38h] [rbp-2C0h] BYREF
  __int64 v92; // [rsp+40h] [rbp-2B8h]
  void *ptr; // [rsp+48h] [rbp-2B0h]
  __int64 v94; // [rsp+60h] [rbp-298h] BYREF
  unsigned int *v95; // [rsp+68h] [rbp-290h]
  int v96[2]; // [rsp+70h] [rbp-288h] BYREF
  int v97[4]; // [rsp+90h] [rbp-268h] BYREF
  __m128 v98; // [rsp+A0h] [rbp-258h]
  _QWORD *v99; // [rsp+B0h] [rbp-248h]
  __int64 v100; // [rsp+130h] [rbp-1C8h]
  int *v101; // [rsp+138h] [rbp-1C0h] BYREF
  int *v102; // [rsp+1D8h] [rbp-120h] BYREF
  __int64 v103; // [rsp+270h] [rbp-88h]
  __int64 v104; // [rsp+278h] [rbp-80h]
  __int64 v105; // [rsp+280h] [rbp-78h]
  __int64 v106; // [rsp+288h] [rbp-70h]
  __int64 v107; // [rsp+290h] [rbp-68h]
  __int64 v108; // [rsp+298h] [rbp-60h]
  __int64 v109; // [rsp+2A0h] [rbp-58h]
  _BYTE v110[80]; // [rsp+2A8h] [rbp-50h] BYREF

  *(_QWORD *)v84 = a2;
  v10 = *(_QWORD *)(a2[2] + 64);
  if ( !v10 )
  {
    ++*(_DWORD *)(a1 + 128);
    return sub_7E56B0(a1, 0, 0, 0, 0);
  }
  if ( *(_DWORD *)(v10 - 4) != 1 )
  {
    ++*(_DWORD *)(a1 + 128);
    v11 = *(unsigned int *)(v10 - 4);
    *(_QWORD *)v88 = v10;
    *(_QWORD *)v90 = 0;
    v11 <<= 6;
    ptr = (void *)(v10 + v11);
    if ( v10 != v10 + v11 )
    {
      while ( 1 )
      {
        *(_QWORD *)v91 = *(_QWORD *)(*(_QWORD *)v88 + 8LL);
        v12 = *(_QWORD *)(*(_QWORD *)v84 + 32LL);
        if ( v12 )
          v13 = *(_DWORD *)(v12 - 4);
        else
          v13 = 0;
        v14 = sub_15DC610(
                v91[0],
                **(_QWORD **)v88,
                v13,
                v12,
                a5,
                a6,
                v84[0],
                (int)v85,
                (int)v86,
                (int)v87,
                v88[0],
                v89,
                v90[0],
                v91[0],
                v92,
                ptr);
        v89 = v14;
        if ( v14 )
          ++*(_DWORD *)(v14 + 8);
        v15 = sub_7E58C0(a1, v89);
        if ( *(_QWORD *)v90 )
        {
          v18 = *(unsigned int *)(*(_QWORD *)v90 - 4LL);
          if ( (_DWORD)v18 == *(_DWORD *)(*(_QWORD *)v90 - 8LL) )
          {
            v71 = (unsigned int)(3 * v18 + 1) >> 1;
            v72 = 4 * v71 + 8;
            if ( 4 * (int)v18 + 8 >= (unsigned int)v72 || (unsigned int)v18 >= v71 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v97, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v97);
              sub_233E40((__int64)v97);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v73 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v90 - 8LL), v72);
            v74 = v73 + 2;
            *v73 = v71;
            v75 = v73[1];
            *(_QWORD *)v90 = v74;
            v19 = &v74[v75];
          }
          else
          {
            v19 = (_DWORD *)(*(_QWORD *)v90 + 4 * v18);
          }
        }
        else
        {
          v83 = (_QWORD *)sub_186B270(0x10u);
          *v83 = 2;
          v19 = v83 + 1;
          *(_QWORD *)v90 = v19;
        }
        *v19 = v15;
        v20 = *(_QWORD *)(a1 + 72);
        ++*(_DWORD *)(*(_QWORD *)v90 - 4LL);
        v92 = v20;
        v21 = *(unsigned int **)(*(_QWORD *)v88 + 24LL);
        v94 = v20;
        if ( v21 )
        {
          v85 = &v21[2 * *(v21 - 1)];
          if ( v85 == v21 )
          {
            v21 = nullptr;
          }
          else
          {
            v22 = (__int64 *)v21;
            v21 = nullptr;
            v86 = v110;
            v87 = &v94;
            while ( 1 )
            {
              v26 = *v22;
              sub_633760((__int64)v97, v20, 0, (__int64)v86);
              v110[8] = 1;
              *(_QWORD *)v97 = &off_1C4CA80;
              v28 = *(_QWORD *)(*(_QWORD *)v84 + 32LL);
              if ( v28 )
                v29 = *(_DWORD *)(v28 - 4);
              else
                v29 = 0;
              sub_157BE40(
                (int)v96,
                (int)v97,
                v26,
                v29,
                v28,
                v27,
                v84[0],
                (__int64)v85,
                (int)v86,
                (int)v87,
                v88[0],
                v89,
                *(__int64 *)v90,
                *(void **)v91);
              sub_14B9B80(*(_QWORD *)(a1 + 80) + 2192LL, v96);
              *(_QWORD *)v97 = &off_1C4CA60;
              if ( v109 )
                sub_186B220((void *)(v109 - 8));
              v30 = v107;
              if ( v107 )
              {
                v31 = v108;
                v32 = (*(_DWORD *)(v107 + 8))-- == 1;
                if ( v32 )
                  sub_15D7BC0(v31, v30);
              }
              v33 = v105;
              if ( v105 )
              {
                v34 = v106;
                v32 = (*(_DWORD *)(v105 + 8))-- == 1;
                if ( v32 )
                  sub_15D7BC0(v34, v33);
              }
              v35 = v103;
              if ( v103 )
              {
                v36 = v104;
                v32 = (*(_DWORD *)(v103 + 8))-- == 1;
                if ( v32 )
                  sub_15D7BC0(v36, v35);
              }
              v102 = &qword_1C637E8;
              sub_15841B0(&v102);
              v101 = &qword_1C637E8;
              sub_15841B0(&v101);
              if ( v100 )
                sub_186B220((void *)(v100 - 8));
              sub_15841B0(v97);
              v37 = *(_QWORD *)v96;
              if ( v21 )
              {
                v38 = *(v21 - 1);
                if ( v38 == *(v21 - 2) )
                {
                  v39 = (3 * v38 + 1) >> 1;
                  v40 = 8 * v39 + 8;
                  if ( 8 * v38 + 8 >= (unsigned int)v40 || v38 >= v39 )
                  {
                    v8 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)v97, "Overflow encountered when expanding vector");
                    *v8 = (char *)off_1C63128;
                    sub_2333C0(v8 + 1, v97);
                    sub_233E40((__int64)v97);
                    __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v41 = (unsigned int *)sub_186B300(v21 - 2, v40);
                  v42 = v41[1];
                  v21 = v41 + 2;
                  *v41 = v39;
                  LODWORD(v41) = v42;
                  v25 = &v21[2 * v42];
                  v24 = (_DWORD)v41 + 1;
                }
                else
                {
                  v23 = v38;
                  v24 = v38 + 1;
                  v25 = &v21[2 * v23];
                }
              }
              else
              {
                v67 = (_QWORD *)sub_186B270(0x18u);
                *v67 = 2;
                v21 = (unsigned int *)(v67 + 1);
                v24 = 1;
                v25 = v21;
              }
              *(_QWORD *)v25 = v37;
              ++v22;
              *(v21 - 1) = v24;
              if ( v85 == (unsigned int *)v22 )
                break;
              v20 = *(_QWORD *)(a1 + 72);
            }
          }
        }
        if ( *(_BYTE *)(*(_QWORD *)v88 + 56LL) )
          break;
        v68 = *(_QWORD **)(a1 + 168);
        if ( !v68 || (v69 = *((unsigned int *)v68 - 1), !(_DWORD)v69) )
        {
LABEL_95:
          v95 = v21;
          sub_7DDC40(a1, v89, &v94);
          if ( v21 )
          {
            v78 = v92;
            v79 = (__int64 *)v21;
            v80 = (unsigned __int64)&v21[2 * *(v21 - 1)];
            if ( (unsigned __int64)v21 < v80 )
            {
              do
              {
                v82 = *v79;
                if ( *v79 )
                {
                  v32 = (*(_DWORD *)(v82 + 8))-- == 1;
                  if ( v32 )
                    sub_15D7BC0(v78, v82);
                }
                ++v79;
              }
              while ( (unsigned __int64)v79 < v80 );
            }
            sub_186B220(v21 - 2);
          }
          v81 = v89;
          if ( v89 )
          {
            LODWORD(v85) = *(_DWORD *)(v89 + 8);
            v32 = (_DWORD)v85 == 1;
            *(_DWORD *)(v89 + 8) = (_DWORD)v85 - 1;
            if ( v32 )
              sub_15D7BC0(*(_QWORD *)v91, v81);
          }
          goto LABEL_73;
        }
        v70 = &v68[v69];
        while ( *v68 != v89 )
        {
          if ( ++v68 == v70 )
            goto LABEL_95;
        }
        v95 = v21;
        sub_7DC1D0(a1, v89, (__int64)&v94);
        if ( v21 )
          goto LABEL_63;
LABEL_70:
        if ( v89 )
          goto LABEL_71;
LABEL_73:
        *(_QWORD *)v88 += 64LL;
        if ( ptr == *(void **)v88 )
        {
          sub_7E56B0(a1, *(unsigned int *)(*(_QWORD *)v90 - 4LL), *(_QWORD *)v90, 0, 0);
          return sub_186B220((void *)(*(_QWORD *)v90 - 8LL));
        }
      }
      if ( v89 )
        ++*(_DWORD *)(v89 + 8);
      v43 = *(unsigned int **)(*(_QWORD *)v84 + 24LL);
      v44 = *(_QWORD *)(*(_QWORD *)v84 + 32LL);
      v85 = v43;
      v98 = _mm_loadh_ps((const double *)&v85);
      if ( v44 )
      {
        v45 = nullptr;
        v46 = 0;
        do
        {
          if ( v46 >= *(_DWORD *)(v44 - 4) )
            break;
          v47 = *(_QWORD *)(v44 + 8LL * v46);
          if ( v47 )
            ++*(_DWORD *)(v47 + 8);
          if ( v45 )
          {
            v48 = *((_DWORD *)v45 - 1);
            if ( v48 == *((_DWORD *)v45 - 2) )
            {
              v62 = (3 * v48 + 1) >> 1;
              v63 = 8 * v62 + 8;
              v64 = v62;
              if ( 8 * v48 + 8 >= (unsigned int)v63 || v48 >= v62 )
              {
                v7 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v96, "Overflow encountered when expanding vector");
                *v7 = (char *)off_1C63128;
                sub_2333C0(v7 + 1, v96);
                sub_233E40((__int64)v96);
                __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v65 = (unsigned int *)sub_186B300(v45 - 1, v63);
              v66 = v65[1];
              v45 = v65 + 2;
              *v65 = v64;
              v43 = &v65[2 * v66 + 2];
              v50 = v66 + 1;
              v44 = *(_QWORD *)(*(_QWORD *)v84 + 32LL);
            }
            else
            {
              v49 = v48;
              v50 = v48 + 1;
              v43 = (unsigned int *)&v45[v49];
            }
          }
          else
          {
            v76 = (_QWORD *)sub_186B270(0x18u);
            *v76 = 2;
            v43 = (unsigned int *)(v76 + 1);
            v44 = *(_QWORD *)(*(_QWORD *)v84 + 32LL);
            v50 = 1;
            v45 = v43;
          }
          *(_QWORD *)v43 = v47;
          ++v46;
          *((_DWORD *)v45 - 1) = v50;
        }
        while ( v44 );
        v99 = v45;
        *(__m128 *)v97 = _mm_loadh_ps((const double *)v91);
        sub_7DC460(a1, (__int64)v97, v44, (__int64)v43, v16, v17);
        if ( v45 )
        {
          v51 = (__int64)v85;
          v52 = v45;
          v53 = (unsigned __int64)&v45[*((unsigned int *)v45 - 1)];
          if ( (unsigned __int64)v45 < v53 )
          {
            do
            {
              while ( 1 )
              {
                v54 = *v52;
                if ( *v52 )
                {
                  v32 = (*(_DWORD *)(v54 + 8))-- == 1;
                  if ( v32 )
                    break;
                }
                if ( (unsigned __int64)++v52 >= v53 )
                  goto LABEL_58;
              }
              ++v52;
              sub_15D7BC0(v51, v54);
            }
            while ( (unsigned __int64)v52 < v53 );
          }
LABEL_58:
          sub_186B220(v45 - 1);
        }
      }
      else
      {
        v99 = nullptr;
        *(__m128 *)v97 = _mm_loadh_ps((const double *)v91);
        sub_7DC460(a1, (__int64)v97, 0, (__int64)v43, v16, v17);
      }
      if ( v89 )
      {
        v55 = v89;
        LODWORD(v85) = *(_DWORD *)(v89 + 8);
        v32 = (_DWORD)v85 == 1;
        *(_DWORD *)(v89 + 8) = (_DWORD)v85 - 1;
        if ( v32 )
        {
          v77 = v55;
          sub_15D7BC0(*(_QWORD *)v91, v55);
          v95 = v21;
          sub_7DC1D0(a1, v77, (__int64)&v94);
        }
        else
        {
          v95 = v21;
          sub_7DC1D0(a1, v55, (__int64)&v94);
        }
        if ( !v21 )
        {
LABEL_71:
          v60 = v89;
          LODWORD(v85) = *(_DWORD *)(v89 + 8);
          v32 = (_DWORD)v85 == 1;
          *(_DWORD *)(v89 + 8) = (_DWORD)v85 - 1;
          if ( v32 )
            sub_15D7BC0(*(_QWORD *)v91, v60);
          goto LABEL_73;
        }
      }
      else
      {
        v95 = v21;
        sub_7DC1D0(a1, 0, (__int64)&v94);
        if ( !v21 )
          goto LABEL_73;
      }
LABEL_63:
      v56 = v92;
      v57 = (__int64 *)v21;
      v58 = (unsigned __int64)&v21[2 * *(v21 - 1)];
      if ( (unsigned __int64)v21 < v58 )
      {
        do
        {
          while ( 1 )
          {
            v59 = *v57;
            if ( *v57 )
            {
              v32 = (*(_DWORD *)(v59 + 8))-- == 1;
              if ( v32 )
                break;
            }
            if ( (unsigned __int64)++v57 >= v58 )
              goto LABEL_69;
          }
          ++v57;
          sub_15D7BC0(v56, v59);
        }
        while ( (unsigned __int64)v57 < v58 );
      }
LABEL_69:
      sub_186B220(v21 - 2);
      goto LABEL_70;
    }
    return sub_7E56B0(a1, 0, 0, 0, 0);
  }
  return sub_7DBC70(a1, a2);
}

