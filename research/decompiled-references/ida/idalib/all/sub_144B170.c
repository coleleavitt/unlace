_BOOL8 __fastcall sub_144B170(__int64 a1, __m128i *a2, const __m128i *a3, __m128i a4, double a5)
{
  unsigned __int16 v8; // r12
  char v9; // al
  __int64 v10; // r13
  size_t v11; // rax
  unsigned int *v12; // rcx
  unsigned int *v13; // r12
  size_t v14; // r15
  int v15; // eax
  size_t v16; // rax
  size_t v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  char v21; // r15
  _BOOL4 v22; // r13d
  _BOOL4 v23; // r15d
  __int64 v24; // rdi
  __int64 v25; // rdx
  int v26; // eax
  unsigned __int16 v27; // r14
  char v28; // al
  __int64 v29; // r14
  unsigned __int16 v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r15
  __int64 *v36; // rax
  _QWORD *v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rcx
  _QWORD *v42; // rax
  _QWORD *v43; // rcx
  const __m128i *v44; // roff
  __int16 v45; // cx
  bool v46; // zf
  __int16 v47; // ax
  __int16 v48; // ax
  __int16 v49; // dx
  __int16 v50; // ax
  int v51; // esi
  __int16 v52; // dx
  __int32 v53; // eax
  unsigned __int64 v54; // rdi
  char v55; // al
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rsi
  __int64 *v59; // rax
  __int64 *v60; // rax
  const void *v61; // rcx
  unsigned int *v62; // rax
  __int64 v63; // rdi
  char v65; // al
  __int64 v66; // rsi
  char v67; // al
  __int64 v68; // rsi
  __int64 v69; // r8
  __int64 v70; // rax
  __int64 v71; // r14
  __int64 v72; // rsi
  int *v73; // rax
  char v74; // al
  size_t v75; // rax
  __int64 v76; // r15
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rsi
  __int64 v80; // rax
  unsigned __int8 *v81; // rsi
  __int64 v82; // rcx
  __int32 v83; // edx
  __m128i v84; // xmm0
  unsigned __int8 *v85; // rdi
  unsigned __int64 v86; // r8
  unsigned __int64 v87; // rsi
  unsigned __int64 v88; // rdx
  __m128i *v89; // rcx
  const __m128i *v90; // rax
  int v91; // edx
  __int64 v92; // rsi
  int v93; // r15d
  unsigned int v94; // eax
  int *v95; // rcx
  int v96; // edi
  unsigned int v97; // eax
  __int64 *v98; // rax
  int *v99; // rax
  char v100; // al
  __int64 v101; // rsi
  int v102; // r15d
  __int64 v103; // rdi
  __int64 v104; // rsi
  __int64 v105; // rcx
  int v106; // ecx
  int v107; // r8d
  int v108; // edi
  __int64 v109; // [rsp-10h] [rbp-E8h]
  __int64 v110; // [rsp-8h] [rbp-E0h]
  __int64 v111; // [rsp+0h] [rbp-D8h]
  unsigned __int16 v112; // [rsp+0h] [rbp-D8h]
  unsigned __int16 v113; // [rsp+0h] [rbp-D8h]
  unsigned __int16 v114; // [rsp+0h] [rbp-D8h]
  __int64 v115; // [rsp+0h] [rbp-D8h]
  int v116; // [rsp+0h] [rbp-D8h]
  unsigned __int16 v117; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v118; // [rsp+0h] [rbp-D8h]
  unsigned int *v119; // [rsp+8h] [rbp-D0h]
  __int64 i; // [rsp+10h] [rbp-C8h]
  unsigned int v121; // [rsp+1Ch] [rbp-BCh]
  unsigned int v122; // [rsp+2Ch] [rbp-ACh] BYREF
  __m128i v123; // [rsp+30h] [rbp-A8h]
  __int64 v124; // [rsp+40h] [rbp-98h]
  unsigned __int8 *v125[2]; // [rsp+50h] [rbp-88h] BYREF
  __int32 v126; // [rsp+60h] [rbp-78h]
  __m128i v127; // [rsp+68h] [rbp-70h]
  __int64 v128; // [rsp+78h] [rbp-60h]
  unsigned int v129; // [rsp+80h] [rbp-58h]
  unsigned int v130; // [rsp+84h] [rbp-54h]

  v8 = a2[1].m128i_u16[0];
  v9 = sub_141A630(v8);
  if ( v8 == 1 || v9 )
    BUG();
  v10 = a2->m128i_i64[1];
  if ( *(char *)(v10 + 4) < 0 )
    sub_145FA90(a1, a2);
  if ( (*(_BYTE *)(v10 + 5) & 1) != 0 && !sub_1021600(*(_QWORD *)(a1 + 88), a2->m128i_i32[0]) )
    sub_145FEC0(a1, a2);
  v11 = j__strlen("INFINITY");
  v13 = *(unsigned int **)(v10 + 16);
  v14 = v11;
  if ( v11 == *v13 )
  {
    if ( v11 )
    {
      v15 = memcmp(v13 + 4, "INFINITY", v11);
      v12 = v13 + 4;
      if ( v15 )
      {
        v75 = j__strlen("NAN");
        v61 = v13 + 4;
        v17 = v75;
        if ( v14 != v75 )
          goto LABEL_12;
        goto LABEL_76;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 46LL) & 1) != 0 )
    {
      sub_145CEF0(a1, a2, 0, v12);
      v13 = *(unsigned int **)(v10 + 16);
    }
  }
  v16 = j__strlen("NAN");
  v17 = *v13;
  if ( v16 != v17 )
    goto LABEL_12;
  v61 = v13 + 4;
  if ( *v13 )
  {
LABEL_76:
    if ( memcmp(v61, "NAN", v17) )
      goto LABEL_12;
  }
  if ( *(char *)(*(_QWORD *)(a1 + 56) + 45LL) < 0 )
    sub_145CEF0(a1, a2, 1, v61);
LABEL_12:
  v18 = a3[1].m128i_i64[0];
  if ( v18 )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(a3->m128i_i64[1] + 8 * v18 - 8) + 16LL);
  }
  else
  {
    v19 = 0;
    if ( (a3->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v60 = sub_13F1C60((__int64 *)(a3->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL));
      v19 = (__int64)v60;
      if ( v60 )
        v19 = v60[2];
    }
  }
  v20 = *(_QWORD *)(a1 + 1120);
  if ( v20 )
    *(_BYTE *)(v20 + 34) = 1;
  v21 = *(_BYTE *)(v19 + 36);
  v22 = (v21 & 0x10) != 0;
  if ( (v21 & 0x10) != 0 )
  {
    v63 = *(_QWORD *)(a1 + 1192);
    if ( v63 )
      *(double *)a4.m128i_i64 = (*(double (__fastcall **)(__int64, __m128i *, const __m128i *, unsigned __int64, _QWORD))(*(_QWORD *)v63 + 248LL))(
                                  v63,
                                  a2,
                                  a3,
                                  ((unsigned __int64)a2->m128i_u32[0] << 32) | a2->m128i_u32[0],
                                  0);
    sub_14456E0(a1, a2, *(double *)a4.m128i_i64, a5);
    return v22;
  }
  v122 = a2->m128i_i32[0];
  v23 = (v21 & 2) != 0;
  if ( v23 )
  {
    *(_BYTE *)(a1 + 544) |= 8u;
    *(_QWORD *)(a1 + 512) = a2;
    v62 = sub_1448A20(a1, a2->m128i_i64, v19, (__int64 *)&v122, a4, a5);
    *(_BYTE *)(a1 + 544) &= ~8u;
    v119 = v62;
    *(_QWORD *)(a1 + 512) = 0;
    if ( !v62 )
      return v23;
    ++*(_DWORD *)(a1 + 2336);
  }
  else
  {
    ++*(_DWORD *)(a1 + 2332);
    v119 = nullptr;
  }
  if ( (*(_BYTE *)(v19 + 37) & 2) != 0 && *(char *)(v19 + 36) >= 0 )
  {
    v91 = *(_DWORD *)v19;
    if ( (*(_BYTE *)(a1 + 2104) & 1) != 0 )
    {
      v92 = a1 + 2112;
      v93 = 31;
    }
    else
    {
      v102 = *(_DWORD *)(a1 + 2120);
      v92 = *(_QWORD *)(a1 + 2112);
      if ( !v102 )
        goto LABEL_21;
      v93 = v102 - 1;
    }
    LODWORD(v125[0]) = *(_DWORD *)v19;
    v116 = v91;
    v94 = v93 & sub_101AC30(v125);
    v95 = (int *)(v92 + 4LL * v94);
    v96 = *v95;
    if ( v116 != *v95 )
    {
      v106 = 1;
      if ( v96 == -1 )
        goto LABEL_21;
      while ( 1 )
      {
        v107 = v106 + 1;
        v94 = v93 & (v106 + v94);
        v95 = (int *)(v92 + 4LL * v94);
        v108 = *v95;
        if ( v116 == *v95 )
          break;
        v106 = v107;
        if ( v108 == -1 )
          goto LABEL_21;
      }
    }
    *v95 = -2;
    v97 = *(_DWORD *)(a1 + 2104);
    ++*(_DWORD *)(a1 + 2108);
    *(_DWORD *)(a1 + 2104) = (2 * (v97 >> 1) - 2) | v97 & 1;
  }
LABEL_21:
  *(_BYTE *)(v19 + 36) |= 0x80u;
  v24 = *(_QWORD *)(a1 + 1192);
  v121 = a2->m128i_i32[0];
  if ( v24 )
  {
    if ( (*(_BYTE *)(a1 + 544) & 8) != 0 )
    {
      v80 = a3[1].m128i_i64[0];
      v81 = (unsigned __int8 *)a2->m128i_i64[1];
      v130 = v122;
      v82 = *(unsigned int *)(a1 + 1208);
      v83 = a2[1].m128i_i32[0];
      v84 = _mm_loadu_si128(a3);
      v85 = (unsigned __int8 *)a2->m128i_i64[0];
      v124 = v80;
      v128 = v80;
      v125[1] = v81;
      v86 = *(_QWORD *)(a1 + 1200);
      v129 = v121;
      v87 = *(unsigned int *)(a1 + 1212);
      v126 = v83;
      v88 = v82 + 1;
      v123 = v84;
      v89 = (__m128i *)(v86 + 56 * v82);
      v90 = (const __m128i *)v125;
      v125[0] = v85;
      v127 = v84;
      if ( v88 > v87 )
      {
        v118 = v86;
        v103 = a1 + 1200;
        v104 = a1 + 1216;
        if ( v86 > (unsigned __int64)v125 || v89 <= (__m128i *)v125 )
        {
          sub_2237220(v103, v104, v88, 56);
          v89 = (__m128i *)(*(_QWORD *)(a1 + 1200) + 56LL * *(unsigned int *)(a1 + 1208));
          v90 = (const __m128i *)v125;
        }
        else
        {
          sub_2237220(v103, v104, v88, 56);
          v105 = *(_QWORD *)(a1 + 1200);
          v90 = (const __m128i *)((char *)v125 + v105 - v118);
          v89 = (__m128i *)(v105 + 56LL * *(unsigned int *)(a1 + 1208));
        }
      }
      *v89 = _mm_loadu_si128(v90);
      v89[1] = _mm_loadu_si128(v90 + 1);
      v89[2] = _mm_loadu_si128(v90 + 2);
      v89[3].m128i_i64[0] = v90[3].m128i_i64[0];
      ++*(_DWORD *)(a1 + 1208);
    }
    else
    {
      (*(void (__fastcall **)(__int64, __m128i *, const __m128i *, unsigned __int64, unsigned int *))(*(_QWORD *)v24 + 248LL))(
        v24,
        a2,
        a3,
        v121 | ((unsigned __int64)v122 << 32),
        v119);
      v25 = *(unsigned int *)(a1 + 1208);
      if ( (_DWORD)v25 )
      {
        v76 = *(_QWORD *)(a1 + 1200);
        v115 = v76 + 56 * v25;
        do
        {
          v77 = *(_QWORD *)(v76 + 48);
          v78 = v76 + 24;
          v79 = v76;
          v76 += 56;
          (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 1192) + 248LL))(
            *(_QWORD *)(a1 + 1192),
            v79,
            v78,
            v77,
            0);
        }
        while ( v115 != v76 );
        *(_DWORD *)(a1 + 1208) = 0;
      }
    }
  }
  if ( (a3->m128i_i8[0] & 4) != 0 )
  {
    sub_FC70B0((__int64)v125, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], 1372);
    v112 = a2[1].m128i_u16[0];
    v65 = sub_141A630(v112);
    if ( v112 == 1 || v65 )
      v66 = 0;
    else
      v66 = a2->m128i_i64[1];
    sub_AE9DF0(v125, v66, 5u);
    sub_AEA040((__int64)v125);
    sub_FC70B0((__int64)v125, *(_QWORD *)(a1 + 48), *(_DWORD *)v19, 1273);
    v113 = a2[1].m128i_u16[0];
    v67 = sub_141A630(v113);
    if ( v113 == 1 || v67 )
      v68 = 0;
    else
      v68 = a2->m128i_i64[1];
    sub_AE9DF0(v125, v68, 5u);
    sub_AEA040((__int64)v125);
    if ( (a3->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v98 = sub_13F1C60((__int64 *)(a3->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL));
      if ( !v98 )
        BUG();
      v99 = (int *)v98[2];
      if ( (int *)v19 != v99 )
      {
        sub_FC70B0((__int64)v125, *(_QWORD *)(a1 + 48), *v99, 1274);
        v117 = a2[1].m128i_u16[0];
        v100 = sub_141A630(v117);
        if ( v117 == 1 || v100 )
          v101 = 0;
        else
          v101 = a2->m128i_i64[1];
        sub_AE9DF0(v125, v101, 5u);
        sub_AEA040((__int64)v125);
      }
    }
    v69 = a3->m128i_i64[1];
    v70 = v69 + 8 * a3[1].m128i_i64[0];
    v71 = v69;
    for ( i = v70; i != v71; v71 += 8 )
    {
      v73 = *(int **)(*(_QWORD *)v71 + 16LL);
      if ( (int *)v19 != v73 )
      {
        sub_FC70B0((__int64)v125, *(_QWORD *)(a1 + 48), *v73, 1274);
        v114 = a2[1].m128i_u16[0];
        v74 = sub_141A630(v114);
        if ( v114 == 1 || v74 )
          v72 = 0;
        else
          v72 = a2->m128i_i64[1];
        sub_AE9DF0(v125, v72, 5u);
        sub_AEA040((__int64)v125);
      }
    }
  }
  v26 = *(_DWORD *)(v19 + 28);
  if ( v26 )
  {
    if ( v26 != 1 )
    {
LABEL_87:
      sub_1436EB0(a1);
      return v22;
    }
    v27 = a2[1].m128i_u16[0];
    v28 = sub_141A630(v27);
    if ( v27 == 1 || v28 )
      v111 = 0;
    else
      v111 = a2->m128i_i64[1];
    v29 = *(_QWORD *)(v19 + 16);
    v30 = *(_WORD *)(v29 + 16);
    if ( sub_141A630(v30) )
      goto LABEL_59;
    if ( v30 == 1 )
      goto LABEL_59;
    v35 = *(_QWORD *)(v29 + 8);
    if ( !v35 )
      goto LABEL_59;
    if ( (*(_BYTE *)(v35 + 4) & 0x10) != 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 120) + 24LL))(
        *(_QWORD *)(a1 + 120),
        *(_QWORD *)(v29 + 8));
    v36 = sub_14487D0((_QWORD *)a1, v35, v31, v32, v33, v34);
    if ( v36 && (*((_BYTE *)v36 + 36) & 0x40) == 0 && v111 != v35 )
      goto LABEL_87;
    if ( (*(_BYTE *)(v19 + 36) & 2) == 0 )
    {
LABEL_59:
      if ( v119 )
        sub_13EFF90(v119, a1);
      v44 = *(const __m128i **)(v19 + 16);
      v45 = a2[1].m128i_i16[1] & 2;
      v46 = (a2[1].m128i_i16[1] & 1) == 0;
      *a2 = _mm_loadu_si128(v44);
      a2[1].m128i_i32[0] = v44[1].m128i_i32[0];
      v47 = a2[1].m128i_i16[1];
      if ( v46 )
        v48 = v47 & 0xFFFE;
      else
        v48 = v47 | 1;
      v49 = v48;
      v50 = v48 & 0xFFFD;
      v51 = a2->m128i_i32[0];
      v52 = v49 | 2;
      if ( v45 )
        v50 = v52;
      a2[1].m128i_i16[1] = v50;
      v53 = sub_10209A0(*(_QWORD *)(a1 + 88), v51, v121, v122, a2->m128i_i32[1], 1, 0, 0);
      v54 = a2[1].m128i_u16[0];
      a2->m128i_i32[0] = v53;
      v55 = sub_141A630(v54);
      if ( (_WORD)v54 == 1 )
        goto LABEL_71;
      if ( v55 )
        goto LABEL_71;
      v58 = a2->m128i_i64[1];
      if ( !v58 )
        goto LABEL_71;
      v59 = sub_14487D0((_QWORD *)a1, v58, v109, v110, v56, v57);
      if ( !v59 )
        goto LABEL_71;
      if ( (*((_BYTE *)v59 + 36) & 0x40) != 0 )
      {
        a2[1].m128i_i16[1] |= 4u;
        if ( v59 != (__int64 *)v19 )
        {
LABEL_142:
          sub_FC70B0((__int64)v125, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], 1282);
          sub_AEA040((__int64)v125);
          goto LABEL_71;
        }
      }
      else
      {
        if ( v59 != (__int64 *)v19 )
        {
LABEL_71:
          ++*(_DWORD *)(a1 + 2344);
          return 1;
        }
        a2[1].m128i_i16[1] |= 4u;
      }
      if ( (*(_BYTE *)(v19 + 36) & 2) == 0 )
        goto LABEL_71;
      goto LABEL_142;
    }
    v37 = *(_QWORD **)(v19 + 8);
    v38 = 8LL * *(unsigned int *)(v19 + 24);
    v39 = &v37[(unsigned __int64)v38 / 8];
    v40 = v38 >> 3;
    v41 = v38 >> 5;
    if ( v41 )
    {
      if ( *v37 == v35 )
      {
        v42 = *(_QWORD **)(v19 + 8);
      }
      else
      {
        v42 = v37 + 1;
        if ( v37[1] != v35 )
        {
          v42 = v37 + 2;
          if ( v35 != v37[2] )
          {
            v42 = v37 + 3;
            v43 = &v37[4 * v41];
            if ( v35 != v37[3] )
            {
              while ( 1 )
              {
                v42 = v37 + 4;
                if ( v43 == v37 + 4 )
                {
                  v40 = v39 - v42;
                  goto LABEL_52;
                }
                if ( v35 == v37[4] )
                  goto LABEL_86;
                if ( v35 == v37[5] )
                {
                  v42 = v37 + 5;
                  goto LABEL_86;
                }
                if ( v35 == v37[6] )
                {
                  v42 = v37 + 6;
                  goto LABEL_86;
                }
                if ( v35 == v37[7] )
                  break;
                v37 += 4;
              }
              v42 = v37 + 7;
            }
          }
        }
      }
LABEL_86:
      if ( v39 != v42 )
        goto LABEL_87;
      goto LABEL_59;
    }
    v42 = *(_QWORD **)(v19 + 8);
LABEL_52:
    if ( v40 != 2 )
    {
      if ( v40 != 3 )
      {
        if ( v40 != 1 )
          goto LABEL_59;
        goto LABEL_58;
      }
      if ( v35 == *v42 )
        goto LABEL_86;
      ++v42;
    }
    if ( v35 == *v42 )
      goto LABEL_86;
    ++v42;
LABEL_58:
    if ( v35 != *v42 )
      goto LABEL_59;
    goto LABEL_86;
  }
  if ( v119 )
    sub_13EFF90(v119, a1);
  a2[1].m128i_i16[1] |= 0x10u;
  sub_14366E0(a1, (__int64)a2);
  ++*(_DWORD *)(a1 + 2344);
  return v22;
}
