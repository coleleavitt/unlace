void __fastcall sub_149C200(
        const __m128i *a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        __m128i a7,
        __m128 a8)
{
  unsigned __int64 v11; // rsi
  int v12; // eax
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r15d
  int v22; // r11d
  int v23; // r9d
  __int64 v24; // rdx
  char *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  _QWORD *v30; // r12
  _QWORD *v31; // rbx
  void **v32; // rbp
  unsigned __int8 v33; // r9
  int v34; // edx
  _DWORD *v35; // rax
  _DWORD *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 *v39; // rdi
  bool v40; // zf
  _BOOL4 v41; // esi
  int v42; // eax
  int v43; // edx
  _DWORD *v44; // rax
  _DWORD *v45; // rdx
  int v46; // eax
  unsigned __int64 *v47; // r8
  __int64 v48; // rax
  unsigned __int64 *v49; // r10
  unsigned __int64 v50; // rax
  unsigned __int64 *v51; // rdx
  __int64 v52; // rcx
  int v53; // r13d
  unsigned __int8 v54; // si
  unsigned __int64 *v55; // rsi
  char *v56; // r13
  __int64 v57; // rcx
  unsigned __int64 v58; // rsi
  char *v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // r8
  char *v62; // rdx
  __int32 v63; // eax
  bool v64; // al
  __int64 v65; // rax
  unsigned __int8 v66; // dl
  __int64 m128i_i64; // rdx
  char v68; // al
  _DWORD *v69; // rax
  __int64 v71; // [rsp+10h] [rbp-558h]
  __int64 v72; // [rsp+18h] [rbp-550h]
  int v74; // [rsp+28h] [rbp-540h]
  int v75; // [rsp+40h] [rbp-528h]
  int v76; // [rsp+40h] [rbp-528h]
  int v77; // [rsp+40h] [rbp-528h]
  int v78; // [rsp+40h] [rbp-528h]
  unsigned __int16 v79; // [rsp+40h] [rbp-528h]
  int v80; // [rsp+44h] [rbp-524h]
  int v81; // [rsp+48h] [rbp-520h]
  int v82; // [rsp+4Ch] [rbp-51Ch]
  int v83; // [rsp+50h] [rbp-518h]
  int v84; // [rsp+54h] [rbp-514h]
  unsigned __int8 v85; // [rsp+58h] [rbp-510h]
  char *v86; // [rsp+58h] [rbp-510h]
  int v87; // [rsp+60h] [rbp-508h]
  unsigned __int64 v88; // [rsp+60h] [rbp-508h]
  unsigned __int64 *v89; // [rsp+60h] [rbp-508h]
  int v90; // [rsp+60h] [rbp-508h]
  __int64 v91; // [rsp+60h] [rbp-508h]
  int v92; // [rsp+68h] [rbp-500h]
  unsigned __int64 v93; // [rsp+68h] [rbp-500h]
  char v94; // [rsp+70h] [rbp-4F8h]
  unsigned __int64 *v95; // [rsp+70h] [rbp-4F8h]
  int v97; // [rsp+7Ch] [rbp-4ECh]
  int v98; // [rsp+94h] [rbp-4D4h] BYREF
  unsigned __int64 v99; // [rsp+98h] [rbp-4D0h] BYREF
  __int64 v100; // [rsp+A0h] [rbp-4C8h] BYREF
  __int64 v101; // [rsp+A8h] [rbp-4C0h] BYREF
  void *v102; // [rsp+B0h] [rbp-4B8h] BYREF
  __int64 v103; // [rsp+B8h] [rbp-4B0h]
  _BYTE v104[16]; // [rsp+C0h] [rbp-4A8h] BYREF
  void *v105[2]; // [rsp+D0h] [rbp-498h] BYREF
  _BYTE v106[16]; // [rsp+E0h] [rbp-488h] BYREF
  void *src[2]; // [rsp+F0h] [rbp-478h] BYREF
  __int128 v108; // [rsp+100h] [rbp-468h] BYREF
  _QWORD v109[2]; // [rsp+110h] [rbp-458h] BYREF
  __int64 v110; // [rsp+120h] [rbp-448h]
  __int64 v111; // [rsp+128h] [rbp-440h] BYREF
  _QWORD v112[2]; // [rsp+138h] [rbp-430h] BYREF
  __int64 v113; // [rsp+148h] [rbp-420h]
  __int64 v114; // [rsp+150h] [rbp-418h] BYREF
  _QWORD v115[3]; // [rsp+160h] [rbp-408h] BYREF
  void *ptr; // [rsp+178h] [rbp-3F0h]
  __int64 v117; // [rsp+188h] [rbp-3E0h] BYREF
  int v118[8]; // [rsp+1F0h] [rbp-378h] BYREF
  void *v119[13]; // [rsp+210h] [rbp-358h] BYREF
  int v120; // [rsp+27Ch] [rbp-2ECh]
  int v121; // [rsp+294h] [rbp-2D4h]
  _BYTE *v122; // [rsp+320h] [rbp-248h] BYREF
  __int64 v123; // [rsp+328h] [rbp-240h]
  _BYTE v124[568]; // [rsp+330h] [rbp-238h] BYREF

  v11 = (unsigned __int64)&a1[31].m128i_u64[1];
  v122 = v124;
  v123 = 0x1000000000LL;
  v98 = 0;
  sub_147A4A0((__int64)v118, (__int64)&a1[31].m128i_i64[1]);
  v102 = v104;
  v72 = 0;
  v103 = 0x200000000LL;
  v105[1] = (void *)0x200000000LL;
  v110 = 0x200000000LL;
  v113 = 0x200000000LL;
  v12 = *(_DWORD *)(a4 + 48);
  v105[0] = v106;
  v80 = 0;
  v101 = 0;
  v99 = 0;
  v100 = 0;
  v109[0] = 0;
  v109[1] = &v111;
  v112[0] = (char *)a1 + 504;
  v112[1] = &v114;
  v71 = 0;
  v81 = 0;
  v83 = v12;
  v82 = v12;
  v13 = sub_147EEF0((__int64)a1);
  v16 = a6;
  if ( v13 )
  {
    if ( (_BYTE)a6 )
    {
      sub_1564840(v115, a1, &a1[1], 1543);
      sub_AEA040((__int64)v115);
    }
    sub_149BE00((__int64)a1, a2, (__int64)&v122);
    sub_14808E0(a4, (__int64 *)a2, v17, v18, v19, v20);
    v21 = *(_DWORD *)(a4 + 52);
    v75 = v21;
    if ( (unsigned __int16)(a1[2].m128i_i16[0] - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
      sub_14AB020(a1, v109);
    if ( LODWORD(v109[0]) && HIDWORD(v109[0]) )
    {
      sub_1481BE0((__int64)a1, (unsigned int *)v109, 0);
      LODWORD(v110) = 0;
      sub_15DCED0(v112[0], v112);
      LODWORD(v113) = 0;
      v109[0] = 0;
    }
    v74 = v21;
    v22 = 1;
    v23 = 0;
    v84 = 0;
    goto LABEL_10;
  }
  if ( a1[2].m128i_i16[0] != 23 )
  {
    v33 = 0;
    v11 = *(unsigned int *)(a2 + 96);
    if ( !*(_QWORD *)(a2 + 16) || (**(_BYTE **)a2 & 7) == 1 || ((1LL << v11) & 0x781) == 0 )
      goto LABEL_44;
    v34 = *(_DWORD *)(a2 + 136);
    if ( v34 )
    {
      v35 = *(_DWORD **)(a2 + 128);
      if ( *v35 != 6 )
      {
LABEL_118:
        v33 = 0;
        goto LABEL_44;
      }
      v36 = &v35[36 * (v34 - 1)];
      while ( v36 != v35 )
      {
        v35 += 36;
        if ( *v35 != 6 )
          goto LABEL_118;
      }
    }
    v33 = 1;
LABEL_44:
    sub_149ADE0((__int64)a1, v11, a3, (__int64)&v122, &v98, v33, a7, a8);
    goto LABEL_45;
  }
  if ( (_BYTE)a6 )
  {
    v11 = (unsigned __int64)a1;
    sub_1564840(v115, a1, &a1[1], 1543);
    sub_AEA040((__int64)v115);
  }
LABEL_45:
  LOBYTE(v84) = 1;
  if ( !(_DWORD)v123 )
  {
    v37 = *(_QWORD *)(a1->m128i_i64[1] + 56);
    if ( (*(_WORD *)v37 & 0x808) == 0 && (*(_BYTE *)(v37 + 12) & 1) == 0 )
      LOBYTE(v84) = (*(_BYTE *)(v37 + 47) & 0x20) != 0;
  }
  sub_14808E0(a4, (__int64 *)v11, v14, v15, (unsigned int)v123, v16);
  v74 = *(_DWORD *)(a4 + 52);
  v75 = v74;
  if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 8) != 0 )
  {
    v115[0] = a1;
    v115[1] = v118;
    v115[2] = a2;
    sub_14906F0(
      a1,
      v118,
      0,
      0,
      0,
      a7,
      a8,
      v38,
      (__int64 (__fastcall *)(__int64, int *, __int64))sub_1477A90,
      (__int64)v115);
    v21 = v121;
    if ( !v121 )
      v21 = v74;
    v85 = 1;
    if ( (unsigned __int16)(a1[2].m128i_i16[0] - 28) <= 1u )
    {
      sub_1564840(v115, a1, &a1[1], (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 0x10) == 0 ? 2015 : 2127);
      sub_AEA040((__int64)v115);
      v39 = (__int64 *)a1->m128i_i64[1];
      v40 = a1[2].m128i_i16[0] == 28;
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      v85 = v40;
      sub_14634E0(v39, a1[1].m128i_i32);
      v80 = a1[2].m128i_i32[2];
      v21 = v80;
    }
    *(_OWORD *)src = 0;
    v108 = 0;
    sub_147E420((__int64)a1, a2, (__int64)v118, (__int64)src);
    v41 = 0;
    if ( *(_DWORD *)(a2 + 96) != 7 || (**(_BYTE **)a2 & 7) == 1 )
      goto LABEL_53;
    v43 = *(_DWORD *)(a2 + 136);
    if ( v43 )
    {
      v44 = *(_DWORD **)(a2 + 128);
      if ( *v44 != 6 )
      {
LABEL_53:
        v42 = sub_14A6770(
                (_DWORD)a1,
                v41,
                (unsigned int)&v101,
                (unsigned int)&v102,
                (unsigned int)v105,
                (unsigned int)&v99,
                (__int64)&v100);
        v23 = v42;
        if ( v42 )
          v21 = HIDWORD(v101);
        if ( (unsigned __int16)(a1[2].m128i_i16[0] - 406) <= 8u
          || (v77 = v42, v46 = sub_155CBC0(a1, 0, 0), v23 = v77, v46) )
        {
          v76 = v23;
          sub_14AB020(a1, v109);
          v23 = v76;
        }
        v75 = v21;
        if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 0x10) != 0 && a1[2].m128i_i16[0] == 37 )
        {
          v78 = v23;
          sub_1564840(v115, a1, &a1[1], 2132);
          sub_AEA040((__int64)v115);
          if ( ((**(_DWORD **)a2 >> 12) & 0x7F) == 0x32 )
            v82 = *(_DWORD *)(*(_QWORD *)a2 + 192LL);
          v63 = a1[1].m128i_i32[0];
          v90 = v78;
          v115[0] = 0;
          v75 = v63;
          v64 = sub_147B350(a2);
          v65 = sub_14A1280(a1, v115, v64);
          v21 = HIDWORD(v115[0]);
          v23 = v90;
          v71 = v65;
          v72 = v66;
          v81 = v115[0];
        }
        if ( BYTE8(v108) )
        {
          v87 = v23;
          sub_19A2DA0(src);
          v23 = v87;
        }
        v22 = v85;
        v84 = (unsigned __int8)v84;
        goto LABEL_10;
      }
      v45 = &v44[36 * (v43 - 1)];
      while ( v45 != v44 )
      {
        v44 += 36;
        if ( *v44 != 6 )
        {
          v41 = 0;
          goto LABEL_53;
        }
      }
    }
    if ( !(unsigned __int8)sub_18B2EB0(a1[6].m128i_i64[0], a2)
      || a1[2].m128i_i16[0] != 164
      || *(_WORD *)(sub_1479960(a1->m128i_i64[1], 0) + 16) != 22
      || a1[2].m128i_i16[0] == 1
      || *(_WORD *)(sub_1479960(a1->m128i_i64[1], 1u) + 16) != 164
      || a1[2].m128i_i16[0] == 1
      || *(_WORD *)(sub_1479960(a1->m128i_i64[1], 2u) + 16) != 22
      || a1[2].m128i_i16[0] == 1
      || *(_WORD *)(sub_1479960(a1->m128i_i64[1], 3u) + 16) != 5 )
    {
      goto LABEL_77;
    }
    if ( a1[2].m128i_i16[0] == 1 )
      m128i_i64 = (__int64)a1[1].m128i_i64;
    else
      m128i_i64 = sub_1479960(a1->m128i_i64[1], 3u);
    v91 = m128i_i64;
    v79 = *(_WORD *)(m128i_i64 + 16);
    v68 = sub_141A630(v79);
    if ( v79 == 1 || v68 )
      BUG();
    v69 = *(_DWORD **)(*(_QWORD *)(v91 + 8) + 16LL);
    if ( *v69 == 4 )
      v41 = v69[4] != 1885435763;
    else
LABEL_77:
      v41 = 1;
    goto LABEL_53;
  }
  v84 = (unsigned __int8)v84;
  if ( (unsigned __int16)(a1[2].m128i_i16[0] - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
    sub_14AB020(a1, v109);
  v21 = v74;
  v22 = 1;
  v23 = 0;
LABEL_10:
  v24 = a1[6].m128i_i64[0];
  v25 = (char *)&v108;
  src[1] = nullptr;
  src[0] = &v108;
  v26 = *(_QWORD *)(v24 + 608);
  v27 = 0;
  if ( (*(_BYTE *)(v26 + 9) & 2) == 0 )
    goto LABEL_12;
  v27 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 8) != 0 )
    goto LABEL_12;
  v47 = *(unsigned __int64 **)(v26 + 80);
  if ( *(_BYTE *)(v26 + 100) )
    v48 = *(unsigned int *)(v26 + 92);
  else
    v48 = *(unsigned int *)(v26 + 88);
  v49 = &v47[v48];
  if ( v47 == v49 )
  {
LABEL_89:
    v27 = 0;
    v25 = (char *)&v108;
    goto LABEL_12;
  }
  v50 = *v47;
  if ( *v47 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v51 = v47 + 1;
    do
    {
      v47 = v51;
      if ( v49 == v51 )
        goto LABEL_89;
      v50 = *v51++;
    }
    while ( v50 >= 0xFFFFFFFFFFFFFFFELL );
  }
  v52 = 0;
  v53 = v23;
  while ( 1 )
  {
LABEL_94:
    v27 = v52;
    v54 = *(_BYTE *)(v50 + 28) & 0x7F;
    if ( (unsigned int)v54 - 18 <= 0x3F && v54 != 43 )
    {
      if ( v52 + 1 > (unsigned __int64)HIDWORD(src[1]) )
      {
        v97 = v22;
        v95 = v49;
        v93 = v50;
        v89 = v47;
        sub_2237220(src, &v108, v52 + 1, 8);
        v22 = v97;
        v49 = v95;
        v27 = LODWORD(src[1]);
        v50 = v93;
        v47 = v89;
      }
      *((_QWORD *)src[0] + v27) = v50;
      ++LODWORD(src[1]);
      v27 = LODWORD(src[1]);
      v52 = LODWORD(src[1]);
    }
    if ( v47 + 1 == v49 )
      break;
    v50 = v47[1];
    if ( v50 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v55 = v47 + 2;
      while ( 1 )
      {
        v47 = v55;
        if ( v55 == v49 )
          goto LABEL_104;
        v50 = *v55++;
        if ( v50 < 0xFFFFFFFFFFFFFFFELL )
          goto LABEL_94;
      }
    }
    ++v47;
  }
LABEL_104:
  v23 = v53;
  v56 = (char *)src[0];
  v57 = 8 * v52;
  v25 = (char *)src[0] + v57;
  if ( src[0] != (char *)src[0] + v57 )
  {
    v94 = v22;
    v92 = v23;
    _BitScanReverse64(&v58, v57 >> 3);
    v88 = v57;
    v86 = (char *)src[0] + v57;
    sub_1477D80((__int64 *)src[0], (__int64 *)((char *)src[0] + v57), 2LL * (int)(63 - (v58 ^ 0x3F)));
    if ( v88 <= 0x80 )
    {
      sub_1477CB0(v56, v86);
      v23 = v92;
      LOBYTE(v22) = v94;
      v25 = (char *)src[0];
      v27 = LODWORD(src[1]);
    }
    else
    {
      sub_1477CB0(v56, v56 + 128);
      v59 = v56 + 128;
      v23 = v92;
      for ( LOBYTE(v22) = v94; v59 != v86; *(_QWORD *)v62 = v61 )
      {
        v60 = *((_QWORD *)v59 - 1);
        v61 = *(_QWORD *)v59;
        v62 = v59 - 8;
        if ( *(_DWORD *)(*(_QWORD *)v59 + 24LL) < *(_DWORD *)(v60 + 24) )
        {
          while ( 1 )
          {
            *((_QWORD *)v62 + 1) = v60;
            v60 = *((_QWORD *)v62 - 1);
            if ( *(_DWORD *)(v61 + 24) >= *(_DWORD *)(v60 + 24) )
              break;
            v62 -= 8;
          }
        }
        else
        {
          v62 = v59;
        }
        v59 += 8;
      }
      v25 = (char *)src[0];
      v27 = LODWORD(src[1]);
    }
  }
LABEL_12:
  v28 = (__int64)v25;
  v29 = v99 & 0xFFFFFFFFFFFFFFFELL;
  if ( v99 <= 1 )
    v29 = 0;
  sub_15ABA00(
    (unsigned int)v115,
    v84,
    a5,
    v83,
    (_DWORD)v122,
    v123,
    v98,
    v74,
    v22,
    v80,
    0,
    v23,
    v101,
    (__int64)v102,
    (__int64)v105[0],
    v103,
    v29,
    v100,
    v28,
    v27,
    v82,
    v75,
    a2,
    v71,
    v72,
    v81,
    (__int64)v118);
  sub_1497E40(a2, (unsigned __int64)v115, (__int64)v109, v21);
  if ( ptr != &v117 )
    free(ptr);
  if ( src[0] != &v108 )
    free(src[0]);
  sub_147A450(v109);
  if ( v105[0] != v106 )
    free(v105[0]);
  if ( v102 != v104 )
    free(v102);
  if ( v120 )
    free(v119[12]);
  sub_147A450(v119);
  v30 = v122;
  v31 = &v122[32 * (unsigned int)v123];
  if ( v122 != (_BYTE *)v31 )
  {
    do
    {
      v31 -= 4;
      v32 = (void **)v31[3];
      if ( v32 )
      {
        if ( *v32 != v32 + 2 )
          free(*v32);
        operator delete(v32, 0x70u);
      }
    }
    while ( v30 != v31 );
    v31 = v122;
  }
  if ( v31 != (_QWORD *)v124 )
    free(v31);
}
