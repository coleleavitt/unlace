__int64 __fastcall sub_365640(__m128i *a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // r14
  __int64 v5; // r15
  int v6; // eax
  int v7; // edx
  int v8; // eax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r14
  unsigned __int64 v14; // rbx
  char *v15; // rbx
  char v16; // dl
  __int64 v17; // rdi
  _QWORD *v18; // r13
  unsigned __int64 v19; // rsi
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  char v29; // r13
  unsigned __int64 tinfo_size; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rsi
  char v35; // r15
  void *v36; // rcx
  __int64 (__fastcall *v37)(__m128i *, char); // rax
  __int64 v38; // r15
  unsigned __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rdi
  __m128i v42; // xmm0
  char v43; // al
  __int64 v44; // rdx
  __int64 v45; // rcx
  void *v46; // rax
  __m128i v47; // xmm0
  char v48; // dl
  void *v49; // rcx
  _BYTE *v50; // rax
  __m128i v51; // xmm0
  char *v52; // rdi
  __int64 v53; // rax
  const char *v54; // rsi
  __int64 v55; // r8
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rsi
  __int64 *v58; // rdi
  unsigned __int64 *v59; // rax
  unsigned __int64 *v60; // rdx
  unsigned __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rcx
  __int64 v65; // r9
  void *v66; // rax
  size_t v67; // rax
  const void *v68; // r8
  size_t v69; // r9
  void *v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // [rsp-8h] [rbp-178h]
  size_t v73; // [rsp+8h] [rbp-168h]
  const void *v74; // [rsp+10h] [rbp-160h]
  void *src; // [rsp+18h] [rbp-158h]
  _BYTE *srcb; // [rsp+18h] [rbp-158h]
  void *srca; // [rsp+18h] [rbp-158h]
  _QWORD *v78; // [rsp+20h] [rbp-150h]
  __int64 v80; // [rsp+30h] [rbp-140h]
  unsigned __int64 v81; // [rsp+38h] [rbp-138h]
  __int64 v82; // [rsp+40h] [rbp-130h]
  __int64 v83; // [rsp+48h] [rbp-128h]
  int v84; // [rsp+50h] [rbp-120h]
  unsigned __int64 v86; // [rsp+58h] [rbp-118h]
  __int64 v87; // [rsp+58h] [rbp-118h]
  unsigned __int64 v88; // [rsp+60h] [rbp-110h]
  _QWORD *v89; // [rsp+68h] [rbp-108h]
  unsigned __int64 v90; // [rsp+70h] [rbp-100h]
  unsigned __int64 v91; // [rsp+78h] [rbp-F8h]
  __int64 tinfo_property; // [rsp+88h] [rbp-E8h] BYREF
  __int64 v93; // [rsp+90h] [rbp-E0h] BYREF
  unsigned __int64 v94; // [rsp+98h] [rbp-D8h] BYREF
  __int64 v95; // [rsp+A4h] [rbp-CCh] BYREF
  int v96; // [rsp+ACh] [rbp-C4h]
  void *dest; // [rsp+B0h] [rbp-C0h] BYREF
  __m128i v98; // [rsp+B8h] [rbp-B8h] BYREF
  _QWORD *v99; // [rsp+D0h] [rbp-A0h] BYREF
  __int64 v100; // [rsp+D8h] [rbp-98h]
  char *v101; // [rsp+E0h] [rbp-90h]
  __m128i v102; // [rsp+E8h] [rbp-88h] BYREF
  __int64 v103; // [rsp+F8h] [rbp-78h]
  __int64 v104; // [rsp+100h] [rbp-70h]
  unsigned __int64 v105; // [rsp+108h] [rbp-68h]
  unsigned __int64 v106; // [rsp+110h] [rbp-60h]
  __int64 *v107; // [rsp+118h] [rbp-58h]
  int v108; // [rsp+120h] [rbp-50h]
  int v109; // [rsp+124h] [rbp-4Ch]
  char v110[16]; // [rsp+128h] [rbp-48h] BYREF
  unsigned __int64 v111; // [rsp+138h] [rbp-38h]

  v111 = __readfsqword(0x28u);
  v4 = (_QWORD *)a1[5].m128i_i64[1];
  v5 = v4[12];
  v89 = v4;
  v80 = v5;
  v6 = nbits(a2);
  v88 = 0;
  v7 = v6 + 14;
  v8 = v6 + 7;
  if ( v8 < 0 )
    v8 = v7;
  v84 = v8 >> 3;
  a1[44].m128i_i64[1] = a2 + *(_QWORD *)(v5 + 368);
  v9 = *(_QWORD *)(v5 + 16);
  v78 = v4 + 4;
  if ( !v9 )
    goto LABEL_67;
  do
  {
LABEL_4:
    v10 = v88 + 1;
    v11 = 304 * v88++;
    v12 = v11 + *(_QWORD *)(v80 + 64);
    v82 = v12;
    if ( *(_QWORD *)(v12 + 8) == -1 )
      continue;
    v13 = *(_QWORD *)(v80 + 8) + 144 * v10 - 144;
    v14 = *(_QWORD *)v13;
    *(_QWORD *)(v80 + 376) = v13;
    v15 = (char *)(a2 + (v14 >> 3));
    qmemcpy((void *)(v80 + 88), (const void *)(v12 + 16), 0x110u);
    if ( (*(_QWORD *)v12 & 0xF00000LL) == 0x500000 && (*(_BYTE *)(v80 + 113) & 0x10) != 0 )
      *(_QWORD *)(v80 + 96) = v15;
    v81 = (unsigned __int64)(*(_QWORD *)(v13 + 8) + 7LL) >> 3;
    if ( v9 == v88 && get_tinfo_property(*(_QWORD *)(v13 + 64), 287) )
    {
      v16 = 1;
      v91 = v89[1];
    }
    else
    {
      v16 = 0;
      v91 = (unsigned __int64)&v15[v81];
    }
    v83 = *(_QWORD *)v12;
    if ( (unsigned __int64)v15 < v91
      && (*(_QWORD *)v12 & 0x600LL) == 0x400
      && (*(_QWORD *)v12 & 0xF0000000LL) == 0x50000000 )
    {
      if ( !*(_BYTE *)(a1[5].m128i_i64[1] + 16) )
      {
        v56 = v91 - (_QWORD)v15;
        if ( !v16 )
          v56 = v81;
        sub_364C70(a1, v15, v56, v83, *(_DWORD *)(v13 + 80), nullptr, nullptr, a3, 1);
      }
      goto LABEL_62;
    }
    v17 = *(_QWORD *)(v13 + 64);
    tinfo_property = 0;
    v95 = *(_QWORD *)(v12 + 288);
    v96 = *(_DWORD *)(v12 + 296);
    tinfo_property = get_tinfo_property(v17, 289);
    if ( (get_tinfo_property(tinfo_property, 2) & 0x2F) == 0xD )
    {
      v93 = 0;
      copy_tinfo_t(&v93);
      v18 = v78;
      v19 = *(_QWORD *)(v12 + 8);
      v94 = v19;
      v20 = (_QWORD *)v89[5];
      if ( !v20 )
        goto LABEL_18;
      do
      {
        while ( 1 )
        {
          v21 = v20[2];
          v22 = v20[3];
          if ( v20[4] < v19 )
            break;
          v18 = v20;
          v20 = (_QWORD *)v20[2];
          if ( !v21 )
            goto LABEL_16;
        }
        v20 = (_QWORD *)v20[3];
      }
      while ( v22 );
LABEL_16:
      if ( v18 == v78 || v19 < v18[4] )
      {
LABEL_18:
        dest = &v94;
        v18 = sub_35C600(v89 + 3, v18, (unsigned __int64 **)&dest);
      }
      v23 = v18 + 5;
      v24 = v89[9];
      v25 = v89[10];
      v26 = (_QWORD *)(v24 + 8 * v25);
      if ( (_QWORD *)v24 != v26 )
      {
        v27 = (_QWORD *)v89[9];
        while ( v23 != (_QWORD *)*v27 )
        {
          if ( v26 == ++v27 )
            goto LABEL_94;
        }
        if ( v26 != v27 )
        {
LABEL_24:
          clear_tinfo_t(&v93);
          goto LABEL_25;
        }
      }
LABEL_94:
      if ( !*((_BYTE *)v18 + 478) )
      {
        if ( !(_BYTE)v93 )
          get_type_by_tid(&v93, v94);
        if ( !(unsigned __int8)sub_35D690(v18 + 5, (__int64)a1, (__int64)v15, &v93, 1) )
          goto LABEL_24;
        v25 = v89[10];
        v24 = v89[9];
      }
      v55 = v89[12];
      if ( v89[11] < (unsigned __int64)(v25 + 1) )
      {
        v87 = v89[12];
        v24 = qvector_reserve(v89 + 9, v24, v25 + 1, 8);
        v55 = v87;
        v89[9] = v24;
        v25 = v89[10];
      }
      *(_QWORD *)(v24 + 8 * v25) = v55;
      ++v89[10];
      v89[12] = v23;
      v18[50] = v15;
      v29 = 1;
      clear_tinfo_t(&v93);
    }
    else
    {
      v29 = 0;
    }
    tinfo_size = get_tinfo_size(0, tinfo_property, 0);
    v90 = tinfo_size;
    if ( tinfo_size < v81 )
    {
      if ( !*(_BYTE *)(a1[5].m128i_i64[1] + 16) )
        (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 60);
      if ( v90 && (unsigned __int64)v15 < v91 )
        goto LABEL_32;
LABEL_68:
      if ( !v29 )
        goto LABEL_58;
      goto LABEL_69;
    }
    if ( (unsigned __int64)v15 >= v91 || !tinfo_size )
    {
      if ( !v29 )
        goto LABEL_61;
LABEL_69:
      v43 = 1;
LABEL_70:
      v44 = v89[10];
      v45 = *(_QWORD *)(v89[9] + 8 * v44 - 8);
      if ( v44 )
        v89[10] = v44 - 1;
      v89[12] = v45;
      if ( v43 )
        goto LABEL_58;
LABEL_25:
      clear_tinfo_t(&tinfo_property);
      return 0;
    }
LABEL_32:
    v31 = a1[5].m128i_i64[1];
    if ( !v29 )
      goto LABEL_50;
    do
    {
      do
      {
        if ( !*(_BYTE *)(v31 + 16) )
          (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 60);
        v32 = v89[12];
        v33 = *(_QWORD *)(v32 + 16);
        if ( v33 && get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v32 + 8) + 144 * v33 - 80), 287) )
        {
          v35 = v29;
          v34 = v89[1];
        }
        else
        {
          v34 = v91;
          v35 = 0;
        }
        v36 = sub_35C4C0((unsigned __int64)v15, v34);
        if ( v36 )
        {
          sub_35F080(a1, a3, (__int64)v15, (__int64)v36);
        }
        else
        {
          v43 = sub_365640(a1, v15, a3);
          if ( !v43 )
            goto LABEL_70;
        }
        if ( !*(_BYTE *)(a1[5].m128i_i64[1] + 16) )
          (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 62);
        if ( v35 )
          goto LABEL_69;
        v15 += v90;
        if ( (unsigned __int64)v15 >= v91 )
          goto LABEL_68;
        v31 = a1[5].m128i_i64[1];
      }
      while ( *(_BYTE *)(v31 + 16) );
LABEL_44:
      (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 44);
      v37 = *(__int64 (__fastcall **)(__m128i *, char))(a1->m128i_i64[0] + 96);
      if ( (char *)v37 != (char *)sub_35CB90 )
      {
        v37(a1, 32);
        goto LABEL_32;
      }
      v38 = a1[2].m128i_i64[0];
      v39 = 2;
      if ( v38 )
        v39 = v38-- + 1;
      v40 = a1[1].m128i_i64[1];
      if ( a1[2].m128i_i64[1] < v39 )
      {
        v86 = v39;
        v53 = qvector_reserve(&a1[1].m128i_u64[1], v40, v39, 1);
        a1[1].m128i_i64[1] = v53;
        v39 = v86;
        v40 = v53;
      }
      a1[2].m128i_i64[0] = v39;
      *(_BYTE *)(v40 + v38) = 32;
      *(_BYTE *)(a1[1].m128i_i64[1] + v38 + 1) = 0;
      v31 = a1[5].m128i_i64[1];
    }
    while ( v29 );
LABEL_50:
    while ( 1 )
    {
      v99 = (_QWORD *)v31;
      v100 = 0;
      v103 = v83;
      v101 = v15;
      v105 = v90;
      v106 = v90;
      v104 = 1;
      v108 = v84;
      v107 = &v95;
      v109 = 0;
      v110[0] = 0;
      v102 = 0;
      if ( !v13 )
        break;
      v41 = *(_QWORD *)(v13 + 64);
      if ( (*(_BYTE *)(v13 + 64) & 0xF) != 0xE )
        break;
      BYTE2(v94) = 0;
      LOWORD(v94) = 0;
      if ( !(unsigned __int8)get_tinfo_details(v41, 14, &v94) )
      {
        v54 = "?bad bitfield?";
        goto LABEL_87;
      }
      v57 = *(_QWORD *)v13;
      v58 = (__int64 *)v99[12];
      v59 = (unsigned __int64 *)v58[48];
      v60 = &v59[2 * v58[49]];
      if ( v59 == v60 )
        goto LABEL_120;
      while ( 1 )
      {
        if ( v57 >= *v59 )
        {
          v61 = v59[1];
          if ( v57 < v61 )
            break;
        }
        v59 += 2;
        if ( v60 == v59 )
          goto LABEL_120;
      }
      if ( !v59 )
      {
LABEL_120:
        if ( !under_debugger )
          interr(3061);
        BUG();
      }
      v62 = sub_35C7A0(&dest, v110, v58[45], v57, BYTE1(v94), v108, *v59, v61);
      v63 = *(_QWORD *)(v13 + 64);
      v102.m128i_i64[0] = v62;
      v102.m128i_i64[0] = read_tinfo_bitfield_value(v63, v62, (unsigned int)dest, v64, v72, v65);
      if ( !BYTE2(v94) )
        *(_DWORD *)v107 |= 2u;
LABEL_53:
      if ( !v110[0] )
      {
        if ( !*(_BYTE *)(a1[5].m128i_i64[1] + 16) )
          (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 63);
        goto LABEL_56;
      }
      v46 = (void *)a1[1].m128i_i64[1];
      v47 = _mm_loadu_si128(a1 + 2);
      a1[1].m128i_i64[1] = 0;
      dest = v46;
      v98 = v47;
      a1[2] = 0;
      v48 = sub_360180((__int64)a1, (__int64)v15, v83, &v102, v90, 1u, (int *)&v95, *(_QWORD *)(v82 + 8));
      v49 = dest;
      v50 = (_BYTE *)a1[1].m128i_i64[1];
      v51 = _mm_loadu_si128(a1 + 2);
      a1[2] = _mm_loadu_si128(&v98);
      dest = v50;
      v52 = v50;
      a1[1].m128i_i64[1] = (__int64)v49;
      v98 = v51;
      if ( !v48 )
      {
        if ( v50 )
        {
          v98.m128i_i64[0] = 0;
          qfree(v50);
        }
        goto LABEL_25;
      }
      if ( !*(_BYTE *)(a1[5].m128i_i64[1] + 16) )
      {
        if ( v51.m128i_i64[0] )
        {
          if ( *v50 != 1 )
          {
LABEL_82:
            sub_35F080(a1, a3, (__int64)v15, (__int64)v52);
            v52 = (char *)dest;
            goto LABEL_83;
          }
          if ( v50[1] != 18 )
          {
LABEL_133:
            v52 = v50;
            goto LABEL_82;
          }
LABEL_127:
          v66 = sub_35C4C0((unsigned __int64)v15, v91);
          if ( v66 && (*((_BYTE *)v66 + 2) == 63 || (v83 & 0x40000) == 0) )
          {
            src = v66;
            v67 = strlen((const char *)v66);
            v68 = src;
            v69 = v67;
            if ( !v67 )
            {
              v98.m128i_i64[0] = 0;
              goto LABEL_103;
            }
            v70 = dest;
            v71 = v67 + 1;
            if ( v98.m128i_i64[1] < v67 + 1 )
            {
              v73 = v67;
              v74 = src;
              srca = (void *)(v67 + 1);
              dest = (void *)qvector_reserve(&dest, dest, v71, 1);
              v69 = v73;
              v70 = dest;
              v68 = v74;
              v71 = (__int64)srca;
            }
            v98.m128i_i64[0] = v71;
            srcb = (_BYTE *)v69;
            memmove(v70, v68, v69);
            srcb[(_QWORD)dest] = 0;
          }
          v50 = dest;
          if ( v98.m128i_i64[0] )
            goto LABEL_133;
        }
        else if ( byte_2CCB1E1 == 1 && v50[1] == 18 )
        {
          goto LABEL_127;
        }
LABEL_103:
        v52 = (char *)haystack;
        goto LABEL_82;
      }
LABEL_83:
      if ( v52 )
      {
        v98.m128i_i64[0] = 0;
        qfree(v52);
      }
LABEL_56:
      if ( (*(_BYTE *)(v13 + 64) & 0xF) == 0xE )
        goto LABEL_58;
      v15 += v100;
      if ( (unsigned __int64)v15 >= v91 )
        goto LABEL_58;
      v31 = a1[5].m128i_i64[1];
      if ( !*(_BYTE *)(v31 + 16) )
        goto LABEL_44;
    }
    if ( (unsigned __int8)sub_35DAA0(&v99) )
      goto LABEL_53;
    v54 = "?bad floating?";
LABEL_87:
    if ( !*(_BYTE *)(a1[5].m128i_i64[1] + 16) )
      (*(void (__fastcall **)(__m128i *, const char *, __int64))(a1->m128i_i64[0] + 56))(a1, v54, 18);
LABEL_58:
    if ( v90 < v81 && !*(_BYTE *)(a1[5].m128i_i64[1] + 16) )
      (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 62);
LABEL_61:
    clear_tinfo_t(&tinfo_property);
LABEL_62:
    if ( *(_BYTE *)(v80 + 59) || *(_QWORD *)(v80 + 16) == v88 )
      break;
    if ( !*(_BYTE *)(a1[5].m128i_i64[1] + 16) )
    {
      (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 44);
      sub_35F080(a1, a3, v91, 0);
      v9 = *(_QWORD *)(v80 + 16);
      if ( v88 >= v9 )
        break;
      goto LABEL_4;
    }
    a1[2].m128i_i64[0] = 0;
    v9 = *(_QWORD *)(v80 + 16);
  }
  while ( v88 < v9 );
LABEL_67:
  v42 = _mm_loadu_si128((const __m128i *)(v80 + 360));
  *(_QWORD *)(v80 + 360) = _mm_add_epi64(v42, _mm_srli_si128(v42, 8)).m128i_u64[0];
  return 1;
}
