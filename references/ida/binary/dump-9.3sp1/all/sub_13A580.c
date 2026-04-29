unsigned __int64 __fastcall sub_13A580(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r11
  _DWORD *v9; // rax
  _DWORD *v10; // r10
  _DWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned __int64 *v21; // rdi
  __int64 *v22; // rsi
  _QWORD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int16 *v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // ebx
  int v29; // eax
  __int64 *v30; // rdi
  int v31; // ebp
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rsi
  __int64 v36; // r12
  unsigned int v37; // eax
  __int64 v38; // rcx
  signed int v39; // r14d
  signed int v40; // ebp
  unsigned int v41; // eax
  __int64 v42; // rbx
  char v43; // dl
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rdx
  int v53; // eax
  const char *v54; // rcx
  int v56; // eax
  __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rbx
  __int64 v60; // rbx
  __m128i v61; // xmm1
  __m128i v62; // xmm4
  __m128i v63; // xmm2
  __m128i v64; // xmm0
  int epi16; // r14d
  __int64 v66; // r12
  unsigned __int16 *i; // rbp
  int v68; // ecx
  int v69; // edx
  unsigned __int16 v70; // bx
  unsigned __int16 *j; // rbx
  __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // [rsp+0h] [rbp-198h]
  int v76; // [rsp+0h] [rbp-198h]
  char v77; // [rsp+8h] [rbp-190h]
  __int64 v78; // [rsp+10h] [rbp-188h]
  int v79; // [rsp+28h] [rbp-170h]
  int v80; // [rsp+2Ch] [rbp-16Ch]
  __int64 v81; // [rsp+30h] [rbp-168h]
  _QWORD *v82; // [rsp+38h] [rbp-160h]
  int v83; // [rsp+40h] [rbp-158h]
  char v84; // [rsp+46h] [rbp-152h]
  bool v85; // [rsp+47h] [rbp-151h]
  int v86; // [rsp+58h] [rbp-140h]
  unsigned int v87; // [rsp+5Ch] [rbp-13Ch]
  unsigned __int16 *src; // [rsp+60h] [rbp-138h]
  __int64 v89; // [rsp+68h] [rbp-130h]
  __int64 v90; // [rsp+78h] [rbp-120h]
  __int64 v91[2]; // [rsp+80h] [rbp-118h] BYREF
  __int64 v92; // [rsp+90h] [rbp-108h] BYREF
  __int128 v93; // [rsp+98h] [rbp-100h]
  unsigned __int16 *v94; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v95; // [rsp+B8h] [rbp-E0h]
  __int64 v96; // [rsp+C8h] [rbp-D0h]
  char v97; // [rsp+D0h] [rbp-C8h]
  unsigned int v98; // [rsp+D8h] [rbp-C0h]
  int v99; // [rsp+DCh] [rbp-BCh]
  char v100; // [rsp+E0h] [rbp-B8h]
  const char *v101; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v102; // [rsp+F8h] [rbp-A0h]
  __int64 v103; // [rsp+100h] [rbp-98h]
  __int64 v104; // [rsp+108h] [rbp-90h]
  __int64 v105; // [rsp+110h] [rbp-88h]
  __int128 v106; // [rsp+118h] [rbp-80h]
  __int64 v107; // [rsp+128h] [rbp-70h]
  __int64 *v108; // [rsp+130h] [rbp-68h]
  __int64 *v109; // [rsp+138h] [rbp-60h]
  __int64 v110; // [rsp+140h] [rbp-58h]
  __int64 v111; // [rsp+148h] [rbp-50h]
  int v112; // [rsp+150h] [rbp-48h]
  int v113; // [rsp+154h] [rbp-44h]
  unsigned __int64 v114; // [rsp+158h] [rbp-40h]

  v114 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 464);
  if ( (int)v1 > 0 )
  {
    v2 = *(_QWORD *)(a1 + 440);
    v4 = 0;
    v5 = *(_QWORD *)(a1 + 456);
    while ( 1 )
    {
      v6 = *(int *)(v5 + 4 * v4);
      if ( v6 >= v2 )
      {
LABEL_93:
        if ( !under_debugger )
          sub_383060(50442);
        goto LABEL_96;
      }
      v7 = *(_QWORD *)(a1 + 432) + 104 * v6;
      if ( *(_DWORD *)v7 == 2 )
      {
        v8 = *(_QWORD *)(v7 + 8);
        v9 = *(_DWORD **)v8;
        if ( (unsigned int)(**(_DWORD **)v8 - 3) <= 1 )
          break;
      }
LABEL_3:
      if ( (_DWORD)v1 - 1 == v4 )
        return v114 - __readfsqword(0x28u);
      if ( v1 == v4 + 1 )
        goto LABEL_93;
      ++v4;
    }
    v10 = &v9[6 * *(_QWORD *)(v8 + 8)];
    do
    {
      v9 += 6;
      if ( v9 == v10 )
        goto LABEL_3;
    }
    while ( *v9 != 1 );
    v11 = v9;
    src = (unsigned __int16 *)v9;
    v12 = v7;
    v13 = *(_QWORD *)(a1 + 1504);
    v14 = *(_QWORD *)(a1 + 1496);
    v89 = v7;
    v93 = 0;
    v91[0] = 0;
    v15 = *(_DWORD *)(v13 + 80);
    v16 = *(_QWORD *)(a1 + 144);
    v102 = v14;
    v103 = 0;
    v104 = 0;
    v105 = 0;
    v106 = 0;
    v17 = *((unsigned __int16 *)v11 + 8);
    v111 = v16;
    v18 = *(_QWORD *)(v14 + 112);
    v107 = v7;
    v101 = (const char *)&off_4DDC10;
    v108 = v91;
    v19 = *(unsigned int *)(v18 + 80);
    v109 = &v92;
    v112 = v17;
    v91[1] = 0;
    v92 = 0;
    v113 = sub_1C2F30(v12, v14, (unsigned int)(v17 - v19), v19, v17);
    v20 = *(_QWORD *)(a1 + 784);
    v110 = *((_QWORD *)v11 + 1) - v112;
    v90 = sub_1108E0(v20, 0);
    if ( !v90 )
    {
      if ( !under_debugger )
        sub_383060(50446);
      goto LABEL_96;
    }
    ++*(_DWORD *)(v90 + 24);
    v21 = *(unsigned __int64 **)v90;
    v97 = 1;
    v94 = nullptr;
    v96 = v113;
    v22 = (__int64 *)&v94;
    v98 = v15;
    v99 = -1;
    v100 = 1;
    v95 = 0;
    v23 = sub_104DF0(v21, (__int64)&v94);
    v26 = v94;
    v82 = v23;
    if ( v94 )
    {
      *(_QWORD *)&v95 = 0;
      qfree((__int64)v94);
    }
    if ( v82 && v82[1] )
    {
      v87 = 0;
      v27 = 0;
      v86 = 0;
      while ( 1 )
      {
        v28 = *(_DWORD *)(*v82 + 4 * v27);
        if ( v28 >= *(_DWORD *)(a1 + 64) )
          sub_1346B0(v26, v22, *v82, v82, v24, v25);
        v26 = (unsigned __int16 *)&v101;
        v22 = *(__int64 **)(*(_QWORD *)(a1 + 528) + 8LL * v28);
        v78 = (__int64)v22;
        v29 = sub_331E00(&v101, v22);
        if ( !(_QWORD)v93 || !v29 )
          goto LABEL_62;
        v30 = v91;
        v31 = sub_64960(v91, 0);
        v87 = sub_64BA0(v91, v31);
        if ( v31 + v87 != v112 )
          goto LABEL_43;
        v35 = v111;
        if ( v111 != *(_QWORD *)(a1 + 144) )
        {
          v30 = (__int64 *)a1;
          sub_232880(a1);
        }
        v83 = v110 + v31;
        v75 = *(_QWORD *)(a1 + 1496);
        v80 = v93 - 1;
        if ( (int)v93 - 1 >= 0 )
        {
          v85 = v28 != 1;
          v81 = 8LL * (unsigned int)(v93 - 1);
          while ( 1 )
          {
            v36 = *(_QWORD *)(v92 + v81);
            v30 = (__int64 *)(v36 + 64);
            if ( !(unsigned __int8)sub_32F330(v36 + 64, &v94) )
              break;
            v37 = (unsigned int)v82;
            v84 = v85 || v82[1] != 1;
            LOBYTE(v37) = v84;
            v38 = v37;
            v35 = v83;
            if ( v83 <= (__int64)v94 )
            {
              v30 = (__int64 *)v78;
              v35 = v36;
              sub_136E60(v78, v36, v84);
            }
            else
            {
              v32 = *(int *)(v36 + 68);
              v39 = *(_DWORD *)(v36 + 68);
              if ( v83 >= (__int64)v94 + v32 )
              {
                if ( !under_debugger )
                  sub_383060(51707);
                goto LABEL_96;
              }
              v40 = 0;
              v79 = v32 - v15;
              if ( (int)v32 > 0 )
              {
                do
                {
                  if ( v40 == v79 )
                  {
                    v42 = v36;
                  }
                  else
                  {
                    v42 = j__qalloc_or_throw(80, v35, v32, v38);
                    *(_OWORD *)(v42 + 8) = 0;
                    *(_QWORD *)(v42 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v42 + 40) = 0;
                    *(_QWORD *)(v42 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v42 + 56) = 0;
                    *(_QWORD *)(v42 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v42 + 72) = 0;
                    sub_1253A0(v42, v36);
                  }
                  v77 = sub_11CC50((unsigned __int8 *)(v36 + 48), v75);
                  v43 = sub_11CC50((unsigned __int8 *)(v36 + 64), v75);
                  v45 = *(_DWORD *)(v36 + 40);
                  if ( v77 == v43 )
                    v41 = v40 + v45;
                  else
                    v41 = v39 + v45 - v15 - v40;
                  *(_QWORD *)(v42 + 36) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(v41)).m128i_u64[0];
                  sub_126F10(v42 + 64, *(_QWORD *)(a1 + 1504), v40, v44);
                  *(_DWORD *)(v42 + 68) = v15;
                  if ( v83 > (__int64)v94 + v40 )
                  {
                    v30 = (__int64 *)v78;
                    v35 = v42;
                    sub_A3160(v78, (_QWORD *)v42, v36);
                  }
                  else
                  {
                    if ( v36 != v42 )
                      sub_A3160(v78, (_QWORD *)v42, v36);
                    v30 = (__int64 *)v78;
                    v35 = v42;
                    sub_136E60(v78, v42, v84);
                  }
                  v40 += v15;
                }
                while ( v39 > v40 );
              }
            }
            --v80;
            v81 -= 8;
            if ( v80 == -1 )
              goto LABEL_59;
          }
          if ( !under_debugger )
            sub_383060(51706);
LABEL_96:
          BUG();
        }
LABEL_59:
        v56 = *(_DWORD *)(v78 + 24);
        BYTE1(v56) &= ~2u;
        LOBYTE(v56) = v56 | 0x80;
        *(_DWORD *)(v78 + 24) = v56;
        if ( *(_DWORD *)(a1 + 64) <= 1u )
          sub_1346B0(v30, v35, v32, v78, v33, v34);
        v22 = (__int64 *)src;
        v57 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL);
        v58 = *(_DWORD *)(v57 + 24);
        BYTE1(v58) &= ~2u;
        LOBYTE(v58) = v58 | 0x80;
        *(_DWORD *)(v57 + 24) = v58;
        if ( v87 != src[8] )
          break;
        v26 = (unsigned __int16 *)v89;
        v59 = *((_QWORD *)src + 1) - (int)v87;
        cleanup_argloc();
        *(_DWORD *)(v89 + 24) |= 0x4000000u;
        *(_DWORD *)v89 = 1;
        *(_QWORD *)(v89 + 8) = v59;
LABEL_62:
        v27 = ++v86;
        if ( (unsigned __int64)v86 >= v82[1] )
          goto LABEL_44;
      }
      v60 = *((_QWORD *)src + 1) - (int)v87;
      cleanup_argloc();
      v61 = _mm_cvtsi32_si128(*((_DWORD *)src + 4));
      v63 = _mm_shufflelo_epi16(_mm_insert_epi16(v62, (unsigned __int16)v87, 0), 0);
      *((_QWORD *)src + 1) = v60;
      *(_DWORD *)src = 1;
      v64 = _mm_sub_epi16(v61, v63);
      epi16 = _mm_extract_epi16(v64, 0);
      *((_DWORD *)src + 4) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_unpacklo_epi16(v64, _mm_add_epi16(v61, v63)), 236));
      v66 = *(_QWORD *)(v89 + 8);
      for ( i = *(unsigned __int16 **)v66; ; i += 12 )
      {
        v68 = i[8];
        v69 = i[9];
        v70 = i[8];
        if ( epi16 < v68 + v69 )
          break;
      }
      if ( (unsigned __int16)v68 >= (unsigned __int16)epi16 )
      {
LABEL_72:
        for ( j = i; src != j; j += 12 )
          cleanup_argloc();
        v26 = i;
        v22 = (__int64 *)src;
        memmove(i, src, *(_QWORD *)v66 + 24LL * *(_QWORD *)(v66 + 8) - (_QWORD)src);
        *(_QWORD *)(v66 + 8) -= 0xAAAAAAAAAAAAAAABLL * (((char *)src - (char *)i) >> 3);
        goto LABEL_62;
      }
      if ( *(_DWORD *)i == 4 )
      {
        if ( epi16 - v68 != (unsigned __int16)v69 >> 1 )
        {
          if ( !under_debugger )
            sub_383060(51281);
          goto LABEL_96;
        }
        v76 = i[4];
        cleanup_argloc();
      }
      else
      {
        if ( *(_DWORD *)i != 3 )
        {
          if ( !under_debugger )
            sub_383060(51500);
          goto LABEL_96;
        }
        if ( !*(_BYTE *)(v75 + 145) )
          goto LABEL_71;
        v76 = i[4] + v68 + v69 - epi16;
        cleanup_argloc();
      }
      *(_DWORD *)i = 3;
      *((_DWORD *)i + 2) = v76;
LABEL_71:
      i += 12;
      *(i - 3) = epi16 - v70;
      goto LABEL_72;
    }
LABEL_43:
    v87 = 0;
LABEL_44:
    sub_104E10(v90);
    v101 = (const char *)&unk_4EBEE0;
    if ( v105 )
    {
      *(_QWORD *)&v106 = 0;
      qfree(v105);
    }
    qfree(v103);
    if ( v92 )
    {
      *(_QWORD *)&v93 = 0;
      qfree(v92);
    }
    v46 = v91[0];
    qfree(v91[0]);
    if ( v87 )
    {
      v50 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0x100) != 0 )
      {
        v51 = *(unsigned int *)(a1 + 64);
        if ( !(_DWORD)v51 )
          sub_1346B0(v46, v87, v51, v47, v48, v49);
        v52 = **(_QWORD **)(a1 + 528);
        v53 = *(_DWORD *)(v52 + 24);
        BYTE1(v53) &= ~2u;
        LOBYTE(v53) = v53 | 0x80;
        *(_DWORD *)(v52 + 24) = v53;
      }
      else
      {
        BYTE1(v50) |= 1u;
        v72 = *(_QWORD *)(a1 + 168);
        v73 = *(_QWORD *)(a1 + 152);
        *(_DWORD *)a1 = v50;
        sub_18D650(a1, v73, v72);
        sub_139B20(a1);
        v74 = *(_QWORD *)(a1 + 784);
        if ( v74 )
          *(_DWORD *)(v74 + 48) = 63;
      }
      sub_2604A0(&v101, a1, v89, 1);
      v54 = s1;
      if ( v102 )
        v54 = v101;
      sub_66FA0(a1, 1u, (__int64)"fixed scattered arg %s\n", v54);
      if ( v101 )
      {
        v102 = 0;
        qfree((__int64)v101);
      }
    }
  }
  return v114 - __readfsqword(0x28u);
}
