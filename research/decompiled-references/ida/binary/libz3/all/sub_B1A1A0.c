__int64 __fastcall sub_B1A1A0(__int64 a1, unsigned int a2, int a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  int v7; // ebx
  int v8; // r13d
  unsigned int *v9; // rax
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // r8d
  unsigned int v15; // r13d
  char *v16; // rdi
  int v17; // r15d
  unsigned int *v18; // r14
  unsigned int v19; // ebp
  unsigned int v20; // r12d
  __int64 v21; // rbx
  char *v22; // rbp
  void *v23; // rdi
  int v24; // esi
  char *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // edx
  __int64 v29; // r8
  __int64 v30; // r13
  _QWORD *v31; // r12
  __int64 v32; // rcx
  int v33; // edx
  unsigned int v34; // ecx
  __int64 v35; // rax
  int v36; // ecx
  __int64 *v37; // rax
  unsigned int *v38; // rax
  __int64 v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // rax
  unsigned int v42; // edx
  size_t v43; // rsi
  _DWORD *v44; // rax
  __int64 v45; // rax
  int v46; // ecx
  _QWORD *v47; // rax
  __int64 v48; // rdi
  __m128i v49; // xmm0
  __int64 v50; // rax
  __int64 *v51; // r13
  _QWORD *v52; // r12
  __m128i v53; // xmm0
  __int64 v54; // rax
  int v55; // ecx
  __int64 *v56; // rax
  unsigned int v57; // esi
  __int64 v58; // rdx
  unsigned int v59; // ecx
  unsigned int v60; // r9d
  size_t v61; // rsi
  _DWORD *v62; // rax
  __int64 v63; // rax
  int v64; // ecx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  int v68; // r8d
  _QWORD *v69; // rax
  unsigned int v70; // ebx
  unsigned int v72; // eax
  int v73; // esi
  unsigned int v74; // eax
  char **exception; // r15
  char **v76; // r13
  __m128i *v77; // [rsp+8h] [rbp-110h] BYREF
  unsigned int *v78; // [rsp+10h] [rbp-108h]
  __int64 v79; // [rsp+18h] [rbp-100h]
  char *v80; // [rsp+20h] [rbp-F8h]
  unsigned int *v81; // [rsp+28h] [rbp-F0h]
  __int64 v82; // [rsp+30h] [rbp-E8h]
  __int64 v83; // [rsp+38h] [rbp-E0h]
  __m128i v84; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v85; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v86; // [rsp+60h] [rbp-B8h]
  unsigned int *v87; // [rsp+68h] [rbp-B0h]
  unsigned int *v88; // [rsp+70h] [rbp-A8h]
  int v89; // [rsp+7Ch] [rbp-9Ch]
  int v90; // [rsp+80h] [rbp-98h]
  unsigned int v91; // [rsp+84h] [rbp-94h]
  unsigned int *v92; // [rsp+88h] [rbp-90h]
  unsigned int *v93; // [rsp+90h] [rbp-88h] BYREF
  __int64 v94; // [rsp+98h] [rbp-80h] BYREF
  __m128i v95; // [rsp+A0h] [rbp-78h] BYREF
  __int64 *v96; // [rsp+B0h] [rbp-68h] BYREF
  _QWORD *v97; // [rsp+B8h] [rbp-60h]
  __int64 v98[11]; // [rsp+C0h] [rbp-58h] BYREF

  v5 = a4;
  v79 = a1;
  v91 = a2;
  v90 = a3;
  v92 = a5;
  if ( a2 > 4 )
  {
    v7 = a3;
    if ( !a3 )
    {
      v81 = nullptr;
      if ( !a4 )
        goto LABEL_111;
      goto LABEL_6;
    }
  }
  else
  {
    v6 = 21;
    v7 = v90 + _bittest64(&v6, (unsigned __int8)v91);
    if ( !v7 )
    {
      v81 = nullptr;
      goto LABEL_5;
    }
  }
  v81 = nullptr;
  v8 = 0;
  do
  {
    LODWORD(v98[0]) = dword_1C7ED20;
    v93 = v81;
    sub_B0E290(&v93, (unsigned int *)v98);
    ++v8;
    v81 = v93;
  }
  while ( v8 != v7 );
LABEL_5:
  if ( !(_DWORD)v5 )
    goto LABEL_9;
LABEL_6:
  v89 = v7 - 1;
  v78 = v92;
  v87 = &v92[v5];
  v88 = &v81[v7 - 1];
  if ( v7 )
  {
    while ( 1 )
    {
      v18 = v88;
      v17 = v89;
      do
      {
        if ( v17 )
          v19 = v81[v17 - 1];
        else
          v19 = dword_1C7ED24;
        v20 = *v78;
        v21 = sub_186B270(0x10u);
        *(_QWORD *)(v21 + 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(v19)).m128i_u64[0];
        *(_QWORD *)v21 = 0x200000002LL;
        v22 = (char *)sub_186B270(0x10u);
        v23 = v22 + 8;
        *(_QWORD *)v22 = 0x200000002LL;
        if ( v21 + 8 != v21 + 8 + 4LL * *(unsigned int *)(v21 + 4) )
          v23 = memcpy(v23, (const void *)(v21 + 8), 4LL * *(unsigned int *)(v21 + 4));
        v24 = dword_1C7ED24;
        v25 = (char *)v23;
        v26 = 0;
        v15 = dword_1C7ED20;
        do
        {
          v28 = *(_DWORD *)v25;
          if ( *(_DWORD *)v25 == v15 )
            goto LABEL_22;
          if ( v24 != v28 )
          {
            v27 = (unsigned int)v26;
            v26 = (unsigned int)(v26 + 1);
            *((_DWORD *)v23 + v27) = v28;
          }
          v25 += 4;
        }
        while ( v22 + 16 != v25 );
        *((_DWORD *)v22 + 1) = v26;
        if ( (_DWORD)v26 == 1 )
        {
          v15 = *((_DWORD *)v22 + 2);
          goto LABEL_22;
        }
        if ( (_DWORD)v26 != 2 )
        {
          if ( !(_DWORD)v26 )
          {
            v15 = v24;
            goto LABEL_22;
          }
          v29 = (__int64)v22;
          v30 = 0;
          v31 = nullptr;
          v77 = *(__m128i **)(v79 + 8);
          v84.m128i_i64[0] = v77->m128i_i64[1];
          v96 = (__int64 *)v84.m128i_i64[0];
          v80 = &v22[4 * v26];
          while ( 1 )
          {
            v39 = v77->m128i_i64[0];
            v40 = *(_DWORD *)(v29 + 8);
            if ( v40 == v24 )
            {
              v41 = *(_QWORD *)(*(_QWORD *)(v39 + 104) + 856LL);
              if ( v41 )
                goto LABEL_52;
            }
            else if ( v40 == dword_1C7ED20 )
            {
              v41 = *(_QWORD *)(*(_QWORD *)(v39 + 104) + 864LL);
              if ( v41 )
              {
LABEL_52:
                v33 = *(_DWORD *)(v41 + 8) + 1;
                *(_DWORD *)(v41 + 8) = v33;
                if ( !v30 )
                  goto LABEL_65;
                v11 = (*(_DWORD *)(v30 + 8))-- == 1;
                if ( !v11 )
                  goto LABEL_54;
                v83 = v41;
                v82 = v29;
                sub_15D7BC0(v84.m128i_i64[0], v30);
LABEL_70:
                v29 = v82;
                v30 = v83;
LABEL_71:
                v33 = *(_DWORD *)(v30 + 8);
                goto LABEL_45;
              }
            }
            else
            {
              v32 = *(_QWORD *)(*(_QWORD *)(v39 + 8840) + 8LL * (v40 >> 1));
              if ( (v40 & 1) != 0 )
              {
                v48 = *(_QWORD *)(v39 + 104);
                v82 = v29;
                v41 = sub_15E1A70(v48);
                v29 = v82;
                if ( v41 )
                {
                  v33 = *(_DWORD *)(v41 + 8) + 1;
                  *(_DWORD *)(v41 + 8) = v33;
                  if ( v30 )
                  {
                    v11 = (*(_DWORD *)(v30 + 8))-- == 1;
                    if ( v11 )
                    {
                      v83 = v41;
                      sub_15D7BC0(v84.m128i_i64[0], v30);
                      goto LABEL_70;
                    }
LABEL_54:
                    v33 = *(_DWORD *)(v41 + 8);
                    v30 = v41;
LABEL_45:
                    *(_DWORD *)(v30 + 8) = v33 + 1;
                    if ( !v31 )
                      goto LABEL_64;
                    goto LABEL_46;
                  }
LABEL_65:
                  v30 = v41;
                  goto LABEL_45;
                }
              }
              else if ( v32 )
              {
                v33 = *(_DWORD *)(v32 + 8) + 1;
                *(_DWORD *)(v32 + 8) = v33;
                if ( !v30 )
                {
                  v30 = v32;
                  goto LABEL_45;
                }
                v11 = (*(_DWORD *)(v30 + 8))-- == 1;
                if ( !v11 )
                {
                  v33 = *(_DWORD *)(v32 + 8);
                  v30 = v32;
                  goto LABEL_45;
                }
                v83 = v29;
                v82 = v32;
                sub_15D7BC0(v84.m128i_i64[0], v30);
                v29 = v83;
                v30 = v82;
                goto LABEL_71;
              }
            }
            if ( v30 )
            {
              v11 = (*(_DWORD *)(v30 + 8))-- == 1;
              if ( v11 )
              {
                v82 = v29;
                sub_15D7BC0(v84.m128i_i64[0], v30);
                v29 = v82;
              }
            }
            v30 = 0;
            if ( !v31 )
            {
LABEL_64:
              v82 = v29;
              v47 = (_QWORD *)sub_186B270(0x18u);
              v31 = v47 + 1;
              v29 = v82;
              v36 = 1;
              *v47 = 2;
              v37 = v47 + 1;
              goto LABEL_48;
            }
LABEL_46:
            v34 = *((_DWORD *)v31 - 1);
            if ( v34 == *((_DWORD *)v31 - 2) )
            {
              v42 = (3 * v34 + 1) >> 1;
              v43 = 8 * v42 + 8;
              if ( 8 * v34 + 8 >= (unsigned int)v43 || v34 >= v42 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_B035D0(v98, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v98);
                sub_233E40((__int64)v98);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              LODWORD(v83) = (3 * v34 + 1) >> 1;
              v82 = v29;
              v44 = (_DWORD *)sub_186B300(v31 - 1, v43);
              v31 = v44 + 2;
              v29 = v82;
              *v44 = v83;
              v45 = (unsigned int)v44[1];
              v46 = v45;
              v37 = &v31[v45];
              v36 = v46 + 1;
            }
            else
            {
              v35 = v34;
              v36 = v34 + 1;
              v37 = &v31[v35];
            }
LABEL_48:
            *v37 = v30;
            v38 = (unsigned int *)v80;
            v29 += 4;
            *((_DWORD *)v31 - 1) = v36;
            if ( (unsigned int *)v29 == v38 )
            {
              v10 = sub_15E1AF0(v77->m128i_i64[1]);
              v80 = (char *)v10;
              if ( v10 )
                ++*(_DWORD *)(v10 + 8);
              if ( v30 )
              {
                v11 = (*(_DWORD *)(v30 + 8))-- == 1;
                if ( v11 )
                  sub_15D7BC0(v84.m128i_i64[0], v30);
              }
              v12 = *(_QWORD *)(v77->m128i_i64[0] + 8832);
              if ( !v12
                || (v13 = *(unsigned int *)v80, (unsigned int)v13 >= *(_DWORD *)(v12 - 4))
                || (v14 = *(_DWORD *)(v12 + 4 * v13), v14 == 0x7FFFFFFF) )
              {
                v15 = 2 * sub_B67520(v77->m128i_i64[0], v80);
              }
              else
              {
                v15 = 2 * v14;
              }
              v16 = v80;
              LODWORD(v77) = *((_DWORD *)v80 + 2);
              v11 = (_DWORD)v77 == 1;
              *((_DWORD *)v80 + 2) = (_DWORD)v77 - 1;
              if ( v11 )
                sub_15D7BC0(v84.m128i_i64[0], v16);
              v97 = v31;
              sub_2334C0((__int64 *)&v96);
              goto LABEL_22;
            }
            v24 = dword_1C7ED24;
          }
        }
        v49 = _mm_loadl_epi64((const __m128i *)(v22 + 8));
        v15 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v49, 229));
        if ( _mm_cvtsi128_si32(v49) != v15 )
        {
          v50 = v79;
          v51 = &v94;
          v52 = nullptr;
          v94 = v49.m128i_i64[0];
          ++*(_DWORD *)(v79 + 20);
          v80 = *(char **)(v50 + 8);
          v77 = *((__m128i **)v80 + 1);
          v96 = (__int64 *)v77;
          v53 = (__m128i)_mm_loadh_ps((const double *)&v77);
          v77 = &v95;
          do
          {
            v57 = *(_DWORD *)v51;
            v95 = v53;
            sub_894B80(*(_QWORD *)v80, v57, v77->m128i_i64);
            v53 = _mm_load_si128(&v95);
            v83 = v95.m128i_i64[0];
            v58 = v53.m128i_i64[0];
            v82 = v95.m128i_i64[1];
            if ( v53.m128i_i64[0] )
              ++*(_DWORD *)(v53.m128i_i64[0] + 8);
            if ( v52 )
            {
              v59 = *((_DWORD *)v52 - 1);
              if ( v59 == *((_DWORD *)v52 - 2) )
              {
                v60 = (3 * v59 + 1) >> 1;
                v61 = 8 * v60 + 8;
                if ( 8 * v59 + 8 >= (unsigned int)v61 || v59 >= v60 )
                {
                  v76 = (char **)__cxa_allocate_exception(0x28u);
                  sub_B035D0(v98, "Overflow encountered when expanding vector");
                  *v76 = (char *)off_1C63128;
                  sub_2333C0(v76 + 1, v98);
                  sub_233E40((__int64)v98);
                  __cxa_throw(v76, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v86 = v53.m128i_i64[0];
                v84.m128i_i32[0] = (3 * v59 + 1) >> 1;
                v85 = v53;
                v62 = (_DWORD *)sub_186B300(v52 - 1, v61);
                v52 = v62 + 2;
                v53 = _mm_load_si128(&v85);
                v58 = v86;
                *v62 = v84.m128i_i32[0];
                v63 = (unsigned int)v62[1];
                v64 = v63;
                v56 = &v52[v63];
                v55 = v64 + 1;
              }
              else
              {
                v54 = v59;
                v55 = v59 + 1;
                v56 = &v52[v54];
              }
            }
            else
            {
              v85.m128i_i64[0] = v53.m128i_i64[0];
              v84 = v53;
              v69 = (_QWORD *)sub_186B270(0x18u);
              v52 = v69 + 1;
              v53 = _mm_load_si128(&v84);
              v58 = v85.m128i_i64[0];
              *v69 = 2;
              v55 = 1;
              v56 = v69 + 1;
            }
            *v56 = v58;
            v51 = (__int64 *)((char *)v51 + 4);
            *((_DWORD *)v52 - 1) = v55;
          }
          while ( v77 != (__m128i *)v51 );
          v65 = sub_15E1AF0(*((_QWORD *)v80 + 1));
          v77 = (__m128i *)v65;
          if ( v65 )
            ++*(_DWORD *)(v65 + 8);
          sub_B035B0(v83, v82);
          v66 = *(_QWORD *)(*(_QWORD *)v80 + 8832LL);
          if ( !v66
            || (v67 = v77->m128i_u32[0], (unsigned int)v67 >= *(_DWORD *)(v66 - 4))
            || (v68 = *(_DWORD *)(v66 + 4 * v67), v68 == 0x7FFFFFFF) )
          {
            v68 = sub_B67520(*(_QWORD *)v80, v77);
          }
          v15 = 2 * v68;
          sub_B035B0((__int64)v77, v82);
          v97 = v52;
          sub_2334C0((__int64 *)&v96);
        }
LABEL_22:
        sub_186B220(v22);
        sub_186B220((void *)v21);
        v98[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(*v18)).m128i_u64[0];
        --v17;
        *v18-- = sub_B0BAF0(v79, v98);
      }
      while ( v17 != -1 );
      if ( ++v78 == v87 )
        goto LABEL_9;
    }
  }
  v9 = v78;
  do
    ++v9;
  while ( v9 != v87 );
LABEL_9:
  switch ( v91 )
  {
    case 0u:
    case 4u:
      v72 = v81[v90];
      v70 = dword_1C7ED20;
      if ( dword_1C7ED24 != v72 )
      {
        v70 = dword_1C7ED24;
        if ( dword_1C7ED20 != v72 )
          v70 = v72 ^ 1;
      }
      goto LABEL_98;
    case 1u:
    case 3u:
      v70 = v81[v90 - 1];
      goto LABEL_98;
    case 2u:
      v73 = dword_1C7ED20;
      v74 = v81[v90];
      if ( v74 != dword_1C7ED24 )
      {
        v73 = dword_1C7ED24;
        if ( v74 != dword_1C7ED20 )
          v73 = v74 ^ 1;
      }
      v70 = sub_B1A120(v79, v73, v81[v90 - 1]);
LABEL_98:
      if ( v81 )
        sub_186B220(v81 - 2);
      return v70;
    default:
      break;
  }
LABEL_111:
  sub_1872CE0("");
  sub_1873130(114, 495);
}

