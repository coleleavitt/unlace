void __fastcall sub_1F81E20(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdi
  volatile signed __int32 *v7; // rax
  int v8; // ecx
  __int64 v9; // r14
  int v10; // ebp
  void *v11; // rax
  void *v12; // r11
  _BYTE *v13; // r14
  char *v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _DWORD *v20; // r15
  unsigned int v21; // esi
  __int64 v22; // rdi
  _DWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // r15
  int v30; // r15d
  __int64 v31; // rax
  int v32; // r11d
  int v33; // r14d
  int v34; // eax
  int v35; // r11d
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rsi
  __int64 *v43; // rax
  __int64 v44; // rdi
  void *v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rdi
  int *v48; // rbp
  int *v49; // r15
  unsigned __int64 v50; // r11
  __int64 v51; // r14
  _BYTE *v52; // rsi
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdx
  __int64 v56; // rdx
  unsigned __int64 v57; // rdx
  const __m128i *v58; // rax
  __int32 v59; // eax
  __int64 v60; // rax
  int v61; // r11d
  int v62; // ecx
  _DWORD *v63; // rdi
  bool v64; // zf
  __int64 v65; // r13
  char *v66; // r14
  __m128i v67; // xmm0
  _QWORD *v68; // r14
  unsigned __int64 v69; // rax
  int v70; // esi
  unsigned __int64 v71; // r13
  unsigned __int64 v72; // rax
  char *v73; // r11
  __int64 v74; // rdi
  __int64 v75; // rax
  unsigned int v76; // ebp
  void *v77; // r8
  __int64 v78; // r9
  void **v79; // rsi
  void **v80; // rdi
  __m128i v81; // [rsp+8h] [rbp-820h] BYREF
  int v82; // [rsp+18h] [rbp-810h]
  int v83; // [rsp+1Ch] [rbp-80Ch]
  __m128i *v84; // [rsp+20h] [rbp-808h]
  void **v85; // [rsp+28h] [rbp-800h]
  __int64 v86; // [rsp+30h] [rbp-7F8h]
  __int64 *v87; // [rsp+38h] [rbp-7F0h]
  unsigned int v88; // [rsp+40h] [rbp-7E8h]
  unsigned int v89; // [rsp+44h] [rbp-7E4h]
  void **v90; // [rsp+48h] [rbp-7E0h]
  __int128 v91; // [rsp+50h] [rbp-7D8h] BYREF
  __int128 v92; // [rsp+60h] [rbp-7C8h] BYREF
  void *v93[12]; // [rsp+70h] [rbp-7B8h] BYREF
  void *ptr; // [rsp+D0h] [rbp-758h] BYREF
  __int64 v95; // [rsp+D8h] [rbp-750h]
  _BYTE v96[512]; // [rsp+E0h] [rbp-748h] BYREF
  void *v97; // [rsp+2E0h] [rbp-548h] BYREF
  __int64 v98; // [rsp+2E8h] [rbp-540h]
  char v99; // [rsp+2F0h] [rbp-538h] BYREF

  v5 = *(_QWORD *)(a1 + 16);
  v81.m128i_i64[1] = a3;
  v85 = &v97;
  v97 = &v99;
  v98 = 0x4000000000LL;
  sub_A25970(v5, 0xCu, 3u);
  v84 = (__m128i *)v93;
  sub_1F6B880(v93);
  sub_A1FE00((__int64)v93[0], 2, 1);
  sub_A1FE00((__int64)v93[0], 32, 2);
  sub_A1FE00((__int64)v93[0], 1, 2);
  sub_A1FE00((__int64)v93[0], 2, 2);
  sub_A1FE00((__int64)v93[0], 1, 2);
  sub_A1FE00((__int64)v93[0], 0, 10);
  v6 = *(_QWORD *)(a1 + 16);
  ptr = v93[0];
  v7 = (volatile signed __int32 *)v93[1];
  *(_OWORD *)v93 = 0;
  v95 = (__int64)v7;
  v88 = sub_A22F90(v6, (__int64 *)&ptr);
  if ( v95 )
    sub_4343A0((volatile signed __int32 *)v95);
  if ( v93[1] )
    sub_4343A0((volatile signed __int32 *)v93[1]);
  if ( *(_QWORD *)(a1 + 48) )
  {
    v89 = (__int64)(a2[18] - a2[17]) >> 3;
    v8 = v89 + 1;
  }
  else
  {
    v89 = 0;
    v8 = 1;
  }
  v9 = *(_QWORD *)(a1 + 16);
  ptr = v96;
  v95 = 0x4000000000LL;
  v83 = (__int64)(a2[15] - a2[14]) >> 3;
  if ( !v83 )
  {
    sub_A25550(v9);
    goto LABEL_29;
  }
  v10 = 1;
  v82 = v8 - 1;
  v87 = (__int64 *)&v92;
  v90 = v85 + 2;
  while ( 1 )
  {
    LODWORD(v95) = 0;
    v81.m128i_i32[0] = v10 + v82;
    v29 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL);
    v30 = *(_DWORD *)(v9 + 48) - v81.m128i_i32[2] + 8 * (sub_A1F730(v9) + v29);
    v31 = sub_145B180((__int64)a2, v10);
    v32 = *(_DWORD *)(v31 + 8);
    v33 = *(_DWORD *)(v31 + 4);
    if ( v32 )
    {
      v34 = sub_1F6E410((_QWORD *)a1, v32 & 0x7FFFFFFF);
      v32 = v35 - v34;
      if ( !v33 )
        goto LABEL_10;
    }
    else if ( !v33 )
    {
      goto LABEL_10;
    }
    v33 -= sub_1F6E410((_QWORD *)a1, v33 & 0x7FFFFFFF);
LABEL_10:
    sub_1F6E500(a1, v32);
    v11 = (void *)sub_1F6E500(a1, v33);
    v13 = v97;
    v14 = (char *)v97 + 20 * (unsigned int)v98;
    if ( (unsigned int)v98 < (unsigned __int64)HIDWORD(v98) )
    {
      *(_QWORD *)v14 = v11;
      *((_QWORD *)v14 + 1) = v12;
      LODWORD(v98) = v98 + 1;
      *((_DWORD *)v14 + 4) = v30;
      goto LABEL_12;
    }
    v57 = (unsigned int)v98 + 1LL;
    v93[0] = v11;
    v58 = v84;
    v93[1] = v12;
    LODWORD(v93[2]) = v30;
    if ( HIDWORD(v98) < v57 )
    {
      if ( v97 > v84 )
      {
        v79 = v90;
        v80 = v85;
LABEL_78:
        sub_2237220(v80, v79, v57, 20);
        v14 = (char *)v97 + 20 * (unsigned int)v98;
        v58 = v84;
        goto LABEL_44;
      }
      v79 = v90;
      v80 = v85;
      if ( v14 <= (char *)v84 )
        goto LABEL_78;
      sub_2237220(v85, v90, v57, 20);
      v58 = (const __m128i *)((char *)v97 + (char *)v84 - v13);
      v14 = (char *)v97 + 20 * (unsigned int)v98;
    }
LABEL_44:
    *(__m128i *)v14 = _mm_loadu_si128(v58);
    v59 = v58[1].m128i_i32[0];
    LODWORD(v98) = v98 + 1;
    *((_DWORD *)v14 + 4) = v59;
LABEL_12:
    v15 = (_DWORD *)sub_145B180((__int64)a2, v10);
    v20 = v15;
    if ( *v15 == 2 )
    {
      v21 = *(_DWORD *)(a1 + 1176);
      *(_QWORD *)&v92 = v15;
      if ( v21 )
      {
        v19 = v21 - 1;
        v22 = *(_QWORD *)(a1 + 1160);
        v16 = (unsigned int)v19 & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
        v23 = (_DWORD *)(v22 + 16 * v16);
        v24 = *(_QWORD *)v23;
        if ( v20 == *(_DWORD **)v23 )
        {
LABEL_15:
          v25 = v81.m128i_u32[0];
          v26 = *((_QWORD *)v20 + 2);
          v23[2] = v81.m128i_i32[0];
          v27 = sub_1F80CA0(a1, v26, v16, v25, v18, v19);
          sub_9B9C90((__int64)&ptr, v27);
          sub_1F6EB90(*(_QWORD *)(a1 + 16), 1u, (__int64)&ptr);
          goto LABEL_16;
        }
        v61 = 1;
        v18 = 0;
        if ( v24 != -4096 )
        {
          while ( 1 )
          {
            if ( !v18 && v24 == -8192 )
              v18 = (__int64)v23;
            v16 = (unsigned int)v19 & (v61 + (_DWORD)v16);
            v23 = (_DWORD *)(v22 + 16LL * (unsigned int)v16);
            v24 = *(_QWORD *)v23;
            if ( v20 == *(_DWORD **)v23 )
              goto LABEL_15;
            if ( v24 == -4096 )
            {
              if ( v18 )
                v23 = (_DWORD *)v18;
              break;
            }
            ++v61;
          }
        }
        v62 = *(_DWORD *)(a1 + 1168);
        v93[0] = v23;
        v16 = (unsigned int)(v62 + 1);
        v17 = 3 * v21;
        if ( 4 * (int)v16 < (unsigned int)v17 )
        {
          v63 = v20;
          v17 = v21 - *(_DWORD *)(a1 + 1172) - (unsigned int)v16;
          v19 = v21 >> 3;
          if ( (unsigned int)v17 > (unsigned int)v19 )
          {
LABEL_50:
            v64 = *(_QWORD *)v23 == -4096;
            *(_DWORD *)(a1 + 1168) = v16;
            if ( !v64 )
              --*(_DWORD *)(a1 + 1172);
            *(_QWORD *)v23 = v63;
            v23[2] = 0;
            goto LABEL_15;
          }
LABEL_55:
          sub_1F81970((__int64 *)(a1 + 1160), v21, v16, v17, v18, v19);
          sub_1F72B80((__int64 *)(a1 + 1160), v87, v84);
          v63 = (_DWORD *)v92;
          v16 = (unsigned int)(*(_DWORD *)(a1 + 1168) + 1);
          v23 = v93[0];
          goto LABEL_50;
        }
      }
      else
      {
        v93[0] = nullptr;
      }
      v21 *= 2;
      goto LABEL_55;
    }
    v36 = sub_145B180((__int64)a2, v10);
    v37 = v36;
    if ( *(_DWORD *)v36 == 1 )
      break;
    v51 = sub_145B180((__int64)a2, v10);
    sub_9B9C90((__int64)&ptr, 2);
    sub_9B9C90((__int64)&ptr, *(_QWORD *)(v51 + 24));
    sub_9B9C90((__int64)&ptr, *(_BYTE *)(v51 + 32) & 1);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)(v51 + 32) >> 1) & 3);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)(v51 + 32) & 8) != 0);
    *(__m128i *)&v93[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
    v52 = *(_BYTE **)(v51 + 16);
    v53 = *(_QWORD *)(v51 + 24);
    v93[0] = &v84[1].m128i_u64[1];
    sub_A1FE50(v84, v52, &v52[v53]);
    v54 = *(_QWORD *)(v51 + 40);
    if ( v54 )
    {
      while ( 1 )
      {
        v56 = *(_QWORD *)(v54 + 8);
        if ( !v56 )
          break;
        if ( (v56 & 4) == 0 )
          break;
        v55 = v56 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v55 )
          break;
        v54 = v55;
      }
      sub_A1FE50(v84, (_BYTE *)(v54 + 32), (_BYTE *)(v54 + 32 + *(_QWORD *)v54));
    }
    v86 &= 0xFFFFFF00FFFFFFFFLL;
    sub_1F76680(
      *(_QWORD *)(a1 + 16),
      v88,
      (unsigned __int8 *)ptr,
      (unsigned int)v95,
      (unsigned __int64)v93[0],
      (__int64)v93[1]);
    if ( v93[0] != &v84[1].m128i_u64[1] )
      free(v93[0]);
LABEL_16:
    v9 = *(_QWORD *)(a1 + 16);
    v28 = v10 + 1;
    if ( v83 == v10 )
      goto LABEL_25;
LABEL_17:
    v10 = v28;
  }
  sub_9B9C90((__int64)&ptr, !((*(__int64 *)(v36 + 16) >> 2) & 1));
  v42 = *(_QWORD *)(v37 + 16);
  if ( (v42 & 4) != 0 )
  {
    v93[0] = (void *)(v42 & 0xFFFFFFFFFFFFFFF8LL);
    v43 = sub_1F81B70(a1 + 1160, v84->m128i_i64, v38, v39, v40, v41);
    sub_9B9C90((__int64)&ptr, *(unsigned int *)v43);
  }
  else
  {
    v60 = sub_1F80CA0(a1, v42 & 0xFFFFFFFFFFFFFFF8LL, v38, v39, v40, v41);
    sub_9B9C90((__int64)&ptr, v60);
  }
  sub_1F6EB90(*(_QWORD *)(a1 + 16), 0, (__int64)&ptr);
  v9 = *(_QWORD *)(a1 + 16);
  v28 = v10 + 1;
  if ( v83 != v10 )
    goto LABEL_17;
LABEL_25:
  sub_A25550(v9);
  sub_1F6B880(v87);
  sub_A1FE00(v92, 18, 1);
  sub_A1FE00(v92, 32, 2);
  sub_A1FE00(v92, 0, 10);
  v44 = *(_QWORD *)(a1 + 16);
  v45 = *((void **)&v92 + 1);
  v93[0] = (void *)v92;
  v92 = 0;
  v93[1] = v45;
  v46 = sub_A22F90(v44, v84->m128i_i64);
  if ( v93[1] )
  {
    v81.m128i_i32[0] = v46;
    sub_4343A0((volatile signed __int32 *)v93[1]);
    v46 = v81.m128i_i32[0];
  }
  v47 = *(_QWORD *)(a1 + 16);
  v93[0] = &word_12;
  v93[1] = (void *)v89;
  sub_1F759B0(v47, v46, (unsigned __int8 *)v84, 2, (unsigned __int64)v97, 20LL * (unsigned int)v98, 0);
  if ( *((_QWORD *)&v92 + 1) )
    sub_4343A0(*((volatile signed __int32 **)&v92 + 1));
LABEL_29:
  sub_1459700((__int64)a2);
  v48 = (int *)a2[21];
  v49 = (int *)a2[20];
  v50 = ((char *)v48 - (char *)v49) >> 3;
  if ( v50 )
  {
    memset(v93, 0, 24);
    if ( v50 > 0xFFFFFFFFFFFFFFFLL )
      std::__throw_length_error("vector::reserve");
    v65 = 16 * v50;
    v66 = (char *)operator new(16 * v50);
    if ( v93[0] )
      operator delete(v93[0]);
    v81.m128i_i64[0] = (__int64)v66;
    v67 = _mm_loadl_epi64(&v81);
    v87 = (__int64 *)&v92;
    v93[2] = &v66[v65];
    *(__m128i *)v93 = _mm_unpacklo_epi64(v67, v67);
    v81.m128i_i64[0] = (__int64)&v91;
    if ( v49 != v48 )
    {
      while ( 1 )
      {
        v69 = sub_1F6E500(a1, v49[1]);
        v70 = *v49;
        v71 = v69;
        *(_QWORD *)&v92 = v69;
        v72 = sub_1F6E500(a1, v70);
        *(_QWORD *)&v91 = v72;
        if ( v66 == v73 )
        {
          v49 += 2;
          sub_1F72C40((char **)v84, v66, v81.m128i_i64[0], v87);
          if ( v48 == v49 )
            break;
        }
        else
        {
          *(_QWORD *)v66 = v72;
          v49 += 2;
          v68 = v66 + 16;
          *(v68 - 1) = v71;
          v93[1] = v68;
          if ( v48 == v49 )
            break;
        }
        v66 = (char *)v93[1];
      }
    }
    sub_1F6B880(v81.m128i_i64[0]);
    sub_A1FE00(v91, 63, 1);
    sub_A1FE00(v91, 0, 10);
    v74 = *(_QWORD *)(a1 + 16);
    v75 = *((_QWORD *)&v91 + 1);
    *(_QWORD *)&v92 = v91;
    v91 = 0;
    *((_QWORD *)&v92 + 1) = v75;
    v76 = sub_A22F90(v74, v87);
    if ( *((_QWORD *)&v92 + 1) )
      sub_4343A0(*((volatile signed __int32 **)&v92 + 1));
    LODWORD(v95) = 0;
    sub_9B9C90((__int64)&ptr, 63);
    v77 = v93[0];
    if ( v93[1] == v93[0] )
    {
      v78 = 0;
      v77 = nullptr;
    }
    else
    {
      v78 = (char *)v93[1] - (char *)v93[0];
    }
    sub_1F76680(*(_QWORD *)(a1 + 16), v76, (unsigned __int8 *)ptr, (unsigned int)v95, (unsigned __int64)v77, v78);
    if ( *((_QWORD *)&v91 + 1) )
      sub_4343A0(*((volatile signed __int32 **)&v91 + 1));
    if ( v93[0] )
      operator delete(v93[0]);
  }
  if ( ptr != v96 )
    free(ptr);
  if ( v97 != v85 + 2 )
    free(v97);
}
