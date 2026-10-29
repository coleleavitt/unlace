unsigned __int64 __fastcall sub_1E607E0(
        __int64 *a1,
        __int64 a2,
        void **a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 *v8; // r12
  _DWORD *v10; // rbp
  unsigned __int8 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rax
  _QWORD *v14; // rdi
  int v15; // r10d
  __int64 v16; // r8
  unsigned int v17; // r9d
  int v18; // r11d
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rax
  unsigned __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r14
  unsigned int *v32; // rax
  unsigned int v33; // edx
  unsigned int v34; // ecx
  unsigned int v35; // edx
  unsigned int v36; // ebx
  char v37; // al
  unsigned __int64 v38; // r12
  const __m128i *v39; // rsi
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __m128i *v42; // rcx
  __int64 v43; // r9
  const __m128i *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdi
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // r15
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdx
  char *v57; // rbp
  char *v58; // r14
  __int64 v59; // rdi
  __int64 v60; // r10
  __int64 *v61; // r14
  unsigned __int64 v62; // rax
  __int64 v63; // r8
  unsigned __int64 v64; // rcx
  __int64 v65; // rsi
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  __int64 v72; // rdx
  unsigned __int64 v73; // rbp
  unsigned __int64 v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rsi
  _QWORD *v78; // rdx
  _QWORD *i; // rcx
  __int64 v81; // rax
  int v82; // edi
  __int64 *p_ptr; // r9
  int v84; // esi
  __int64 v85; // r8
  unsigned __int64 v86; // rcx
  __int64 v87; // rsi
  __int64 v88; // [rsp+8h] [rbp-1E0h]
  unsigned __int8 v90; // [rsp+18h] [rbp-1D0h]
  __m128 *v91; // [rsp+18h] [rbp-1D0h]
  unsigned int v92; // [rsp+20h] [rbp-1C8h]
  _DWORD *v93; // [rsp+20h] [rbp-1C8h]
  __int64 v94; // [rsp+20h] [rbp-1C8h]
  __int64 v95; // [rsp+20h] [rbp-1C8h]
  _BYTE *v96; // [rsp+20h] [rbp-1C8h]
  char v97; // [rsp+20h] [rbp-1C8h]
  int v99; // [rsp+30h] [rbp-1B8h]
  unsigned __int64 v100; // [rsp+30h] [rbp-1B8h]
  __int64 *v101; // [rsp+30h] [rbp-1B8h]
  __int64 v102; // [rsp+30h] [rbp-1B8h]
  unsigned __int64 v103; // [rsp+30h] [rbp-1B8h]
  __int64 v104; // [rsp+38h] [rbp-1B0h]
  __int64 v105; // [rsp+38h] [rbp-1B0h]
  int v106; // [rsp+38h] [rbp-1B0h]
  char v107; // [rsp+38h] [rbp-1B0h]
  unsigned int v108; // [rsp+44h] [rbp-1A4h]
  unsigned int v109; // [rsp+44h] [rbp-1A4h]
  int v110; // [rsp+48h] [rbp-1A0h]
  int v111; // [rsp+48h] [rbp-1A0h]
  int v112; // [rsp+4Ch] [rbp-19Ch]
  int v113; // [rsp+4Ch] [rbp-19Ch]
  __int128 v114; // [rsp+50h] [rbp-198h] BYREF
  __m128 v115; // [rsp+60h] [rbp-188h]
  __int128 v116; // [rsp+70h] [rbp-178h] BYREF
  __int64 v117; // [rsp+80h] [rbp-168h] BYREF
  __int64 v118; // [rsp+88h] [rbp-160h]
  void *ptr; // [rsp+90h] [rbp-158h] BYREF
  __int64 v120; // [rsp+98h] [rbp-150h]
  _BYTE v121[256]; // [rsp+A0h] [rbp-148h] BYREF
  unsigned __int64 v122; // [rsp+1A0h] [rbp-48h]

  v8 = a1;
  v10 = (_DWORD *)a1[1];
  v88 = *a1;
  v92 = *(_DWORD *)(a5 + 4);
  v11 = v10[663] != 0;
  v12 = 0;
  v90 = *(_QWORD *)(a4 + 32) != 0;
  if ( !v10[14] )
    v12 = *((_QWORD *)v10 + 8);
  v99 = *(_DWORD *)(a5 + 16);
  v13 = sub_15FB540(v88, v12, v99);
  v14 = *(_QWORD **)(v88 + 248);
  v15 = v10[20];
  v16 = v13;
  v17 = v99;
  v18 = *(_DWORD *)(*(_QWORD *)v10 + 192LL);
  v19 = *(_QWORD *)(v14[283] + 80LL);
  v20 = *(_QWORD *)(v19 + 72);
  v21 = v20;
  if ( (v20 & 1) != 0 )
  {
    v22 = v20 & 0xFFFFFFFFFFFFFFF8LL;
    v23 = v21 & 0xFFFFFFFFFFFFFFFELL;
    v24 = v22;
    if ( v23 )
      goto LABEL_5;
LABEL_31:
    v14 = *(_QWORD **)(v88 + 248);
    goto LABEL_10;
  }
  v47 = v20 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v20 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    v24 = 0;
    goto LABEL_10;
  }
  v24 = v20 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v20 & 2) == 0 )
    goto LABEL_10;
  v48 = v19 & 0xFFFFFFFFFFFFFFFBLL;
  v102 = *(_QWORD *)(v47 + 18360);
  if ( v102 )
  {
    v113 = v10[20];
    v111 = *(_DWORD *)(*(_QWORD *)v10 + 192LL);
    v109 = v17;
    v105 = v16;
    v49 = sub_9C3B30((__int64 *)(v47 + 2352), 24, 3u);
    v15 = v113;
    v18 = v111;
    v17 = v109;
    *(_QWORD *)(v49 + 16) = v19;
    *(_QWORD *)v49 = v102;
    v16 = v105;
    *(_DWORD *)(v49 + 8) = 0;
    v48 = v49 | 4;
  }
  v23 = v48 & 0xFFFFFFFFFFFFFFFELL;
  v50 = v48 & 0xFFFFFFFFFFFFFFFELL | 1;
  *(_QWORD *)(v19 + 72) = v50;
  v22 = v50 & 0xFFFFFFFFFFFFFFF8LL;
  v24 = v22;
  if ( !v23 )
    goto LABEL_31;
LABEL_5:
  if ( (v23 & 4) == 0 || !v22 )
    goto LABEL_31;
  v25 = *(_QWORD *)v22;
  v26 = *(_DWORD *)(*(_QWORD *)v22 + 12LL);
  if ( *(_DWORD *)(v22 + 8) != v26 )
  {
    *(_DWORD *)(v22 + 8) = v26;
    v112 = v15;
    v110 = v18;
    v108 = v17;
    v104 = v16;
    v100 = v22;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 152LL))(v25, v19);
    v15 = v112;
    v18 = v110;
    v17 = v108;
    v16 = v104;
    v22 = v100;
  }
  v24 = *(_QWORD *)(v22 + 16);
  v14 = *(_QWORD **)(v88 + 248);
LABEL_10:
  if ( v24 )
    v24 += 40LL;
  v91 = (__m128 *)sub_BBE1D0(v14, v24, v18, v15, v92, v17, v16, 0, v11, v90, 0);
  v91[1].m128_i8[13] |= 2u;
  v27 = *(unsigned int *)(a5 + 16);
  if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 20) )
  {
    sub_2237220(a5 + 8, a5 + 24, v27 + 1, 8);
    v27 = *(unsigned int *)(a5 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a5 + 8) + 8 * v27) = v91;
  ++*(_DWORD *)(a5 + 16);
  if ( *(_QWORD *)(a4 + 32) )
  {
    if ( a3 )
    {
      ptr = *a3;
      v120 = (__int64)(a3 + 1);
      v28 = sub_F6E530((__int64)&ptr);
      v30 = *(_QWORD *)(v29 + 8);
      v31 = v29;
      if ( v30 && (v32 = *(unsigned int **)(v30 + 64)) != nullptr )
      {
        v33 = v32[1];
        v34 = *v32;
      }
      else
      {
        v33 = 0;
        v34 = 0;
      }
      v122 = __PAIR64__(v33, v34);
      ptr = v121;
      v120 = 0x800000000LL;
      if ( !*(_DWORD *)(v28 + 20) )
        goto LABEL_58;
      v101 = v8;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v38 = v28;
      do
      {
        v43 = 32LL * v36 + 16;
        v44 = (const __m128i *)(v43 + *(_QWORD *)(*(_QWORD *)(v31 + 8) + 64LL));
        if ( !v10[663] && !v37 )
        {
          v45 = v44->m128i_i64[0];
          *((_QWORD *)&v116 + 1) = v44->m128i_i64[1];
          *(_QWORD *)&v116 = v45;
          v46 = v44[1].m128i_i64[1];
          v117 = v44[1].m128i_i64[0];
          v118 = v46;
          v37 = sub_1E52D80(
                  v88,
                  (int *)((char *)&dword_14 + 1),
                  *(double *)a6.m128_u64,
                  *((__int64 *)&v116 + 1),
                  (__int64)v44,
                  v28,
                  v43,
                  v45,
                  SDWORD2(v116),
                  v117,
                  v46);
          v35 = v120;
          v44 = (const __m128i *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) + 64LL) + 32LL * v36 + 16);
        }
        a6 = (__m128)_mm_loadu_si128(v44);
        v39 = (const __m128i *)&v114;
        v114 = (__int128)a6;
        a7 = (__m128)_mm_loadu_si128(v44 + 1);
        v40 = v35;
        v41 = v35 + 1LL;
        v115 = a7;
        v42 = (__m128i *)((char *)ptr + 32 * v40);
        if ( v41 > HIDWORD(v120) )
        {
          if ( ptr > &v114 || v42 <= (__m128i *)&v114 )
          {
            v97 = v37;
            sub_2237220(&ptr, v121, v41, 32);
            v39 = (const __m128i *)&v114;
            v37 = v97;
            v42 = (__m128i *)((char *)ptr + 32 * (unsigned int)v120);
          }
          else
          {
            v107 = v37;
            v96 = ptr;
            sub_2237220(&ptr, v121, v41, 32);
            v37 = v107;
            v39 = (const __m128i *)((char *)ptr + (char *)&v114 - v96);
            v42 = (__m128i *)((char *)ptr + 32 * (unsigned int)v120);
          }
        }
        ++v36;
        *v42 = _mm_loadu_si128(v39);
        v42[1] = _mm_loadu_si128(v39 + 1);
        v35 = v120 + 1;
        LODWORD(v120) = v120 + 1;
      }
      while ( v36 < *(_DWORD *)(v38 + 20) );
      v8 = v101;
      if ( !v37 )
      {
LABEL_58:
        v81 = *(_QWORD *)(v31 + 8);
        v82 = v10[663];
        if ( v81 )
        {
          p_ptr = *(__int64 **)(v81 + 64);
          if ( p_ptr )
          {
            v84 = *(_DWORD *)p_ptr;
            p_ptr = nullptr;
            if ( v84 )
              p_ptr = (__int64 *)&ptr;
          }
          v85 = *(_QWORD *)(v81 + 48);
          v86 = *(_QWORD *)(v81 + 56);
        }
        else
        {
          v85 = 0;
          p_ptr = nullptr;
          v86 = 0;
        }
        v87 = *(_QWORD *)v81;
        v114 = (__int128)_mm_loadu_si128((const __m128i *)(v81 + 24));
        v115.m128_u64[0] = *(_QWORD *)(v81 + 40);
        sub_1CD1CD0(v88, v87, *(_QWORD *)(v81 + 8), v86, v85, p_ptr, v114, v115.m128_i64[0], v91, v82);
      }
    }
    else
    {
      v51 = *(_QWORD *)(*(_QWORD *)v10 + 8LL);
      v52 = *(_QWORD *)(v51 + 36);
      v120 = 0x800000000LL;
      ptr = v121;
      v122 = v52;
      if ( !*(_DWORD *)(v51 + 36)
        || (v53 = *(unsigned int *)(v51 + 44),
            *(_QWORD *)&v114 = v51 + 56,
            *((_QWORD *)&v114 + 1) = v53,
            sub_1CB4530(v88, &v114, (__int64 *)&ptr),
            v56 = (unsigned int)v10[663],
            (_DWORD)v56)
        || (char *)ptr + 32 * (unsigned int)v120 == ptr )
      {
LABEL_39:
        v61 = nullptr;
        sub_F22A90(&v116, *(_QWORD *)(v51 + 24));
        v94 = sub_F22F90((__int64 *)&v116);
        sub_F22A90(&v116, *(_QWORD *)(v51 + 24));
        v62 = sub_F22BD0((__int64 *)&v116, 0);
        v63 = v94;
        v64 = v62;
        v65 = *(_QWORD *)(v51 + 8);
        v106 = v10[663];
        v66 = *(_DWORD *)(v51 + 4);
        v103 = v64;
        if ( *(_DWORD *)(v51 + 36) )
          v61 = (__int64 *)&ptr;
        *(_QWORD *)&v116 = *(_QWORD *)(v51 + 8);
        if ( !v94 )
          v63 = v64;
        DWORD2(v116) = v66;
        v95 = v63;
        sub_B85890(&v117, v65);
        v71 = sub_15AB9E0(*(_QWORD *)v10 + 112LL, *(_QWORD **)(v88 + 248), v67, v68, v69, v70);
        sub_1CD1CD0(v88, v71, v72, v103, v95, v61, v116, v117, v91, v106);
      }
      else
      {
        v93 = v10;
        v57 = (char *)ptr;
        v58 = (char *)ptr + 32 * (unsigned int)v120;
        while ( 1 )
        {
          v59 = *((_QWORD *)v57 + 1);
          *(_QWORD *)&v116 = *(_QWORD *)v57;
          *((_QWORD *)&v116 + 1) = v59;
          v60 = *((_QWORD *)v57 + 3);
          v117 = *((_QWORD *)v57 + 2);
          v118 = v60;
          if ( (unsigned __int8)sub_1E52D80(
                                  v88,
                                  (int *)((char *)&dword_14 + 1),
                                  *(double *)a6.m128_u64,
                                  v56,
                                  v54,
                                  v55,
                                  v117,
                                  v116,
                                  v59,
                                  v117,
                                  v60) )
            break;
          v57 += 32;
          if ( v58 == v57 )
          {
            v10 = v93;
            goto LABEL_39;
          }
        }
      }
    }
    if ( ptr != v121 )
      free(ptr);
  }
  v73 = v91[3].m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL;
  v74 = (unsigned __int64)sub_1D522B0(*v8, a2, v73, a6, a7);
  v76 = sub_F6A5F0(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, v75);
  if ( v76 )
  {
    v77 = *(_QWORD *)(v74 & 0xFFFFFFFFFFFFFFF0LL);
    v78 = (_QWORD *)v8[11];
    for ( i = &v78[2 * *((unsigned int *)v8 + 24)]; i != v78; v78 += 2 )
    {
      while ( v76 != *v78 )
      {
        v78 += 2;
        if ( i == v78 )
          goto LABEL_52;
      }
      *v78 = v77;
    }
LABEL_52:
    *((_BYTE *)v8 + 232) = 0;
  }
  if ( a3 )
    sub_1D55550(v88, (__int64)a3, v73, a6, a7);
  return v74;
}
