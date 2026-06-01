__m128i *__fastcall sub_1A9C4A0(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6,
        __m128 a7,
        __m128i a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  int v14; // eax
  __int64 *v15; // r15
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r12
  char v21; // cl
  __int64 v22; // rdx
  __m128i *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128i *v28; // r15
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  char v35; // al
  __int64 i; // r13
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r14
  __int64 v41; // rsi
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  _QWORD **v46; // r14
  _QWORD **v47; // r12
  _QWORD *v48; // rdx
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  _QWORD **v52; // rax
  _QWORD **v53; // r13
  _QWORD **v54; // r12
  _QWORD *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // r12
  unsigned __int64 v58; // rax
  int v59; // ebp
  __int64 v60; // r13
  unsigned int v61; // r14d
  unsigned int v62; // eax
  __int16 v63; // ax
  __int64 v64; // rax
  __int64 v65; // rsi
  unsigned __int64 v66; // r13
  unsigned __int64 v67; // rax
  _QWORD *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // r13
  unsigned int v71; // ecx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  _QWORD *v77; // rax
  _QWORD **v78; // r12
  _QWORD **v79; // r13
  _QWORD *v80; // rdx
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  _QWORD *v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rax
  _QWORD *v94; // rax
  unsigned int v96; // [rsp+0h] [rbp-118h]
  int v97; // [rsp+0h] [rbp-118h]
  __int64 v98; // [rsp+0h] [rbp-118h]
  __int64 v100; // [rsp+8h] [rbp-110h]
  __int64 v102; // [rsp+18h] [rbp-100h]
  __int64 v103; // [rsp+18h] [rbp-100h]
  unsigned int v104; // [rsp+24h] [rbp-F4h] BYREF
  unsigned __int64 v105; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v106; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD *v107; // [rsp+38h] [rbp-E0h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-D8h] BYREF
  int v109; // [rsp+50h] [rbp-C8h]
  char v110; // [rsp+54h] [rbp-C4h]
  __int64 v111; // [rsp+58h] [rbp-C0h] BYREF

  v14 = *a6 >> 7;
  v104 = (unsigned __int16)v14;
  *(_BYTE *)(a5 + 720) = *(_BYTE *)(a5 + 720) & 0x7F | ((unsigned __int16)v14 >> 9 << 7);
  v15 = (__int64 *)sub_1E85170(*a1, a5);
  v105 = *v15;
  v16 = *(_QWORD *)&byte_8[v105 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v16 & 8) != 0 && *(_DWORD *)((char *)&qword_18 + (v16 & 0xFFFFFFFFFFFFFFF0LL) + 4) )
  {
    sub_168B9F0((__int64)ptr, a1, a3, 0x130Cu, 0);
    v56 = sub_1605D30((__int64)ptr, (__int64 *)&v105);
    v57 = v56;
    if ( *(_BYTE *)(v56 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v56 + 32), 2, 2u);
      sub_15F7200(ptr);
    }
    else
    {
      if ( *(_BYTE *)(v56 + 132) )
      {
        v73 = sub_168B9E0((_QWORD *)v56);
        v76 = *(_QWORD *)(v57 + 16);
        if ( v76 )
        {
          v103 = v73;
          v76 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v76 + 32LL))(v76);
          v73 = v103;
        }
        v107 = (_QWORD *)v76;
        v77 = sub_1587BC0(v73, (__int64 *)&v107, v72, v73, v74, v75);
        sub_AE9DF0((unsigned __int8 **)(*v77 + 32LL * *(unsigned int *)(v57 + 128) + 8), 2, 2u);
      }
      sub_15F7200(ptr);
    }
  }
  v17 = v104;
  v18 = *a1;
  if ( (v104 & 0xE34) == 0 )
  {
    v19 = (*(__int64 *)&byte_8[v105 & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1;
    if ( *(_BYTE *)(*(_QWORD *)(v18 + 232) + 208LL) >> 6 )
    {
      if ( v19 )
      {
        v71 = v104;
        if ( (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v105 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
              | *(_QWORD *)&byte_8[v105 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 4)
            & 3) == 1 )
        {
          BYTE1(v71) = BYTE1(v104) | 2;
          v17 = v71;
        }
      }
      goto LABEL_5;
    }
    if ( v19 )
    {
      v50 = ((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v105 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
            | *(_QWORD *)&byte_8[v105 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
          & 7;
      if ( (_DWORD)v50 )
      {
        if ( (_DWORD)v50 == 2 )
        {
          BYTE1(v17) = BYTE1(v104) | 4;
          goto LABEL_5;
        }
        if ( (unsigned int)v50 > 2 )
        {
          if ( (_DWORD)v50 == 3 )
          {
            BYTE1(v17) = BYTE1(v104) | 2;
            goto LABEL_5;
          }
          if ( (_DWORD)v50 == 4 )
            goto LABEL_5;
        }
        while ( (_DWORD)v50 != 1 )
          ;
        BYTE1(v17) = BYTE1(v104) | 8;
      }
    }
LABEL_5:
    v104 = v17;
  }
  v20 = *(_QWORD *)(v18 + 544);
  v21 = (v17 & 9) != 1;
  if ( !v20 )
    BUG();
  v102 = v20 - 48;
  if ( (*(_BYTE *)(v20 - 20) & 0x7F) == 0x17
    && ((v22 = *(_QWORD *)(v20 - 8), (v22 & 7) != 0) || (v22 & 0xFFFFFFFFFFFFFFF8LL) == 0) )
  {
    v28 = sub_1A95C30(a1, a2, a3, a4, a5, a9, a7, a8, a6[6], a10, a6[7], v21, &v104, *a6 >> 7, v105, v15, a11);
    if ( !v28 )
      return v28;
  }
  else
  {
    v23 = sub_1A93A20(
            a1,
            a2,
            v20 - 48,
            a3,
            a4,
            a5,
            a7,
            a8,
            a9,
            a6[6],
            a10,
            a6[7],
            v21,
            v17,
            *a6 >> 7,
            v105,
            v15,
            a11,
            0);
    v28 = v23;
    if ( a12 )
      sub_B90130((__int64)v23, a12, v24, v25, v26, v27);
  }
  sub_1A9B550(a1, v28->m128i_i8, a3, (unsigned __int64)&v104, ((*(_BYTE *)(v20 - 20) + 109) & 0x7Fu) <= 1);
  v33 = v28[3].m128i_u64[1];
  v34 = *(_QWORD *)&byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v34 & 8) != 0 )
  {
    v29 = v34 & 0xFFFFFFFFFFFFFFF0LL;
    v58 = (*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
         | *(_QWORD *)&byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6;
    v59 = v58 & 7;
    if ( (v58 & 7) != 0 && v28[1].m128i_i8[12] >= 0 )
    {
      v60 = *a1;
      v61 = v58 & 7;
      v62 = sub_1A92F00(v28[4].m128i_i16[4], v33, v29, v30, v31);
      if ( !v62 )
      {
        v63 = 1024;
        if ( v59 != 2 )
        {
          v63 = 512;
          v29 = 2048;
          if ( v59 != 3 )
            v63 = 2048;
        }
        v28[4].m128i_i16[4] |= v63;
        goto LABEL_13;
      }
      if ( v59 == v62 )
        goto LABEL_13;
      v96 = v62;
      sub_B88650((__int64)v28, 1);
      sub_168B9F0((__int64)ptr, (__int64 *)(v60 + 8), v28[1].m128i_u32[2], 0xBD2u, 0);
      v33 = (unsigned __int64)&v106;
      v106 = v28[2].m128i_i64[1];
      v69 = sub_15894B0((__int64)ptr, &v106);
      v70 = v69;
      if ( *(_BYTE *)(v69 + 120) )
      {
        v33 = (int)v96;
        sub_AE9DF0((unsigned __int8 **)(v69 + 32), (int)v96, 2u);
      }
      else
      {
        if ( !*(_BYTE *)(v69 + 132) )
        {
LABEL_77:
          sub_15F7200(ptr);
          goto LABEL_13;
        }
        v82 = sub_168B9E0((_QWORD *)v69);
        v85 = v96;
        v86 = v82;
        v87 = *(_QWORD **)(v70 + 16);
        if ( v87 )
        {
          v100 = v86;
          v87 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64, _QWORD, __int64, _QWORD))(*v87 + 32LL))(
                            v87,
                            &v106,
                            v86,
                            *v87,
                            v84,
                            v96);
          v86 = v100;
          v85 = v96;
        }
        v97 = v85;
        v107 = v87;
        v88 = sub_1587BC0(v86, (__int64 *)&v107, v86, v83, v84, v85);
        v33 = v97;
        sub_AE9DF0((unsigned __int8 **)(*v88 + 32LL * *(unsigned int *)(v70 + 128) + 8), v97, 2u);
      }
      if ( *(_BYTE *)(v70 + 120) )
      {
        v33 = v61;
        sub_AE9DF0((unsigned __int8 **)(v70 + 32), v61, 2u);
      }
      else if ( *(_BYTE *)(v70 + 132) )
      {
        v89 = sub_168B9E0((_QWORD *)v70);
        v93 = *(_QWORD *)(v70 + 16);
        if ( v93 )
        {
          v98 = v89;
          v93 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v93 + 32LL))(v93);
          v89 = v98;
        }
        v107 = (_QWORD *)v93;
        v94 = sub_1587BC0(v89, (__int64 *)&v107, v89, v90, v91, v92);
        v33 = v61;
        sub_AE9DF0((unsigned __int8 **)(*v94 + 32LL * *(unsigned int *)(v70 + 128) + 8), v61, 2u);
      }
      goto LABEL_77;
    }
  }
LABEL_13:
  v109 = 0;
  ptr[0] = &v111;
  ptr[1] = &word_10;
  v110 = 1;
  v35 = *(_BYTE *)(v20 - 20) & 0x7F;
  if ( v35 == 20 )
  {
    for ( i = v20 - 48; ; i = v40 )
    {
      v38 = sub_BAB630(i, v33, v29, v30, v31, v32);
      v40 = v38;
      if ( !v38 )
        break;
      v41 = v28[2].m128i_i64[1];
      v42 = (((unsigned __int16)v28[4].m128i_i16[4] >> 14) ^ 1) & 1;
      if ( (v41 & 7) != 0 )
      {
        v33 = 0;
        v37 = sub_BA7A80(v38, 0, v42, v30, v31, v32);
        if ( v37 )
        {
LABEL_20:
          v43 = *(_QWORD *)(v40 + 40) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v40 + 40) & 7) != 0 )
            v43 = 0;
          sub_1A9AEF0(a1, (__int64)v28, v37, v43, 0);
          v44 = *(_QWORD *)(i + 120);
          if ( v44 )
          {
            v45 = v44 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v45 )
              goto LABEL_31;
LABEL_24:
            if ( (*(_BYTE *)(v45 + 72) & 1) == 0 )
            {
              v30 = *(unsigned int *)(v45 + 24);
              v29 = *(_QWORD *)(v45 + 16);
              v46 = (_QWORD **)(v29 + 8 * v30);
              goto LABEL_26;
            }
            sub_BA8900(i);
            v29 = *(_QWORD *)(i + 120);
            v45 = v29 & 0xFFFFFFFFFFFFFFF8LL;
            v30 = *(_QWORD *)((v29 & 0xFFFFFFFFFFFFFFF8LL) + 16);
            v46 = (_QWORD **)(v30 + 8LL * *(unsigned int *)((v29 & 0xFFFFFFFFFFFFFFF8LL) + 24));
            if ( !v29 )
            {
LABEL_112:
              sub_A794E0((__int64 *)(*(_QWORD *)(i + 96) + 88LL), *(_QWORD *)(i + 96), v29, v30, v31, v32);
              v45 = *(_QWORD *)(i + 120) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v45 )
            {
LABEL_26:
              if ( (*(_BYTE *)(v45 + 72) & 1) != 0 )
              {
                sub_BA8900(i);
                v45 = *(_QWORD *)(i + 120) & 0xFFFFFFFFFFFFFFF8LL;
              }
              v47 = *(_QWORD ***)(v45 + 16);
            }
            else
            {
              v47 = nullptr;
            }
            while ( v46 != v47 )
            {
              v48 = *v47++;
              sub_1A9B360(*a1, (__int64)v28, v48, (__int64)ptr, v31, v32);
            }
            goto LABEL_31;
          }
          sub_A794E0((__int64 *)(*(_QWORD *)(i + 96) + 88LL), *(_QWORD *)(i + 96), v29, v30, v31, v32);
          v29 = *(_QWORD *)(i + 120);
          v45 = v29 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v29 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            goto LABEL_24;
          if ( v29 )
            goto LABEL_31;
          v46 = nullptr;
          goto LABEL_112;
        }
      }
      else
      {
        v33 = v41 & 0xFFFFFFFFFFFFFFF8LL;
        v37 = sub_BA7A80(v38, v33, v42, v30, v31, v32);
        if ( v37 )
          goto LABEL_20;
      }
    }
    v64 = *(_QWORD *)(v20 + 72);
    if ( !v64 )
    {
      sub_A794E0((__int64 *)(*(_QWORD *)(v20 + 48) + 88LL), *(_QWORD *)(v20 + 48), v39, v30, v31, v32);
      v64 = *(_QWORD *)(v20 + 72);
    }
    v29 = v64 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v64 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (*(_BYTE *)(v29 + 72) & 1) == 0 )
      {
        v65 = *(unsigned int *)(v29 + 48);
        if ( (_DWORD)v65 )
        {
LABEL_65:
          v29 = *(_QWORD *)(v29 + 40);
          v66 = v29 + 8 * v65;
          goto LABEL_66;
        }
        goto LABEL_116;
      }
      sub_BA8900(v102);
      v64 = *(_QWORD *)(v20 + 72);
      v29 = v64 & 0xFFFFFFFFFFFFFFF8LL;
      v65 = *(unsigned int *)((v64 & 0xFFFFFFFFFFFFFFF8LL) + 48);
      if ( (_DWORD)v65 )
        goto LABEL_65;
      if ( v64 )
      {
        if ( !v29 )
          goto LABEL_31;
        goto LABEL_116;
      }
      sub_A794E0((__int64 *)(*(_QWORD *)(v20 + 48) + 88LL), *(_QWORD *)(v20 + 48), v29, v30, v31, v32);
      v64 = *(_QWORD *)(v20 + 72);
      v29 = v64 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v64 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
LABEL_116:
        if ( (*(_BYTE *)(v29 + 72) & 1) != 0 )
        {
          sub_BA8900(v102);
          v64 = *(_QWORD *)(v20 + 72);
          v29 = v64 & 0xFFFFFFFFFFFFFFF8LL;
        }
        v81 = *(unsigned int *)(v29 + 24);
        v29 = *(_QWORD *)(v29 + 16);
        v66 = v29 + 8 * v81;
LABEL_66:
        if ( v64 )
          goto LABEL_67;
        goto LABEL_89;
      }
    }
    if ( v64 )
      goto LABEL_31;
    v66 = 0;
LABEL_89:
    sub_A794E0((__int64 *)(*(_QWORD *)(v20 + 48) + 88LL), *(_QWORD *)(v20 + 48), v29, v30, v31, v32);
    v64 = *(_QWORD *)(v20 + 72);
LABEL_67:
    v67 = v64 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v67 )
      goto LABEL_71;
    if ( (*(_BYTE *)(v67 + 72) & 1) != 0 )
    {
      sub_BA8900(v102);
      v29 = *(_QWORD *)(v20 + 72);
      v67 = v29 & 0xFFFFFFFFFFFFFFF8LL;
      v30 = *(unsigned int *)((v29 & 0xFFFFFFFFFFFFFFF8LL) + 48);
      if ( (_DWORD)v30 )
        goto LABEL_70;
      if ( !v29 )
      {
        sub_A794E0((__int64 *)(*(_QWORD *)(v20 + 48) + 88LL), *(_QWORD *)(v20 + 48), 0, v30, v31, v32);
        v67 = *(_QWORD *)(v20 + 72) & 0xFFFFFFFFFFFFFFF8LL;
      }
      if ( !v67 )
        goto LABEL_71;
    }
    else
    {
      v29 = *(unsigned int *)(v67 + 48);
      if ( (_DWORD)v29 )
      {
LABEL_70:
        v40 = *(_QWORD *)(v67 + 40);
LABEL_71:
        while ( v66 != v40 )
        {
          v68 = *(_QWORD **)v40;
          v40 += 8;
          sub_1A9B360(*a1, (__int64)v28, v68, (__int64)ptr, v31, v32);
        }
        goto LABEL_31;
      }
    }
    if ( (*(_BYTE *)(v67 + 72) & 1) != 0 )
    {
      sub_BA8900(v102);
      v67 = *(_QWORD *)(v20 + 72) & 0xFFFFFFFFFFFFFFF8LL;
    }
    v40 = *(_QWORD *)(v67 + 16);
    goto LABEL_71;
  }
  if ( v35 == 23 )
  {
    v51 = *(_QWORD *)(v20 - 8);
    if ( (v51 & 7) == 0 && (v51 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v52 = *(_QWORD ***)(v20 + 56);
      v29 = *(unsigned int *)(v20 + 64);
      v53 = &v52[v29];
      if ( v52 != v53 )
      {
        v54 = *(_QWORD ***)(v20 + 56);
        do
        {
          v55 = *v54++;
          sub_1A9B360(*a1, (__int64)v28, v55, (__int64)ptr, v31, v32);
        }
        while ( v53 != v54 );
      }
    }
    goto LABEL_31;
  }
  if ( !*(_QWORD *)(v20 + 56) )
    sub_A79820((__int64 *)(*(_QWORD *)(v20 + 48) + 88LL), *(_QWORD *)(v20 + 48), v29, v30, v31, v32);
  v29 = *(_QWORD *)(v20 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v29 )
  {
    v78 = *(_QWORD ***)(v29 + 8);
    v79 = &v78[*(unsigned int *)(v29 + 16)];
    goto LABEL_98;
  }
  if ( !*(_QWORD *)(v20 + 56) )
  {
    sub_A79820((__int64 *)(*(_QWORD *)(v20 + 48) + 88LL), *(_QWORD *)(v20 + 48), 0, v30, v31, v32);
    if ( (*(_QWORD *)(v20 + 56) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v78 = *(_QWORD ***)((*(_QWORD *)(v20 + 56) & 0xFFFFFFFFFFFFFFF8LL) + 8);
      v79 = nullptr;
LABEL_98:
      while ( v79 != v78 )
      {
        v80 = *v78++;
        sub_1A9B360(*a1, (__int64)v28, v80, (__int64)ptr, v31, v32);
      }
    }
  }
LABEL_31:
  sub_17A5800((__int64 *)*a1, (__int64)v28, v29, v30, v31, v32);
  if ( !v110 )
    free(ptr[0]);
  return v28;
}
