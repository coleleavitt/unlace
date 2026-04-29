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
  _QWORD *v22; // rsi
  _QWORD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int16 *v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // ebx
  int v29; // eax
  _QWORD *v30; // rdi
  int v31; // ebp
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rsi
  __int64 v36; // r12
  signed int v37; // r14d
  signed int v38; // ebp
  unsigned int v39; // eax
  __int64 v40; // rbx
  char v41; // dl
  int v42; // eax
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rdx
  int v50; // eax
  const char *v51; // rcx
  int v53; // eax
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rbx
  __int64 v57; // rbx
  __m128i v58; // xmm1
  __m128i v59; // xmm4
  __m128i v60; // xmm2
  __m128i v61; // xmm0
  int epi16; // r14d
  __int64 v63; // r12
  unsigned __int16 *i; // rbp
  int v65; // ecx
  int v66; // edx
  unsigned __int16 v67; // bx
  unsigned __int16 *j; // rbx
  unsigned __int16 *v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // [rsp+0h] [rbp-198h]
  int v74; // [rsp+0h] [rbp-198h]
  char v75; // [rsp+8h] [rbp-190h]
  __int64 v76; // [rsp+10h] [rbp-188h]
  int v77; // [rsp+28h] [rbp-170h]
  int v78; // [rsp+2Ch] [rbp-16Ch]
  __int64 v79; // [rsp+30h] [rbp-168h]
  _QWORD *v80; // [rsp+38h] [rbp-160h]
  int v81; // [rsp+40h] [rbp-158h]
  char v82; // [rsp+46h] [rbp-152h]
  bool v83; // [rsp+47h] [rbp-151h]
  int v84; // [rsp+58h] [rbp-140h]
  unsigned int v85; // [rsp+5Ch] [rbp-13Ch]
  unsigned __int16 *src; // [rsp+60h] [rbp-138h]
  __int64 v87; // [rsp+68h] [rbp-130h]
  __int64 v88; // [rsp+78h] [rbp-120h]
  _QWORD v89[2]; // [rsp+80h] [rbp-118h] BYREF
  __int64 v90; // [rsp+90h] [rbp-108h] BYREF
  __int128 v91; // [rsp+98h] [rbp-100h]
  unsigned __int16 *v92; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v93; // [rsp+B8h] [rbp-E0h]
  __int64 v94; // [rsp+C8h] [rbp-D0h]
  char v95; // [rsp+D0h] [rbp-C8h]
  unsigned int v96; // [rsp+D8h] [rbp-C0h]
  int v97; // [rsp+DCh] [rbp-BCh]
  char v98; // [rsp+E0h] [rbp-B8h]
  const char *v99; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v100; // [rsp+F8h] [rbp-A0h]
  __int64 v101; // [rsp+100h] [rbp-98h]
  __int64 v102; // [rsp+108h] [rbp-90h]
  __int64 v103; // [rsp+110h] [rbp-88h]
  __int128 v104; // [rsp+118h] [rbp-80h]
  __int64 v105; // [rsp+128h] [rbp-70h]
  _QWORD *v106; // [rsp+130h] [rbp-68h]
  __int64 *v107; // [rsp+138h] [rbp-60h]
  __int64 v108; // [rsp+140h] [rbp-58h]
  __int64 v109; // [rsp+148h] [rbp-50h]
  int v110; // [rsp+150h] [rbp-48h]
  int v111; // [rsp+154h] [rbp-44h]
  unsigned __int64 v112; // [rsp+158h] [rbp-40h]

  v112 = __readfsqword(0x28u);
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
        return v112 - __readfsqword(0x28u);
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
    v87 = v7;
    v91 = 0;
    v89[0] = 0;
    v15 = *(_DWORD *)(v13 + 80);
    v16 = *(_QWORD *)(a1 + 144);
    v100 = v14;
    v101 = 0;
    v102 = 0;
    v103 = 0;
    v104 = 0;
    v17 = *((unsigned __int16 *)v11 + 8);
    v109 = v16;
    v18 = *(_QWORD *)(v14 + 112);
    v105 = v7;
    v99 = (const char *)&off_4DDC10;
    v106 = v89;
    v19 = *(unsigned int *)(v18 + 80);
    v107 = &v90;
    v110 = v17;
    v89[1] = 0;
    v90 = 0;
    v111 = sub_1C2F30(v12, v14, (unsigned int)(v17 - v19), v19, v17);
    v20 = *(_QWORD *)(a1 + 784);
    v108 = *((_QWORD *)v11 + 1) - v110;
    v88 = sub_1108E0(v20, 0);
    if ( !v88 )
    {
      if ( !under_debugger )
        sub_383060(50446);
      goto LABEL_96;
    }
    ++*(_DWORD *)(v88 + 24);
    v21 = *(unsigned __int64 **)v88;
    v95 = 1;
    v92 = nullptr;
    v94 = v111;
    v22 = &v92;
    v96 = v15;
    v97 = -1;
    v98 = 1;
    v93 = 0;
    v23 = sub_104DF0(v21, (__int64)&v92);
    v26 = v92;
    v80 = v23;
    if ( v92 )
    {
      *(_QWORD *)&v93 = 0;
      qfree(v92);
    }
    if ( v80 && v80[1] )
    {
      v85 = 0;
      v27 = 0;
      v84 = 0;
      while ( 1 )
      {
        v28 = *(_DWORD *)(*v80 + 4 * v27);
        if ( v28 >= *(_DWORD *)(a1 + 64) )
          sub_1346B0(v26, v22, *v80, v80, v24, v25);
        v26 = (unsigned __int16 *)&v99;
        v22 = *(_QWORD **)(*(_QWORD *)(a1 + 528) + 8LL * v28);
        v76 = (__int64)v22;
        v29 = sub_331E00(&v99, v22);
        if ( !(_QWORD)v91 || !v29 )
          goto LABEL_62;
        v30 = v89;
        v31 = sub_64960(v89, 0);
        v85 = sub_64BA0(v89, v31);
        if ( v31 + v85 != v110 )
          goto LABEL_43;
        v35 = v109;
        if ( v109 != *(_QWORD *)(a1 + 144) )
        {
          v30 = (_QWORD *)a1;
          sub_232880(a1);
        }
        v81 = v108 + v31;
        v73 = *(_QWORD *)(a1 + 1496);
        v78 = v91 - 1;
        if ( (int)v91 - 1 >= 0 )
        {
          v83 = v28 != 1;
          v79 = 8LL * (unsigned int)(v91 - 1);
          while ( 1 )
          {
            v36 = *(_QWORD *)(v90 + v79);
            v30 = (_QWORD *)(v36 + 64);
            if ( !(unsigned __int8)sub_32F330(v36 + 64, &v92) )
              break;
            v82 = v83 || v80[1] != 1;
            v35 = v81;
            if ( v81 <= (__int64)v92 )
            {
              v30 = (_QWORD *)v76;
              v35 = v36;
              sub_136E60(v76, v36, v83 || v80[1] != 1);
            }
            else
            {
              v32 = *(int *)(v36 + 68);
              v37 = *(_DWORD *)(v36 + 68);
              if ( v81 >= (__int64)v92 + v32 )
              {
                if ( !under_debugger )
                  sub_383060(51707);
                goto LABEL_96;
              }
              v38 = 0;
              v77 = v32 - v15;
              if ( (int)v32 > 0 )
              {
                do
                {
                  if ( v38 == v77 )
                  {
                    v40 = v36;
                  }
                  else
                  {
                    v40 = j__qalloc_or_throw(80);
                    *(_OWORD *)(v40 + 8) = 0;
                    *(_QWORD *)(v40 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v40 + 40) = 0;
                    *(_QWORD *)(v40 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v40 + 56) = 0;
                    *(_QWORD *)(v40 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v40 + 72) = 0;
                    sub_1253A0(v40, v36);
                  }
                  v75 = sub_11CC50((unsigned __int8 *)(v36 + 48), v73);
                  v41 = sub_11CC50((unsigned __int8 *)(v36 + 64), v73);
                  v42 = *(_DWORD *)(v36 + 40);
                  if ( v75 == v41 )
                    v39 = v38 + v42;
                  else
                    v39 = v37 + v42 - v15 - v38;
                  *(_QWORD *)(v40 + 36) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(v39)).m128i_u64[0];
                  sub_126F10(v40 + 64, *(_QWORD *)(a1 + 1504), v38);
                  *(_DWORD *)(v40 + 68) = v15;
                  if ( v81 > (__int64)v92 + v38 )
                  {
                    v30 = (_QWORD *)v76;
                    v35 = v40;
                    sub_A3160(v76, (_QWORD *)v40, v36);
                  }
                  else
                  {
                    if ( v36 != v40 )
                      sub_A3160(v76, (_QWORD *)v40, v36);
                    v30 = (_QWORD *)v76;
                    v35 = v40;
                    sub_136E60(v76, v40, v82);
                  }
                  v38 += v15;
                }
                while ( v37 > v38 );
              }
            }
            --v78;
            v79 -= 8;
            if ( v78 == -1 )
              goto LABEL_59;
          }
          if ( !under_debugger )
            sub_383060(51706);
LABEL_96:
          BUG();
        }
LABEL_59:
        v53 = *(_DWORD *)(v76 + 24);
        BYTE1(v53) &= ~2u;
        LOBYTE(v53) = v53 | 0x80;
        *(_DWORD *)(v76 + 24) = v53;
        if ( *(_DWORD *)(a1 + 64) <= 1u )
          sub_1346B0(v30, v35, v32, v76, v33, v34);
        v22 = src;
        v54 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL);
        v55 = *(_DWORD *)(v54 + 24);
        BYTE1(v55) &= ~2u;
        LOBYTE(v55) = v55 | 0x80;
        *(_DWORD *)(v54 + 24) = v55;
        if ( v85 != src[8] )
          break;
        v26 = (unsigned __int16 *)v87;
        v56 = *((_QWORD *)src + 1) - (int)v85;
        cleanup_argloc(v87);
        *(_DWORD *)(v87 + 24) |= 0x4000000u;
        *(_DWORD *)v87 = 1;
        *(_QWORD *)(v87 + 8) = v56;
LABEL_62:
        v27 = ++v84;
        if ( (unsigned __int64)v84 >= v80[1] )
          goto LABEL_44;
      }
      v57 = *((_QWORD *)src + 1) - (int)v85;
      cleanup_argloc(src);
      v58 = _mm_cvtsi32_si128(*((_DWORD *)src + 4));
      v60 = _mm_shufflelo_epi16(_mm_insert_epi16(v59, (unsigned __int16)v85, 0), 0);
      *((_QWORD *)src + 1) = v57;
      *(_DWORD *)src = 1;
      v61 = _mm_sub_epi16(v58, v60);
      epi16 = _mm_extract_epi16(v61, 0);
      *((_DWORD *)src + 4) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_unpacklo_epi16(v61, _mm_add_epi16(v58, v60)), 236));
      v63 = *(_QWORD *)(v87 + 8);
      for ( i = *(unsigned __int16 **)v63; ; i += 12 )
      {
        v65 = i[8];
        v66 = i[9];
        v67 = i[8];
        if ( epi16 < v65 + v66 )
          break;
      }
      if ( (unsigned __int16)v65 >= (unsigned __int16)epi16 )
      {
LABEL_72:
        for ( j = i; src != j; j += 12 )
        {
          v69 = j;
          cleanup_argloc(v69);
        }
        v26 = i;
        v22 = src;
        memmove(i, src, *(_QWORD *)v63 + 24LL * *(_QWORD *)(v63 + 8) - (_QWORD)src);
        *(_QWORD *)(v63 + 8) -= 0xAAAAAAAAAAAAAAABLL * (((char *)src - (char *)i) >> 3);
        goto LABEL_62;
      }
      if ( *(_DWORD *)i == 4 )
      {
        if ( epi16 - v65 != (unsigned __int16)v66 >> 1 )
        {
          if ( !under_debugger )
            sub_383060(51281);
          goto LABEL_96;
        }
        v74 = i[4];
        cleanup_argloc(i);
      }
      else
      {
        if ( *(_DWORD *)i != 3 )
        {
          if ( !under_debugger )
            sub_383060(51500);
          goto LABEL_96;
        }
        if ( !*(_BYTE *)(v73 + 145) )
          goto LABEL_71;
        v74 = i[4] + v65 + v66 - epi16;
        cleanup_argloc(i);
      }
      *(_DWORD *)i = 3;
      *((_DWORD *)i + 2) = v74;
LABEL_71:
      i += 12;
      *(i - 3) = epi16 - v67;
      goto LABEL_72;
    }
LABEL_43:
    v85 = 0;
LABEL_44:
    sub_104E10(v88);
    v99 = (const char *)&unk_4EBEE0;
    if ( v103 )
    {
      *(_QWORD *)&v104 = 0;
      qfree(v103);
    }
    qfree(v101);
    if ( v90 )
    {
      *(_QWORD *)&v91 = 0;
      qfree(v90);
    }
    v43 = v89[0];
    qfree(v89[0]);
    if ( v85 )
    {
      v47 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0x100) != 0 )
      {
        v48 = *(unsigned int *)(a1 + 64);
        if ( !(_DWORD)v48 )
          sub_1346B0(v43, v85, v48, v44, v45, v46);
        v49 = **(_QWORD **)(a1 + 528);
        v50 = *(_DWORD *)(v49 + 24);
        BYTE1(v50) &= ~2u;
        LOBYTE(v50) = v50 | 0x80;
        *(_DWORD *)(v49 + 24) = v50;
      }
      else
      {
        BYTE1(v47) |= 1u;
        v70 = *(_QWORD *)(a1 + 168);
        v71 = *(_QWORD *)(a1 + 152);
        *(_DWORD *)a1 = v47;
        sub_18D650(a1, v71, v70);
        sub_139B20(a1);
        v72 = *(_QWORD *)(a1 + 784);
        if ( v72 )
          *(_DWORD *)(v72 + 48) = 63;
      }
      sub_2604A0(&v99, a1, v87, 1);
      v51 = s1;
      if ( v100 )
        v51 = v99;
      sub_66FA0(a1, 1u, (__int64)"fixed scattered arg %s\n", v51);
      if ( v99 )
      {
        v100 = 0;
        qfree(v99);
      }
    }
  }
  return v112 - __readfsqword(0x28u);
}
