void __fastcall sub_1A3E8C0(_QWORD **a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r12d
  _BYTE *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r14d
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // r10
  __m128 *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rdi
  _QWORD *v27; // rax
  _QWORD *v28; // r10
  _QWORD *v29; // rdi
  _QWORD **v30; // r13
  _QWORD *v31; // rax
  _QWORD **v32; // r12
  __int64 v33; // rax
  __m128 *v34; // r13
  const __m128i *v35; // rbx
  unsigned __int64 v36; // rdx
  __m128i *v37; // rax
  _BYTE *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rsi
  _QWORD *v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r15
  _BOOL8 v45; // rdi
  __int64 v46; // r12
  _QWORD *v47; // r13
  _QWORD *v48; // r15
  char *v49; // rdi
  unsigned __int64 v50; // rax
  int v51; // r9d
  __int64 v52; // r14
  __int128 *v53; // r8
  char *v54; // rax
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // r9
  unsigned int v58; // eax
  unsigned int v59; // ecx
  __int64 v60; // r10
  unsigned int v61; // edi
  __int64 i; // rdx
  unsigned int v63; // esi
  unsigned int v64; // ecx
  size_t v65; // rdx
  _QWORD *v66; // r8
  __int64 v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 *v71; // rcx
  __int64 v72; // rsi
  __int64 v73; // rdi
  _QWORD *v74; // rdi
  void *v75; // rdi
  _QWORD **v76; // rdi
  _QWORD **v77; // rsi
  _QWORD *v78; // rax
  _QWORD *v79; // [rsp+18h] [rbp-230h] BYREF
  void **p_ptr; // [rsp+20h] [rbp-228h]
  __int64 v81; // [rsp+28h] [rbp-220h]
  int v82; // [rsp+34h] [rbp-214h]
  __int128 *v83; // [rsp+38h] [rbp-210h]
  _QWORD *v84; // [rsp+40h] [rbp-208h] BYREF
  unsigned __int64 v85; // [rsp+48h] [rbp-200h] BYREF
  void *v86; // [rsp+50h] [rbp-1F8h] BYREF
  _QWORD *v87; // [rsp+58h] [rbp-1F0h]
  _BYTE v88[16]; // [rsp+60h] [rbp-1E8h] BYREF
  void *src; // [rsp+70h] [rbp-1D8h] BYREF
  unsigned int v90; // [rsp+78h] [rbp-1D0h]
  __int64 v91; // [rsp+80h] [rbp-1C8h] BYREF
  void *v92; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v93; // [rsp+A8h] [rbp-1A0h]
  _BYTE dest[32]; // [rsp+B0h] [rbp-198h] BYREF
  void *ptr; // [rsp+D0h] [rbp-178h] BYREF
  __int64 v96; // [rsp+D8h] [rbp-170h]
  _BYTE v97[32]; // [rsp+E0h] [rbp-168h] BYREF
  __m128 v98; // [rsp+100h] [rbp-148h] BYREF
  __int128 v99; // [rsp+110h] [rbp-138h] BYREF
  __int64 v100; // [rsp+120h] [rbp-128h]
  char v101; // [rsp+128h] [rbp-120h]
  int v102; // [rsp+12Ch] [rbp-11Ch]
  void **v103; // [rsp+130h] [rbp-118h]

  v79 = (_QWORD *)a2;
  v84 = nullptr;
  sub_1A39CB0((__int64)&src, a2, a3, a4, a5, a6);
  v7 = v90;
  v8 = dest;
  v92 = dest;
  v93 = 0x400000000LL;
  if ( v90 )
  {
    v65 = 8LL * v90;
    if ( v90 <= 4uLL || (sub_2237220(&v92, dest, v90, 8), v8 = v92, (v65 = 8LL * v90) != 0) )
      memcpy(v8, src, v65);
    v66 = a1[1];
    v67 = *((unsigned int *)a1 + 4);
    LODWORD(v93) = v7;
    v68 = &v66[v67];
    if ( v68 != v66 && v90 && *(v68 - 1) == *((_QWORD *)src + v90 - 1) )
    {
      v69 = v68 - 1;
      v70 = v90 - 1;
      v71 = (__int64 *)((char *)src + 8 * v70 - 8);
      while ( 1 )
      {
        if ( v66 == v69 )
        {
LABEL_66:
          v90 = v70;
          goto LABEL_2;
        }
        v72 = *(v69 - 1);
        if ( !(_DWORD)v70 )
          break;
        v73 = *v71;
        --v69;
        --v71;
        if ( v73 != v72 )
          goto LABEL_66;
        LODWORD(v70) = v70 - 1;
      }
      v90 = 0;
    }
  }
LABEL_2:
  v13 = sub_1A39DB0(a1, (__int64 *)&src, (__int64 *)&v84);
  if ( v90 )
  {
    v14 = *((_QWORD *)src + v90 - 1);
    if ( v14 )
    {
      if ( (*(_BYTE *)(v14 + 8) & 0x7Fu) - 18 <= 0x3F )
      {
        v15 = sub_B8C1B0(v14);
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 40);
          v17 = a1[17];
          v18 = v16 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v16 & 7) != 0 )
            v18 = 0;
          v85 = v18;
          v19 = sub_1A38700(v17, (__int64)&v17[*((unsigned int *)a1 + 36)], (__int64 *)&v85);
          if ( v20 != v19 )
          {
            v99 = 0;
            v86 = v88;
            v87 = nullptr;
            v88[0] = 0;
            v98.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
            v98.m128_i32[2] = 0;
            v101 = 0;
            v102 = 1;
            v100 = 0;
            v103 = &v86;
            sub_227B8B0(&v98, 0, 0, 0);
            p_ptr = &ptr;
            ptr = v97;
            v96 = 0x400000000LL;
            sub_1A37EE0((__int64)v84, (__int64)&ptr);
            v21 = &v98;
            sub_E90250((__int64)v84, (__int64)&v98, (const __m128i *)(*a1 + 2183), 0, 1);
            LOBYTE(v81) = 0;
            if ( v87 == a1[8] )
            {
              v21 = (__m128 *)a1[7];
              LOBYTE(v81) = sub_9B48C0(v86, v21, (size_t)v87) == 0;
            }
            if ( ptr != p_ptr + 2 )
              free(ptr);
            v98.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
            sub_227B7A0(&v98);
            if ( v86 != v88 )
              operator delete(v86);
            if ( (_BYTE)v81 )
              goto LABEL_17;
          }
          v26 = a1[11];
          v21 = (__m128 *)&v26[*((unsigned int *)a1 + 24)];
          v27 = sub_1A38700(v26, (__int64)v21, (__int64 *)&v85);
          if ( v28 != v27 )
          {
LABEL_17:
            v84 = sub_E91110(*a1, (__int64)v21, v22, v23, v24, v25);
            v13 = sub_1A39DB0(a1, (__int64 *)&v92, (__int64 *)&v84);
          }
        }
      }
    }
  }
  else
  {
    v84 = sub_E91110(*a1, (__int64)&src, v9, v10, v11, v12);
    v13 = sub_1A39DB0(a1, (__int64 *)&v92, (__int64 *)&v84);
  }
  v29 = v84;
  if ( v84 && *((_DWORD *)a1 + 36) )
  {
    p_ptr = &ptr;
    ptr = v97;
    v96 = 0x400000000LL;
    sub_1A37EE0((__int64)v84, (__int64)&ptr);
    v46 = (unsigned int)v96;
    v47 = ptr;
    v48 = a1[17];
    v49 = (char *)&v99;
    v50 = (unsigned int)v96 + 1LL;
    v51 = v96;
    v52 = *((unsigned int *)a1 + 36);
    v98.m128_u64[0] = (unsigned __int64)&v99;
    v53 = &v99;
    v98.m128_u64[1] = 0x4000000000LL;
    if ( v50 > 0x40 )
    {
      v81 = (unsigned int)v96 + 1LL;
      v82 = v96;
      sub_2237220(&v98, &v99, v81, 4);
      v51 = v82;
      v50 = v81;
      v53 = (__int128 *)v98.m128_u64[0];
      v49 = (char *)(v98.m128_u64[0] + 4LL * v98.m128_u32[2]);
    }
    v81 = 4 * v50;
    v54 = (char *)v53 + 4 * v50;
    if ( v54 != v49 )
    {
      v83 = v53;
      v82 = v51;
      memset(v49, 0, 4 * ((unsigned __int64)(v54 - v49 - 4) >> 2) + 4);
      v51 = v82;
      v53 = v83;
    }
    v55 = 1;
    v56 = 1;
    v98.m128_i32[2] = v51 + 1;
    if ( (unsigned int)(v51 + 1) > 1 )
    {
      do
      {
        *((_DWORD *)v53 + v55) = v56;
        v55 = (unsigned int)(v56 + 1);
        v56 = v55;
      }
      while ( v98.m128_i32[2] > (unsigned int)v55 );
    }
    v57 = 1;
    if ( v52 )
    {
      while ( 1 )
      {
        *(_DWORD *)v53 = v57;
        v58 = v57;
        v59 = v57 - 1;
        LODWORD(v86) = v57;
        if ( v46 )
        {
          v60 = v48[v57 - 1];
          v61 = v57;
          for ( i = 1; ; ++i )
          {
            v63 = *((_DWORD *)v53 + i);
            v64 = (v47[i - 1] != v60) + v59;
            if ( v58 > v63 )
              v58 = *((_DWORD *)v53 + i);
            if ( v64 <= ++v58 )
              v58 = v64;
            *((_DWORD *)v53 + i) = v58;
            if ( v61 <= v58 )
            {
              if ( v46 == i )
                break;
            }
            else
            {
              if ( v46 == i )
                break;
              v61 = v58;
            }
            v59 = v63;
          }
        }
        if ( v52 == v57 )
          break;
        ++v57;
      }
    }
    v13 = *(_DWORD *)((char *)v53 + v81 - 4);
    if ( v53 != &v99 )
      free(v53);
    if ( ptr != p_ptr + 2 )
      free(ptr);
    v29 = v84;
  }
  v79 = v29;
  v30 = a1 + 24;
  v31 = a1[25];
  LODWORD(v99) = v13;
  v32 = a1 + 24;
  v98 = _mm_loadh_ps((const double *)&v79);
  if ( !v31 )
    goto LABEL_33;
  do
  {
    while ( *((_DWORD *)v31 + 8) >= v13 )
    {
      v32 = (_QWORD **)v31;
      v31 = (_QWORD *)v31[2];
      if ( !v31 )
        goto LABEL_25;
    }
    v31 = (_QWORD *)v31[3];
  }
  while ( v31 );
LABEL_25:
  if ( v32 == v30 || *((_DWORD *)v32 + 8) > v13 )
  {
LABEL_33:
    v39 = operator new(0x1B8u);
    v40 = (__int64)v32;
    *(_DWORD *)(v39 + 32) = v13;
    v41 = (_QWORD *)(v39 + 56);
    v32 = (_QWORD **)v39;
    *(_QWORD *)(v39 + 40) = v39 + 56;
    *(_QWORD *)(v39 + 48) = 0x1000000000LL;
    v42 = sub_1A3E7E0(a1 + 23, v40, (unsigned int *)(v39 + 32));
    v44 = v42;
    if ( v43 )
    {
      v45 = v30 == (_QWORD **)v43 || v42 || *((_DWORD *)v32 + 8) < *(_DWORD *)(v43 + 32);
      std::_Rb_tree_insert_and_rebalance(v45, v32, v43, a1 + 24);
      a1[28] = (_QWORD *)((char *)a1[28] + 1);
    }
    else
    {
      v74 = v32[5];
      if ( v41 != v74 )
        free(v74);
      v75 = v32;
      v32 = (_QWORD **)v44;
      operator delete(v75);
    }
  }
  v33 = *((unsigned int *)v32 + 12);
  v34 = (__m128 *)v32[5];
  v35 = (const __m128i *)&v98;
  v36 = v33 + 1;
  v37 = (__m128i *)((char *)v34 + 24 * v33);
  if ( v36 > *((unsigned int *)v32 + 13) )
  {
    v76 = v32 + 5;
    v77 = v32 + 7;
    if ( v34 > &v98 || v37 <= (__m128i *)&v98 )
    {
      sub_2237220(v76, v77, v36, 24);
      v37 = (__m128i *)&v32[5][3 * *((unsigned int *)v32 + 12)];
    }
    else
    {
      sub_2237220(v76, v77, v36, 24);
      v78 = v32[5];
      v35 = (const __m128i *)((char *)v78 + (char *)&v98 - (char *)v34);
      v37 = (__m128i *)&v78[3 * *((unsigned int *)v32 + 12)];
    }
  }
  *v37 = _mm_loadu_si128(v35);
  v38 = v92;
  v37[1].m128i_i64[0] = v35[1].m128i_i64[0];
  ++*((_DWORD *)v32 + 12);
  if ( v38 != dest )
    free(v38);
  if ( src != &v91 )
    free(src);
}
