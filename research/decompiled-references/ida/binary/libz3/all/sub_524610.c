__int64 __fastcall sub_524610(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int **a4,
        int **a5,
        _DWORD *a6,
        char a7,
        __int64 a8)
{
  char **exception; // r15
  char **v9; // r15
  char **v10; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  const void **v14; // r12
  _QWORD *v15; // rax
  unsigned int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // rbx
  _QWORD *v19; // rax
  size_t v20; // rdx
  _QWORD *v21; // r13
  _QWORD *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  __int64 *v27; // r12
  size_t v28; // rdx
  unsigned int v29; // r14d
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // r13
  unsigned int v33; // edx
  _QWORD *v34; // rbx
  __int64 v35; // rsi
  __int64 v36; // rax
  int **v37; // rdi
  unsigned int v38; // r8d
  size_t v39; // rsi
  unsigned int v40; // r15d
  unsigned int *v41; // rax
  __int64 v42; // rax
  int v43; // edx
  __int64 v44; // rdx
  __int64 *v45; // r13
  __int64 *v46; // r15
  __int64 v47; // rcx
  int v48; // eax
  unsigned int *v49; // rsi
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned int v52; // ecx
  size_t v53; // rsi
  unsigned int v54; // r14d
  unsigned int *v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // r15d
  unsigned int v58; // r13d
  _QWORD *v59; // rax
  __m128i v60; // xmm4
  _QWORD *v61; // r13
  int *v62; // rcx
  size_t v63; // rdx
  unsigned __int64 v64; // rax
  unsigned int v65; // r14d
  __int64 v66; // rsi
  _QWORD *v67; // r15
  _QWORD *v68; // rax
  __int64 v69; // rdx
  size_t v70; // rdx
  int *v71; // rdx
  unsigned int v72; // r9d
  int *v73; // rax
  unsigned int v74; // esi
  __int64 v75; // rax
  __int64 result; // rax
  _QWORD *v77; // r14
  __int64 v78; // rdi
  size_t v79; // rdi
  unsigned int *v80; // rdx
  __int64 *v81; // r15
  __int64 v82; // r10
  __int64 *v83; // r9
  unsigned __int64 v84; // rdi
  unsigned __int64 v85; // rsi
  unsigned __int64 v86; // rdi
  __m128i v87; // xmm0
  unsigned __int64 v88; // rdi
  __int64 *v89; // rsi
  __int64 v90; // r9
  __int64 *v91; // rbx
  unsigned int *v92; // r12
  void *v93; // rdi
  _QWORD *v94; // rax
  _QWORD *v95; // rax
  __int64 *v96; // rsi
  _DWORD *v97; // rdi
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 *v100; // [rsp+8h] [rbp-B8h]
  int *v101; // [rsp+10h] [rbp-B0h]
  _QWORD *v102; // [rsp+10h] [rbp-B0h]
  unsigned __int64 v103; // [rsp+10h] [rbp-B0h]
  unsigned int v104; // [rsp+18h] [rbp-A8h]
  unsigned int v105; // [rsp+18h] [rbp-A8h]
  __int64 v106; // [rsp+20h] [rbp-A0h]
  unsigned int v107; // [rsp+20h] [rbp-A0h]
  _QWORD *v108; // [rsp+20h] [rbp-A0h]
  unsigned int *v109; // [rsp+20h] [rbp-A0h]
  unsigned int v110; // [rsp+2Ch] [rbp-94h]
  unsigned int v111; // [rsp+2Ch] [rbp-94h]
  int v114; // [rsp+40h] [rbp-80h]
  _QWORD *dest; // [rsp+58h] [rbp-68h]
  unsigned int desta; // [rsp+58h] [rbp-68h]
  void *destb; // [rsp+58h] [rbp-68h]
  _QWORD *v121; // [rsp+68h] [rbp-58h] BYREF
  __int64 v122[10]; // [rsp+70h] [rbp-50h] BYREF

  v12 = 8LL * a2;
  v13 = *(_QWORD *)(a1 + 48);
  v14 = (const void **)(v13 + v12);
  v106 = v12;
  v15 = *(_QWORD **)(v13 + v12);
  v114 = a2;
  dest = v15;
  if ( v15 )
  {
    v16 = *((_DWORD *)v15 - 1);
    v17 = *((unsigned int *)v15 - 2);
    desta = v17;
    v18 = sub_186B270(8 * v17 + 8);
    *(_QWORD *)v18 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(desta), _mm_cvtsi32_si128(v16)).m128i_u64[0];
    dest = (_QWORD *)(v18 + 8);
    v19 = *v14;
    if ( *v14 )
    {
      v20 = 8LL * *((unsigned int *)v19 - 1);
      if ( v20 <= 8 )
      {
        v13 = *(_QWORD *)(a1 + 48);
        if ( v20 == 8 )
          *(_QWORD *)(v18 + 8) = *v19;
        v21 = (_QWORD *)(v13 + 8LL * a3);
        v22 = (_QWORD *)*v21;
        if ( *v21 )
          goto LABEL_6;
LABEL_18:
        v29 = *(_DWORD *)(v18 + 4);
        v27 = nullptr;
        if ( v29 )
        {
LABEL_11:
          v30 = (_QWORD *)sub_186B270(0x18u);
          *v30 = 2;
          v31 = v30 + 1;
          v32 = 0;
          v33 = 1;
          v34 = v31;
          while ( 1 )
          {
            v35 = dest[v32++];
            *v31 = v35;
            *((_DWORD *)v34 - 1) = v33;
            if ( (unsigned int)v32 >= v29 )
              break;
            if ( *((_DWORD *)v34 - 2) == v33 )
            {
              v38 = (3 * v33 + 1) >> 1;
              v39 = 8 * v38 + 8;
              v40 = v38;
              if ( 8 * v33 + 8 >= (unsigned int)v39 || v33 >= v38 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v122, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v122);
                sub_233E40((__int64)v122);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v41 = (unsigned int *)sub_186B300(v34 - 1, v39);
              v34 = v41 + 2;
              *v41 = v40;
              v42 = v41[1];
              v43 = v42;
              v31 = &v34[v42];
              v33 = v43 + 1;
            }
            else
            {
              v36 = v33++;
              v31 = &v34[v36];
            }
          }
          if ( v27 )
          {
            v44 = *((unsigned int *)v27 - 1);
            v45 = v27;
            v46 = &v27[v44];
            if ( (_DWORD)v44 )
            {
              do
              {
                v51 = *((_DWORD *)v34 - 1);
                if ( v51 == *((_DWORD *)v34 - 2) )
                {
                  v52 = (3 * v51 + 1) >> 1;
                  v53 = 8 * v52 + 8;
                  v54 = v52;
                  if ( 8 * v51 + 8 >= (unsigned int)v53 || v51 >= v52 )
                  {
                    v10 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v122, "Overflow encountered when expanding vector");
                    *v10 = (char *)off_1C63128;
                    sub_2333C0(v10 + 1, v122);
                    sub_233E40((__int64)v122);
                    __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v55 = (unsigned int *)sub_186B300(v34 - 1, v53);
                  v56 = v55[1];
                  v34 = v55 + 2;
                  *v55 = v54;
                  v49 = &v55[2 * v56 + 2];
                  v48 = v56 + 1;
                }
                else
                {
                  v47 = v51;
                  v48 = v51 + 1;
                  v49 = (unsigned int *)&v34[v47];
                }
LABEL_27:
                v50 = *v45++;
                *(_QWORD *)v49 = v50;
                *((_DWORD *)v34 - 1) = v48;
              }
              while ( v45 != v46 );
            }
          }
          if ( *a5 )
            v57 = *(*a5 - 1);
          else
            v57 = 0;
          v58 = *((_DWORD *)v34 - 1);
          v101 = *a5;
          v105 = *((_DWORD *)v34 - 2);
          v59 = (_QWORD *)sub_186B270(8LL * v105 + 8);
          v60 = _mm_cvtsi32_si128(v58);
          v61 = v59 + 1;
          v62 = v101;
          v63 = 8LL * *((unsigned int *)v34 - 1);
          *v59 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v105), v60).m128i_u64[0];
          if ( v63 <= 8 )
          {
            if ( v63 == 8 )
              v59[1] = *v34;
          }
          else
          {
            memcpy(v59 + 1, v34, v63);
            v62 = v101;
          }
          goto LABEL_36;
        }
        v22 = (_QWORD *)(v18 + 8);
        v37 = a5;
        goto LABEL_59;
      }
      memmove(dest, *v14, v20);
    }
    v13 = *(_QWORD *)(a1 + 48);
    v21 = (_QWORD *)(v13 + 8LL * a3);
    v22 = (_QWORD *)*v21;
    if ( *v21 )
    {
LABEL_6:
      v23 = *((unsigned int *)v22 - 1);
      v24 = *((unsigned int *)v22 - 2);
      v104 = v24;
      v25 = (_QWORD *)sub_186B270(8 * v24 + 8);
      v26 = (_QWORD *)*v21;
      v27 = v25 + 1;
      *v25 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v104), _mm_cvtsi32_si128(v23)).m128i_u64[0];
      if ( v26 )
      {
        v28 = 8LL * *((unsigned int *)v26 - 1);
        if ( v28 <= 8 )
        {
          if ( v28 == 8 )
            v25[1] = *v26;
        }
        else
        {
          memmove(v25 + 1, v26, v28);
        }
      }
      if ( dest )
      {
        v29 = *((_DWORD *)dest - 1);
        if ( v29 )
          goto LABEL_11;
      }
      if ( (_DWORD)v23 )
      {
        v45 = v27;
        v46 = &v27[v23];
        v94 = (_QWORD *)sub_186B270(0x18u);
        v34 = v94 + 1;
        *v94 = 2;
        v48 = 1;
        v49 = (unsigned int *)v34;
        goto LABEL_27;
      }
      v62 = *a5;
      v71 = *a5;
      if ( *a5 )
      {
        v57 = *(v62 - 1);
        v61 = nullptr;
        v34 = nullptr;
        goto LABEL_36;
      }
      v13 = *(_QWORD *)(a1 + 48);
LABEL_97:
      v64 = v13;
      if ( !a7 )
      {
        v61 = nullptr;
        v34 = nullptr;
        goto LABEL_39;
      }
      v77 = (_QWORD *)(v13 + v106);
      v99 = *(_QWORD *)(v13 + v106);
      if ( v99 )
      {
        sub_186B220((void *)(v99 - 8));
        v71 = *a5;
      }
      v34 = nullptr;
      goto LABEL_88;
    }
    goto LABEL_18;
  }
  v37 = a5;
  v21 = (_QWORD *)(v13 + 8LL * a3);
  v22 = (_QWORD *)*v21;
  if ( *v21 )
    goto LABEL_6;
LABEL_59:
  v62 = *v37;
  v71 = *v37;
  if ( !*v37 )
  {
    dest = v22;
    v27 = nullptr;
    goto LABEL_97;
  }
  dest = v22;
  v57 = *(v62 - 1);
  v27 = nullptr;
  v61 = nullptr;
  v34 = nullptr;
LABEL_36:
  if ( v57 )
  {
    v121 = v61;
    sub_51D070(&v121, v57, v62);
    v61 = v121;
  }
  v64 = *(_QWORD *)(a1 + 48);
  if ( !a7 )
  {
LABEL_39:
    if ( v64 )
    {
      v65 = *(_DWORD *)(v64 - 4);
      if ( v65 == *(_DWORD *)(v64 - 8) )
      {
        v111 = (3 * v65 + 1) >> 1;
        v79 = 8 * v111 + 8;
        if ( 8 * v65 + 8 >= (unsigned int)v79 || v65 >= (3 * v65 + 1) >> 1 )
        {
          v9 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v122, "Overflow encountered when expanding vector");
          *v9 = (char *)off_1C63128;
          sub_2333C0(v9 + 1, v122);
          sub_233E40((__int64)v122);
          __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v80 = (unsigned int *)sub_186B270(v79);
        v81 = *(__int64 **)(a1 + 48);
        v64 = (unsigned __int64)(v80 + 2);
        if ( v81 )
        {
          v82 = *((unsigned int *)v81 - 1);
          v80[1] = v82;
          v83 = &v81[v82];
          if ( v83 != v81 )
          {
            v84 = 8 * v82 - 8;
            if ( v84 <= 8 || v64 < (unsigned __int64)(v81 + 2) && v81 < (__int64 *)v80 + 3 )
            {
              v96 = v81;
              v97 = v80 + 2;
              do
              {
                v98 = *v96;
                *v96++ = 0;
                v97 += 2;
                *((_QWORD *)v97 - 1) = v98;
              }
              while ( v96 != v83 );
            }
            else
            {
              v85 = 0;
              v86 = (v84 >> 3) + 1;
              do
              {
                v87 = _mm_loadu_si128((const __m128i *)&v81[v85 / 2]);
                *(_OWORD *)&v81[v85 / 2] = 0;
                *(__m128i *)&v80[v85 + 2] = v87;
                v85 += 4LL;
              }
              while ( 4 * (v86 >> 1) != v85 );
              if ( (v86 & 1) != 0 )
              {
                v88 = v86 & 0xFFFFFFFFFFFFFFFELL;
                v89 = &v81[v88];
                v90 = *v89;
                *v89 = 0;
                *(_QWORD *)(v64 + 8 * v88) = v90;
              }
            }
          }
          if ( (_DWORD)v82 )
          {
            v108 = v34;
            v91 = &v81[v82];
            v100 = v27;
            v92 = v80;
            v102 = dest;
            do
            {
              while ( *v81 )
              {
                v93 = (void *)(*v81++ - 8);
                destb = (void *)v64;
                sub_186B220(v93);
                v64 = (unsigned __int64)destb;
                if ( v91 == v81 )
                  goto LABEL_82;
              }
              ++v81;
            }
            while ( v81 != v91 );
LABEL_82:
            v80 = v92;
            v34 = v108;
            v27 = v100;
            dest = v102;
            v81 = *(__int64 **)(a1 + 48);
          }
          v103 = v64;
          v109 = v80;
          sub_186B220(v81 - 1);
          v80 = v109;
          v64 = v103;
          v66 = v109[1];
          v67 = (_QWORD *)(v103 + 8 * v66);
        }
        else
        {
          v80[1] = 0;
          v67 = v80 + 2;
          LODWORD(v66) = 0;
        }
        *(_QWORD *)(a1 + 48) = v64;
        *v80 = v111;
      }
      else
      {
        LODWORD(v66) = *(_DWORD *)(v64 - 4);
        v67 = (_QWORD *)(v64 + 8LL * v65);
      }
    }
    else
    {
      v95 = (_QWORD *)sub_186B270(0x18u);
      *v95 = 2;
      LODWORD(v66) = 0;
      v65 = 0;
      v64 = (unsigned __int64)(v95 + 1);
      *(_QWORD *)(a1 + 48) = v64;
      v67 = (_QWORD *)v64;
    }
    *v67 = 0;
    if ( v61 )
    {
      v110 = *((_DWORD *)v61 - 2);
      v107 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*((_DWORD *)v61 - 1)));
      v68 = (_QWORD *)sub_186B270(8LL * v110 + 8);
      *v68 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v110), _mm_cvtsi32_si128(v107)).m128i_u64[0];
      v69 = *((unsigned int *)v61 - 1);
      *v67 = v68 + 1;
      v70 = 8 * v69;
      if ( v70 <= 8 )
      {
        if ( v70 == 8 )
          v68[1] = *v61;
        v64 = *(_QWORD *)(a1 + 48);
        LODWORD(v66) = *(_DWORD *)(v64 - 4);
      }
      else
      {
        memmove(v68 + 1, v61, v70);
        v64 = *(_QWORD *)(a1 + 48);
        LODWORD(v66) = *(_DWORD *)(v64 - 4);
      }
    }
    *(_DWORD *)(v64 - 4) = v66 + 1;
    v71 = *a5;
    *a6 = v65;
    if ( v71 )
      goto LABEL_46;
    goto LABEL_66;
  }
  v77 = (_QWORD *)(v64 + v106);
  v78 = *(_QWORD *)(v64 + v106);
  if ( v78 )
    sub_186B220((void *)(v78 - 8));
  if ( v61 )
  {
    v121 = v61;
    sub_52CD90(v77, &v121);
    v71 = *a5;
    goto LABEL_65;
  }
  v71 = *a5;
LABEL_88:
  *v77 = 0;
  v61 = nullptr;
LABEL_65:
  v65 = v114;
  *a6 = v114;
  if ( v71 )
  {
LABEL_46:
    v72 = *(v71 - 1);
    goto LABEL_47;
  }
LABEL_66:
  v72 = 0;
LABEL_47:
  v73 = *a4;
  if ( *a4 )
    v74 = *(v73 - 1);
  else
    v74 = 0;
  v75 = sub_4DD600(v114, a3, v74, v73, a4[1], v72, v71, v65);
  sub_52C6B0(a8, v75);
  if ( v61 )
    sub_186B220(v61 - 1);
  if ( v27 )
    sub_186B220(v27 - 1);
  result = (__int64)dest;
  if ( dest )
    result = sub_186B220(dest - 1);
  if ( v34 )
    return sub_186B220(v34 - 1);
  return result;
}

