__int64 __fastcall build_snapshot_tree(__int64 a1)
{
  const char *v1; // rsi
  bool v2; // zf
  __int64 v3; // rax
  int v4; // r9d
  _DWORD *v5; // rbx
  void *v6; // rdi
  void *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r9
  unsigned __int64 *v10; // rdi
  unsigned __int64 *v11; // r15
  unsigned __int64 *v12; // rbp
  __int64 *v13; // rax
  unsigned __int64 v14; // rbx
  int *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  const char *v19; // rsi
  __int64 v21; // rcx
  __m128i *v22; // rbx
  const char *v23; // rsi
  __m128i *v24; // rax
  int v25; // edi
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rax
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
  int *v41; // rdx
  int *v42; // r10
  int *v43; // rax
  __int64 v44; // r11
  __int64 v45; // rcx
  unsigned __int64 **v46; // rax
  const char *v47; // rsi
  const char *v48; // rcx
  unsigned __int64 *v49; // r9
  int *v50; // r15
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  int *v54; // r8
  unsigned __int64 v55; // rsi
  _DWORD *v56; // rdx
  __int64 v57; // rax
  int *v58; // rax
  unsigned __int64 *v59; // rbx
  _QWORD **v60; // r14
  __int64 v61; // rax
  _DWORD *v62; // rsi
  unsigned __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rax
  __int16 v67; // di
  void *v68; // rax
  void *v69; // rax
  char v70; // [rsp+0h] [rbp-8558h]
  __int64 v72; // [rsp+20h] [rbp-8538h]
  unsigned __int64 *v73; // [rsp+20h] [rbp-8538h]
  int *v74; // [rsp+20h] [rbp-8538h]
  unsigned __int64 *v75; // [rsp+20h] [rbp-8538h]
  int *v76; // [rsp+20h] [rbp-8538h]
  __int64 v77; // [rsp+20h] [rbp-8538h]
  __int64 v78; // [rsp+28h] [rbp-8530h]
  _QWORD *v79; // [rsp+30h] [rbp-8528h]
  size_t n; // [rsp+38h] [rbp-8520h]
  size_t na; // [rsp+38h] [rbp-8520h]
  size_t nb; // [rsp+38h] [rbp-8520h]
  size_t nc; // [rsp+38h] [rbp-8520h]
  size_t nd; // [rsp+38h] [rbp-8520h]
  __int64 ne; // [rsp+38h] [rbp-8520h]
  __m128i v86; // [rsp+40h] [rbp-8518h] BYREF
  void *v87; // [rsp+50h] [rbp-8508h]
  unsigned __int64 v88; // [rsp+58h] [rbp-8500h]
  char v89[8]; // [rsp+60h] [rbp-84F8h] BYREF
  int v90; // [rsp+68h] [rbp-84F0h] BYREF
  __m128i *v91; // [rsp+70h] [rbp-84E8h]
  __m128i *v92; // [rsp+78h] [rbp-84E0h]
  __m128i *v93; // [rsp+80h] [rbp-84D8h]
  __int64 v94; // [rsp+88h] [rbp-84D0h]
  char v95[8]; // [rsp+90h] [rbp-84C8h] BYREF
  int v96; // [rsp+98h] [rbp-84C0h] BYREF
  int *v97; // [rsp+A0h] [rbp-84B8h]
  int *v98; // [rsp+A8h] [rbp-84B0h]
  int *v99; // [rsp+B0h] [rbp-84A8h]
  __int64 v100; // [rsp+B8h] [rbp-84A0h]
  void *v101; // [rsp+C0h] [rbp-8498h] BYREF
  __int128 v102; // [rsp+C8h] [rbp-8490h]
  void *v103; // [rsp+D8h] [rbp-8480h]
  __int128 v104; // [rsp+E0h] [rbp-8478h] BYREF
  __int64 v105; // [rsp+F0h] [rbp-8468h]
  __int64 v106; // [rsp+F8h] [rbp-8460h]
  __int128 v107; // [rsp+100h] [rbp-8458h] BYREF
  void (__fastcall *v108)(__int128 *, __int128 *, __int64, double, double); // [rsp+110h] [rbp-8448h]
  __int64 v109; // [rsp+118h] [rbp-8440h]
  _DWORD v110[84]; // [rsp+120h] [rbp-8438h] BYREF
  _OWORD v111[10]; // [rsp+270h] [rbp-82E8h] BYREF
  void *v112; // [rsp+310h] [rbp-8248h]
  __int128 v113; // [rsp+318h] [rbp-8240h]
  __m128i si128; // [rsp+328h] [rbp-8230h]
  int v115; // [rsp+338h] [rbp-8220h]
  __int128 v116; // [rsp+340h] [rbp-8218h]
  void *ptr[2]; // [rsp+350h] [rbp-8208h]
  __int128 v118; // [rsp+360h] [rbp-81F8h]
  __int128 v119; // [rsp+370h] [rbp-81E8h]
  __int64 v120; // [rsp+380h] [rbp-81D8h]
  __int64 v121; // [rsp+388h] [rbp-81D0h]
  __int64 v122; // [rsp+390h] [rbp-81C8h]
  __int128 v123; // [rsp+398h] [rbp-81C0h]
  _BYTE v124[88]; // [rsp+3A8h] [rbp-81B0h] BYREF
  __int64 v125; // [rsp+400h] [rbp-8158h]
  char v126; // [rsp+408h] [rbp-8150h]
  __int16 v127; // [rsp+410h] [rbp-8148h]
  char v128; // [rsp+412h] [rbp-8146h]
  const char *v129; // [rsp+420h] [rbp-8138h]
  __int16 v130; // [rsp+428h] [rbp-8130h]
  void *src; // [rsp+430h] [rbp-8128h] BYREF
  __int128 v132; // [rsp+438h] [rbp-8120h]
  _BYTE v133[128]; // [rsp+448h] [rbp-8110h] BYREF
  _BYTE v134[4104]; // [rsp+4C8h] [rbp-8090h] BYREF
  _BYTE v135[4]; // [rsp+14D0h] [rbp-7088h] BYREF
  char v136; // [rsp+14D4h] [rbp-7084h] BYREF
  __int64 v137; // [rsp+34F8h] [rbp-5060h]
  int v138; // [rsp+3504h] [rbp-5054h]
  char dest[4096]; // [rsp+5510h] [rbp-3048h] BYREF
  char s[4096]; // [rsp+6510h] [rbp-2048h] BYREF
  _BYTE v141[4104]; // [rsp+7510h] [rbp-1048h] BYREF
  unsigned __int64 v142; // [rsp+8518h] [rbp-40h]

  v142 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  sub_577080((_QWORD *)a1);
  v79 = (_QWORD *)qword_2CA1698;
  qdirname(dest);
  v93 = (__m128i *)&v90;
  v132 = 0;
  v1 = haystack;
  v94 = 0;
  v2 = v79[4] == 0;
  src = nullptr;
  v90 = 0;
  v91 = nullptr;
  v92 = (__m128i *)&v90;
  if ( !v2 )
    v1 = (const char *)v79[3];
  qstrncpy(s, v1, 4096);
  sub_57A620(s, 4096, s, &byte_22CD811);
  dest[strlen(s) + 4095] = 95;
  qstrncat(s, "*.idb", 4096);
  v3 = v79[169];
  v137 = 0;
  v138 = 0;
  v78 = v3;
  if ( !(unsigned int)qfindfirst(s, v135, 0) )
  {
    while ( 1 )
    {
      qmakepath((int)v141, 4096, (int)dest, (int)&v136, 0, v4, v70);
      v108 = nullptr;
      v5 = v111;
      memset(v110, 0, sizeof(v110));
      v101 = nullptr;
      memset(v124, 0, sizeof(v124));
      v103 = nullptr;
      v105 = 0;
      v106 = 0;
      v109 = 0;
      v110[10] = 2;
      v110[24] = 2;
      v110[38] = 2;
      v110[52] = 2;
      v110[66] = 2;
      v110[80] = 2;
      v112 = nullptr;
      v115 = 64;
      v120 = 0;
      v121 = 0;
      v122 = 0;
      v125 = 0;
      v102 = 0;
      v104 = 0;
      v107 = 0;
      v111[0] = 0;
      v113 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2383BD0);
      v116 = 0;
      *(_OWORD *)ptr = 0;
      v118 = 0;
      v119 = 0;
      v123 = 0;
      v126 = 0;
      v128 = 0;
      v127 = 256;
      if ( !(unsigned __int8)sub_70C850(&v101, v141, 0)
        || (sub_70AA60(&v101, v133, 128, &src), !(_QWORD)v132)
        || *(_OWORD *)(v78 + 240) - v111[1] != 0 )
      {
        sub_70A9D0(&v101);
        if ( ptr[1] )
        {
          *(_QWORD *)&v118 = 0;
          qfree(ptr[1]);
        }
        if ( v112 )
        {
          *(_QWORD *)&v113 = 0;
          qfree(v112);
        }
        do
        {
          v6 = *((void **)v5 - 3);
          v5 -= 14;
          close_linput(v6);
        }
        while ( v5 != v110 );
        if ( v108 )
          v108(&v107, &v107, 3, 0.0, 0.0);
        if ( v103 )
        {
          *(_QWORD *)&v104 = 0;
          qfree(v103);
        }
        v7 = v101;
        if ( !v101 )
          goto LABEL_19;
        goto LABEL_18;
      }
      qstrncpy(v134, v141, 4096);
      v21 = v132;
      v22 = (__m128i *)&v90;
      v23 = *((const char **)src + v132 - 1);
      v24 = v91;
      v25 = ((unsigned __int32)si128.m128i_i32[1] >> 2) & 1;
      v129 = v23;
      v130 = ((unsigned __int32)si128.m128i_i32[1] >> 2) & 1;
      if ( v91 )
      {
        do
        {
          while ( 1 )
          {
            v26 = v24[1].m128i_i64[0];
            v27 = v24[1].m128i_i64[1];
            if ( v24[2].m128i_i64[0] < (unsigned __int64)v23 )
              break;
            v22 = v24;
            v24 = (__m128i *)v24[1].m128i_i64[0];
            if ( !v26 )
              goto LABEL_43;
          }
          v24 = (__m128i *)v24[1].m128i_i64[1];
        }
        while ( v27 );
LABEL_43:
        if ( v22 != (__m128i *)&v90 && (unsigned __int64)v23 >= v22[2].m128i_i64[0] )
          goto LABEL_52;
      }
      v28 = operator new(0x10D0u);
      v23 = v129;
      v29 = (void *)v28;
      *(_QWORD *)(v28 + 32) = v129;
      memset((void *)(v28 + 40), 0, 0x10A8u);
      if ( v22 == (__m128i *)&v90 )
        break;
      v30 = v22[2].m128i_u64[0];
      if ( (unsigned __int64)v23 < v30 )
      {
        v31 = (__int64)v22;
        if ( v92 == v22 )
          goto LABEL_50;
        v87 = v29;
        v86.m128i_i64[0] = (__int64)v23;
        v31 = std::_Rb_tree_decrement();
        v23 = (const char *)v86.m128i_i64[0];
        v29 = v87;
        if ( *(_QWORD *)(v31 + 32) >= v86.m128i_i64[0] )
          goto LABEL_49;
        if ( *(_QWORD *)(v31 + 24) )
          v31 = (__int64)v22;
        else
          v22 = nullptr;
        goto LABEL_50;
      }
      if ( v30 >= (unsigned __int64)v23 )
        goto LABEL_128;
      if ( v93 != v22 )
      {
        v87 = (void *)v28;
        v86.m128i_i64[0] = (__int64)v23;
        v88 = v30;
        v31 = std::_Rb_tree_increment();
        v23 = (const char *)v86.m128i_i64[0];
        v29 = v87;
        if ( v86.m128i_i64[0] >= *(_QWORD *)(v31 + 32) )
          goto LABEL_49;
        if ( v22[1].m128i_i64[1] )
        {
          v22 = (__m128i *)v31;
          goto LABEL_50;
        }
      }
      if ( v22 )
      {
LABEL_51:
        n = (size_t)v29;
        std::_Rb_tree_insert_and_rebalance();
        v23 = v129;
        ++v94;
        v22 = (__m128i *)n;
        LOWORD(v25) = v130;
        v21 = v132;
LABEL_52:
        v22[2].m128i_i64[1] = (__int64)v23;
        v34 = 0;
        v22[3].m128i_i16[0] = v25;
        if ( !v21 )
          goto LABEL_53;
LABEL_131:
        v86.m128i_i64[0] = v21;
        ne = 8 * v21;
        v68 = (void *)qalloc_or_throw(8 * v21, v23, 8 * v21, v21, v26, 0, 0.0, 0.0);
        v69 = memcpy(v68, src, ne);
        v21 = v86.m128i_i64[0];
        v34 = (__int64)v69;
        goto LABEL_53;
      }
LABEL_128:
      if ( v29 )
      {
        operator delete(v29, 0x10D0u);
        v23 = v129;
      }
      v67 = v130;
      v21 = v132;
      v22[2].m128i_i64[1] = (__int64)v23;
      v34 = 0;
      v22[3].m128i_i16[0] = v67;
      if ( v21 )
        goto LABEL_131;
LABEL_53:
      v35 = (void *)v22[3].m128i_i64[1];
      v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
      if ( v35 )
      {
        v22[4].m128i_i64[0] = 0;
        na = v34;
        v86 = v36;
        qfree(v35);
        v36 = _mm_load_si128(&v86);
        v34 = na;
      }
      v22[3].m128i_i64[1] = v34;
      v37 = 0;
      v22[4] = v36;
      do
      {
        v22[5].m128i_i8[v37] = v133[v37];
        ++v37;
      }
      while ( v37 != 128 );
      for ( i = 0; i != 4096; ++i )
        v22[13].m128i_i8[i] = v134[i];
      sub_70A9D0(&v101);
      if ( ptr[1] )
      {
        *(_QWORD *)&v118 = 0;
        qfree(ptr[1]);
      }
      if ( v112 )
      {
        *(_QWORD *)&v113 = 0;
        qfree(v112);
      }
      v39 = &v110[70];
      do
      {
        v40 = *((void **)v39 + 4);
        v39 -= 14;
        close_linput(v40);
      }
      while ( (_DWORD *)((char *)&v104 + 8) != v39 );
      if ( v108 )
        v108(&v107, &v107, 3, *(double *)v36.m128i_i64, 0.0);
      if ( v103 )
      {
        *(_QWORD *)&v104 = 0;
        qfree(v103);
      }
      v7 = v101;
      if ( !v101 )
        goto LABEL_19;
LABEL_18:
      *(_QWORD *)&v102 = 0;
      qfree(v7);
LABEL_19:
      if ( (unsigned int)qfindnext(v135) )
        goto LABEL_20;
    }
    if ( !v94 || (v31 = (__int64)v93, v22 = nullptr, v93[2].m128i_i64[0] >= (unsigned __int64)v23) )
    {
LABEL_49:
      v86.m128i_i64[0] = (__int64)v29;
      v32 = (__m128i *)sub_576940((__int64)v89, (unsigned __int64)v23);
      v29 = (void *)v86.m128i_i64[0];
      v22 = v32;
      v31 = v33;
    }
LABEL_50:
    if ( v31 )
      goto LABEL_51;
    goto LABEL_128;
  }
LABEL_20:
  v8 = (__int64)v92;
  v96 = 0;
  v97 = nullptr;
  *(_QWORD *)a1 = 0;
  v98 = &v96;
  v99 = &v96;
  v100 = 0;
  if ( (int *)v8 != &v90 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v8 + 64);
      v10 = *(unsigned __int64 **)(v8 + 56);
      v11 = (unsigned __int64 *)a1;
      v12 = v10;
      if ( 8 * v9 )
        break;
LABEL_30:
      v8 = std::_Rb_tree_increment();
      if ( (int *)v8 == &v90 )
        goto LABEL_31;
    }
    while ( 1 )
    {
      v13 = (__int64 *)v91;
      v14 = *v12;
      if ( !v91 )
        goto LABEL_29;
      v15 = &v90;
      do
      {
        while ( 1 )
        {
          v16 = v13[2];
          v17 = v13[3];
          if ( v13[4] < v14 )
            break;
          v15 = (int *)v13;
          v13 = (__int64 *)v13[2];
          if ( !v16 )
            goto LABEL_27;
        }
        v13 = (__int64 *)v13[3];
      }
      while ( v17 );
LABEL_27:
      if ( v15 == &v90 || v14 < *((_QWORD *)v15 + 4) )
        goto LABEL_29;
      if ( v14 < *v11 )
        sub_365330();
      v41 = v97;
      if ( v97 )
      {
        v42 = &v96;
        v43 = v97;
        do
        {
          while ( 1 )
          {
            v44 = *((_QWORD *)v43 + 2);
            v45 = *((_QWORD *)v43 + 3);
            if ( *((_QWORD *)v43 + 4) < v14 )
              break;
            v42 = v43;
            v43 = *((int **)v43 + 2);
            if ( !v44 )
              goto LABEL_77;
          }
          v43 = *((int **)v43 + 3);
        }
        while ( v45 );
LABEL_77:
        if ( v42 != &v96 && v14 >= *((_QWORD *)v42 + 4) )
        {
          v59 = *((unsigned __int64 **)v42 + 5);
          if ( *v11 != *v59 )
          {
            v60 = (_QWORD **)v11[530];
            if ( !(8 * v11[531]) )
LABEL_103:
              sub_365330();
            while ( !(unsigned __int8)sub_576A00(*v60, v59, nullptr) )
            {
              if ( ++v60 == (_QWORD **)(v11[530] + 8 * v11[531]) )
                goto LABEL_103;
            }
            v10 = *(unsigned __int64 **)(v8 + 56);
            v9 = *(_QWORD *)(v8 + 64);
          }
          v11 = v59;
          goto LABEL_29;
        }
      }
      v46 = (unsigned __int64 **)v11[530];
      v47 = (const char *)(8 * v11[531]);
      v48 = &v47[(_QWORD)v46];
      if ( !v47 )
        goto LABEL_110;
      while ( 1 )
      {
        v49 = *v46;
        if ( v14 == **v46 )
          break;
        if ( ++v46 == (unsigned __int64 **)v48 )
          goto LABEL_110;
      }
      if ( !v49 )
      {
LABEL_110:
        v76 = v15;
        v61 = qalloc_or_throw(4264, v47, v97, v48);
        *(_QWORD *)v61 = 0;
        *(_QWORD *)(v61 + 8) = 0;
        *(_QWORD *)(v61 + 136) = 0;
        v62 = v76 + 20;
        *(_QWORD *)(v61 + 4240) = 0;
        *(_OWORD *)(v61 + 4248) = 0;
        nd = (size_t)v76;
        v77 = v61;
        qstrncpy(v61 + 10, v62, 128);
        qstrncpy(v77 + 138, nd + 208, 4096);
        v49 = (unsigned __int64 *)v77;
        *(_QWORD *)v77 = *(_QWORD *)(nd + 40);
        *(_WORD *)(v77 + 8) = *(_WORD *)(nd + 48);
        v63 = v11[531];
        v64 = v11[530];
        if ( v11[532] < v63 + 1 )
        {
          v66 = qvector_reserve(v11 + 530, v64, v63 + 1, 8);
          v11[530] = v66;
          v64 = v66;
          v49 = (unsigned __int64 *)v77;
          v63 = v11[531];
        }
        *(_QWORD *)(v64 + 8 * v63) = v49;
        v41 = v97;
        ++v11[531];
      }
      v50 = &v96;
      if ( !v41 )
        break;
      do
      {
        while ( 1 )
        {
          v51 = *((_QWORD *)v41 + 2);
          v52 = *((_QWORD *)v41 + 3);
          if ( *((_QWORD *)v41 + 4) < v14 )
            break;
          v50 = v41;
          v41 = *((int **)v41 + 2);
          if ( !v51 )
            goto LABEL_89;
        }
        v41 = *((int **)v41 + 3);
      }
      while ( v52 );
LABEL_89:
      if ( v50 == &v96 || v14 < *((_QWORD *)v50 + 4) )
        break;
LABEL_98:
      *((_QWORD *)v50 + 5) = v49;
      v11 = v49;
      v10 = *(unsigned __int64 **)(v8 + 56);
      v9 = *(_QWORD *)(v8 + 64);
LABEL_29:
      if ( ++v12 == &v10[v9] )
        goto LABEL_30;
    }
    v72 = (__int64)v49;
    v53 = operator new(0x30u);
    *(_QWORD *)(v53 + 32) = v14;
    v54 = (int *)v53;
    v49 = (unsigned __int64 *)v72;
    *(_QWORD *)(v53 + 40) = 0;
    if ( v50 == &v96 )
    {
      if ( v100 )
      {
        v56 = v99;
        v50 = nullptr;
        if ( *((_QWORD *)v99 + 4) < v14 )
          goto LABEL_96;
      }
    }
    else
    {
      v55 = *((_QWORD *)v50 + 4);
      if ( v14 < v55 )
      {
        v56 = v50;
        if ( v98 == v50 )
          goto LABEL_96;
        v86.m128i_i64[0] = v53;
        v57 = std::_Rb_tree_decrement();
        v49 = (unsigned __int64 *)v72;
        v54 = (int *)v86.m128i_i64[0];
        v56 = (_DWORD *)v57;
        if ( *(_QWORD *)(v57 + 32) >= v14 )
          goto LABEL_95;
        if ( *(_QWORD *)(v57 + 24) )
          v56 = v50;
        else
          v50 = nullptr;
LABEL_96:
        if ( !v56 )
          goto LABEL_108;
LABEL_97:
        nc = (size_t)v49;
        v74 = v54;
        std::_Rb_tree_insert_and_rebalance();
        v50 = v74;
        v49 = (unsigned __int64 *)nc;
        ++v100;
        goto LABEL_98;
      }
      if ( v55 >= v14 )
        goto LABEL_108;
      if ( v99 == v50 )
      {
        if ( !v50 )
          goto LABEL_108;
        goto LABEL_97;
      }
      v87 = (void *)v53;
      v86.m128i_i64[0] = v72;
      v65 = std::_Rb_tree_increment();
      v49 = (unsigned __int64 *)v86.m128i_i64[0];
      v54 = (int *)v87;
      v56 = (_DWORD *)v65;
      if ( v14 < *(_QWORD *)(v65 + 32) )
      {
        if ( !*((_QWORD *)v50 + 3) )
        {
          if ( !v50 )
          {
LABEL_108:
            if ( v54 )
            {
              v75 = v49;
              operator delete(v54, 0x30u);
              v49 = v75;
            }
            goto LABEL_98;
          }
          goto LABEL_97;
        }
        v50 = (int *)v65;
        goto LABEL_96;
      }
    }
LABEL_95:
    nb = (size_t)v54;
    v73 = v49;
    v58 = (int *)sub_576880((__int64)v95, v14);
    v49 = v73;
    v54 = (int *)nb;
    v50 = v58;
    goto LABEL_96;
  }
LABEL_31:
  v18 = *(_QWORD *)(v78 + 224);
  if ( v18 )
    *(_QWORD *)a1 = *(_QWORD *)(*(_QWORD *)(v78 + 216) + 8 * v18 - 8);
  *(_WORD *)(a1 + 8) = (*(_DWORD *)(v78 + 260) >> 2) & 1;
  qstrncpy(a1 + 10, v78 + 88, 128);
  v19 = haystack;
  if ( v79[4] )
    v19 = (const char *)v79[3];
  qstrncpy(a1 + 138, v19, 4096);
  sub_576BF0(v97);
  qfindclose(v135);
  sub_576DC0(v91);
  if ( src )
  {
    *(_QWORD *)&v132 = 0;
    qfree(src);
  }
  return 1;
}

