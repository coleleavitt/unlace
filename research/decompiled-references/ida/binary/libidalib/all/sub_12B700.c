__int64 __fastcall sub_12B700(__int64 a1)
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
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 *v19; // rdx
  char *v20; // rdi
  __int64 *v21; // r14
  char *v22; // r13
  size_t v23; // rax
  size_t v24; // r15
  size_t v25; // rdx
  const char *v26; // rsi
  __int64 *v27; // r14
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // r13
  unsigned __int64 v31; // rdx
  __int64 v32; // r15
  __int64 v33; // rbx
  __int64 *v34; // rdx
  unsigned __int64 v36; // rcx
  __int64 *v37; // r15
  __int64 v38; // r14
  __int64 v39; // r8
  unsigned __int64 v40; // rdx
  __int64 v41; // rsi
  size_t v42; // rax
  __int64 v43; // r8
  size_t v44; // r13
  size_t v45; // r11
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 *v48; // r14
  __int64 v49; // r13
  __int64 v50; // r9
  unsigned __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // r13
  unsigned __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rsi
  __m128i v63; // xmm0
  __int64 v64; // r15
  __int64 v65; // rax
  __int64 v66; // [rsp+0h] [rbp-580h]
  size_t v67; // [rsp+8h] [rbp-578h]
  __int64 v68; // [rsp+8h] [rbp-578h]
  __int64 v69; // [rsp+10h] [rbp-570h]
  __int64 v70; // [rsp+10h] [rbp-570h]
  unsigned __int64 v71; // [rsp+10h] [rbp-570h]
  unsigned __int64 v72; // [rsp+18h] [rbp-568h]
  size_t v73; // [rsp+18h] [rbp-568h]
  unsigned __int64 v74; // [rsp+18h] [rbp-568h]
  unsigned __int64 v75; // [rsp+18h] [rbp-568h]
  unsigned __int64 v76[2]; // [rsp+20h] [rbp-560h] BYREF
  _BYTE *v77; // [rsp+30h] [rbp-550h] BYREF
  __int128 v78; // [rsp+38h] [rbp-548h]
  __int64 *v79; // [rsp+50h] [rbp-530h]
  __int128 v80; // [rsp+58h] [rbp-528h]
  char *s; // [rsp+70h] [rbp-510h]
  __int128 v82; // [rsp+78h] [rbp-508h]
  char *v83; // [rsp+90h] [rbp-4F0h]
  __int128 v84; // [rsp+98h] [rbp-4E8h]
  int v85; // [rsp+B0h] [rbp-4D0h] BYREF
  __int128 v86; // [rsp+B8h] [rbp-4C8h]
  __int64 v87; // [rsp+C8h] [rbp-4B8h]
  __int64 v88; // [rsp+D0h] [rbp-4B0h]
  __int128 v89; // [rsp+D8h] [rbp-4A8h]
  __m128i si128; // [rsp+E8h] [rbp-498h]
  int v91; // [rsp+F8h] [rbp-488h]
  char v92; // [rsp+100h] [rbp-480h]
  __int64 v93; // [rsp+108h] [rbp-478h]
  int v94; // [rsp+110h] [rbp-470h]
  __int64 v95; // [rsp+118h] [rbp-468h]
  __int128 v96; // [rsp+120h] [rbp-460h]
  __int64 v97; // [rsp+130h] [rbp-450h]
  char v98; // [rsp+138h] [rbp-448h]
  char src[1032]; // [rsp+140h] [rbp-440h] BYREF
  unsigned __int64 v100; // [rsp+548h] [rbp-38h]

  v100 = __readfsqword(0x28u);
  v78 = 0;
  v77 = nullptr;
  v1 = sub_109550(a1);
  if ( v1 )
  {
    sub_163D70(v1, &v77);
    if ( (unsigned __int8)atob64() )
    {
      sub_94440((__int64 *)&v77);
      goto LABEL_4;
    }
    if ( !(unsigned __int8)eval_expr() )
    {
      v89 = 0;
      v85 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_1D2FF0);
      *(_QWORD *)&v86 = 0;
      *((_QWORD *)&v86 + 1) = -1;
      LODWORD(v87) = -1;
      v88 = 0;
      v91 = -1;
      v92 = 0;
      v93 = -1;
      v94 = -2;
      v95 = -1;
      v97 = 0xFFFFFFFFLL;
      v98 = 0;
      v96 = 0;
      if ( (unsigned int)sub_15F500(v1, &v85, 2, v2, v3, v4) == 4 )
      {
        v57 = v94;
        if ( !v98 || v94 != -2 )
        {
LABEL_89:
          if ( v57 >= -1 && v95 )
          {
            *(_QWORD *)&v96 = 0;
            qfree();
          }
          goto LABEL_92;
        }
        if ( v95 == -1 )
        {
LABEL_92:
          clear_tinfo_t();
          if ( v88 )
          {
            *(_QWORD *)&v89 = 0;
            qfree();
          }
          goto LABEL_4;
        }
      }
      else if ( si128.m128i_i64[0] == -1 && v93 == -1 )
      {
        goto LABEL_88;
      }
      sub_94440((__int64 *)&v77);
LABEL_88:
      v57 = v94;
      goto LABEL_89;
    }
  }
  while ( 1 )
  {
LABEL_4:
    v80 = 0;
    v79 = nullptr;
    v5 = (__int64 *)qvector_reserve();
    v6 = v80;
    v79 = v5;
    if ( (unsigned __int64)v80 <= 4 )
    {
      v7 = 24 * v80;
      v8 = &v5[3 * v80];
      *v8 = 0;
      *(_OWORD *)(v8 + 1) = 0;
      if ( v6 != 4 )
      {
        v9 = v7 + 24;
        do
        {
          v10 = (char *)v79 + v9;
          v9 += 24;
          *(_QWORD *)v10 = 0;
          *(_OWORD *)(v10 + 8) = 0;
        }
        while ( v9 != 120 );
      }
    }
    *(_QWORD *)&v80 = 5;
    if ( (_QWORD)v78 )
    {
      if ( !*v77 )
        goto LABEL_10;
      LOBYTE(v85) = 2;
      v87 = 0;
      v86 = 0;
    }
    else
    {
      if ( !byte_252100 )
        goto LABEL_10;
      LOBYTE(v85) = 2;
      v87 = 0;
      v86 = 0;
    }
    v20 = (char *)&v85;
    v82 = 0;
    s = nullptr;
    if ( (unsigned __int8)eval_expr() )
    {
      v84 = 0;
      v83 = nullptr;
      print_idcv();
      v26 = s1;
      if ( (_QWORD)v84 )
        v26 = v83;
      sub_8F740((__int64)"%s\n", v26);
      if ( (_BYTE)v85 == 7 )
      {
LABEL_80:
        qstr2user();
LABEL_76:
        v20 = v83;
        if ( v83 )
        {
          *(_QWORD *)&v84 = 0;
          qfree();
        }
        goto LABEL_37;
      }
      if ( (char)v85 > 7 )
      {
        v36 = v86;
        if ( (_BYTE)v85 != 9 )
          goto LABEL_79;
      }
      else
      {
        if ( (_BYTE)v85 != 2 )
        {
          if ( (_BYTE)v85 == 5 )
          {
            v27 = v79;
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
              v62 = *v27;
              if ( v27[2] < v31 )
              {
                v75 = v31;
                v65 = qvector_reserve();
                *v27 = v65;
                v31 = v75;
                v62 = v65;
              }
              v63 = _mm_load_si128((const __m128i *)&xmmword_1D3580);
              v27[1] = v31;
              *(_BYTE *)(v62 + v30) = 0;
              v64 = *v27 + v29;
              *(__m128i *)v64 = v63;
              *(__m128i *)(v64 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D3590);
              *(_DWORD *)(v64 + 31) = 695693156;
            }
            goto LABEL_76;
          }
LABEL_79:
          if ( (unsigned int)idcv_string() )
            goto LABEL_76;
          goto LABEL_80;
        }
        v36 = v86;
      }
      v76[0] = v36;
      sub_126DA0(v79, "Hex: ", 16, v36);
      sub_126DA0(v79 + 3, "Decimal: ", 10, v76[0]);
      sub_126DA0(v79 + 6, "Octal: ", 8, v76[0]);
      v37 = v79;
      v38 = v79[10];
      if ( v38 )
      {
        v39 = v38 + 7;
        v40 = v38 + 8;
        --v38;
      }
      else
      {
        v40 = 9;
        v39 = 8;
      }
      v41 = v79[9];
      if ( v79[11] < v40 )
      {
        v68 = v39;
        v71 = v40;
        v61 = qvector_reserve();
        v37[9] = v61;
        v39 = v68;
        v41 = v61;
        v40 = v71;
      }
      v37[10] = v40;
      *(_BYTE *)(v41 + v39) = 0;
      *(_QWORD *)(v38 + v37[9]) = 0x203A7972616E6942LL;
      b2a64();
      v42 = strlen(src);
      v43 = v37[10];
      v44 = v42;
      v45 = v42;
      if ( v43 )
      {
        --v43;
        v45 = v42 + v43;
      }
      v46 = v37[9];
      v47 = v45 + 1;
      if ( v37[11] < v45 + 1 )
      {
        v66 = v43;
        v67 = v45;
        v70 = v45 + 1;
        v60 = qvector_reserve();
        v37[9] = v60;
        v43 = v66;
        v46 = v60;
        v45 = v67;
        v47 = v70;
      }
      v37[10] = v47;
      *(_BYTE *)(v46 + v45) = 0;
      memmove((void *)(v43 + v37[9]), src, v44);
      v48 = v79;
      v49 = v79[13];
      if ( v49 )
      {
        v50 = v49 + 11;
        v51 = v49 + 12;
        v52 = v79[12];
        --v49;
        if ( v79[14] >= v51 )
        {
LABEL_71:
          v48[13] = v51;
          *(_BYTE *)(v52 + v50) = 0;
          qmemcpy((void *)(v49 + v48[12]), "Character: '", 12);
          v76[1] = (unsigned __int64)v76;
          format_charlit();
          v53 = v48[13];
          v54 = 2;
          if ( v53 )
            v54 = v53-- + 1;
          v55 = v48[12];
          if ( v48[14] < v54 )
          {
            v74 = v54;
            v59 = qvector_reserve();
            v48[12] = v59;
            v54 = v74;
            v55 = v59;
          }
          v48[13] = v54;
          *(_BYTE *)(v55 + v53) = 39;
          *(_BYTE *)(v48[12] + v53 + 1) = 0;
          goto LABEL_76;
        }
      }
      else
      {
        v52 = v79[12];
        v51 = 13;
        v50 = 12;
        if ( (unsigned __int64)v79[14] >= 0xD )
          goto LABEL_71;
      }
      v69 = v50;
      v72 = v51;
      v56 = qvector_reserve();
      v48[12] = v56;
      v50 = v69;
      v52 = v56;
      v51 = v72;
      goto LABEL_71;
    }
    v21 = v79;
    if ( (_QWORD)v82 && (v22 = s) != nullptr && (v20 = s, v23 = strlen(s), (v24 = v23) != 0) )
    {
      v20 = (char *)*v21;
      v25 = v23 + 1;
      if ( v21[2] < v23 + 1 )
      {
        v73 = v23 + 1;
        v58 = qvector_reserve();
        *v21 = v58;
        v25 = v73;
        v20 = (char *)v58;
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
    sub_154600(v20);
    sub_154630();
    if ( s )
    {
      *(_QWORD *)&v82 = 0;
      qfree();
    }
    free_idcv();
LABEL_10:
    v11 = v79;
    if ( batch )
      break;
    v12 = s1;
    if ( v79[10] )
      v12 = (const char *)v79[9];
    v13 = s1;
    if ( v79[7] )
      v13 = (const char *)v79[6];
    v14 = s1;
    if ( v79[4] )
      v14 = (const char *)v79[3];
    v15 = s1;
    if ( v79[1] )
      v15 = (const char *)*v79;
    v16 = sub_18C660(1063, (unsigned int)&v77, (_DWORD)v15, (_DWORD)v14, (_DWORD)v13, (_DWORD)v12);
    v11 = v79;
    if ( !v16 )
      break;
    if ( v79 )
    {
      v17 = v80;
      if ( (_QWORD)v80 )
      {
        v18 = 0;
        do
        {
          v19 = &v11[3 * v18];
          if ( *v19 )
          {
            v19[1] = 0;
            qfree();
            v11 = v79;
          }
          ++v18;
        }
        while ( v17 != v18 );
      }
      *(_QWORD *)&v80 = 0;
      qfree();
    }
  }
  if ( v11 )
  {
    v32 = v80;
    if ( (_QWORD)v80 )
    {
      v33 = 0;
      do
      {
        v34 = &v11[3 * v33];
        if ( *v34 )
        {
          v34[1] = 0;
          qfree();
          v11 = v79;
        }
        ++v33;
      }
      while ( v32 != v33 );
    }
    *(_QWORD *)&v80 = 0;
    qfree();
  }
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    qfree();
  }
  return 1;
}

