__int64 __fastcall sub_12B000(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rax
  char *v10; // rdx
  __int64 *v11; // rdi
  const char *v12; // r9
  const char *v13; // r8
  const char *v14; // rcx
  const char *v15; // rdx
  int v16; // eax
  __int64 v17; // r13
  __int64 v18; // r15
  __int64 *v19; // rdx
  char *v20; // rdi
  __int64 *v21; // r13
  char *v22; // r14
  size_t v23; // rax
  size_t v24; // r15
  size_t v25; // rdx
  const char *v26; // rsi
  __int64 *v27; // r13
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // r14
  unsigned __int64 v31; // rdx
  __int64 v32; // r14
  __int64 v33; // rbx
  __int64 *v34; // rdx
  __int64 v36; // r8
  int v37; // r13d
  __int64 *v38; // r14
  __int64 v39; // r10
  __int64 v40; // r15
  __int64 v41; // r8
  unsigned __int64 v42; // rdx
  __int64 v43; // rsi
  int v44; // eax
  unsigned __int64 v45; // rsi
  char *v46; // rdx
  size_t v47; // rax
  __int64 v48; // r8
  size_t v49; // r9
  size_t v50; // r11
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 *v53; // r14
  __int64 v54; // r8
  __int64 v55; // r10
  unsigned __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // r13
  unsigned __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rsi
  __m128i si128; // xmm0
  __int64 v69; // r15
  __int64 v70; // rax
  size_t v71; // [rsp+0h] [rbp-580h]
  __int64 v72; // [rsp+8h] [rbp-578h]
  __int64 v73; // [rsp+8h] [rbp-578h]
  __int64 v74; // [rsp+10h] [rbp-570h]
  __int64 v75; // [rsp+10h] [rbp-570h]
  size_t v76; // [rsp+10h] [rbp-570h]
  __int64 v77; // [rsp+18h] [rbp-568h]
  unsigned __int64 v78; // [rsp+18h] [rbp-568h]
  __int64 v79; // [rsp+18h] [rbp-568h]
  unsigned __int64 v80; // [rsp+20h] [rbp-560h]
  size_t v81; // [rsp+20h] [rbp-560h]
  unsigned __int64 v82; // [rsp+20h] [rbp-560h]
  unsigned __int64 v83; // [rsp+20h] [rbp-560h]
  _QWORD v84[2]; // [rsp+30h] [rbp-550h] BYREF
  _BYTE *v85; // [rsp+40h] [rbp-540h] BYREF
  __int128 v86; // [rsp+48h] [rbp-538h]
  __int64 *v87; // [rsp+60h] [rbp-520h]
  __int128 v88; // [rsp+68h] [rbp-518h]
  char *s; // [rsp+80h] [rbp-500h]
  __int128 v90; // [rsp+88h] [rbp-4F8h]
  char *v91; // [rsp+A0h] [rbp-4E0h]
  __int128 v92; // [rsp+A8h] [rbp-4D8h]
  int v93; // [rsp+C0h] [rbp-4C0h] BYREF
  __int128 v94; // [rsp+C8h] [rbp-4B8h]
  __int64 v95; // [rsp+D8h] [rbp-4A8h]
  __int128 v96; // [rsp+E0h] [rbp-4A0h]
  int v97; // [rsp+F0h] [rbp-490h]
  __int64 v98; // [rsp+F8h] [rbp-488h]
  int v99; // [rsp+100h] [rbp-480h]
  char v100; // [rsp+108h] [rbp-478h]
  unsigned __int64 v101; // [rsp+10Ch] [rbp-474h]
  __int64 v102; // [rsp+118h] [rbp-468h]
  __int128 v103; // [rsp+120h] [rbp-460h]
  __int64 v104; // [rsp+130h] [rbp-450h]
  char v105; // [rsp+138h] [rbp-448h]
  char src[1032]; // [rsp+140h] [rbp-440h] BYREF
  unsigned __int64 v107; // [rsp+548h] [rbp-38h]

  v107 = __readfsqword(0x28u);
  v86 = 0;
  v85 = nullptr;
  v1 = sub_1092C0(a1);
  if ( v1 )
  {
    sub_163430(v1, &v85);
    if ( (unsigned __int8)atob64() )
    {
      sub_94360((__int64 *)&v85);
      goto LABEL_4;
    }
    if ( !(unsigned __int8)eval_expr() )
    {
      v101 = 0xFFFFFFFEFFFFFFFFLL;
      v96 = 0;
      v93 = 0;
      *(_QWORD *)&v94 = 0;
      *((_QWORD *)&v94 + 1) = -1;
      v95 = 0;
      v97 = -1;
      v98 = 0;
      v99 = -1;
      v100 = 0;
      v102 = -1;
      v104 = 0xFFFFFFFFLL;
      v105 = 0;
      v103 = 0;
      if ( (unsigned int)sub_15EC40(v1, &v93, 2, v2, v3, v4) == 4 )
      {
        v62 = HIDWORD(v101);
        if ( !v105 || HIDWORD(v101) != -2 )
        {
LABEL_101:
          if ( v62 >= -1 && v102 )
          {
            *(_QWORD *)&v103 = 0;
            qfree();
          }
          goto LABEL_104;
        }
        if ( (_DWORD)v102 == -1 )
        {
LABEL_104:
          clear_tinfo_t();
          if ( v95 )
          {
            *(_QWORD *)&v96 = 0;
            qfree();
          }
          goto LABEL_4;
        }
      }
      else if ( v97 == -1 && (_DWORD)v101 == -1 )
      {
        goto LABEL_100;
      }
      sub_94360((__int64 *)&v85);
LABEL_100:
      v62 = HIDWORD(v101);
      goto LABEL_101;
    }
  }
  while ( 1 )
  {
LABEL_4:
    v88 = 0;
    v87 = nullptr;
    v5 = (__int64 *)qvector_reserve();
    v6 = v88;
    v87 = v5;
    if ( (unsigned __int64)v88 <= 4 )
    {
      v7 = 24 * v88;
      v8 = &v5[3 * v88];
      *v8 = 0;
      *(_OWORD *)(v8 + 1) = 0;
      if ( v6 != 4 )
      {
        v9 = v7 + 24;
        do
        {
          v10 = (char *)v87 + v9;
          v9 += 24;
          *(_QWORD *)v10 = 0;
          *(_OWORD *)(v10 + 8) = 0;
        }
        while ( v9 != 120 );
      }
    }
    *(_QWORD *)&v88 = 5;
    if ( (_QWORD)v86 )
    {
      if ( !*v85 )
        goto LABEL_10;
      LOBYTE(v93) = 2;
      v95 = 0;
      v94 = 0;
    }
    else
    {
      if ( !byte_251020 )
        goto LABEL_10;
      LOBYTE(v93) = 2;
      v95 = 0;
      v94 = 0;
    }
    s = nullptr;
    v90 = 0;
    v20 = (char *)&v93;
    if ( (unsigned __int8)eval_expr() )
    {
      v92 = 0;
      v91 = nullptr;
      print_idcv();
      v26 = s1;
      if ( (_QWORD)v92 )
        v26 = v91;
      sub_8F660((__int64)"%s\n", v26);
      if ( (_BYTE)v93 == 7 )
      {
LABEL_92:
        qstr2user();
LABEL_87:
        v20 = v91;
        if ( v91 )
        {
          *(_QWORD *)&v92 = 0;
          qfree();
        }
        goto LABEL_37;
      }
      if ( (char)v93 > 7 )
      {
        if ( (_BYTE)v93 != 9 )
          goto LABEL_91;
        v36 = v94;
        v37 = 8;
      }
      else
      {
        if ( (_BYTE)v93 != 2 )
        {
          if ( (_BYTE)v93 == 5 )
          {
            v27 = v87;
            print_idcv();
            if ( (unsigned __int64)v27[1] > 0xC9 )
            {
              v28 = *v27;
              v27[1] = 201;
              *(_BYTE *)(v28 + 200) = 0;
              v29 = v27[1];
              if ( v29 )
              {
                v30 = v29 + 34;
                v31 = v29 + 35;
                --v29;
              }
              else
              {
                v31 = 36;
                v30 = 35;
              }
              v67 = *v27;
              if ( v27[2] < v31 )
              {
                v83 = v31;
                v70 = qvector_reserve();
                *v27 = v70;
                v31 = v83;
                v67 = v70;
              }
              si128 = _mm_load_si128((const __m128i *)&xmmword_1D2560);
              v27[1] = v31;
              *(_BYTE *)(v67 + v30) = 0;
              v69 = *v27 + v29;
              *(__m128i *)v69 = si128;
              *(__m128i *)(v69 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D2570);
              *(_DWORD *)(v69 + 31) = 695693156;
            }
            goto LABEL_87;
          }
LABEL_91:
          if ( (unsigned int)idcv_string() )
            goto LABEL_87;
          goto LABEL_92;
        }
        v36 = (int)v94;
        v37 = 4;
      }
      v84[0] = v36;
      sub_1266B0(v87, "Hex: ", v37, 16);
      sub_1266B0(v87 + 3, "Decimal: ", v37, 10);
      sub_1266B0(v87 + 6, "Octal: ", v37, 8);
      v38 = v87;
      v39 = v84[0];
      v40 = v87[10];
      if ( v40 )
      {
        v41 = v40 + 7;
        v42 = v40 + 8;
        --v40;
      }
      else
      {
        v42 = 9;
        v41 = 8;
      }
      v43 = v87[9];
      if ( v87[11] < v42 )
      {
        v72 = v41;
        v75 = v84[0];
        v78 = v42;
        v64 = qvector_reserve();
        v38[9] = v64;
        v41 = v72;
        v43 = v64;
        v39 = v75;
        v42 = v78;
      }
      v38[10] = v42;
      *(_BYTE *)(v43 + v41) = 0;
      *(_QWORD *)(v40 + v38[9]) = 0x203A7972616E6942LL;
      if ( v37 == 4 )
      {
        v44 = 0;
        v45 = 0x80000000LL;
        v46 = src;
        do
        {
          *v46 = 48 - (((v45 & v39) == 0) - 1);
          if ( (~(_BYTE)v44 & 3) != 0 )
          {
            ++v46;
          }
          else
          {
            v46[1] = 32;
            v46 += 2;
          }
          if ( (~(_BYTE)v44 & 7) == 0 )
            *v46++ = 32;
          if ( (~(_BYTE)v44 & 0xF) == 0 )
            *v46++ = 32;
          ++v44;
          v45 >>= 1;
        }
        while ( v44 != 32 );
        *(v46 - 1) = 0;
      }
      else
      {
        b2a64();
      }
      v47 = strlen(src);
      v48 = v38[10];
      v49 = v47;
      v50 = v47;
      if ( v48 )
      {
        --v48;
        v50 = v47 + v48;
      }
      v51 = v38[9];
      v52 = v50 + 1;
      if ( v38[11] < v50 + 1 )
      {
        v71 = v47;
        v73 = v48;
        v76 = v50;
        v79 = v50 + 1;
        v66 = qvector_reserve();
        v38[9] = v66;
        v49 = v71;
        v51 = v66;
        v48 = v73;
        v50 = v76;
        v52 = v79;
      }
      v38[10] = v52;
      *(_BYTE *)(v51 + v50) = 0;
      memmove((void *)(v48 + v38[9]), src, v49);
      v53 = v87;
      v54 = v87[13];
      if ( v54 )
      {
        v55 = v54 + 11;
        v56 = v54 + 12;
        v57 = v87[12];
        --v54;
        if ( v87[14] >= v56 )
        {
LABEL_82:
          v53[13] = v56;
          *(_BYTE *)(v57 + v55) = 0;
          qmemcpy((void *)(v54 + v53[12]), "Character: '", 12);
          v84[1] = v84;
          format_charlit();
          v58 = v53[13];
          v59 = 2;
          if ( v58 )
            v59 = v58-- + 1;
          v60 = v53[12];
          if ( v53[14] < v59 )
          {
            v82 = v59;
            v65 = qvector_reserve();
            v53[12] = v65;
            v59 = v82;
            v60 = v65;
          }
          v53[13] = v59;
          *(_BYTE *)(v60 + v58) = 39;
          *(_BYTE *)(v53[12] + v58 + 1) = 0;
          goto LABEL_87;
        }
      }
      else
      {
        v57 = v87[12];
        v56 = 13;
        v55 = 12;
        if ( (unsigned __int64)v87[14] >= 0xD )
          goto LABEL_82;
      }
      v74 = v55;
      v77 = v54;
      v80 = v56;
      v61 = qvector_reserve();
      v53[12] = v61;
      v55 = v74;
      v57 = v61;
      v54 = v77;
      v56 = v80;
      goto LABEL_82;
    }
    v21 = v87;
    if ( (_QWORD)v90 && (v22 = s) != nullptr && (v20 = s, v23 = strlen(s), (v24 = v23) != 0) )
    {
      v20 = (char *)*v21;
      v25 = v23 + 1;
      if ( v21[2] < v23 + 1 )
      {
        v81 = v23 + 1;
        v63 = qvector_reserve();
        *v21 = v63;
        v25 = v81;
        v20 = (char *)v63;
      }
      v21[1] = v25;
      memmove(v20, v22, v24);
      *(_BYTE *)(*v21 + v24) = 0;
    }
    else
    {
      v21[1] = 0;
    }
LABEL_37:
    sub_153E00(v20);
    sub_153E30();
    if ( s )
    {
      *(_QWORD *)&v90 = 0;
      qfree();
    }
    free_idcv();
LABEL_10:
    v11 = v87;
    if ( batch )
      break;
    v12 = s1;
    if ( v87[10] )
      v12 = (const char *)v87[9];
    v13 = s1;
    if ( v87[7] )
      v13 = (const char *)v87[6];
    v14 = s1;
    if ( v87[4] )
      v14 = (const char *)v87[3];
    v15 = s1;
    if ( v87[1] )
      v15 = (const char *)*v87;
    v16 = sub_18BA90(1063, (unsigned int)&v85, (_DWORD)v15, (_DWORD)v14, (_DWORD)v13, (_DWORD)v12);
    v11 = v87;
    if ( !v16 )
      break;
    if ( v87 )
    {
      v17 = v88;
      if ( (_QWORD)v88 )
      {
        v18 = 0;
        do
        {
          v19 = &v11[3 * v18];
          if ( *v19 )
          {
            v19[1] = 0;
            qfree();
            v11 = v87;
          }
          ++v18;
        }
        while ( v17 != v18 );
      }
      *(_QWORD *)&v88 = 0;
      qfree();
    }
  }
  if ( v11 )
  {
    v32 = v88;
    if ( (_QWORD)v88 )
    {
      v33 = 0;
      do
      {
        v34 = &v11[3 * v33];
        if ( *v34 )
        {
          v34[1] = 0;
          qfree();
          v11 = v87;
        }
        ++v33;
      }
      while ( v32 != v33 );
    }
    *(_QWORD *)&v88 = 0;
    qfree();
  }
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree();
  }
  return 1;
}

