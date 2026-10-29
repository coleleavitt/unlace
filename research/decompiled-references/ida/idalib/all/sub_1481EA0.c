__int64 __fastcall sub_1481EA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5, double a6)
{
  __int16 v10; // ax
  int v11; // r15d
  __int64 v12; // r12
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // eax
  __int64 *v20; // rdi
  __int16 v21; // ax
  __int64 v22; // rbp
  unsigned __int32 v23; // r15d
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  int v30; // eax
  char v31; // al
  __int64 v32; // r14
  __m128 v33; // xmm0
  __int64 v34; // rsi
  __int64 (__fastcall *v35)(_QWORD *); // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdi
  __int64 v41; // rsi
  char v42; // dl
  int v43; // eax
  __int64 v44; // rdx
  int v45; // eax
  size_t v46; // rax
  int v47; // ecx
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  __int64 v52; // rdi
  __int64 v53; // rax
  char v54; // al
  __int64 *v55; // rdi
  int *v56; // rsi
  char v57; // al
  __int64 *v58; // rdi
  int *v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdx
  int v65; // eax
  size_t v66; // rax
  __int64 v67; // rsi
  _BYTE **v68; // [rsp+8h] [rbp-1A0h] BYREF
  __int64 v69; // [rsp+10h] [rbp-198h] BYREF
  __int64 *v70; // [rsp+18h] [rbp-190h]
  __int16 v71; // [rsp+2Eh] [rbp-17Ah] BYREF
  __int64 v72; // [rsp+30h] [rbp-178h] BYREF
  __int64 v73; // [rsp+38h] [rbp-170h] BYREF
  __int64 v74; // [rsp+40h] [rbp-168h] BYREF
  __m128 *v75; // [rsp+48h] [rbp-160h]
  __int64 v76; // [rsp+50h] [rbp-158h] BYREF
  __m128i v77; // [rsp+58h] [rbp-150h] BYREF
  __m128 v78; // [rsp+70h] [rbp-138h] BYREF
  __int64 v79; // [rsp+80h] [rbp-128h]
  char v80; // [rsp+88h] [rbp-120h]
  __m128 v81; // [rsp+90h] [rbp-118h] BYREF
  __int64 *v82; // [rsp+A0h] [rbp-108h]
  _BYTE *v83; // [rsp+A8h] [rbp-100h]
  __int64 v84; // [rsp+B0h] [rbp-F8h]
  char *v85; // [rsp+C0h] [rbp-E8h] BYREF
  char v86; // [rsp+C8h] [rbp-E0h]
  _BYTE v87[12]; // [rsp+CCh] [rbp-DCh]
  void *v88; // [rsp+D8h] [rbp-D0h]
  __int64 (__fastcall *v89)(__int64); // [rsp+E0h] [rbp-C8h]
  __int64 v90; // [rsp+E8h] [rbp-C0h] BYREF
  __int64 v91; // [rsp+F0h] [rbp-B8h]
  char v92; // [rsp+F8h] [rbp-B0h]
  _BYTE ptr[24]; // [rsp+100h] [rbp-A8h] BYREF
  _WORD v94[72]; // [rsp+118h] [rbp-90h] BYREF

  if ( (unsigned __int8)sub_156F700() )
  {
    *(_BYTE *)(a2 + 721) |= 2u;
    v13 = *(_DWORD *)a3;
    v11 = 1;
    v72 = 0;
    if ( v13 > 2 )
    {
      if ( v13 == 3 )
        goto LABEL_28;
    }
    else
    {
      if ( v13 > 0 )
        goto LABEL_35;
      if ( !v13 )
        goto LABEL_14;
    }
    v12 = 0;
    sub_178E380(&v76, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 664LL), 1, 0);
    goto LABEL_49;
  }
  v10 = *(_WORD *)(a1 + 32);
  if ( v10 == 22 )
  {
    *(_BYTE *)(a2 + 721) |= 2u;
    v30 = *(_DWORD *)a3;
    v11 = 2;
    v72 = 0;
    if ( v30 > 2 )
    {
      if ( v30 == 3 )
      {
        if ( *(_WORD *)(a1 + 32) != 63 )
          goto LABEL_29;
        goto LABEL_103;
      }
    }
    else
    {
      if ( v30 > 0 )
        goto LABEL_35;
      if ( !v30 )
        goto LABEL_14;
    }
    v12 = 0;
    sub_178E380(&v76, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 664LL), 1, 0);
    goto LABEL_85;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) == 0
    || v10 != 24
    || *(_QWORD *)(a1 + 2072) && (unsigned __int8)sub_147B3A0(a2, ptr) )
  {
    v72 = 0;
    v11 = *(_DWORD *)a3;
    if ( *(int *)a3 > 2 )
    {
      if ( v11 == 3 )
      {
        v11 = 0;
        if ( *(_WORD *)(a1 + 32) != 63 )
          goto LABEL_29;
        goto LABEL_103;
      }
LABEL_44:
      sub_178E380(&v76, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 664LL), 1, 0);
      goto LABEL_20;
    }
    if ( v11 > 0 )
    {
      v11 = 0;
      goto LABEL_35;
    }
    if ( v11 )
      goto LABEL_44;
LABEL_14:
    v14 = sub_17FF1A0(*(_QWORD *)(a1 + 96));
LABEL_15:
    v72 = v14;
    v12 = v14;
LABEL_16:
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 664LL);
    goto LABEL_17;
  }
  *(_BYTE *)(a2 + 721) |= 2u;
  v11 = *(_DWORD *)a3;
  v72 = 0;
  if ( v11 > 2 )
  {
    if ( v11 != 3 )
      goto LABEL_10;
LABEL_28:
    if ( *(_WORD *)(a1 + 32) != 63 )
    {
LABEL_29:
      if ( *(_DWORD *)(a2 + 56) == 7 )
      {
        v43 = sub_13DC060(
                *(_DWORD *)(a3 + 20),
                0,
                *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
                a5,
                a6);
        v44 = *(unsigned int *)(a2 + 80);
        LODWORD(v69) = v43;
        sub_1564820(ptr, a1, v44, 1663);
        v45 = *(_DWORD *)(a3 + 20);
        v68 = &v85;
        LODWORD(v85) = v45;
        HIDWORD(v85) = v45;
        v86 = 1;
        sub_AEC610((__int64 *)ptr, (__int64 *)&v85);
        v46 = j__strlen("<>");
        sub_9EC740((__int64)&v85, v69, "<>", v46, 0);
        if ( (_DWORD)v85 && HIDWORD(v85) )
          sub_1480470((__int64 *)ptr, (unsigned __int64)v68);
        if ( v88 != v68 + 5 )
          operator delete(v88);
        sub_AEA040((__int64)ptr);
        v47 = *(_DWORD *)(a3 + 20);
        v48 = *(_QWORD *)(a1 + 96);
        v68 = (_BYTE **)&ptr[16];
        *(_QWORD *)ptr = &ptr[16];
        *(_QWORD *)&ptr[8] = 0x400000000LL;
        v49 = sub_1CB4650(v48, 0, 0, v47, v69, v69, 0, 0, 0);
        v50 = *(unsigned int *)&ptr[8];
        v51 = *(unsigned int *)&ptr[8] + 1LL;
        if ( v51 > *(unsigned int *)&ptr[12] )
        {
          v67 = (__int64)v68;
          v68 = (_BYTE **)v49;
          sub_2237220(ptr, v67, v51, 8);
          v50 = *(unsigned int *)&ptr[8];
          v49 = (__int64)v68;
        }
        *(_QWORD *)(*(_QWORD *)ptr + 8 * v50) = v49;
        v52 = *(_QWORD *)(a1 + 96);
        ++*(_DWORD *)&ptr[8];
        v12 = sub_1CB57A0(v52, *(_QWORD *)(v52 + 608), *(_QWORD *)ptr, *(unsigned int *)&ptr[8], a2);
        v72 = v12;
        if ( *(_BYTE **)ptr != &ptr[16] )
        {
          free(*(void **)ptr);
          v12 = v72;
        }
        goto LABEL_16;
      }
      sub_1564840(ptr, a1, a1 + 16, 1894);
      sub_14780E0((unsigned __int8 **)ptr, 2);
      v19 = *(_DWORD *)(a3 + 20);
      *(_QWORD *)v87 = 0;
      v87[8] = 0;
      v88 = &v90;
      v89 = nullptr;
      LOBYTE(v90) = 0;
      v92 = 0;
      LODWORD(v85) = v19;
      HIDWORD(v85) = v19;
      v86 = 1;
      if ( v19 )
      {
        sub_1480470((__int64 *)ptr, (unsigned __int64)&v85);
        if ( v88 != &v90 )
          operator delete(v88);
      }
      sub_AEA040((__int64)ptr);
      goto LABEL_14;
    }
LABEL_103:
    v14 = sub_1CDA820(
            *(_QWORD *)(a1 + 96),
            *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
            *(unsigned int *)(a3 + 16),
            *(unsigned int *)(a3 + 20),
            a2);
    if ( v42 )
    {
      v12 = 0;
      strcpy(ptr, "?");
      sub_15680D0(a1, ptr, 1, 2);
      return v12;
    }
    goto LABEL_15;
  }
  if ( v11 <= 0 )
  {
    if ( v11 )
    {
LABEL_10:
      v12 = 0;
      sub_178E380(&v76, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 664LL), 1, 0);
      goto LABEL_67;
    }
    v11 = 3;
    goto LABEL_14;
  }
  v11 = 3;
LABEL_35:
  v12 = sub_1CB57A0(
          *(_QWORD *)(a1 + 96),
          *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
          **(_QWORD **)(a3 + 8),
          *(unsigned int *)(*(_QWORD *)(a3 + 8) + 8LL),
          a2);
  v72 = v12;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 664LL);
  if ( v12 && (*(_BYTE *)(v12 + 28) & 0x7F) == 0x45 )
  {
    v72 = *(_QWORD *)(v12 + 48);
    sub_178E380(&v76, v15, 1, v72);
    if ( v11 == 2 )
      goto LABEL_85;
    if ( v11 == 3 )
      goto LABEL_67;
    if ( v11 != 1 )
      goto LABEL_21;
LABEL_49:
    v20 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v20, (int *)(a1 + 16));
    v21 = *(_WORD *)(a1 + 32);
    if ( v21 == 131 )
    {
      v57 = sub_147B3A0(a2, ptr);
      v58 = *(__int64 **)(a1 + 8);
      v59 = (int *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      if ( v57 )
      {
        sub_14634E0(v58, v59);
        sub_1564820(ptr, a1, *(unsigned int *)(a1 + 40), 1585);
        sub_14780E0((unsigned __int8 **)ptr, 1);
      }
      else
      {
        sub_14634E0(v58, v59);
        sub_1564820(ptr, a1, *(unsigned int *)(a1 + 40), 11);
      }
      sub_AEA040((__int64)ptr);
      sub_1474FE0(a1);
      goto LABEL_77;
    }
    if ( v21 == 82 )
    {
      v54 = sub_147B3A0(a2, ptr);
      v55 = *(__int64 **)(a1 + 8);
      v56 = (int *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      if ( v54 )
      {
        sub_14634E0(v55, v56);
        sub_1564820(ptr, a1, *(unsigned int *)(a1 + 40), 1585);
        sub_14780E0((unsigned __int8 **)ptr, 0);
      }
      else
      {
        sub_14634E0(v55, v56);
        sub_1564820(ptr, a1, *(unsigned int *)(a1 + 40), 10);
        sub_AE9DF0((unsigned __int8 **)ptr, *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) >> 7, 3u);
      }
      sub_AEA040((__int64)ptr);
      goto LABEL_77;
    }
    v22 = v72;
    v68 = (_BYTE **)a2;
    v23 = *(_DWORD *)(a1 + 40);
    v82 = (__int64 *)v72;
    LOBYTE(v83) = 0;
    v81 = _mm_loadh_ps((const double *)&v68);
    if ( v72 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0 )
    {
      v24 = *(_QWORD *)(a2 + 16);
      if ( v24 )
      {
        sub_1564E40(a1, 0);
        v24 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL);
      }
      if ( *(char *)(v22 + 28) >= 0 )
      {
        sub_183E450(*(_QWORD *)(a1 + 96), v24, v22);
        LOBYTE(v83) = 1;
      }
      v21 = *(_WORD *)(a1 + 32);
    }
    if ( v21 == 3 )
    {
      v61 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v61 + 760) )
      {
        *(_BYTE *)(v61 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v61 + 48) + 6LL) = 1;
      }
      v62 = *(_QWORD *)(a1 + 96);
      v63 = v72;
      v12 = 0;
      *(_WORD *)(a1 + 32) = 1;
      sub_172BDF0(*(_QWORD *)(v62 + 656), *(_QWORD *)(v62 + 608), v63);
      sub_17BF6B0(*(_QWORD *)(a1 + 96), v72);
      sub_1477A00(&v81);
      goto LABEL_79;
    }
    sub_1703A10(a1 + 48, *(unsigned int *)(a1 + 16), v72);
    if ( *(_WORD *)(a1 + 32) == 24 )
      v25 = sub_14EE310(a1);
    else
      v25 = sub_14BDAD0(a1, 0);
    if ( *(_WORD *)(a1 + 32) == 23 && a4 && !*(_DWORD *)(a2 + 2648) )
    {
      sub_1564820(ptr, a1, v23, 1886);
      v66 = j__strlen(":");
      v78.m128_i32[0] = v23;
      v78.m128_i32[1] = v23;
      v78.m128_i8[8] = 1;
      v68 = &v85;
      sub_1478E60((__int64)&v85, v78.m128_i64[0], 1, ":", v66);
      if ( (_DWORD)v85 && HIDWORD(v85) )
        sub_1480470((__int64 *)ptr, (unsigned __int64)v68);
      if ( v88 != v68 + 5 )
        operator delete(v88);
      sub_AEA040((__int64)ptr);
      *(_DWORD *)a4 = v23;
      *(_QWORD *)(a4 + 8) = 1;
    }
    else if ( v25 != 1 )
    {
      sub_17ED4C0(*(_QWORD *)(a1 + 96), v72, v25 & 0xFFFFFFFFFFFFFFFELL, 0);
LABEL_65:
      sub_1477A00(&v81);
      goto LABEL_77;
    }
    v64 = 1;
    *(_QWORD *)ptr = v94;
    v65 = *(_DWORD *)(a2 + 96);
    v94[0] = 66;
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23AA2B0);
    if ( (unsigned int)(v65 - 9) <= 1 )
    {
      v64 = 2;
      *(_QWORD *)&ptr[8] = 2;
      v94[1] = 23;
    }
    sub_15680D0(a1, v94, v64, 3);
    sub_17A5050(*(_QWORD *)(a1 + 96), v72);
    if ( *(_WORD **)ptr != v94 )
      free(*(void **)ptr);
    goto LABEL_65;
  }
LABEL_17:
  sub_178E380(&v76, v15, 1, v12);
  switch ( v11 )
  {
    case 2:
      v12 = 0;
LABEL_85:
      *(_QWORD *)&v87[4] = a1;
      v85 = (char *)(a1 + 1952);
      v31 = *(_BYTE *)(a1 + 1952);
      *(_BYTE *)(a1 + 1952) = 1;
      v86 = v31;
      v89 = sub_146A990;
      LODWORD(v88) = 1507350;
      WORD2(v88) = 63;
      v90 = 0;
      v91 = 0;
      v68 = &v85;
      sub_1477FA0((__int64)&v85);
      v69 = a2;
      v32 = v72;
      *(_QWORD *)ptr = &ptr[16];
      *(_QWORD *)&ptr[8] = 0xC00000000LL;
      v33 = _mm_loadh_ps((const double *)&v69);
      v79 = v72;
      v78 = v33;
      v80 = 0;
      if ( !v72 )
        goto LABEL_109;
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0 )
      {
        v34 = *(_QWORD *)(a2 + 16);
        if ( v34 )
        {
          sub_1564E40(a1, 0);
          if ( *(char *)(v32 + 28) < 0 )
            goto LABEL_89;
          v60 = *(_QWORD *)(a1 + 96);
          v34 = *(_QWORD *)(v60 + 608);
LABEL_132:
          sub_183E450(v60, v34, v32);
          v80 = 1;
LABEL_89:
          v32 = v72;
          if ( !v72 )
            goto LABEL_109;
          goto LABEL_90;
        }
        if ( *(char *)(v72 + 28) >= 0 )
        {
          v60 = *(_QWORD *)(a1 + 96);
          goto LABEL_132;
        }
      }
LABEL_90:
      if ( (*(_BYTE *)(v32 + 28) & 0x7Fu) - 40 <= 6 )
      {
        v73 = v32;
        v35 = sub_14779E0;
        v81.m128_u64[1] = (unsigned __int64)&v73;
        v82 = &v72;
        v81.m128_u64[0] = a1;
        v84 = (__int64)v68;
        v75 = &v81;
        v83 = ptr;
        v74 = a1;
        v70 = &v74;
LABEL_92:
        if ( (unsigned __int8)sub_14BDD40(a1, ptr, v35, v70, 0) )
        {
          v40 = *(_QWORD *)(a1 + 96);
          v41 = v72;
          if ( v73 && *(_BYTE *)(*(_QWORD *)(a1 + 8) + 968LL) && !*(_BYTE *)(a1 + 368) )
          {
            sub_173F990(
              *(_QWORD *)(v40 + 656),
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v73 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL),
              *(_DWORD *)(v72 + 24),
              *(_DWORD *)ptr,
              *(_DWORD *)&ptr[8],
              v91,
              0);
            v41 = v72;
            v40 = *(_QWORD *)(a1 + 96);
            *(_BYTE *)(a1 + 368) = 1;
          }
          sub_17A5050(v40, v41);
          v71 = 23;
          sub_15680D0(a1, &v71, 1, 1);
        }
        else
        {
          sub_14808E0((__int64)v68, (__int64 *)ptr, v36, v37, v38, v39);
          v53 = sub_18C2A90(
                  *(_QWORD *)(a1 + 96),
                  (unsigned int)v91,
                  HIDWORD(v91),
                  *(_QWORD *)ptr,
                  *(unsigned int *)&ptr[8]);
          sub_17ED4C0(*(_QWORD *)(a1 + 96), v72, v53 & 0xFFFFFFFFFFFFFFFELL, 1);
        }
        sub_1477A00(&v78);
        if ( *(_BYTE **)ptr != &ptr[16] )
          free(*(void **)ptr);
        *v85 = v86;
        goto LABEL_77;
      }
LABEL_109:
      v74 = a1;
      v35 = nullptr;
      v81.m128_u64[1] = (unsigned __int64)&v73;
      v82 = &v72;
      v73 = 0;
      v84 = (__int64)v68;
      v81.m128_u64[0] = a1;
      v83 = ptr;
      v75 = &v81;
      goto LABEL_92;
    case 3:
      v12 = 0;
LABEL_67:
      sub_1564840(ptr, a1, a1 + 16, 2118);
      sub_AEA040((__int64)ptr);
      v68 = (_BYTE **)a2;
      v26 = v72;
      LOBYTE(v94[0]) = 0;
      *(_QWORD *)&ptr[16] = v72;
      *(__m128 *)ptr = _mm_loadh_ps((const double *)&v68);
      if ( v72 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0 )
      {
        v27 = *(_QWORD *)(a2 + 16);
        if ( v27 )
        {
          v68 = (_BYTE **)v72;
          sub_1564E40(a1, 0);
          v26 = (__int64)v68;
          v27 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL);
        }
        if ( *(char *)(v26 + 28) >= 0 )
        {
          sub_183E450(*(_QWORD *)(a1 + 96), v27, v26);
          LOBYTE(v94[0]) = 1;
        }
        v26 = v72;
      }
      sub_1703A10(a1 + 48, *(unsigned int *)(a1 + 16), v26);
      v28 = sub_14EE310(a1);
      if ( v28 == 1 )
        sub_17A5050(*(_QWORD *)(a1 + 96), v72);
      else
        sub_17ED4C0(*(_QWORD *)(a1 + 96), v72, v28 & 0xFFFFFFFFFFFFFFFELL, 1);
      sub_1477A00(ptr);
      goto LABEL_77;
    case 1:
      v12 = 0;
      goto LABEL_49;
  }
LABEL_20:
  v12 = 0;
LABEL_21:
  v68 = (_BYTE **)a2;
  v16 = v72;
  LOBYTE(v94[0]) = 0;
  *(_QWORD *)&ptr[16] = v72;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v68);
  if ( !v72 || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) == 0 )
    goto LABEL_101;
  v17 = *(_QWORD *)(a2 + 16);
  if ( v17 )
  {
    sub_1564E40(a1, 0);
    v18 = *(_QWORD *)(a1 + 96);
    v17 = *(_QWORD *)(v18 + 608);
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 96);
  }
  if ( *(char *)(v16 + 28) >= 0 )
  {
    sub_183E450(v18, v17, v16);
    LOBYTE(v94[0]) = 1;
    v16 = v72;
LABEL_101:
    v18 = *(_QWORD *)(a1 + 96);
    goto LABEL_102;
  }
  v16 = v72;
LABEL_102:
  sub_17D5BF0(v18, v16);
  sub_1477A00(ptr);
LABEL_77:
  sub_17BF6B0(*(_QWORD *)(a1 + 96), v72);
  if ( !v12 )
    v12 = v72;
LABEL_79:
  *(__m128i *)(v76 + 56) = _mm_loadu_si128(&v77);
  return v12;
}
