__int64 __fastcall sub_35B700(__m128i *a1, const __m128i *a2)
{
  char **v2; // r13
  char **v3; // rbp
  char **v4; // rbp
  char **exception; // rbp
  char **v6; // r13
  char **v7; // r13
  __m128i v9; // xmm0
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  unsigned int v12; // ebp
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rsi
  int v16; // eax
  _QWORD *v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // r13
  __int64 *v20; // r14
  _DWORD *v21; // r15
  __int64 v22; // rbp
  _QWORD *v23; // rax
  _QWORD *v24; // r14
  __int64 *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // r12
  _QWORD *v30; // rax
  _QWORD *v31; // rsi
  __int64 v32; // rcx
  _QWORD *v33; // rdi
  int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rsi
  unsigned int v37; // r8d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rsi
  unsigned int v41; // ecx
  __int64 *v42; // rbp
  __int64 v43; // rsi
  bool v44; // zf
  unsigned int v45; // r8d
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rsi
  unsigned int v49; // ecx
  unsigned int v50; // r13d
  size_t v51; // rsi
  unsigned int *v52; // rax
  unsigned int v53; // eax
  unsigned int v54; // r13d
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned int v59; // ebp
  _QWORD *v60; // rax
  char *v61; // rbx
  unsigned int v62; // edx
  size_t v63; // rsi
  unsigned int v64; // r14d
  unsigned int *v65; // rax
  unsigned int v66; // eax
  __int64 v67; // rbp
  _QWORD *v68; // rdx
  unsigned int v69; // r14d
  __int64 v70; // rcx
  int v71; // eax
  _QWORD *v72; // rcx
  __int64 v73; // r12
  unsigned int v74; // eax
  unsigned int v75; // ecx
  size_t v76; // rsi
  unsigned int *v77; // rax
  unsigned int v78; // eax
  __int64 v79; // rdx
  char *v80; // rbp
  char *v81; // r12
  __int64 v82; // rsi
  __int64 result; // rax
  unsigned int v84; // r14d
  size_t v85; // rsi
  unsigned int *v86; // rax
  _QWORD *v87; // rax
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  __int64 *v90; // [rsp+0h] [rbp-A8h]
  unsigned int v91; // [rsp+0h] [rbp-A8h]
  __int64 v92; // [rsp+8h] [rbp-A0h]
  unsigned int v93; // [rsp+8h] [rbp-A0h]
  __int64 v94; // [rsp+8h] [rbp-A0h]
  unsigned int v95; // [rsp+10h] [rbp-98h]
  __int64 v96; // [rsp+10h] [rbp-98h]
  double v98[3]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v99; // [rsp+40h] [rbp-68h]
  __int64 v100[11]; // [rsp+50h] [rbp-58h] BYREF

  v9 = _mm_loadu_si128(a2);
  a1[1].m128i_i64[0] = 0;
  v10 = a2->m128i_i64[1];
  *(_QWORD *)&v98[1] = &a1->m128i_i64[1];
  *a1 = _mm_unpacklo_epi64(v9, v9);
  if ( v10 )
  {
    v11 = nullptr;
    v12 = 0;
    do
    {
      if ( v12 >= *(_DWORD *)(v10 - 4) )
        break;
      v13 = *(_QWORD *)(v10 + 8LL * v12);
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      if ( v11 )
      {
        v14 = *((_DWORD *)v11 - 1);
        if ( v14 == *((_DWORD *)v11 - 2) )
        {
          v50 = (3 * v14 + 1) >> 1;
          v51 = 8 * v50 + 8;
          if ( 8 * v14 + 8 >= (unsigned int)v51 || v14 >= v50 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v100, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v100);
            sub_233E40((__int64)v100);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v52 = (unsigned int *)sub_186B300(v11 - 1, v51);
          v11 = v52 + 2;
          *v52 = v50;
          a1[1].m128i_i64[0] = (__int64)(v52 + 2);
          LODWORD(v52) = v52[1];
          v17 = &v11[(unsigned int)v52];
          v10 = a2->m128i_i64[1];
          v16 = (_DWORD)v52 + 1;
        }
        else
        {
          v15 = v14;
          v16 = v14 + 1;
          v17 = &v11[v15];
        }
      }
      else
      {
        v89 = (_QWORD *)sub_186B270(0x18u);
        v11 = v89 + 1;
        *v89 = 2;
        v10 = a2->m128i_i64[1];
        v17 = v89 + 1;
        a1[1].m128i_i64[0] = (__int64)(v89 + 1);
        v16 = 1;
      }
      *v17 = v13;
      ++v12;
      *((_DWORD *)v11 - 1) = v16;
    }
    while ( v10 );
    v18 = (__int64 *)a1;
    v19 = a1->m128i_i64[0];
  }
  else
  {
    v19 = v9.m128i_i64[0];
    v18 = (__int64 *)a1;
  }
  v18[5] = 0;
  v20 = (__int64 *)a2->m128i_i64[1];
  v18[3] = 0;
  v18[4] = v19;
  v18[6] = 0;
  if ( !v20 || (*(_QWORD *)&v98[0] = &v20[*((unsigned int *)v20 - 1)], v20 == *(__int64 **)&v98[0]) )
  {
    result = MEMORY[0x7FFFFFFF8];
    a1[1].m128i_i64[1] = MEMORY[0x7FFFFFFF8];
  }
  else
  {
    v90 = v20;
    v21 = nullptr;
    while ( 1 )
    {
      v99 = v19;
      v22 = *v90;
      if ( *v90 )
        ++*(_DWORD *)(v22 + 8);
      v23 = (_QWORD *)sub_186B270(0x18u);
      v23[1] = v22;
      v24 = v23;
      v25 = v23 + 1;
      *v23 = 0x100000002LL;
      v26 = sub_186B270(0x20u);
      *(_QWORD *)(v26 + 16) = v19;
      v27 = v26;
      *(_QWORD *)(v26 + 24) = 0;
      *(_OWORD *)v26 = 0;
      v28 = *((unsigned int *)v24 + 1);
      if ( (_DWORD)v28 )
      {
        v29 = v24[1];
        if ( v29 )
          ++*(_DWORD *)(v29 + 8);
        v30 = (_QWORD *)sub_186B270(0x18u);
        v31 = v30 + 1;
        v32 = 0;
        *(_QWORD *)(v27 + 24) = v30 + 1;
        v33 = v30 + 1;
        *v30 = 2;
        v34 = 1;
        while ( 1 )
        {
          *v31 = v29;
          ++v32;
          *((_DWORD *)v33 - 1) = v34;
          v28 = *((unsigned int *)v24 + 1);
          if ( (unsigned int)v32 >= (unsigned int)v28 )
            break;
          v29 = v24[v32 + 1];
          if ( v29 )
            ++*(_DWORD *)(v29 + 8);
          v35 = *((_DWORD *)v33 - 1);
          if ( v35 == *((_DWORD *)v33 - 2) )
          {
            v37 = (3 * v35 + 1) >> 1;
            v38 = 8 * v37 + 8;
            if ( 8 * v35 + 8 >= (unsigned int)v38 || v35 >= v37 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v100, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v100);
              sub_233E40((__int64)v100);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v95 = (3 * v35 + 1) >> 1;
            v92 = v32;
            v39 = (unsigned int *)sub_186B300(v33 - 1, v38);
            v40 = v39[1];
            v33 = v39 + 2;
            *(_QWORD *)(v27 + 24) = v39 + 2;
            v32 = v92;
            *v39 = v95;
            LODWORD(v39) = v40;
            v31 = &v33[v40];
            v34 = (_DWORD)v39 + 1;
          }
          else
          {
            v36 = v35;
            v34 = v35 + 1;
            v31 = &v33[v36];
          }
        }
      }
      if ( v21 )
      {
        v41 = *(v21 - 1);
        if ( v41 == *(v21 - 2) )
        {
          v45 = (3 * v41 + 1) >> 1;
          v46 = 8 * v45 + 8;
          if ( 8 * v41 + 8 >= (unsigned int)v46 || v41 >= v45 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v100, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v100);
            sub_233E40((__int64)v100);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v93 = (3 * v41 + 1) >> 1;
          v47 = (unsigned int *)sub_186B300(v21 - 2, v46);
          v48 = v47[1];
          v21 = v47 + 2;
          v49 = v47[1];
          *v47 = v93;
          *(_QWORD *)&v47[2 * v48 + 2] = v27;
          v47[1] = v49 + 1;
          v28 = *((unsigned int *)v24 + 1);
        }
        else
        {
          *(_QWORD *)&v21[2 * v41] = v27;
          *(v21 - 1) = v41 + 1;
        }
      }
      else
      {
        v88 = (_QWORD *)sub_186B270(0x18u);
        v88[1] = v27;
        v21 = v88 + 1;
        *v88 = 0x100000002LL;
        v28 = *((unsigned int *)v24 + 1);
      }
      v42 = &v25[v28];
      while ( v25 < v42 )
      {
        while ( 1 )
        {
          v43 = *v25;
          if ( *v25 )
          {
            v44 = (*(_DWORD *)(v43 + 8))-- == 1;
            if ( v44 )
              break;
          }
          if ( ++v25 >= v42 )
            goto LABEL_37;
        }
        ++v25;
        sub_15D7BC0(v19, v43);
      }
LABEL_37:
      sub_186B220(v24);
      if ( *(__int64 **)&v98[0] == ++v90 )
        break;
      v19 = a1->m128i_i64[0];
    }
    v53 = *(v21 - 1);
    v54 = 1;
    v55 = 0;
    while ( v54 < v53 )
    {
      v96 = *(_QWORD *)&v21[2 * v55];
      v56 = a1->m128i_i64[0];
      v98[0] = *(double *)&v21[2 * v54];
      v94 = v56;
      v99 = v56;
      v57 = *(_QWORD *)(v96 + 24);
      v58 = *(_QWORD *)(*(_QWORD *)&v98[0] + 24LL);
      if ( v57 )
      {
        v59 = *(_DWORD *)(v57 - 4);
        if ( !v58 )
          goto LABEL_49;
      }
      else
      {
        if ( !v58 )
          goto LABEL_66;
        v59 = 0;
      }
      v59 += *(_DWORD *)(v58 - 4);
LABEL_49:
      if ( v59 )
      {
        v60 = (_QWORD *)sub_186B270(0x18u);
        v61 = (char *)(v60 + 1);
        *v60 = 2;
        while ( 1 )
        {
          v66 = *((_DWORD *)v61 - 2);
          if ( v66 >= v59 )
            break;
          v62 = (3 * v66 + 1) >> 1;
          v63 = 8 * v62 + 8;
          v64 = v62;
          if ( 8 * v66 + 8 >= (unsigned int)v63 || v66 >= v62 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v100, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v100);
            sub_233E40((__int64)v100);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v65 = (unsigned int *)sub_186B300(v61 - 8, v63);
          *v65 = v64;
          v61 = (char *)(v65 + 2);
        }
        *((_DWORD *)v61 - 1) = v59;
        memset(v61, 0, 8LL * v59);
        v67 = sub_186B270(0x20u);
        v68 = nullptr;
        v69 = 0;
        *(_OWORD *)v67 = 0;
        *(_QWORD *)(v67 + 24) = 0;
        *(_QWORD *)(v67 + 16) = v94;
        while ( v69 < *((_DWORD *)v61 - 1) )
        {
          v73 = *(_QWORD *)&v61[8 * v69];
          if ( v73 )
            ++*(_DWORD *)(v73 + 8);
          if ( v68 )
          {
            v74 = *((_DWORD *)v68 - 1);
            if ( v74 == *((_DWORD *)v68 - 2) )
            {
              v75 = (3 * v74 + 1) >> 1;
              v76 = 8 * v75 + 8;
              if ( 8 * v74 + 8 >= (unsigned int)v76 || v74 >= v75 )
              {
                v2 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v100, "Overflow encountered when expanding vector");
                *v2 = (char *)off_1C63128;
                sub_2333C0(v2 + 1, v100);
                sub_233E40((__int64)v100);
                __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v91 = (3 * v74 + 1) >> 1;
              v77 = (unsigned int *)sub_186B300(v68 - 1, v76);
              v68 = v77 + 2;
              *(_QWORD *)(v67 + 24) = v77 + 2;
              *v77 = v91;
              LODWORD(v77) = v77[1];
              v72 = &v68[(unsigned int)v77];
              v71 = (_DWORD)v77 + 1;
            }
            else
            {
              v70 = v74;
              v71 = v74 + 1;
              v72 = &v68[v70];
            }
          }
          else
          {
            v87 = (_QWORD *)sub_186B270(0x18u);
            *v87 = 2;
            v68 = v87 + 1;
            v71 = 1;
            *(_QWORD *)(v67 + 24) = v68;
            v72 = v68;
          }
          *v72 = v73;
          ++v69;
          *((_DWORD *)v68 - 1) = v71;
        }
        goto LABEL_67;
      }
LABEL_66:
      v67 = sub_186B270(0x20u);
      v61 = nullptr;
      *(_OWORD *)v67 = 0;
      *(_QWORD *)(v67 + 24) = 0;
      *(_QWORD *)(v67 + 16) = v94;
LABEL_67:
      v78 = *(v21 - 1);
      *(__m128 *)v67 = _mm_loadh_ps(v98);
      if ( v78 == *(v21 - 2) )
      {
        v84 = (3 * v78 + 1) >> 1;
        v85 = 8 * v84 + 8;
        if ( 8 * v78 + 8 >= (unsigned int)v85 || v78 >= v84 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v100, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v100);
          sub_233E40((__int64)v100);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v86 = (unsigned int *)sub_186B300(v21 - 2, v85);
        *v86 = v84;
        v21 = v86 + 2;
        v78 = v86[1];
      }
      v79 = v78;
      v53 = v78 + 1;
      *(_QWORD *)&v21[2 * v79] = v67;
      *(v21 - 1) = v53;
      if ( v61 )
      {
        v80 = v61;
        v81 = &v61[8 * *((unsigned int *)v61 - 1)];
        if ( v61 < v81 )
        {
          do
          {
            while ( 1 )
            {
              v82 = *(_QWORD *)v80;
              if ( *(_QWORD *)v80 )
              {
                v44 = (*(_DWORD *)(v82 + 8))-- == 1;
                if ( v44 )
                  break;
              }
              v80 += 8;
              if ( v80 >= v81 )
                goto LABEL_75;
            }
            v80 += 8;
            sub_15D7BC0(v94, v82);
          }
          while ( v80 < v81 );
        }
LABEL_75:
        sub_186B220(v61 - 8);
        v53 = *(v21 - 1);
      }
      v54 += 2;
      v55 = v54 - 1;
    }
    a1[1].m128i_i64[1] = *(_QWORD *)&v21[2 * v53 - 2];
    return sub_186B220(v21 - 2);
  }
  return result;
}

