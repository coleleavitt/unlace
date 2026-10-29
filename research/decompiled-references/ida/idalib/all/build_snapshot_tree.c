__int64 __fastcall build_snapshot_tree(__int64 a1)
{
  const char *v1; // rsi
  bool v2; // zf
  __int64 v3; // rax
  int *v4; // rdx
  char *v5; // rcx
  int v6; // r9d
  __int128 *v7; // rsi
  _DWORD *v8; // rbx
  void *v9; // rdi
  void *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // r9
  unsigned __int64 *v13; // rdi
  unsigned __int64 *v14; // r15
  unsigned __int64 *v15; // rbp
  __int64 *v16; // rax
  unsigned __int64 v17; // rbx
  int *v18; // r8
  __int64 v19; // rax
  const char *v20; // rsi
  __int64 v22; // rcx
  __m128i *v23; // rbx
  __m128i *v24; // rax
  _BOOL8 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // rdx
  _QWORD *v28; // rax
  void *v29; // r9
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  __m128i *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r9
  void *v35; // rdi
  __m128i v36; // xmm0
  __int64 v37; // rax
  __int64 i; // rax
  _DWORD *v39; // rbp
  void *v40; // rdi
  int *v41; // r10
  int *v42; // rax
  __int64 v43; // r11
  unsigned __int64 **v44; // rax
  unsigned __int64 **v45; // rcx
  unsigned __int64 *v46; // r9
  int *v47; // r15
  __int64 v48; // rax
  __int64 v49; // rax
  __int128 *v50; // r8
  __int64 v51; // rax
  int *v52; // rax
  _BOOL8 v53; // rdi
  __int128 *v54; // rbx
  _QWORD **v55; // r14
  __int64 v56; // rax
  _DWORD *v57; // rsi
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int16 v61; // di
  void *v62; // rax
  void *v63; // rax
  __int64 v65; // [rsp+20h] [rbp-8538h]
  unsigned __int64 *v66; // [rsp+20h] [rbp-8538h]
  int *v67; // [rsp+20h] [rbp-8538h]
  unsigned __int64 *v68; // [rsp+20h] [rbp-8538h]
  int *v69; // [rsp+20h] [rbp-8538h]
  __int64 v70; // [rsp+20h] [rbp-8538h]
  __int64 v71; // [rsp+28h] [rbp-8530h]
  _QWORD *v72; // [rsp+30h] [rbp-8528h]
  size_t n; // [rsp+38h] [rbp-8520h]
  size_t na; // [rsp+38h] [rbp-8520h]
  size_t nb; // [rsp+38h] [rbp-8520h]
  size_t nc; // [rsp+38h] [rbp-8520h]
  size_t nd; // [rsp+38h] [rbp-8520h]
  __int64 ne; // [rsp+38h] [rbp-8520h]
  __m128i v79; // [rsp+40h] [rbp-8518h] BYREF
  void *v80; // [rsp+50h] [rbp-8508h]
  unsigned __int64 v81; // [rsp+58h] [rbp-8500h]
  char v82[8]; // [rsp+60h] [rbp-84F8h] BYREF
  int v83; // [rsp+68h] [rbp-84F0h] BYREF
  __m128i *v84; // [rsp+70h] [rbp-84E8h]
  __m128i *v85; // [rsp+78h] [rbp-84E0h]
  __m128i *v86; // [rsp+80h] [rbp-84D8h]
  __int64 v87; // [rsp+88h] [rbp-84D0h]
  char v88[8]; // [rsp+90h] [rbp-84C8h] BYREF
  int v89; // [rsp+98h] [rbp-84C0h] BYREF
  int *v90; // [rsp+A0h] [rbp-84B8h]
  int *v91; // [rsp+A8h] [rbp-84B0h]
  int *v92; // [rsp+B0h] [rbp-84A8h]
  __int64 v93; // [rsp+B8h] [rbp-84A0h]
  void *v94; // [rsp+C0h] [rbp-8498h] BYREF
  __int128 v95; // [rsp+C8h] [rbp-8490h]
  void *v96; // [rsp+D8h] [rbp-8480h]
  __int128 v97; // [rsp+E0h] [rbp-8478h] BYREF
  __int64 v98; // [rsp+F0h] [rbp-8468h]
  __int64 v99; // [rsp+F8h] [rbp-8460h]
  __int128 v100; // [rsp+100h] [rbp-8458h] BYREF
  void (__fastcall *v101)(__int128 *, __int128 *, __int64, double, double); // [rsp+110h] [rbp-8448h]
  __int64 v102; // [rsp+118h] [rbp-8440h]
  _DWORD v103[84]; // [rsp+120h] [rbp-8438h] BYREF
  _OWORD v104[10]; // [rsp+270h] [rbp-82E8h] BYREF
  void *v105; // [rsp+310h] [rbp-8248h]
  __int128 v106; // [rsp+318h] [rbp-8240h]
  __m128i si128; // [rsp+328h] [rbp-8230h]
  int v108; // [rsp+338h] [rbp-8220h]
  __int128 v109; // [rsp+340h] [rbp-8218h]
  void *ptr[2]; // [rsp+350h] [rbp-8208h]
  __int128 v111; // [rsp+360h] [rbp-81F8h]
  __int128 v112; // [rsp+370h] [rbp-81E8h]
  __int64 v113; // [rsp+380h] [rbp-81D8h]
  __int64 v114; // [rsp+388h] [rbp-81D0h]
  __int64 v115; // [rsp+390h] [rbp-81C8h]
  __int128 v116; // [rsp+398h] [rbp-81C0h]
  _BYTE v117[88]; // [rsp+3A8h] [rbp-81B0h] BYREF
  __int64 v118; // [rsp+400h] [rbp-8158h]
  char v119; // [rsp+408h] [rbp-8150h]
  __int16 v120; // [rsp+410h] [rbp-8148h]
  char v121; // [rsp+412h] [rbp-8146h]
  __int128 *v122; // [rsp+420h] [rbp-8138h]
  __int16 v123; // [rsp+428h] [rbp-8130h]
  void *src; // [rsp+430h] [rbp-8128h] BYREF
  __int128 v125; // [rsp+438h] [rbp-8120h]
  _BYTE v126[128]; // [rsp+448h] [rbp-8110h] BYREF
  _BYTE v127[4104]; // [rsp+4C8h] [rbp-8090h] BYREF
  _BYTE v128[4]; // [rsp+14D0h] [rbp-7088h] BYREF
  _BYTE v129[8228]; // [rsp+14D4h] [rbp-7084h] BYREF
  __int64 v130; // [rsp+34F8h] [rbp-5060h]
  int v131; // [rsp+3504h] [rbp-5054h]
  char dest[4096]; // [rsp+5510h] [rbp-3048h] BYREF
  char s[4096]; // [rsp+6510h] [rbp-2048h] BYREF
  _BYTE v134[4104]; // [rsp+7510h] [rbp-1048h] BYREF
  unsigned __int64 v135; // [rsp+8518h] [rbp-40h]

  v135 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  sub_590900((_QWORD *)a1);
  v72 = (_QWORD *)qword_2CCB598;
  qdirname(dest);
  v86 = (__m128i *)&v83;
  v125 = 0;
  v1 = haystack;
  v87 = 0;
  v2 = v72[4] == 0;
  src = nullptr;
  v83 = 0;
  v84 = nullptr;
  v85 = (__m128i *)&v83;
  if ( !v2 )
    v1 = (const char *)v72[3];
  qstrncpy(s, v1, 4096);
  sub_593F40(s, 4096, s, &byte_22F0C30);
  dest[strlen(s) + 4095] = 95;
  qstrncat(s, "*.i64", 4096);
  v3 = v72[193];
  v130 = 0;
  v131 = 0;
  v71 = v3;
  v7 = (__int128 *)v129;
  if ( !(unsigned int)qfindfirst(s, v128, 0) )
  {
    do
    {
      qmakepath((unsigned int)v134, 4096, (unsigned int)dest, (unsigned int)v129, 0, v6);
      v7 = (__int128 *)v134;
      v101 = nullptr;
      v8 = v104;
      memset(v103, 0, sizeof(v103));
      v94 = nullptr;
      memset(v117, 0, sizeof(v117));
      v96 = nullptr;
      v98 = 0;
      v99 = 0;
      v102 = 0;
      v103[10] = 2;
      v103[24] = 2;
      v103[38] = 2;
      v103[52] = 2;
      v103[66] = 2;
      v103[80] = 2;
      v105 = nullptr;
      v108 = 64;
      v113 = 0;
      v114 = 0;
      v115 = 0;
      v118 = 0;
      v95 = 0;
      v97 = 0;
      v100 = 0;
      v104[0] = 0;
      v106 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A7C00);
      v109 = 0;
      *(_OWORD *)ptr = 0;
      v111 = 0;
      v112 = 0;
      v116 = 0;
      v119 = 0;
      v121 = 0;
      v120 = 256;
      if ( !(unsigned __int8)sub_72CDA0(&v94, v134, 0)
        || (v7 = (__int128 *)v126, sub_72B040(&v94, v126, 128, &src), !(_QWORD)v125)
        || (v7 = (__int128 *)v71, *(_OWORD *)(v71 + 240) - v104[1] != 0) )
      {
        sub_72AFB0(&v94);
        if ( ptr[1] )
        {
          *(_QWORD *)&v111 = 0;
          qfree(ptr[1]);
        }
        if ( v105 )
        {
          *(_QWORD *)&v106 = 0;
          qfree(v105);
        }
        do
        {
          v9 = *((void **)v8 - 3);
          v8 -= 14;
          close_linput(v9);
        }
        while ( v8 != v103 );
        if ( v101 )
        {
          v7 = &v100;
          v101(&v100, &v100, 3, 0.0, 0.0);
        }
        if ( v96 )
        {
          *(_QWORD *)&v97 = 0;
          qfree(v96);
        }
        v10 = v94;
        if ( !v94 )
          continue;
        goto LABEL_18;
      }
      qstrncpy(v127, v134, 4096);
      v22 = v125;
      v23 = (__m128i *)&v83;
      v7 = *((__int128 **)src + v125 - 1);
      v24 = v84;
      LODWORD(v25) = ((unsigned __int32)si128.m128i_i32[1] >> 2) & 1;
      v122 = v7;
      v123 = ((unsigned __int32)si128.m128i_i32[1] >> 2) & 1;
      if ( v84 )
      {
        do
        {
          while ( 1 )
          {
            v26 = v24[1].m128i_i64[0];
            v27 = v24[1].m128i_i64[1];
            if ( v24[2].m128i_i64[0] < (unsigned __int64)v7 )
              break;
            v23 = v24;
            v24 = (__m128i *)v24[1].m128i_i64[0];
            if ( !v26 )
              goto LABEL_43;
          }
          v24 = (__m128i *)v24[1].m128i_i64[1];
        }
        while ( v27 );
LABEL_43:
        if ( v23 != (__m128i *)&v83 && (unsigned __int64)v7 >= v23[2].m128i_i64[0] )
          goto LABEL_55;
      }
      v28 = (_QWORD *)operator new(0x10D0u);
      v7 = v122;
      v29 = v28;
      v28[4] = v122;
      memset(v28 + 5, 0, 0x10A8u);
      if ( v23 == (__m128i *)&v83 )
      {
        if ( !v87 )
          goto LABEL_49;
        v31 = (__int64)v86;
        v23 = nullptr;
        if ( v86[2].m128i_i64[0] >= (unsigned __int64)v7 )
          goto LABEL_49;
      }
      else
      {
        v30 = v23[2].m128i_u64[0];
        if ( (unsigned __int64)v7 >= v30 )
        {
          if ( v30 >= (unsigned __int64)v7 )
            goto LABEL_134;
          if ( v86 == v23 )
          {
LABEL_133:
            v31 = (__int64)v23;
            if ( v23 )
              goto LABEL_149;
            goto LABEL_134;
          }
          v80 = v28;
          v79.m128i_i64[0] = (__int64)v7;
          v81 = v30;
          v31 = std::_Rb_tree_increment(v23, v7, v82, v30);
          v7 = (__int128 *)v79.m128i_i64[0];
          v29 = v80;
          if ( v79.m128i_i64[0] >= *(_QWORD *)(v31 + 32) )
            goto LABEL_49;
          v30 = v81;
          if ( !v23[1].m128i_i64[1] )
            goto LABEL_133;
          v23 = (__m128i *)v31;
        }
        else
        {
          v31 = (__int64)v23;
          if ( v85 == v23 )
            goto LABEL_50;
          v80 = v29;
          v79.m128i_i64[0] = (__int64)v7;
          v31 = std::_Rb_tree_decrement(v23);
          v7 = (__int128 *)v79.m128i_i64[0];
          v29 = v80;
          if ( *(_QWORD *)(v31 + 32) >= v79.m128i_i64[0] )
          {
LABEL_49:
            v79.m128i_i64[0] = (__int64)v29;
            v32 = (__m128i *)sub_5901C0((__int64)v82, (unsigned __int64)v7);
            v29 = (void *)v79.m128i_i64[0];
            v23 = v32;
            v31 = v33;
            goto LABEL_50;
          }
          if ( *(_QWORD *)(v31 + 24) )
            v31 = (__int64)v23;
          else
            v23 = nullptr;
        }
      }
LABEL_50:
      if ( v31 )
      {
        if ( v23 || (int *)v31 == &v83 )
        {
          v25 = 1;
        }
        else
        {
          v30 = *(_QWORD *)(v31 + 32);
LABEL_149:
          v25 = (unsigned __int64)v7 < v30;
        }
        n = (size_t)v29;
        std::_Rb_tree_insert_and_rebalance(v25, v29, v31, &v83);
        v7 = v122;
        ++v87;
        v23 = (__m128i *)n;
        LOWORD(v25) = v123;
        v22 = v125;
LABEL_55:
        v23[2].m128i_i64[1] = (__int64)v7;
        v34 = 0;
        v23[3].m128i_i16[0] = v25;
        if ( !v22 )
          goto LABEL_56;
LABEL_137:
        v79.m128i_i64[0] = v22;
        ne = 8 * v22;
        v62 = (void *)qalloc_or_throw(8 * v22);
        v7 = (__int128 *)src;
        v63 = memcpy(v62, src, ne);
        v22 = v79.m128i_i64[0];
        v34 = (__int64)v63;
        goto LABEL_56;
      }
LABEL_134:
      if ( v29 )
      {
        operator delete(v29, 0x10D0u);
        v7 = v122;
      }
      v61 = v123;
      v22 = v125;
      v23[2].m128i_i64[1] = (__int64)v7;
      v34 = 0;
      v23[3].m128i_i16[0] = v61;
      if ( v22 )
        goto LABEL_137;
LABEL_56:
      v35 = (void *)v23[3].m128i_i64[1];
      v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
      if ( v35 )
      {
        v23[4].m128i_i64[0] = 0;
        na = v34;
        v79 = v36;
        qfree(v35);
        v36 = _mm_load_si128(&v79);
        v34 = na;
      }
      v23[3].m128i_i64[1] = v34;
      v37 = 0;
      v23[4] = v36;
      do
      {
        v23[5].m128i_i8[v37] = v126[v37];
        ++v37;
      }
      while ( v37 != 128 );
      for ( i = 0; i != 4096; ++i )
        v23[13].m128i_i8[i] = v127[i];
      sub_72AFB0(&v94);
      if ( ptr[1] )
      {
        *(_QWORD *)&v111 = 0;
        qfree(ptr[1]);
      }
      if ( v105 )
      {
        *(_QWORD *)&v106 = 0;
        qfree(v105);
      }
      v39 = &v103[70];
      do
      {
        v40 = *((void **)v39 + 4);
        v39 -= 14;
        close_linput(v40);
      }
      while ( (_DWORD *)((char *)&v97 + 8) != v39 );
      if ( v101 )
      {
        v7 = &v100;
        v101(&v100, &v100, 3, *(double *)v36.m128i_i64, 0.0);
      }
      if ( v96 )
      {
        *(_QWORD *)&v97 = 0;
        qfree(v96);
      }
      v10 = v94;
      if ( !v94 )
        continue;
LABEL_18:
      *(_QWORD *)&v95 = 0;
      qfree(v10);
    }
    while ( !(unsigned int)qfindnext(v128) );
  }
  v11 = (__int64)v85;
  v89 = 0;
  v90 = nullptr;
  *(_QWORD *)a1 = 0;
  v91 = &v89;
  v92 = &v89;
  v93 = 0;
  if ( (int *)v11 != &v83 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v11 + 64);
      v13 = *(unsigned __int64 **)(v11 + 56);
      v14 = (unsigned __int64 *)a1;
      v15 = v13;
      if ( 8 * v12 )
        break;
LABEL_30:
      v11 = std::_Rb_tree_increment(v11, v7, v4, v5);
      if ( (int *)v11 == &v83 )
        goto LABEL_31;
    }
    while ( 1 )
    {
      v16 = (__int64 *)v84;
      v17 = *v15;
      if ( !v84 )
        goto LABEL_29;
      v18 = &v83;
      do
      {
        while ( 1 )
        {
          v5 = (char *)v16[2];
          v4 = (int *)v16[3];
          if ( v16[4] < v17 )
            break;
          v18 = (int *)v16;
          v16 = (__int64 *)v16[2];
          if ( !v5 )
            goto LABEL_27;
        }
        v16 = (__int64 *)v16[3];
      }
      while ( v4 );
LABEL_27:
      if ( v18 == &v83 || v17 < *((_QWORD *)v18 + 4) )
        goto LABEL_29;
      v7 = (__int128 *)*v14;
      if ( v17 < *v14 )
        sub_368890();
      v4 = v90;
      if ( v90 )
      {
        v41 = &v89;
        v42 = v90;
        do
        {
          while ( 1 )
          {
            v43 = *((_QWORD *)v42 + 2);
            v5 = *((char **)v42 + 3);
            if ( *((_QWORD *)v42 + 4) < v17 )
              break;
            v41 = v42;
            v42 = *((int **)v42 + 2);
            if ( !v43 )
              goto LABEL_80;
          }
          v42 = *((int **)v42 + 3);
        }
        while ( v5 );
LABEL_80:
        if ( v41 != &v89 && v17 >= *((_QWORD *)v41 + 4) )
        {
          v54 = *((__int128 **)v41 + 5);
          if ( v7 != *(__int128 **)v54 )
          {
            v55 = (_QWORD **)v14[530];
            if ( !(8 * v14[531]) )
LABEL_109:
              sub_368890();
            while ( 1 )
            {
              v7 = v54;
              if ( (unsigned __int8)sub_590280(*v55, v54, nullptr) )
                break;
              if ( ++v55 == (_QWORD **)(v14[530] + 8 * v14[531]) )
                goto LABEL_109;
            }
            v13 = *(unsigned __int64 **)(v11 + 56);
            v12 = *(_QWORD *)(v11 + 64);
          }
          v14 = (unsigned __int64 *)v54;
          goto LABEL_29;
        }
      }
      v44 = (unsigned __int64 **)v14[530];
      v7 = (__int128 *)(8 * v14[531]);
      v45 = (unsigned __int64 **)((char *)v7 + (_QWORD)v44);
      if ( !v7 )
        goto LABEL_116;
      while ( 1 )
      {
        v46 = *v44;
        if ( v17 == **v44 )
          break;
        if ( ++v44 == v45 )
          goto LABEL_116;
      }
      if ( !v46 )
      {
LABEL_116:
        v69 = v18;
        v56 = qalloc_or_throw(4264);
        *(_QWORD *)v56 = 0;
        *(_QWORD *)(v56 + 8) = 0;
        *(_QWORD *)(v56 + 136) = 0;
        v57 = v69 + 20;
        *(_QWORD *)(v56 + 4240) = 0;
        *(_OWORD *)(v56 + 4248) = 0;
        nd = (size_t)v69;
        v70 = v56;
        qstrncpy(v56 + 10, v57, 128);
        qstrncpy(v70 + 138, nd + 208, 4096);
        v46 = (unsigned __int64 *)v70;
        *(_QWORD *)v70 = *(_QWORD *)(nd + 40);
        *(_WORD *)(v70 + 8) = *(_WORD *)(nd + 48);
        v58 = v14[531];
        v7 = (__int128 *)v14[530];
        if ( v14[532] < v58 + 1 )
        {
          v60 = qvector_reserve(v14 + 530, v7, v58 + 1, 8);
          v14[530] = v60;
          v7 = (__int128 *)v60;
          v46 = (unsigned __int64 *)v70;
          v58 = v14[531];
        }
        *((_QWORD *)v7 + v58) = v46;
        v4 = v90;
        ++v14[531];
      }
      v47 = &v89;
      if ( !v4 )
        break;
      do
      {
        while ( 1 )
        {
          v5 = *((char **)v4 + 2);
          v48 = *((_QWORD *)v4 + 3);
          if ( *((_QWORD *)v4 + 4) < v17 )
            break;
          v47 = v4;
          v4 = *((int **)v4 + 2);
          if ( !v5 )
            goto LABEL_92;
        }
        v4 = *((int **)v4 + 3);
      }
      while ( v48 );
LABEL_92:
      if ( v47 == &v89 || v17 < *((_QWORD *)v47 + 4) )
        break;
LABEL_104:
      *((_QWORD *)v47 + 5) = v46;
      v14 = v46;
      v13 = *(unsigned __int64 **)(v11 + 56);
      v12 = *(_QWORD *)(v11 + 64);
LABEL_29:
      if ( ++v15 == &v13[v12] )
        goto LABEL_30;
    }
    v65 = (__int64)v46;
    v49 = operator new(0x30u);
    *(_QWORD *)(v49 + 32) = v17;
    v50 = (__int128 *)v49;
    v46 = (unsigned __int64 *)v65;
    v5 = v88;
    *(_QWORD *)(v49 + 40) = 0;
    if ( v47 == &v89 )
    {
      if ( v93 )
      {
        v4 = v92;
        v47 = nullptr;
        if ( *((_QWORD *)v92 + 4) < v17 )
          goto LABEL_99;
      }
    }
    else
    {
      v7 = *((__int128 **)v47 + 4);
      if ( v17 < (unsigned __int64)v7 )
      {
        v4 = v47;
        if ( v91 == v47 )
          goto LABEL_99;
        v79.m128i_i64[0] = v49;
        v51 = std::_Rb_tree_decrement(v47);
        v46 = (unsigned __int64 *)v65;
        v50 = (__int128 *)v79.m128i_i64[0];
        v5 = v88;
        v4 = (int *)v51;
        if ( *(_QWORD *)(v51 + 32) >= v17 )
          goto LABEL_98;
        if ( *(_QWORD *)(v51 + 24) )
          v4 = v47;
        else
          v47 = nullptr;
LABEL_99:
        if ( !v4 )
          goto LABEL_114;
        if ( v4 == &v89 || v47 )
        {
          v53 = 1;
LABEL_103:
          v7 = v50;
          nc = (size_t)v46;
          v67 = (int *)v50;
          std::_Rb_tree_insert_and_rebalance(v53, v50, v4, &v89);
          v47 = v67;
          v46 = (unsigned __int64 *)nc;
          ++v93;
          goto LABEL_104;
        }
        goto LABEL_139;
      }
      if ( (unsigned __int64)v7 >= v17 )
        goto LABEL_114;
      if ( v92 == v47 )
      {
        v4 = v47;
        if ( !v47 )
          goto LABEL_114;
LABEL_139:
        v7 = *((__int128 **)v4 + 4);
LABEL_140:
        v53 = v17 < (unsigned __int64)v7;
        goto LABEL_103;
      }
      v80 = (void *)v49;
      v79.m128i_i64[0] = v65;
      v59 = std::_Rb_tree_increment(v47, v7, v4, v88);
      v46 = (unsigned __int64 *)v79.m128i_i64[0];
      v50 = (__int128 *)v80;
      v5 = v88;
      v4 = (int *)v59;
      if ( v17 < *(_QWORD *)(v59 + 32) )
      {
        if ( !*((_QWORD *)v47 + 3) )
        {
          v4 = v47;
          if ( !v47 )
          {
LABEL_114:
            if ( v50 )
            {
              v7 = (_OWORD *)&dword_30;
              v68 = v46;
              operator delete(v50, 0x30u);
              v46 = v68;
            }
            goto LABEL_104;
          }
          goto LABEL_140;
        }
        v47 = (int *)v59;
        goto LABEL_99;
      }
    }
LABEL_98:
    v7 = (__int128 *)v17;
    nb = (size_t)v50;
    v66 = v46;
    v52 = (int *)sub_590100((__int64)v88, v17);
    v46 = v66;
    v50 = (__int128 *)nb;
    v47 = v52;
    goto LABEL_99;
  }
LABEL_31:
  v19 = *(_QWORD *)(v71 + 224);
  if ( v19 )
    *(_QWORD *)a1 = *(_QWORD *)(*(_QWORD *)(v71 + 216) + 8 * v19 - 8);
  *(_WORD *)(a1 + 8) = (*(_DWORD *)(v71 + 260) >> 2) & 1;
  qstrncpy(a1 + 10, v71 + 88, 128);
  v20 = haystack;
  if ( v72[4] )
    v20 = (const char *)v72[3];
  qstrncpy(a1 + 138, v20, 4096);
  sub_590470(v90);
  qfindclose(v128);
  sub_590640(v84);
  if ( src )
  {
    *(_QWORD *)&v125 = 0;
    qfree(src);
  }
  return 1;
}
