__int64 __fastcall sub_1A10AA0(
        _QWORD *a1,
        unsigned int *a2,
        char *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 si128,
        unsigned __int8 *a9,
        unsigned __int8 a10,
        int a11,
        unsigned int a12,
        int a13)
{
  __int64 v14; // r10
  char *v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rdi
  char v19; // al
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  bool v24; // zf
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rdx
  int v31; // r11d
  int v32; // esi
  __int64 v33; // rax
  _QWORD *v34; // r14
  unsigned __int8 v35; // r10
  unsigned __int64 v36; // rcx
  __int64 v37; // r12
  char v39; // al
  bool v40; // al
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // r8
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _QWORD *v54; // r13
  __m128 *v55; // r12
  unsigned __int64 v56; // rcx
  int v57; // edx
  __int64 v58; // rsi
  _QWORD *v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  bool v62; // al
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r13
  __int64 *v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  _QWORD *v73; // r12
  __int64 v74; // r15
  _BYTE *v75; // rbx
  unsigned int v76; // ebp
  unsigned __int64 v77; // rax
  __int64 *v78; // rax
  __int64 *v79; // rax
  unsigned int v80; // eax
  __int64 v81; // rax
  __int64 v82; // rax
  unsigned __int64 v84; // [rsp+10h] [rbp-198h] BYREF
  unsigned __int8 v85; // [rsp+1Bh] [rbp-18Dh]
  int v86; // [rsp+1Ch] [rbp-18Ch]
  __int64 v87; // [rsp+20h] [rbp-188h]
  __int64 v88; // [rsp+28h] [rbp-180h]
  __int64 v89; // [rsp+30h] [rbp-178h]
  _QWORD *v90; // [rsp+38h] [rbp-170h]
  __m128 *v91; // [rsp+40h] [rbp-168h]
  char *v92; // [rsp+48h] [rbp-160h]
  __int64 v93; // [rsp+50h] [rbp-158h]
  int *v94; // [rsp+58h] [rbp-150h]
  unsigned int v95; // [rsp+60h] [rbp-148h] BYREF
  int v96; // [rsp+64h] [rbp-144h] BYREF
  __m128 *v97; // [rsp+68h] [rbp-140h] BYREF
  __m128 v98; // [rsp+70h] [rbp-138h] BYREF
  unsigned __int64 v99; // [rsp+80h] [rbp-128h]
  void *ptr; // [rsp+90h] [rbp-118h] BYREF
  __int64 v101; // [rsp+98h] [rbp-110h]
  _BYTE v102[64]; // [rsp+A0h] [rbp-108h] BYREF
  _QWORD *v103; // [rsp+E0h] [rbp-C8h] BYREF
  __m128 v104; // [rsp+E8h] [rbp-C0h]

  v14 = (__int64)a4;
  v16 = a3;
  v17 = a6;
  v18 = *(_QWORD *)(a6 + 24);
  v97 = (__m128 *)v18;
  v86 = a11;
  LODWORD(v88) = a12;
  LODWORD(v87) = a13;
  LODWORD(v89) = a13;
  v85 = *(_BYTE *)(a6 + 16);
  ptr = v102;
  v101 = 0x800000000LL;
  v19 = *a3;
  if ( *a3 == 2 )
  {
    v29 = *((_DWORD *)a3 + 2);
    if ( !v29 )
      v29 = *((_DWORD *)a3 + 1);
    v95 = v29;
    goto LABEL_21;
  }
  v95 = *((_DWORD *)a3 + 1);
  if ( v19 == 3 && (*(_BYTE *)(v18 + 83) & 2) != 0 )
  {
    v84 = (unsigned __int64)a4;
    v40 = sub_B98FC0(v18, (__int64)a2);
    v14 = v84;
    if ( !v40 || v97[5].m128_i8[2] >= 0 || (v62 = sub_B8C400((__int64)v97, 0), v14 = v84, v62) )
    {
      if ( *v16 == 2 )
        goto LABEL_21;
      goto LABEL_5;
    }
    v104.m128_u64[0] = (unsigned __int64)&v95;
    v104.m128_u64[1] = (unsigned __int64)&v97;
    v103 = a1;
    sub_15F0FC0((__int64)a1, v95, (__int64 (__fastcall *)(__int64))sub_1A0A330, (__int64)&v103);
    v19 = *v16;
    v14 = v84;
  }
  if ( v19 == 2 )
    goto LABEL_21;
LABEL_5:
  if ( a5 == 1 )
  {
    v20 = *(_QWORD *)(v17 + 32) & 0xFFFFFFFFFFFFFFF8LL;
    v21 = v20;
    v22 = *(_BYTE *)(v20 + 28) & 0x7F;
    if ( (_BYTE)v22 == 81 )
    {
      v99 = 0;
      a7 = 0;
      v98 = 0;
    }
    else
    {
      if ( (((_BYTE)v22 + 52) & 0x7Fu) <= 1 || (unsigned int)(unsigned __int8)v22 - 53 <= 1 )
      {
        v23 = *(_QWORD *)(v17 + 32) & 0xFFFFFFFFFFFFFFF8LL;
        v90 = (_QWORD *)v14;
        v84 = v20;
        v21 = sub_B72ED0(v23);
        v14 = (__int64)v90;
        v20 = v84;
        LOBYTE(v22) = *(_BYTE *)(v21 + 28) & 0x7F;
      }
      v84 = 0;
      v20 |= (*(_BYTE *)(v21 + 29) >> 5) & 3;
      v103 = (_QWORD *)v20;
      if ( (_BYTE)v22 == 71 )
      {
        v20 = *(_QWORD *)(v21 + 48);
        v84 = v21;
        v21 = v20;
        LOBYTE(v22) = *(_BYTE *)(v20 + 28) & 0x7F;
      }
      v24 = (_BYTE)v22 == 38;
      v22 = 0;
      if ( !v24 )
        v21 = 0;
      v90 = (_QWORD *)v21;
      a7 = _mm_loadh_ps((const double *)&v84);
      v104 = a7;
      si128 = (__m128)_mm_load_si128((const __m128i *)&v103);
      v99 = a7.m128_u64[1];
      v98 = si128;
    }
    v25 = a1[31];
    v84 = v14;
    LOBYTE(v26) = sub_1A0A9C0(v25, &v98, v22, v20);
    v14 = v84;
    v26 = (unsigned __int8)v26;
    goto LABEL_16;
  }
LABEL_21:
  v26 = 0;
  if ( (_DWORD)a5 == 1 )
  {
LABEL_16:
    if ( (unsigned __int8)v16[1] <= 2u )
    {
      v27 = *(_QWORD *)v14;
      v28 = *((unsigned int *)v16 + 1);
      LODWORD(v90) = v26;
      v84 = v14;
      sub_160A450((__int64)a1, *((_QWORD *)a2 + 2), *(_QWORD *)(v27 + 8), v28, a5);
      LOBYTE(v26) = (_BYTE)v90;
      v14 = v84;
    }
  }
  v30 = *(_QWORD *)(v17 + 8);
  LODWORD(v84) = a10;
  if ( (unsigned __int8)sub_183E070((__int64)a1, v97, v30, v14, a5, v95, (__m128i)a7, (__int64)&ptr, v26, a10) )
    goto LABEL_32;
  v31 = *a2;
  if ( *a2 > 0x12 )
  {
    v32 = 0;
    goto LABEL_25;
  }
  if ( ((1LL << v31) & 0x60200) == 0 || (v39 = *v16, *v16 != 1) && (v39 && v39 != 4 || (_DWORD)a5 == 1) )
  {
    if ( v31 == 10 )
    {
      v88 = *((_QWORD *)a2 + 4);
      v33 = 0;
      v32 = ((*(_BYTE *)((v88 & 0xFFFFFFFFFFFFFFF8LL) + 12) & 1) != 0) + 1;
      if ( a10 )
        goto LABEL_26;
      goto LABEL_42;
    }
    v32 = 3 * (v31 == 11);
LABEL_25:
    v33 = 0;
    if ( a10 )
    {
LABEL_26:
      v33 = a12 | (unsigned __int64)(v87 << 32);
LABEL_27:
      v34 = (_QWORD *)(v17 + 32);
      v35 = *a9;
      v36 = *(_QWORD *)(v17 + 32) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v31 == 3 || v31 == 5) && *((_BYTE *)a2 + 36) )
        v37 = sub_1887390(
                (__int64)a1,
                v95,
                *(_QWORD *)(v17 + 8),
                v36,
                v97,
                1,
                (__int64)ptr,
                (unsigned int)v101,
                v85,
                v84,
                v86,
                v35,
                v32,
                v33);
      else
        v37 = sub_1887530(
                (__int64)a1,
                v95,
                *(_QWORD *)(v17 + 8),
                v36,
                (__int64)v97,
                v85,
                (__int64)ptr,
                (unsigned int)v101,
                v84,
                v86,
                v35,
                v32,
                v33);
      goto LABEL_30;
    }
LABEL_42:
    if ( !*v16 )
      v33 = *((_QWORD *)v16 + 1);
    goto LABEL_27;
  }
  v49 = *(_QWORD *)(v17 + 32) & 0xFFFFFFFFFFFFFFF8LL;
  v34 = (_QWORD *)(v17 + 32);
  if ( (unsigned __int8)sub_18F5260(
                          (__int64)a1,
                          v49,
                          (int *)&v95,
                          1u,
                          0,
                          0,
                          (__m128i)a7,
                          *(double *)si128.m128_u64,
                          0,
                          0,
                          0) )
  {
LABEL_32:
    v37 = 1;
    goto LABEL_33;
  }
  v24 = *v16 == 4;
  v90 = &v103;
  if ( v24 && (v97[1].m128_i8[13] & 2) != 0 )
  {
    v63 = sub_F63270(
            *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
            v49,
            v50,
            v51,
            v52,
            v53);
    v66 = (__int64)v63;
    if ( v63 )
    {
      v67 = (__int64 *)v63[13];
      sub_7052B0(v67 + 12, (__int64)v67, v64, v65, v52, v53);
      if ( **(char **)(v66 + 128) < 0 && (*(_BYTE *)(v66 + 76) & 4) != 0 )
      {
        v70 = sub_B7E900(v66, (__int64)v67, v68, v69, v52, v53);
        if ( v70 )
        {
          v53 = 0;
          v92 = v16;
          v73 = a1;
          v87 = (__int64)(a1 + 1);
          v74 = v70;
          v94 = &v96;
          v75 = v90;
          v91 = &v98;
          v93 = v17;
          v76 = 0;
LABEL_75:
          v98.m128_u64[0] = v74;
          if ( (unsigned int)v101 > v76 || (*(_BYTE *)(v74 + 29) & 1) == 0 )
            goto LABEL_79;
          v78 = sub_B8C3D0(v74, (__int64)v67, v71, v72, v52, v53);
          v71 = *v78;
          v72 = *v78 + 8LL * *((unsigned int *)v78 + 2);
          if ( *v78 >= v72 )
          {
            if ( v71 == v72 )
              goto LABEL_79;
            if ( *(_WORD *)(*(_QWORD *)v72 + 36LL) != 212 )
            {
              v72 += 8LL;
              do
              {
                if ( v71 == v72 )
                  goto LABEL_79;
                v82 = *(_QWORD *)v72;
                v72 += 8LL;
              }
              while ( *(_WORD *)(v82 + 36) != 212 );
            }
            goto LABEL_87;
          }
          v79 = (__int64 *)*v78;
          while ( 1 )
          {
            v71 = *v79;
            if ( *(_WORD *)(*v79 + 36) == 212 )
              break;
            if ( (__int64 *)v72 == ++v79 )
              goto LABEL_79;
          }
          if ( (__int64 *)v72 != v79 )
          {
LABEL_87:
            v80 = *(_DWORD *)(v73[577] + 640LL * *((unsigned int *)v73 + 1156) - 640);
            if ( v80 != 3 && v80 > 1 )
            {
              sub_168B9F0((__int64)v75, (__int64 *)v87, v95, 0x1AEDu, 0);
              v96 = 0;
              v81 = sub_1587D10((__int64)v75, v94);
              sub_18DFF20(v81, (__int64 *)v91);
              sub_15F7200(v75);
              sub_168B9F0((__int64)v75, (__int64 *)v87, *(_DWORD *)(v98.m128_u64[0] + 24), 0x172Eu, 0);
              v67 = (__int64 *)v91;
              sub_18DFF20((__int64)v75, (__int64 *)v91);
              sub_15F7200(v75);
            }
          }
LABEL_79:
          while ( 1 )
          {
            v77 = *(_QWORD *)(v74 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v74 = v77;
            if ( !v77 )
              break;
            if ( (*(_BYTE *)(v77 + 28) & 0x7Fu) - 49 <= 2 )
            {
              ++v76;
              goto LABEL_75;
            }
          }
          a1 = v73;
          v17 = v93;
          v16 = v92;
        }
      }
    }
  }
  LODWORD(v87) = *a2;
  if ( (((_DWORD)v87 - 9) & 0xFFFFFFF7) != 0 || (v54 = *((_QWORD **)a2 + 4)) == nullptr )
    v54 = sub_A81910((_QWORD *)a1[31], *((_QWORD *)a2 + 2), v95);
  if ( *v16 != 1 )
  {
    LODWORD(v88) = *((_DWORD *)v16 + 2);
    LODWORD(v89) = *((_DWORD *)v16 + 3);
  }
  v55 = v97;
  v56 = *(_QWORD *)(v17 + 32) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v56 + 28) & 0x7F) == 0x36 )
    v55 = sub_1886CC0((__int64)a1, v95, v97, v56, v52, v53);
  sub_1910D40((__int64)a1, v95, (__int64)v55, 1, v52, v53, a7, si128);
  v57 = *a9;
  v58 = a1[31];
  v91 = (__m128 *)ptr;
  v59 = *((_QWORD **)a2 + 2);
  LODWORD(v92) = v57;
  v87 = (unsigned int)v101;
  v103 = v59;
  v60 = sub_F67970(v90, v58);
  v61 = sub_C97B30(
          (_QWORD *)a1[31],
          (__int64)v55,
          v60,
          v54,
          (__int64)v91,
          v87,
          (unsigned int)v88 | (unsigned __int64)(v89 << 32),
          v85,
          v84,
          v86,
          (char)v92);
  v37 = sub_18C3A50((__int64)a1, v61, (__int64)v55);
LABEL_30:
  if ( v37 == 1 )
    goto LABEL_32;
  sub_1661560(a1, v95, (__int64)v97, *(_QWORD *)(v17 + 32), (__int64)a2, 0);
  if ( (unsigned __int8)sub_18F5260(
                          (__int64)a1,
                          *v34 & 0xFFFFFFFFFFFFFFF8LL,
                          (int *)&v95,
                          1u,
                          0,
                          0,
                          (__m128i)a7,
                          *(double *)si128.m128_u64,
                          0,
                          0,
                          0) )
    goto LABEL_32;
  v41 = sub_A72040((_QWORD *)a1[31], *((_QWORD *)a2 + 2));
  if ( v41 )
  {
    v44 = sub_A71600(a1[31], v41);
    if ( (unsigned __int8)sub_1A0B010(v44, v95, a1, v45, v46, v47, a7, si128) )
      goto LABEL_32;
  }
  v48 = *a2;
  if ( ((1LL << v48) & 0x23FDFD) == 0 )
    v37 = (__int64)sub_19A3E40((__int64)a1, (unsigned __int16 *)(v37 & 0xFFFFFFFFFFFFFFFELL), v42, v48, v43, a7, si128);
LABEL_33:
  if ( ptr != v102 )
    free(ptr);
  return v37;
}
