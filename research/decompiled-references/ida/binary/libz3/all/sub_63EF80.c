__int64 __fastcall sub_63EF80(__int64 a1, _QWORD *a2)
{
  char **exception; // rbp
  char **v3; // rbp
  __int64 v4; // rax
  __int64 *v5; // rbx
  __m128i *v6; // r14
  __int64 v7; // rsi
  __int64 *v8; // rdi
  _QWORD *v9; // rcx
  int v10; // eax
  __int64 v11; // r12
  __int64 v12; // rbp
  unsigned int v13; // r15d
  int v14; // edx
  __int64 v15; // rsi
  __int64 *v16; // r8
  __int64 v17; // rax
  __int64 *v18; // r9
  __int64 *v19; // rax
  __int64 v20; // rsi
  __int32 v21; // r9d
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rsi
  int v25; // eax
  __int64 *v26; // rsi
  __int64 *v27; // rax
  __int64 v28; // rax
  int v29; // r11d
  __int64 v30; // r8
  __m128i *v31; // r13
  __int64 v32; // rax
  __m128i *v33; // rdi
  __m128i *v34; // rax
  __m128i *v35; // r8
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 v38; // rsi
  unsigned int v39; // edx
  __int64 v40; // r9
  __m128i *v41; // rbp
  char *v42; // r8
  __int64 v43; // r12
  int v44; // r11d
  __int64 v45; // rax
  char *v46; // r10
  __int64 v47; // rdi
  char *i; // rax
  __int64 v49; // rdi
  void **v50; // rax
  __int64 **v51; // r12
  __int64 v52; // r13
  unsigned int v53; // r8d
  int v54; // edi
  __int64 v55; // rax
  __m128i *v56; // r10
  __m128i *j; // rax
  __int64 *v58; // rsi
  __int64 *v59; // rsi
  unsigned int v60; // r13d
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rsi
  __m128i *v64; // rax
  __m128i *v65; // r10
  __m128i *v66; // rdx
  const __m128i *v67; // rax
  const __m128i *v68; // r15
  __int64 v69; // rdx
  __m128i *v70; // rsi
  __m128i *v71; // rdx
  __m128i v72; // xmm0
  __int64 **v74; // rax
  _QWORD *v75; // rdi
  unsigned int v76; // eax
  __int64 v77; // rsi
  int v78; // eax
  __int64 **v79; // rsi
  unsigned int v80; // r10d
  unsigned int *v81; // rax
  __int64 v82; // rsi
  __int64 v83; // rax
  _QWORD *v85; // rdi
  _QWORD *v86; // rdx
  unsigned int v89; // [rsp+10h] [rbp-118h]
  _QWORD *v90; // [rsp+10h] [rbp-118h]
  unsigned int v91; // [rsp+10h] [rbp-118h]
  unsigned int v92; // [rsp+10h] [rbp-118h]
  _QWORD *v93; // [rsp+10h] [rbp-118h]
  int v94; // [rsp+18h] [rbp-110h]
  __int32 v95; // [rsp+18h] [rbp-110h]
  __int64 v96; // [rsp+18h] [rbp-110h]
  __int64 v97; // [rsp+18h] [rbp-110h]
  unsigned int v98; // [rsp+20h] [rbp-108h]
  _QWORD *v99; // [rsp+20h] [rbp-108h]
  __int32 v100; // [rsp+28h] [rbp-100h]
  __m128i *v101; // [rsp+28h] [rbp-100h]
  _QWORD *v102; // [rsp+28h] [rbp-100h]
  int v103; // [rsp+30h] [rbp-F8h]
  unsigned int v104; // [rsp+30h] [rbp-F8h]
  unsigned int v105; // [rsp+30h] [rbp-F8h]
  unsigned int v106; // [rsp+34h] [rbp-F4h]
  _QWORD *v107; // [rsp+40h] [rbp-E8h]
  int v108; // [rsp+40h] [rbp-E8h]
  _QWORD *v109; // [rsp+50h] [rbp-D8h]
  __int64 v110[4]; // [rsp+70h] [rbp-B8h] BYREF
  void *v111; // [rsp+90h] [rbp-98h] BYREF
  unsigned int v112; // [rsp+98h] [rbp-90h]
  __int64 v113; // [rsp+B0h] [rbp-78h]
  void *v114; // [rsp+B8h] [rbp-70h]
  void *ptr[11]; // [rsp+D0h] [rbp-58h] BYREF

  if ( *a2 )
    v106 = *(_DWORD *)(*a2 - 4LL);
  else
    v106 = 0;
  v4 = sub_186B270(0x80u);
  LODWORD(v5) = a1;
  *(_QWORD *)v4 = 0;
  v6 = (__m128i *)v4;
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 88) = 0;
  *(_QWORD *)(v4 + 96) = 0;
  *(_DWORD *)(v4 + 104) = 0;
  *(_QWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 120) = 0;
  sub_639BA0((__int64)&v111, a1, 1);
  v7 = *(unsigned int *)(a1 + 8);
  v8 = *(__int64 **)a1;
  v9 = a2;
  v10 = *(_DWORD *)(a1 + 8);
  v11 = *(_QWORD *)a1 + 16 * v7;
  if ( v11 == *(_QWORD *)a1 )
    goto LABEL_156;
  v5 = *(__int64 **)a1;
  while ( (unsigned __int64)*v5 <= 1 )
  {
    v5 += 2;
    if ( (__int64 *)v11 == v5 )
      goto LABEL_156;
  }
  if ( (__int64 *)v11 == v5 )
  {
LABEL_156:
    v13 = 8;
    goto LABEL_55;
  }
  v12 = *v5;
  v13 = 8;
  v94 = 0;
  v103 = 0;
  while ( 2 )
  {
    v14 = *(_DWORD *)(v12 + 12);
    v15 = 16 * v7;
    v16 = &v8[(unsigned __int64)v15 / 8];
    v17 = 16LL * (v14 & (unsigned int)(v10 - 1));
    v18 = &v8[(unsigned __int64)v17 / 8];
    if ( v17 == v15 )
      goto LABEL_30;
    v19 = &v8[(unsigned __int64)v17 / 8];
    do
    {
      v20 = *v19;
      if ( (unsigned __int64)*v19 > 1 )
      {
        if ( *(_DWORD *)(v20 + 12) == v14 && v20 == v12 )
        {
LABEL_35:
          v21 = *(_DWORD *)(v19[1] + 12);
          if ( v21 )
            goto LABEL_36;
LABEL_17:
          v22 = (_QWORD *)*v9;
          if ( *v9 )
          {
            v23 = *((_DWORD *)v22 - 1);
            if ( v23 == *((_DWORD *)v22 - 2) )
            {
              v60 = (3 * v23 + 1) >> 1;
              v61 = 8 * v60 + 8;
              if ( 8 * v23 + 8 >= (unsigned int)v61 || v23 >= v60 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v110, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v110);
                sub_233E40((__int64)v110);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v90 = v9;
              v62 = (unsigned int *)sub_186B300(v22 - 1, v61);
              v63 = v62[1];
              v9 = v90;
              v22 = v62 + 2;
              *v62 = v60;
              LODWORD(v62) = v63;
              *v90 = v22;
              v26 = &v22[v63];
              v25 = (_DWORD)v62 + 1;
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
            v93 = v9;
            v86 = (_QWORD *)sub_186B270(0x18u);
            v9 = v93;
            *v86 = 2;
            v25 = 1;
            v22 = v86 + 1;
            *v93 = v22;
            v26 = v22;
          }
          *v26 = v12;
          *((_DWORD *)v22 - 1) = v25;
          goto LABEL_21;
        }
      }
      else if ( !v20 )
      {
        goto LABEL_16;
      }
      v19 += 2;
    }
    while ( v16 != v19 );
LABEL_30:
    while ( v18 != v8 )
    {
      v28 = *v8;
      if ( (unsigned __int64)*v8 > 1 )
      {
        if ( *(_DWORD *)(v28 + 12) == v14 && v28 == v12 )
        {
          v19 = v8;
          goto LABEL_35;
        }
      }
      else if ( !v28 )
      {
        break;
      }
      v8 += 2;
    }
LABEL_16:
    v21 = *(_DWORD *)(a1 + 76);
    if ( !v21 )
      goto LABEL_17;
LABEL_36:
    v89 = 2 * v13;
    if ( 3 * v13 < 4 * (v94 + v103) )
    {
      v107 = v9;
      v100 = v21;
      v64 = (__m128i *)sub_186B270(16LL * v89);
      v30 = 16LL * v89;
      v65 = v64;
      v21 = v100;
      v66 = &v64[(unsigned __int64)v30 / 0x10];
      v9 = v107;
      if ( v89 )
      {
        do
        {
          v64->m128i_i64[0] = 0;
          ++v64;
          v64[-1].m128i_i32[2] = 0;
        }
        while ( v64 != v66 );
        v31 = &v65[(unsigned __int64)v30 / 0x10];
        v29 = v89 - 1;
        v67 = &v6[v13];
      }
      else
      {
        v31 = v64;
        v29 = -1;
        v67 = &v6[v13];
        if ( v6 == v67 )
        {
LABEL_105:
          if ( v6 )
          {
            v109 = v107;
            v108 = v29;
            v101 = v65;
            v95 = v21;
            sub_186B220(v6);
            v9 = v109;
            v30 = 16LL * v89;
            v29 = v108;
            v65 = v101;
            v21 = v95;
          }
          v94 = 0;
          v14 = *(_DWORD *)(v12 + 12);
          v6 = v65;
          v13 = v89;
          goto LABEL_38;
        }
      }
      v68 = v6;
      do
      {
        while ( v68->m128i_i64[0] <= 1uLL )
        {
          if ( ++v68 == v67 )
            goto LABEL_105;
        }
        v69 = 16LL * (*(_DWORD *)(v68->m128i_i64[0] + 12) & (unsigned int)v29);
        v70 = &v65[(unsigned __int64)v69 / 0x10];
        if ( v30 == v69 )
        {
LABEL_108:
          if ( v65 == v70 )
          {
LABEL_152:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v71 = v65;
          while ( v71->m128i_i64[0] )
          {
            if ( v70 == ++v71 )
              goto LABEL_152;
          }
        }
        else
        {
          v71 = &v65[(unsigned __int64)v69 / 0x10];
          while ( v71->m128i_i64[0] )
          {
            if ( ++v71 == v31 )
              goto LABEL_108;
          }
        }
        v72 = _mm_loadu_si128(v68++);
        *v71 = v72;
      }
      while ( v68 != v67 );
      goto LABEL_105;
    }
    v29 = v13 - 1;
    v30 = 16LL * v13;
    v31 = &v6[(unsigned __int64)v30 / 0x10];
LABEL_38:
    v32 = 16LL * (v14 & (unsigned int)v29);
    v33 = &v6[(unsigned __int64)v32 / 0x10];
    if ( v32 == v30 )
    {
      v35 = nullptr;
LABEL_46:
      if ( v6 != v33 )
      {
        v34 = v6;
        do
        {
          while ( 1 )
          {
            v37 = v34->m128i_i64[0];
            if ( v34->m128i_i64[0] <= 1uLL )
              break;
            if ( *(_DWORD *)(v37 + 12) == v14 && v37 == v12 )
              goto LABEL_154;
            if ( v33 == ++v34 )
              goto LABEL_54;
          }
          if ( !v37 )
            goto LABEL_88;
          v35 = v34++;
        }
        while ( v33 != v34 );
      }
LABEL_54:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v34 = &v6[(unsigned __int64)v32 / 0x10];
    v35 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v36 = v34->m128i_i64[0];
        if ( v34->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v36 + 12) == v14 && v36 == v12 )
        {
LABEL_154:
          v34->m128i_i64[0] = v12;
          v34->m128i_i32[2] = v21;
          goto LABEL_21;
        }
        if ( ++v34 == v31 )
          goto LABEL_46;
      }
      if ( !v36 )
        break;
      v35 = v34++;
      if ( v34 == v31 )
        goto LABEL_46;
    }
LABEL_88:
    if ( v35 )
      --v94;
    else
      v35 = v34;
    v35->m128i_i64[0] = v12;
    v35->m128i_i32[2] = v21;
    ++v103;
LABEL_21:
    v27 = v5 + 2;
    if ( (__int64 *)v11 != v5 + 2 )
    {
      while ( 1 )
      {
        v12 = *v27;
        v5 = v27;
        if ( (unsigned __int64)*v27 > 1 )
          break;
        v27 += 2;
        if ( (__int64 *)v11 == v27 )
          goto LABEL_55;
      }
      if ( (__int64 *)v11 != v27 )
      {
        v7 = *(unsigned int *)(a1 + 8);
        v8 = *(__int64 **)a1;
        v10 = *(_DWORD *)(a1 + 8);
        continue;
      }
    }
    break;
  }
LABEL_55:
  v38 = *v9;
  if ( *v9 )
  {
    v39 = v106;
    v40 = 16LL * v13;
    v41 = (__m128i *)((char *)v6 + v40);
    while ( v39 < *(_DWORD *)(v38 - 4) )
    {
      v42 = (char *)v111;
      v43 = *(_QWORD *)(v38 + 8LL * v39);
      v44 = *(_DWORD *)(v43 + 12);
      v45 = 16LL * v112;
      v46 = (char *)v111 + v45;
      v47 = 16LL * (v44 & (v112 - 1));
      v5 = (__int64 *)((char *)v111 + v47);
      if ( v47 != v45 )
      {
        for ( i = (char *)v111 + v47; v46 != i; i += 16 )
        {
          v49 = *(_QWORD *)i;
          if ( *(_QWORD *)i > 1u )
          {
            if ( *(_DWORD *)(v49 + 12) == v44 && v43 == v49 )
            {
LABEL_130:
              v50 = *((void ***)i + 1);
              goto LABEL_66;
            }
          }
          else if ( !v49 )
          {
LABEL_65:
            v50 = ptr;
            goto LABEL_66;
          }
        }
      }
      if ( v111 != v5 )
      {
        while ( 1 )
        {
          v83 = *(_QWORD *)v42;
          if ( *(_QWORD *)v42 > 1u )
          {
            if ( *(_DWORD *)(v83 + 12) == v44 && v43 == v83 )
            {
              i = v42;
              goto LABEL_130;
            }
          }
          else if ( !v83 )
          {
            break;
          }
          v42 += 16;
          if ( v5 == (__int64 *)v42 )
            goto LABEL_65;
        }
      }
      v50 = ptr;
LABEL_66:
      v51 = (__int64 **)*v50;
      v52 = (__int64)*v50 + 8 * *((unsigned int *)v50 + 2);
      if ( *v50 != (void *)v52 )
      {
        while ( (unsigned __int64)*v51 <= 1 )
        {
          if ( (__int64 **)v52 == ++v51 )
            goto LABEL_120;
        }
        if ( (__int64 **)v52 != v51 )
        {
          v5 = *v51;
          v53 = v13 - 1;
          do
          {
            v54 = *((_DWORD *)v5 + 3);
            v55 = 16LL * (v53 & v54);
            v56 = &v6[(unsigned __int64)v55 / 0x10];
            if ( v55 == v40 )
            {
LABEL_80:
              if ( v6 != v56 )
              {
                for ( j = v6; v56 != j; ++j )
                {
                  v59 = (__int64 *)j->m128i_i64[0];
                  if ( j->m128i_i64[0] > 1uLL )
                  {
                    if ( *((_DWORD *)v59 + 3) == v54 && v59 == v5 )
                      goto LABEL_113;
                  }
                  else if ( !v59 )
                  {
                    break;
                  }
                }
              }
LABEL_162:
              BUG();
            }
            j = &v6[(unsigned __int64)v55 / 0x10];
            while ( 1 )
            {
              while ( 1 )
              {
                v58 = (__int64 *)j->m128i_i64[0];
                if ( j->m128i_i64[0] > 1uLL )
                  break;
                if ( !v58 )
                  goto LABEL_162;
                if ( v41 == ++j )
                  goto LABEL_80;
              }
              if ( *((_DWORD *)v58 + 3) == v54 && v58 == v5 )
                break;
              if ( v41 == ++j )
                goto LABEL_80;
            }
LABEL_113:
            if ( j->m128i_i32[2]-- == 1 )
            {
              v75 = (_QWORD *)*v9;
              if ( *v9 )
              {
                v76 = *((_DWORD *)v75 - 1);
                if ( v76 == *((_DWORD *)v75 - 2) )
                {
                  v80 = (3 * v76 + 1) >> 1;
                  if ( 8 * v76 + 8 >= 8 * v80 + 8 || v76 >= v80 )
                  {
                    v3 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v110, "Overflow encountered when expanding vector");
                    *v3 = (char *)off_1C63128;
                    sub_2333C0(v3 + 1, v110);
                    sub_233E40((__int64)v110);
                    __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v102 = v9;
                  v98 = v53;
                  v104 = (3 * v76 + 1) >> 1;
                  v96 = v40;
                  v91 = v39;
                  v81 = (unsigned int *)sub_186B300((void *)(*v9 - 8LL), 8 * v80 + 8);
                  v82 = v81[1];
                  v75 = v81 + 2;
                  v9 = v102;
                  v39 = v91;
                  v40 = v96;
                  v53 = v98;
                  *v81 = v104;
                  LODWORD(v81) = v82;
                  *v102 = v75;
                  v79 = (__int64 **)&v75[v82];
                  v78 = (_DWORD)v81 + 1;
                }
                else
                {
                  v77 = v76;
                  v78 = v76 + 1;
                  v79 = (__int64 **)&v75[v77];
                }
              }
              else
              {
                v99 = v9;
                v105 = v53;
                v97 = v40;
                v92 = v39;
                v85 = (_QWORD *)sub_186B270(0x18u);
                v9 = v99;
                *v85 = 2;
                v78 = 1;
                v75 = v85 + 1;
                v39 = v92;
                v40 = v97;
                *v99 = v75;
                v53 = v105;
                v79 = (__int64 **)v75;
              }
              *v79 = v5;
              *((_DWORD *)v75 - 1) = v78;
            }
            v74 = v51 + 1;
            if ( (__int64 **)v52 == v51 + 1 )
              break;
            while ( 1 )
            {
              v5 = *v74;
              v51 = v74;
              if ( (unsigned __int64)*v74 > 1 )
                break;
              if ( (__int64 **)v52 == ++v74 )
                goto LABEL_119;
            }
          }
          while ( v74 != (__int64 **)v52 );
LABEL_119:
          v38 = *v9;
        }
      }
LABEL_120:
      ++v39;
      if ( !v38 )
        goto LABEL_121;
    }
    LODWORD(v5) = 1;
    if ( *(_DWORD *)(v38 - 4) < *(_DWORD *)(a1 + 12) + v106 )
    {
      LODWORD(v5) = 0;
      *(_DWORD *)(v38 - 4) = v106;
    }
  }
  else
  {
LABEL_121:
    LOBYTE(v5) = *(_DWORD *)(a1 + 12) + v106 == 0;
  }
  sub_643660(&v111);
  if ( ptr[0] )
    sub_186B220(ptr[0]);
  if ( v114 )
    sub_186B220(v114);
  if ( v113 )
    sub_186B220((void *)(v113 - 8));
  if ( v111 )
    sub_186B220(v111);
  if ( v6 )
    sub_186B220(v6);
  return (unsigned int)v5;
}

