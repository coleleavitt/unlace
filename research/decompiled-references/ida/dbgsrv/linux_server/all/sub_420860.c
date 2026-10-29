/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420860
// Address: 0x0000000000420860

//----- (0000000000420860) ----------------------------------------------------
unsigned __int64 __fastcall sub_420860(
        __int64 a1,
        _QWORD *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __m128 v10; // xmm0
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  size_t v13; // r9
  __int64 v14; // rcx
  const char *v15; // r12
  char *v16; // r15
  __int64 v17; // rax
  int v18; // ebp
  const char *v19; // rdi
  char *v20; // r13
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rax
  const char *v25; // rbx
  char *v26; // r15
  int v27; // r13d
  __int64 v28; // rax
  const char *v29; // rdi
  char *v30; // r12
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  size_t v33; // r14
  void *v34; // rbp
  void *v35; // r12
  signed __int64 v36; // r10
  __int64 v37; // rax
  size_t v38; // r11
  int v39; // r8d
  char *v40; // rsi
  char *v41; // rax
  __m128i v42; // xmm0
  size_t v43; // rax
  size_t v44; // r14
  __int64 v45; // rbx
  __int64 v46; // rax
  void *v47; // rdi
  _QWORD *v48; // r15
  void *v49; // rdi
  __int64 v50; // r12
  _QWORD *v51; // r13
  void *v52; // rdi
  void *v53; // rdi
  void *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 v57; // rbx
  const char **v58; // r12
  const char *v59; // rsi
  const char *v60; // r15
  _QWORD *v61; // rax
  _QWORD *v62; // rsi
  __int64 v63; // rcx
  __int64 v64; // rdx
  const char *v65; // r12
  unsigned __int64 v66; // rdx
  const char *v67; // r8
  char *v68; // rdi
  __int64 v69; // r12
  __int64 v70; // rbp
  char *v71; // rbx
  void *v72; // rdi
  void *v73; // rdi
  void *v75; // rdi
  void *v76; // rdx
  unsigned __int64 *v78; // [rsp+8h] [rbp-138h]
  size_t v79; // [rsp+8h] [rbp-138h]
  size_t v80; // [rsp+8h] [rbp-138h]
  size_t v81; // [rsp+8h] [rbp-138h]
  size_t v82; // [rsp+8h] [rbp-138h]
  size_t v83; // [rsp+10h] [rbp-130h]
  __int64 v84; // [rsp+10h] [rbp-130h]
  size_t v85; // [rsp+10h] [rbp-130h]
  __int64 v86; // [rsp+10h] [rbp-130h]
  __m128i n; // [rsp+18h] [rbp-128h] BYREF
  _QWORD *v88; // [rsp+28h] [rbp-118h]
  size_t v89; // [rsp+30h] [rbp-110h]
  int v90; // [rsp+3Ch] [rbp-104h]
  signed __int64 v91; // [rsp+40h] [rbp-100h]
  void *v92; // [rsp+48h] [rbp-F8h] BYREF
  __int128 v93; // [rsp+50h] [rbp-F0h]
  void *ptr; // [rsp+68h] [rbp-D8h] BYREF
  __int128 v95; // [rsp+70h] [rbp-D0h]
  __int64 (__fastcall **v96)(); // [rsp+88h] [rbp-B8h] BYREF
  int v97; // [rsp+90h] [rbp-B0h]
  void **p_ptr; // [rsp+98h] [rbp-A8h]
  __int64 v99; // [rsp+A8h] [rbp-98h] BYREF
  __int64 v100; // [rsp+B0h] [rbp-90h]
  __int64 v101; // [rsp+B8h] [rbp-88h]
  void *dest[2]; // [rsp+C0h] [rbp-80h] BYREF
  __int128 v103; // [rsp+D0h] [rbp-70h]
  __int128 v104; // [rsp+E0h] [rbp-60h]
  int v105; // [rsp+FCh] [rbp-44h] BYREF
  unsigned __int64 v106; // [rsp+100h] [rbp-40h]

  v10 = 0;
  v88 = a2;
  v106 = __readfsqword(0x28u);
  v11 = a2[1];
  v93 = 0;
  v92 = nullptr;
  n.m128i_i64[1] = v11;
  if ( !v11 )
  {
    v12 = 0;
    v79 = a1 + 1168;
    v84 = *(_QWORD *)(a1 + 1184);
    if ( a1 + 1168 != v84 )
      goto LABEL_22;
    goto LABEL_89;
  }
  v12 = 0;
  v13 = 0;
  do
  {
    v14 = *v88 + 80 * v13;
    n.m128i_i64[0] = *(_QWORD *)(v14 + 24);
    if ( !n.m128i_i64[0] )
    {
      v15 = s1;
      if ( v12 )
      {
LABEL_5:
        v78 = (unsigned __int64 *)v14;
        v16 = (char *)v92;
        v17 = 0;
        v83 = v13;
        v18 = 0;
        while ( 1 )
        {
          v19 = s1;
          v20 = &v16[80 * v17];
          if ( *((_QWORD *)v20 + 3) )
            v19 = *((const char **)v20 + 2);
          if ( !strcmp(v19, v15) )
            break;
          v17 = ++v18;
          if ( v18 >= v12 )
          {
            v14 = (__int64)v78;
            v13 = v83;
            v21 = *v78;
            goto LABEL_39;
          }
        }
        v14 = (__int64)v78;
        v13 = v83;
        v21 = *v78;
        if ( v20 )
        {
          v22 = *(_QWORD *)v20;
          if ( v21 < *(_QWORD *)v20 )
          {
            *(_QWORD *)v20 = v21;
            v22 = v21;
          }
          v23 = *((_QWORD *)v20 + 1);
          if ( v23 < v21 )
          {
            *((_QWORD *)v20 + 1) = v21;
            v23 = v21;
          }
          v24 = v78[1];
          if ( v24 < v22 )
            *(_QWORD *)v20 = v24;
          if ( v23 < v24 )
            *((_QWORD *)v20 + 1) = v24;
          v12 = v93;
          goto LABEL_20;
        }
LABEL_39:
        v34 = nullptr;
        v32 = *(_QWORD *)(v14 + 8);
        if ( n.m128i_i64[0] )
          goto LABEL_36;
      }
      else
      {
        v21 = *(_QWORD *)v14;
        v32 = *(_QWORD *)(v14 + 8);
        v34 = nullptr;
      }
      v36 = *(_QWORD *)(v14 + 48);
      v35 = nullptr;
      if ( !v36 )
        goto LABEL_41;
      goto LABEL_37;
    }
    v15 = *(const char **)(v14 + 16);
    if ( v12 )
      goto LABEL_5;
    v21 = *(_QWORD *)v14;
    v32 = *(_QWORD *)(v14 + 8);
LABEL_36:
    v33 = n.m128i_i64[0];
    v85 = v13;
    v80 = v14;
    v34 = sub_4814F0(n.m128i_i64[0]);
    v35 = nullptr;
    memcpy(v34, *(const void **)(v80 + 16), v33);
    v14 = v80;
    v13 = v85;
    v36 = *(_QWORD *)(v80 + 48);
    if ( !v36 )
      goto LABEL_41;
LABEL_37:
    v89 = v13;
    v86 = v14;
    v81 = v36;
    v35 = sub_4814F0(v36);
    memcpy(v35, *(const void **)(v86 + 40), v81);
    v13 = v89;
    v14 = v86;
    v36 = v81;
LABEL_41:
    v37 = v93;
    v38 = *(_QWORD *)(v14 + 64);
    v39 = *(unsigned __int16 *)(v14 + 72);
    v40 = (char *)v92;
    if ( *((_QWORD *)&v93 + 1) < (unsigned __int64)(v93 + 1) )
    {
      v91 = v36;
      v90 = v39;
      v89 = v38;
      v82 = v13;
      v92 = sub_481540((__int64)&v92, v92, v93 + 1, 0x50u);
      v40 = (char *)v92;
      v36 = v91;
      v37 = v93;
      LOWORD(v39) = v90;
      v38 = v89;
      v13 = v82;
    }
    a5 = (__m128)v32;
    v41 = &v40[80 * v37];
    *(__m128i *)v41 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v32);
    v42 = _mm_loadl_epi64(&n);
    *((_QWORD *)v41 + 2) = v34;
    *((_QWORD *)v41 + 5) = v35;
    *(__m128i *)(v41 + 24) = _mm_unpacklo_epi64(v42, v42);
    v10 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v36, (__m128i)(unsigned __int64)v36);
    *((_QWORD *)v41 + 8) = v38;
    *((_WORD *)v41 + 36) = v39;
    *((__m128 *)v41 + 3) = v10;
    v12 = v93 + 1;
    *(_QWORD *)&v93 = v93 + 1;
LABEL_20:
    ++v13;
  }
  while ( n.m128i_i64[1] != v13 );
  v79 = a1 + 1168;
  v84 = *(_QWORD *)(a1 + 1184);
  if ( v84 != a1 + 1168 )
  {
    while ( 1 )
    {
LABEL_22:
      v25 = s1;
      if ( *(_QWORD *)(v84 + 64) )
        v25 = *(const char **)(v84 + 56);
      v26 = (char *)v92;
      if ( v12 )
      {
        while ( 1 )
        {
          v27 = 0;
          v28 = 0;
          while ( 1 )
          {
            v29 = s1;
            v30 = &v26[80 * v28];
            if ( *((_QWORD *)v30 + 3) )
              v29 = *((const char **)v30 + 2);
            if ( !strcmp(v29, v25) )
              break;
            v28 = ++v27;
            if ( v27 >= v12 )
              goto LABEL_45;
          }
          if ( !v30 )
            break;
          v31 = std::_Rb_tree_increment(v84);
          v84 = v31;
          if ( v31 == v79 )
            goto LABEL_66;
          v25 = s1;
          if ( *(_QWORD *)(v31 + 64) )
            v25 = *(const char **)(v31 + 56);
        }
      }
LABEL_45:
      if ( !(unsigned __int8)sub_420700((_QWORD *)a1, 8u, v25, *(double *)v10.m128_u64, *(double *)a4.m128_u64, a5, a6) )
      {
        *(_OWORD *)dest = 0;
        v99 = 0xFFFFFFFFLL;
        v100 = -1;
        v101 = 0;
        v103 = 0;
        v104 = 0;
        sub_4787B0((__int64)&v99, 9);
        if ( (HIDWORD(v101) & 0xFFFFFFFu) - 9 > 1 && (HIDWORD(v101) & 0xFFFFFFF) != 3 )
          sub_40D900();
        if ( v25 && (v43 = strlen(v25), (v44 = v43) != 0) )
        {
          v75 = dest[0];
          v76 = (void *)(v43 + 1);
          if ( (unsigned __int64)v103 < v43 + 1 )
          {
            n.m128i_i64[0] = v43 + 1;
            dest[0] = sub_481540((__int64)dest, dest[0], (unsigned __int64)v76, 1u);
            v76 = (void *)n.m128i_i64[0];
            v75 = dest[0];
          }
          dest[1] = v76;
          memmove(v75, v25, v44);
          *((_BYTE *)dest[0] + v44) = 0;
        }
        else
        {
          dest[1] = nullptr;
        }
        v100 = -1;
        LOBYTE(v101) = 1;
        a4 = (__m128)_mm_cvtsi32_si128(*(_DWORD *)(a1 + 1340));
        n.m128i_i32[0] = *(_DWORD *)(a1 + 1340);
        v10 = (__m128)_mm_shuffle_epi32((__m128i)a4, 224);
        v99 = v10.m128_u64[0];
        sub_41C3B0(a1, (__int64)&v99, 0);
        sub_478720((__int64)&v99);
      }
      v45 = std::_Rb_tree_increment(v84);
      v46 = std::_Rb_tree_rebalance_for_erase(v84, v79);
      v47 = *(void **)(v46 + 176);
      v48 = (_QWORD *)v46;
      if ( v47 )
      {
        *(_QWORD *)(v46 + 184) = 0;
        j__free(v47);
      }
      v49 = (void *)v48[19];
      if ( v49 )
      {
        v48[20] = 0;
        j__free(v49);
      }
      v50 = v48[15];
      while ( v50 )
      {
        v51 = (_QWORD *)v50;
        sub_40F970(*(_QWORD **)(v50 + 24));
        v52 = *(void **)(v50 + 40);
        v50 = *(_QWORD *)(v50 + 16);
        if ( v52 )
        {
          v51[6] = 0;
          j__free(v52);
        }
        operator delete(v51, 0x40u);
      }
      v53 = (void *)v48[10];
      if ( v53 )
      {
        v48[11] = 0;
        j__free(v53);
      }
      v54 = (void *)v48[7];
      if ( v54 )
      {
        v48[8] = 0;
        j__free(v54);
      }
      operator delete(v48, 0xD0u);
      v12 = v93;
      --*(_QWORD *)(a1 + 1200);
      if ( v45 == v79 )
        break;
      v84 = v45;
    }
  }
LABEL_66:
  if ( (int)v12 > 0 )
  {
    v55 = (unsigned int)(v12 - 1);
    v56 = 0;
    v57 = 16 * (5 * v55 + 5);
    do
    {
      v58 = (const char **)((char *)v92 + v56);
      if ( *(_QWORD *)((char *)v92 + v56 + 24) > 1u )
      {
        if ( *(_BYTE *)(a1 + 861) )
          goto LABEL_73;
        v59 = s1;
        if ( *(_QWORD *)(a1 + 592) )
          v59 = *(const char **)(a1 + 584);
        if ( strcmp(v58[2], v59) )
        {
LABEL_73:
          v60 = *v58;
          v61 = *(_QWORD **)(a1 + 1176);
          if ( !v61 )
            goto LABEL_81;
          v62 = (_QWORD *)v79;
          do
          {
            while ( 1 )
            {
              v63 = v61[2];
              v64 = v61[3];
              if ( v61[4] < (unsigned __int64)v60 )
                break;
              v62 = v61;
              v61 = (_QWORD *)v61[2];
              if ( !v63 )
                goto LABEL_78;
            }
            v61 = (_QWORD *)v61[3];
          }
          while ( v64 );
LABEL_78:
          if ( v62 == (_QWORD *)v79 || (unsigned __int64)v60 < v62[4] )
          {
LABEL_81:
            if ( (unsigned int)sub_41D160(
                                 a1,
                                 0xFFFFFFFF,
                                 (__off64_t)*v58,
                                 (unsigned __int64 *)&v105,
                                 4,
                                 0,
                                 v10,
                                 a4,
                                 a5,
                                 a6,
                                 a7,
                                 a8,
                                 a9,
                                 a10) == 4
              && v105 == 1179403647 )
            {
              v10 = 0;
              ptr = nullptr;
              v65 = s1;
              v95 = 0;
              if ( *(_QWORD *)((char *)v92 + v56 + 24) )
                v65 = *(const char **)((char *)v92 + v56 + 16);
              v96 = off_4C2200;
              p_ptr = &ptr;
              v97 = 4;
              sub_42BC30(v65, &v96, 0, 0.0, a4, a5, a6, a7, a8, a9, a10);
              v66 = sub_414B50(a1, &v92, (unsigned __int64 *)((char *)v92 + v56));
              v67 = s1;
              if ( (_QWORD)v95 )
                v67 = (const char *)ptr;
              sub_41B880(a1, v60, v66, v65, v67, 0.0);
              if ( ptr )
              {
                *(_QWORD *)&v95 = 0;
                j__free(ptr);
              }
            }
          }
        }
      }
      v56 += 80;
    }
    while ( v56 != v57 );
  }
LABEL_89:
  sub_41D8D0(a1, v10, a4, a5, a6, a7, a8, a9, a10);
  v68 = (char *)v92;
  if ( v92 )
  {
    v69 = v93;
    if ( (_QWORD)v93 )
    {
      v70 = 0;
      do
      {
        v71 = &v68[80 * v70];
        v72 = *((void **)v71 + 5);
        if ( v72 )
        {
          *((_QWORD *)v71 + 6) = 0;
          j__free(v72);
        }
        v73 = *((void **)v71 + 2);
        if ( v73 )
        {
          *((_QWORD *)v71 + 3) = 0;
          j__free(v73);
        }
        ++v70;
        v68 = (char *)v92;
      }
      while ( v69 != v70 );
    }
    *(_QWORD *)&v93 = 0;
    j__free(v68);
  }
  return v106 - __readfsqword(0x28u);
}
// 420EB3: variable 'a7' is possibly undefined
// 420EB3: variable 'a8' is possibly undefined
// 4053F0: using guessed type __int64 __fastcall std::_Rb_tree_rebalance_for_erase(_QWORD, _QWORD);
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
// 4C2200: using guessed type __int64 (__fastcall *off_4C2200[3])();
