__int64 __fastcall sub_3621A0(__m128i *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  int v6; // eax
  int v7; // edx
  int v8; // eax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r13
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebx
  unsigned int v15; // r15d
  char v16; // dl
  __int64 v17; // rdi
  __int64 v18; // r9
  unsigned int v19; // esi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  unsigned int tinfo_size; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // esi
  char v34; // r15
  void *v35; // rcx
  __int64 (__fastcall *v36)(__m128i *, char); // rax
  __int64 v37; // r15
  unsigned __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdi
  char v41; // al
  __int64 v42; // rdx
  __int64 v43; // rcx
  void *v44; // rax
  __m128i v45; // xmm0
  char v46; // dl
  void *v47; // rcx
  _BYTE *v48; // rax
  __m128i v49; // xmm0
  char *v50; // rdi
  __int64 v51; // rax
  const char *v52; // rsi
  __int64 v53; // r8
  unsigned __int64 v54; // rsi
  __int64 v55; // rdi
  unsigned __int64 *v56; // rax
  unsigned __int64 *v57; // rdx
  unsigned __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdi
  void *v61; // rax
  size_t v62; // rax
  const void *v63; // r8
  size_t v64; // r9
  void *v65; // rdi
  __int64 v66; // rdx
  size_t v67; // [rsp+0h] [rbp-160h]
  const void *v68; // [rsp+8h] [rbp-158h]
  void *src; // [rsp+10h] [rbp-150h]
  _BYTE *srcb; // [rsp+10h] [rbp-150h]
  void *srca; // [rsp+10h] [rbp-150h]
  __int64 v72; // [rsp+18h] [rbp-148h]
  unsigned int v74; // [rsp+28h] [rbp-138h]
  unsigned __int64 v75; // [rsp+30h] [rbp-130h]
  __int64 v76; // [rsp+38h] [rbp-128h]
  int v77; // [rsp+40h] [rbp-120h]
  __int64 v79; // [rsp+48h] [rbp-118h]
  unsigned __int64 v80; // [rsp+50h] [rbp-110h]
  __int64 v81; // [rsp+50h] [rbp-110h]
  unsigned __int64 v82; // [rsp+58h] [rbp-108h]
  unsigned int v83; // [rsp+60h] [rbp-100h]
  __int64 v84; // [rsp+60h] [rbp-100h]
  __int64 v85; // [rsp+60h] [rbp-100h]
  __int64 v86; // [rsp+60h] [rbp-100h]
  __int64 v87; // [rsp+68h] [rbp-F8h]
  char v88; // [rsp+70h] [rbp-F0h]
  unsigned int v89; // [rsp+78h] [rbp-E8h]
  unsigned int v90; // [rsp+8Ch] [rbp-D4h] BYREF
  __int64 tinfo_property; // [rsp+90h] [rbp-D0h] BYREF
  __int64 v92; // [rsp+98h] [rbp-C8h] BYREF
  __int64 v93; // [rsp+A4h] [rbp-BCh] BYREF
  int v94; // [rsp+ACh] [rbp-B4h]
  void *dest; // [rsp+B0h] [rbp-B0h] BYREF
  __m128i v96; // [rsp+B8h] [rbp-A8h] BYREF
  _QWORD *v97; // [rsp+D0h] [rbp-90h] BYREF
  int v98; // [rsp+D8h] [rbp-88h]
  unsigned int v99; // [rsp+DCh] [rbp-84h]
  __m128i v100; // [rsp+E0h] [rbp-80h] BYREF
  __int64 v101; // [rsp+F0h] [rbp-70h]
  int v102; // [rsp+F8h] [rbp-68h]
  unsigned int v103; // [rsp+FCh] [rbp-64h]
  unsigned int v104; // [rsp+100h] [rbp-60h]
  __int64 *v105; // [rsp+108h] [rbp-58h]
  int v106; // [rsp+110h] [rbp-50h]
  int v107; // [rsp+114h] [rbp-4Ch]
  char v108[16]; // [rsp+118h] [rbp-48h] BYREF
  unsigned __int64 v109; // [rsp+128h] [rbp-38h]

  v109 = __readfsqword(0x28u);
  v4 = a1[5].m128i_i64[1];
  v5 = *(_QWORD *)(v4 + 88);
  v87 = v4;
  v6 = nbits(a2);
  v82 = 0;
  v7 = v6 + 14;
  v8 = v6 + 7;
  if ( v8 < 0 )
    v8 = v7;
  v77 = v8 >> 3;
  a1[32].m128i_i32[3] = a2 + *(_DWORD *)(v5 + 228);
  v9 = *(_QWORD *)(v5 + 16);
  v72 = v4 + 24;
  if ( !v9 )
    goto LABEL_67;
  do
  {
LABEL_4:
    v10 = v82 + 1;
    v11 = *(_QWORD *)(v5 + 64) + 160 * v82++;
    v79 = v11;
    if ( *(_DWORD *)(v11 + 8) == -1 )
      continue;
    v12 = *(_QWORD *)(v5 + 8) + (v10 << 7) - 128;
    v13 = *(_QWORD *)v12;
    *(_QWORD *)(v5 + 232) = v12;
    *(__m128i *)(v5 + 88) = _mm_loadu_si128((const __m128i *)(v11 + 12));
    v14 = a2 + (v13 >> 3);
    *(__m128i *)(v5 + 104) = _mm_loadu_si128((const __m128i *)(v11 + 28));
    *(__m128i *)(v5 + 120) = _mm_loadu_si128((const __m128i *)(v11 + 44));
    *(__m128i *)(v5 + 136) = _mm_loadu_si128((const __m128i *)(v11 + 60));
    *(__m128i *)(v5 + 152) = _mm_loadu_si128((const __m128i *)(v11 + 76));
    *(__m128i *)(v5 + 168) = _mm_loadu_si128((const __m128i *)(v11 + 92));
    *(__m128i *)(v5 + 184) = _mm_loadu_si128((const __m128i *)(v11 + 108));
    *(__m128i *)(v5 + 200) = _mm_loadu_si128((const __m128i *)(v11 + 124));
    *(_QWORD *)(v5 + 216) = *(_QWORD *)(v11 + 140);
    if ( (*(_QWORD *)v11 & 0xF00000LL) == 0x500000 && (*(_BYTE *)(v5 + 101) & 0x10) != 0 )
      *(_DWORD *)(v5 + 92) = v14;
    v75 = (unsigned __int64)(*(_QWORD *)(v12 + 8) + 7LL) >> 3;
    v15 = v75;
    if ( v9 == v82 && get_tinfo_property(*(_QWORD *)(v12 + 64), 287) )
    {
      v16 = 1;
      v89 = *(_DWORD *)(v87 + 8);
    }
    else
    {
      v16 = 0;
      v89 = v14 + v75;
    }
    v76 = *(_QWORD *)v11;
    if ( v14 < v89 && (*(_QWORD *)v11 & 0x600LL) == 0x400 && (*(_QWORD *)v11 & 0xF0000000LL) == 0x50000000 )
    {
      if ( !*(_BYTE *)(a1[5].m128i_i64[1] + 12) )
      {
        if ( v16 )
          v15 = v89 - v14;
        sub_3617E0((unsigned int *)a1, v14, v15, v76, *(_DWORD *)(v12 + 80), nullptr, nullptr, a3, 1);
      }
      goto LABEL_62;
    }
    tinfo_property = 0;
    v93 = *(_QWORD *)(v11 + 148);
    v17 = *(_QWORD *)(v12 + 64);
    v94 = *(_DWORD *)(v11 + 156);
    tinfo_property = get_tinfo_property(v17, 289);
    if ( (get_tinfo_property(tinfo_property, 2) & 0x2F) == 0xD )
    {
      v92 = 0;
      copy_tinfo_t(&v92);
      v18 = v72;
      v19 = *(_DWORD *)(v11 + 8);
      v20 = *(_QWORD *)(v87 + 32);
      v90 = *(_DWORD *)(v79 + 8);
      if ( !v20 )
        goto LABEL_18;
      do
      {
        while ( 1 )
        {
          v21 = *(_QWORD *)(v20 + 16);
          v22 = *(_QWORD *)(v20 + 24);
          if ( *(_DWORD *)(v20 + 32) < v19 )
            break;
          v18 = v20;
          v20 = *(_QWORD *)(v20 + 16);
          if ( !v21 )
            goto LABEL_16;
        }
        v20 = *(_QWORD *)(v20 + 24);
      }
      while ( v22 );
LABEL_16:
      if ( v72 == v18 || v19 < *(_DWORD *)(v18 + 32) )
      {
LABEL_18:
        dest = &v90;
        v18 = sub_359200((_QWORD *)(v87 + 16), v18, (unsigned int **)&dest);
      }
      v23 = (_QWORD *)(v18 + 40);
      v24 = *(_QWORD *)(v87 + 64);
      v25 = *(_QWORD *)(v87 + 72);
      v26 = (_QWORD *)(v24 + 8 * v25);
      if ( (_QWORD *)v24 != v26 )
      {
        v27 = *(_QWORD **)(v87 + 64);
        while ( v23 != (_QWORD *)*v27 )
        {
          if ( v26 == ++v27 )
            goto LABEL_94;
        }
        if ( v26 != v27 )
        {
LABEL_24:
          clear_tinfo_t(&v92);
          goto LABEL_25;
        }
      }
LABEL_94:
      if ( !*(_BYTE *)(v18 + 334) )
      {
        if ( !(_BYTE)v92 )
        {
          v86 = v18;
          get_type_by_tid(&v92, v90);
          v18 = v86;
        }
        v84 = v18;
        if ( !(unsigned __int8)sub_35A3A0(v23, (__int64)a1, v14, &v92, 1) )
          goto LABEL_24;
        v18 = v84;
        v25 = *(_QWORD *)(v87 + 72);
        v24 = *(_QWORD *)(v87 + 64);
      }
      v53 = *(_QWORD *)(v87 + 88);
      if ( *(_QWORD *)(v87 + 80) < (unsigned __int64)(v25 + 1) )
      {
        v81 = v18;
        v85 = *(_QWORD *)(v87 + 88);
        v24 = qvector_reserve(v87 + 64, v24, v25 + 1, 8);
        v53 = v85;
        v18 = v81;
        *(_QWORD *)(v87 + 64) = v24;
        v25 = *(_QWORD *)(v87 + 72);
      }
      *(_QWORD *)(v24 + 8 * v25) = v53;
      ++*(_QWORD *)(v87 + 72);
      *(_QWORD *)(v87 + 88) = v23;
      *(_DWORD *)(v18 + 264) = v14;
      clear_tinfo_t(&v92);
      v88 = 1;
    }
    else
    {
      v88 = 0;
    }
    tinfo_size = get_tinfo_size(0, tinfo_property, 0);
    v74 = tinfo_size;
    v83 = tinfo_size;
    if ( tinfo_size < (unsigned int)v75 )
    {
      if ( !*(_BYTE *)(a1[5].m128i_i64[1] + 12) )
        (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 60);
      if ( v74 && v14 < v89 )
        goto LABEL_32;
LABEL_68:
      if ( !v88 )
        goto LABEL_58;
      goto LABEL_69;
    }
    if ( v14 >= v89 || !tinfo_size )
    {
      if ( !v88 )
        goto LABEL_61;
LABEL_69:
      v41 = 1;
LABEL_70:
      v42 = *(_QWORD *)(v87 + 72);
      v43 = *(_QWORD *)(*(_QWORD *)(v87 + 64) + 8 * v42 - 8);
      if ( v42 )
        *(_QWORD *)(v87 + 72) = v42 - 1;
      *(_QWORD *)(v87 + 88) = v43;
      if ( v41 )
        goto LABEL_58;
LABEL_25:
      clear_tinfo_t(&tinfo_property);
      return 0;
    }
LABEL_32:
    v30 = a1[5].m128i_i64[1];
    if ( !v88 )
      goto LABEL_50;
    do
    {
      do
      {
        if ( !*(_BYTE *)(v30 + 12) )
          (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 60);
        v31 = *(_QWORD *)(v87 + 88);
        v32 = *(_QWORD *)(v31 + 16);
        if ( v32 && get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v31 + 8) + (v32 << 7) - 64), 287) )
        {
          v34 = v88;
          v33 = *(_DWORD *)(v87 + 8);
        }
        else
        {
          v33 = v89;
          v34 = 0;
        }
        v35 = sub_359090(v14, v33);
        if ( v35 )
        {
          sub_35BD60(a1->m128i_i64, a3, v14, (__int64)v35);
        }
        else
        {
          v41 = sub_3621A0(a1, v14, a3);
          if ( !v41 )
            goto LABEL_70;
        }
        if ( !*(_BYTE *)(a1[5].m128i_i64[1] + 12) )
          (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 62);
        if ( v34 )
          goto LABEL_69;
        v14 += v83;
        if ( v14 >= v89 )
          goto LABEL_68;
        v30 = a1[5].m128i_i64[1];
      }
      while ( *(_BYTE *)(v30 + 12) );
LABEL_44:
      (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 44);
      v36 = *(__int64 (__fastcall **)(__m128i *, char))(a1->m128i_i64[0] + 96);
      if ( (char *)v36 != (char *)sub_3598B0 )
      {
        v36(a1, 32);
        goto LABEL_32;
      }
      v37 = a1[2].m128i_i64[0];
      v38 = 2;
      if ( v37 )
        v38 = v37-- + 1;
      v39 = a1[1].m128i_i64[1];
      if ( a1[2].m128i_i64[1] < v38 )
      {
        v80 = v38;
        v51 = qvector_reserve(&a1[1].m128i_u64[1], v39, v38, 1);
        a1[1].m128i_i64[1] = v51;
        v38 = v80;
        v39 = v51;
      }
      a1[2].m128i_i64[0] = v38;
      *(_BYTE *)(v39 + v37) = 32;
      *(_BYTE *)(a1[1].m128i_i64[1] + v37 + 1) = 0;
      v30 = a1[5].m128i_i64[1];
    }
    while ( v88 );
LABEL_50:
    while ( 1 )
    {
      v97 = (_QWORD *)v30;
      v98 = 0;
      v101 = v76;
      v99 = v14;
      v103 = v83;
      v104 = v83;
      v102 = 1;
      v106 = v77;
      v105 = &v93;
      v107 = 0;
      v108[0] = 0;
      v100 = 0;
      if ( !v12 )
        break;
      v40 = *(_QWORD *)(v12 + 64);
      if ( (*(_BYTE *)(v12 + 64) & 0xF) != 0xE )
        break;
      BYTE2(v92) = 0;
      LOWORD(v92) = 0;
      if ( !(unsigned __int8)get_tinfo_details(v40, 14, &v92) )
      {
        v52 = "?bad bitfield?";
        goto LABEL_87;
      }
      v54 = *(_QWORD *)v12;
      v55 = v97[11];
      v56 = *(unsigned __int64 **)(v55 + 240);
      v57 = &v56[2 * *(_QWORD *)(v55 + 248)];
      if ( v56 == v57 )
        goto LABEL_120;
      while ( 1 )
      {
        if ( v54 >= *v56 )
        {
          v58 = v56[1];
          if ( v54 < v58 )
            break;
        }
        v56 += 2;
        if ( v57 == v56 )
          goto LABEL_120;
      }
      if ( !v56 )
      {
LABEL_120:
        if ( !under_debugger )
          interr(3061);
        BUG();
      }
      v59 = sub_3593A0(&dest, v108, *(_DWORD *)(v55 + 224), v54, BYTE1(v92), v106, *v56, v58);
      v60 = *(_QWORD *)(v12 + 64);
      v100.m128i_i64[0] = v59;
      v100.m128i_i64[0] = read_tinfo_bitfield_value(v60, v59, (unsigned int)dest);
      if ( !BYTE2(v92) )
        *(_DWORD *)v105 |= 2u;
LABEL_53:
      if ( !v108[0] )
      {
        if ( !*(_BYTE *)(a1[5].m128i_i64[1] + 12) )
          (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 63);
        goto LABEL_56;
      }
      v44 = (void *)a1[1].m128i_i64[1];
      a1[1].m128i_i64[1] = 0;
      v45 = _mm_loadu_si128(a1 + 2);
      dest = v44;
      v96 = v45;
      a1[2] = 0;
      v46 = sub_35CDB0((__int64)a1, v14, v76, &v100, v83, 1u, (int *)&v93, *(_DWORD *)(v79 + 8));
      v47 = dest;
      v48 = (_BYTE *)a1[1].m128i_i64[1];
      v49 = _mm_loadu_si128(a1 + 2);
      a1[2] = _mm_loadu_si128(&v96);
      dest = v48;
      v50 = v48;
      a1[1].m128i_i64[1] = (__int64)v47;
      v96 = v49;
      if ( !v46 )
      {
        if ( v48 )
        {
          v96.m128i_i64[0] = 0;
          qfree(v48);
        }
        goto LABEL_25;
      }
      if ( !*(_BYTE *)(a1[5].m128i_i64[1] + 12) )
      {
        if ( v49.m128i_i64[0] )
        {
          if ( *v48 != 1 )
          {
LABEL_82:
            sub_35BD60(a1->m128i_i64, a3, v14, (__int64)v50);
            v50 = (char *)dest;
            goto LABEL_83;
          }
          if ( v48[1] != 18 )
          {
LABEL_133:
            v50 = v48;
            goto LABEL_82;
          }
LABEL_127:
          v61 = sub_359090(v14, v89);
          if ( v61 && (*((_BYTE *)v61 + 2) == 63 || (v76 & 0x40000) == 0) )
          {
            src = v61;
            v62 = strlen((const char *)v61);
            v63 = src;
            v64 = v62;
            if ( !v62 )
            {
              v96.m128i_i64[0] = 0;
              goto LABEL_103;
            }
            v65 = dest;
            v66 = v62 + 1;
            if ( v96.m128i_i64[1] < v62 + 1 )
            {
              v67 = v62;
              v68 = src;
              srca = (void *)(v62 + 1);
              dest = (void *)qvector_reserve(&dest, dest, v66, 1);
              v64 = v67;
              v65 = dest;
              v63 = v68;
              v66 = (__int64)srca;
            }
            v96.m128i_i64[0] = v66;
            srcb = (_BYTE *)v64;
            memmove(v65, v63, v64);
            srcb[(_QWORD)dest] = 0;
          }
          v48 = dest;
          if ( v96.m128i_i64[0] )
            goto LABEL_133;
        }
        else if ( byte_2CA12E1 == 1 && v48[1] == 18 )
        {
          goto LABEL_127;
        }
LABEL_103:
        v50 = (char *)haystack;
        goto LABEL_82;
      }
LABEL_83:
      if ( v50 )
      {
        v96.m128i_i64[0] = 0;
        qfree(v50);
      }
LABEL_56:
      if ( (*(_BYTE *)(v12 + 64) & 0xF) == 0xE )
        goto LABEL_58;
      v14 += v98;
      if ( v14 >= v89 )
        goto LABEL_58;
      v30 = a1[5].m128i_i64[1];
      if ( !*(_BYTE *)(v30 + 12) )
        goto LABEL_44;
    }
    if ( (unsigned __int8)sub_35A790(&v97) )
      goto LABEL_53;
    v52 = "?bad floating?";
LABEL_87:
    if ( !*(_BYTE *)(a1[5].m128i_i64[1] + 12) )
      (*(void (__fastcall **)(__m128i *, const char *, __int64))(a1->m128i_i64[0] + 56))(a1, v52, 18);
LABEL_58:
    if ( v74 < (unsigned int)v75 && !*(_BYTE *)(a1[5].m128i_i64[1] + 12) )
      (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 62);
LABEL_61:
    clear_tinfo_t(&tinfo_property);
LABEL_62:
    if ( *(_BYTE *)(v5 + 59) || *(_QWORD *)(v5 + 16) == v82 )
      break;
    if ( !*(_BYTE *)(a1[5].m128i_i64[1] + 12) )
    {
      (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 44);
      sub_35BD60(a1->m128i_i64, a3, v89, 0);
      v9 = *(_QWORD *)(v5 + 16);
      if ( v82 >= v9 )
        break;
      goto LABEL_4;
    }
    a1[2].m128i_i64[0] = 0;
    v9 = *(_QWORD *)(v5 + 16);
  }
  while ( v82 < v9 );
LABEL_67:
  *(_DWORD *)(v5 + 224) += *(_DWORD *)(v5 + 228);
  return 1;
}

