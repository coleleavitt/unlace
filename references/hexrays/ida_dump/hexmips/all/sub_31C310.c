unsigned __int64 __fastcall sub_31C310(__int64 a1, __int64 a2, char a3)
{
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int64 *v8; // rbp
  int v9; // ebx
  __int64 v10; // r12
  __int64 v11; // rdi
  int v12; // eax
  int v13; // edx
  int v14; // edx
  _DWORD *v15; // rax
  _DWORD *v16; // rcx
  __int64 tinfo_size; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // r14
  int v20; // eax
  char v21; // r14
  _QWORD *v22; // r8
  _QWORD *v23; // r14
  unsigned __int64 *v24; // rbx
  _QWORD *v25; // r15
  __int64 v26; // rdx
  const char *v27; // rsi
  const char *v28; // rdi
  _QWORD *v29; // rdx
  _QWORD *i; // rax
  unsigned __int64 *v31; // rdx
  char v32; // dl
  __int64 v33; // rdx
  _DWORD *v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // r10
  unsigned __int64 *v37; // rbx
  const char *v38; // r14
  const char *v39; // rbp
  unsigned __int64 *v40; // rax
  unsigned __int64 *v41; // r10
  char v42; // dl
  __int64 v43; // rax
  __m128i v44; // xmm1
  _BYTE *v45; // r8
  int v46; // eax
  unsigned __int64 *v47; // r8
  _BYTE *v48; // rax
  char v49; // dl
  unsigned __int64 v50; // r14
  unsigned __int64 v51; // r12
  __int64 v52; // rbx
  __int64 v53; // rbx
  _QWORD *v54; // rdi
  _QWORD *v55; // rdi
  __m128i v57; // xmm1
  int v58; // eax
  unsigned __int64 v59; // r13
  unsigned __int64 v60; // r12
  _QWORD *v61; // rbx
  __int64 v62; // rbx
  __int64 *v63; // rdi
  __int64 *v64; // rdi
  _QWORD *v65; // rax
  __int64 v66; // rdx
  _QWORD *v67; // rcx
  _QWORD *v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // rcx
  _QWORD *v71; // rdi
  _QWORD *v72; // rdi
  __int64 *v73; // rdi
  __int64 *v74; // rdi
  __int64 v75; // rdi
  __int64 v76; // rdi
  __int64 v77; // rdi
  __int64 v78; // [rsp+18h] [rbp-A0h]
  char v79; // [rsp+20h] [rbp-98h]
  unsigned __int64 *v80; // [rsp+20h] [rbp-98h]
  __int64 v81; // [rsp+28h] [rbp-90h]
  int v83; // [rsp+34h] [rbp-84h]
  char v84; // [rsp+34h] [rbp-84h]
  unsigned __int64 *v85; // [rsp+38h] [rbp-80h]
  _BYTE *v86; // [rsp+38h] [rbp-80h]
  __int64 v87; // [rsp+40h] [rbp-78h] BYREF
  __int64 v88; // [rsp+48h] [rbp-70h] BYREF
  __m128i v89; // [rsp+50h] [rbp-68h] BYREF
  __m128i v90; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v91; // [rsp+78h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 440);
  v91 = __readfsqword(0x28u);
  v7 = 0;
  if ( !v6 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
      return v91 - __readfsqword(0x28u);
    v22 = *(_QWORD **)(a1 + 872);
    if ( !v22 )
      return v91 - __readfsqword(0x28u);
    if ( !*(_QWORD *)(a1 + 880) )
      return v91 - __readfsqword(0x28u);
    v23 = (_QWORD *)v22[1];
    if ( v22 == v23 )
      return v91 - __readfsqword(0x28u);
    v81 = 0;
    v8 = nullptr;
    v24 = nullptr;
    v78 = 0;
    goto LABEL_36;
  }
  v6 = 0;
  v8 = nullptr;
  v9 = 0;
  v81 = 0;
  v78 = 0;
  do
  {
    v10 = *(_QWORD *)(a1 + 432) + 104 * v7;
    *(_QWORD *)(a2 + 64) = v10;
    if ( *(_QWORD *)(v10 + 40) > 1u )
    {
      v87 = v10 + 32;
      if ( !v8 )
      {
        v43 = qalloc(48);
        v8 = (unsigned __int64 *)v43;
        v44 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v43, (__m128i)(unsigned __int64)v43);
        if ( !v43 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)(v43 + 16) = 0;
        *(_OWORD *)(v43 + 32) = 0;
        *(__m128i *)(v43 + 8) = v44;
        *(_QWORD *)v43 = v43 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_56:
        v89.m128i_i64[0] = (__int64)v8;
        v89.m128i_i64[1] = v6;
        sub_1F1B10(&v89, v8, 1, &v87);
        goto LABEL_57;
      }
      if ( !v6 )
        goto LABEL_56;
      v36 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v36 & 2) != 0 )
      {
        v41 = v8;
        v42 = 1;
        goto LABEL_88;
      }
      v83 = v9;
      v37 = (unsigned __int64 *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
      v38 = *(const char **)(v10 + 32);
      v85 = v8;
      v39 = s1;
      v79 = 1;
      if ( *(_QWORD *)(v36 + 32) )
LABEL_78:
        v39 = (const char *)v37[3];
      if ( strcmp(v38, v39) < 0 )
      {
        while ( 1 )
        {
          v40 = (unsigned __int64 *)v37[1];
          v79 = 1;
          if ( (*(_BYTE *)v40 & 2) != 0 )
            break;
LABEL_82:
          v37 = v40;
          v39 = s1;
          if ( v40[4] )
            goto LABEL_78;
          if ( strcmp(v38, s1) >= 0 )
            goto LABEL_80;
        }
LABEL_85:
        v41 = v37;
        v8 = v85;
        v9 = v83;
LABEL_86:
        v42 = v79;
LABEL_88:
        v89.m128i_i64[0] = (__int64)v8;
        v89.m128i_i64[1] = v6;
        sub_1F1B10(&v89, v41, v42, &v87);
LABEL_57:
        v6 = v89.m128i_i64[1];
        v8 = (unsigned __int64 *)v89.m128i_i64[0];
        goto LABEL_5;
      }
LABEL_80:
      if ( strcmp(v39, v38) < 0 )
      {
        v40 = (unsigned __int64 *)v37[2];
        v79 = 0;
        if ( (*(_BYTE *)v40 & 2) == 0 )
          goto LABEL_82;
        goto LABEL_85;
      }
      v41 = v37;
      v8 = v85;
      v9 = v83;
      if ( !v41 )
        goto LABEL_86;
    }
    else if ( (*(_BYTE *)(a1 + 4) & 2) == 0 )
    {
      sub_3167A0(a2, 0xC6CBu);
    }
LABEL_5:
    v11 = *(_QWORD *)(v10 + 80);
    if ( !(_BYTE)v11 )
      sub_3167A0(a2, 0xC6CCu);
    if ( (unsigned int)verify_tinfo(v11) )
      sub_3167A0(a2, 0xC6CDu);
    v12 = *(_DWORD *)(v10 + 92);
    if ( v12 < 0 || (v13 = *(_DWORD *)(a1 + 64), v12 >= v13) && v13 > 0 )
      sub_3167A0(a2, 0xC6CFu);
    if ( (*(_BYTE *)(a1 + 4) & 0x40) != 0 )
    {
      v14 = *(_DWORD *)(v10 + 24);
      if ( (v14 & 0x100) != 0 )
      {
        if ( v12 )
          sub_3167A0(a2, 0xC6D0u);
        if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
        {
          v15 = *(_DWORD **)(a1 + 456);
          v16 = &v15[*(_QWORD *)(a1 + 464)];
          if ( v15 == v16 )
LABEL_223:
            sub_3167A0(a2, 0xC6D1u);
          while ( *v15 != v9 )
          {
            if ( v16 == ++v15 )
              goto LABEL_223;
          }
        }
      }
      else if ( (v14 & 0x8000) != 0 )
      {
        sub_3167A0(a2, 0xCAB0u);
      }
      if ( a3 && (BYTE1(v14) & 1) == ((v14 & 0x100000) != 0) )
        sub_3167A0(a2, 0xCB44u);
    }
    if ( *(int *)(v10 + 88) <= 0 )
      sub_3167A0(a2, 0xC861u);
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(v10 + 80), 0);
    v18 = *(int *)(v10 + 88);
    if ( v18 != tinfo_size )
    {
      if ( v18 >= get_tinfo_size(0, *(_QWORD *)(v10 + 80), 0) )
        sub_3167A0(a2, 0xC6D2u);
      v19 = *(int *)(v10 + 88);
      if ( v19 != get_tinfo_property(*(_QWORD *)(v10 + 80), 15) )
        sub_3167A0(a2, 0xCAD6u);
    }
    v20 = *(_DWORD *)v10;
    if ( !*(_DWORD *)v10 )
      sub_3167A0(a2, 0xC813u);
    if ( *(_DWORD *)(a1 + 480) == v9 )
    {
      if ( v20 == 2 )
      {
        v33 = *(_QWORD *)(v10 + 8);
        v34 = *(_DWORD **)v33;
        v35 = *(_QWORD *)v33 + 24LL * *(_QWORD *)(v33 + 8);
        if ( v34 != (_DWORD *)v35 )
        {
          while ( *v34 != 1 )
          {
            v34 += 6;
            if ( (_DWORD *)v35 == v34 )
              goto LABEL_61;
          }
          goto LABEL_60;
        }
      }
      else if ( v20 == 1 )
      {
LABEL_60:
        if ( (*(_BYTE *)(a1 + 5) & 0x10) == 0 )
          sub_3167A0(a2, 0xC6D3u);
      }
LABEL_61:
      if ( *(char *)(v10 + 24) >= 0 )
        sub_3167A0(a2, 0xC6D4u);
      goto LABEL_27;
    }
    if ( *(char *)(v10 + 24) < 0 )
      sub_3167A0(a2, 0xC6D5u);
LABEL_27:
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      goto LABEL_29;
    v21 = *(_BYTE *)a1 & 1;
    if ( !v21 || (unsigned __int8)sub_1EA1E0((unsigned __int8 *)a1) )
      goto LABEL_29;
    v88 = v10;
    if ( !v78 )
    {
      v78 = qalloc(48);
      v57 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v78, (__m128i)(unsigned __int64)v78);
      if ( !v78 )
      {
        v4 = __cxa_allocate_exception(8u);
        *v4 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v4,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_OWORD *)(v78 + 16) = 0;
      *(_OWORD *)(v78 + 32) = 0;
      *(__m128i *)(v78 + 8) = v57;
      *(_QWORD *)v78 = v78 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_68:
      v90.m128i_i64[0] = v78;
      v90.m128i_i64[1] = v81;
      sub_31C190(&v90, (unsigned __int64 *)v78, 1, &v88);
      goto LABEL_69;
    }
    if ( !v81 )
      goto LABEL_68;
    v45 = (_BYTE *)(*(_QWORD *)v78 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (*v45 & 2) != 0 )
    {
      v47 = (unsigned __int64 *)v78;
      v49 = 1;
      goto LABEL_119;
    }
    v84 = v21;
    while ( 1 )
    {
      v80 = (unsigned __int64 *)v45;
      v86 = v45 + 24;
      v46 = sub_32B790(v10, v45 + 24);
      v47 = v80;
      if ( v46 < 0 )
      {
        v84 = v21;
        v48 = (_BYTE *)v80[1];
        goto LABEL_97;
      }
      v58 = sub_32B790(v86, v10);
      v47 = v80;
      if ( v58 >= 0 )
        break;
      v84 = 0;
      v48 = (_BYTE *)v80[2];
LABEL_97:
      if ( (*v48 & 2) != 0 )
        goto LABEL_98;
      v45 = v48;
    }
    if ( v80 )
      goto LABEL_131;
LABEL_98:
    v49 = v84;
LABEL_119:
    v90.m128i_i64[0] = v78;
    v90.m128i_i64[1] = v81;
    sub_31C190(&v90, v47, v49, &v88);
LABEL_69:
    v81 = v90.m128i_i64[1];
    v78 = v90.m128i_i64[0];
    if ( !v32 )
LABEL_131:
      sub_3167A0(a2, 0xC6D6u);
LABEL_29:
    v7 = ++v9;
  }
  while ( (unsigned __int64)v9 < *(_QWORD *)(a1 + 440) );
  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
    goto LABEL_99;
  v22 = *(_QWORD **)(a1 + 872);
  if ( !v22 || !*(_QWORD *)(a1 + 880) )
  {
    if ( !v8 )
      goto LABEL_215;
    if ( v6 )
    {
      if ( v8 != (unsigned __int64 *)v8[1] )
        goto LABEL_52;
      if ( v78 )
        goto LABEL_100;
      goto LABEL_134;
    }
    goto LABEL_122;
  }
  v23 = (_QWORD *)v22[1];
  if ( !v8 )
  {
    if ( v22 != v23 )
    {
      v24 = nullptr;
      goto LABEL_36;
    }
LABEL_215:
    if ( !v78 )
      return v91 - __readfsqword(0x28u);
    v8 = nullptr;
    if ( !v81 )
    {
      qfree(v78);
      return v91 - __readfsqword(0x28u);
    }
LABEL_101:
    v50 = *(_QWORD *)v78;
    v51 = *(_QWORD *)v78 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v51 & 2) != 0 )
      goto LABEL_113;
    v52 = *(_QWORD *)(v51 + 8);
    if ( (*(_BYTE *)v52 & 2) != 0 )
    {
      v53 = *(_QWORD *)(v51 + 16);
      if ( (*(_BYTE *)v53 & 2) == 0 )
        goto LABEL_104;
LABEL_188:
      cleanup_argloc(v51 + 24);
      *(_QWORD *)v51 |= 2uLL;
LABEL_111:
      if ( v50 > 3 )
        qfree(v51);
      goto LABEL_113;
    }
    v71 = *(_QWORD **)(v52 + 8);
    if ( (*(_BYTE *)v71 & 2) != 0 )
    {
      v72 = *(_QWORD **)(v52 + 16);
      if ( (*(_BYTE *)v72 & 2) == 0 )
      {
LABEL_171:
        sub_316060(v72);
        goto LABEL_172;
      }
    }
    else
    {
      sub_316060(v71);
      v72 = *(_QWORD **)(v52 + 16);
      if ( (*(_BYTE *)v72 & 2) == 0 )
        goto LABEL_171;
LABEL_172:
      if ( (*(_BYTE *)v52 & 2) != 0 )
      {
LABEL_173:
        if ( v52 )
          qfree(v52);
        v53 = *(_QWORD *)(v51 + 16);
        if ( (*(_BYTE *)v53 & 2) == 0 )
        {
LABEL_104:
          v54 = *(_QWORD **)(v53 + 8);
          if ( (*(_BYTE *)v54 & 2) != 0 )
          {
            v55 = *(_QWORD **)(v53 + 16);
            if ( (*(_BYTE *)v55 & 2) == 0 )
            {
LABEL_106:
              sub_316060(v55);
              goto LABEL_107;
            }
          }
          else
          {
            sub_316060(v54);
            v55 = *(_QWORD **)(v53 + 16);
            if ( (*(_BYTE *)v55 & 2) == 0 )
              goto LABEL_106;
LABEL_107:
            if ( (*(_BYTE *)v53 & 2) != 0 )
            {
LABEL_108:
              if ( v53 )
                qfree(v53);
              goto LABEL_110;
            }
          }
          cleanup_argloc(v53 + 24);
          *(_QWORD *)v53 |= 2uLL;
          goto LABEL_108;
        }
LABEL_110:
        if ( (*(_BYTE *)v51 & 2) == 0 )
          goto LABEL_188;
        goto LABEL_111;
      }
    }
    cleanup_argloc(v52 + 24);
    *(_QWORD *)v52 |= 2uLL;
    goto LABEL_173;
  }
  if ( !v6 )
  {
    if ( v22 != v23 )
    {
LABEL_163:
      if ( !under_debugger )
        sub_37E160(51503);
LABEL_224:
      BUG();
    }
LABEL_122:
    if ( !v78 )
      goto LABEL_116;
    if ( !v81 )
    {
      qfree(v78);
      goto LABEL_116;
    }
    goto LABEL_101;
  }
  v24 = (unsigned __int64 *)v8[1];
  if ( v22 == v23 )
  {
    if ( v24 != v8 )
      goto LABEL_52;
    if ( v78 )
      goto LABEL_100;
    goto LABEL_115;
  }
LABEL_36:
  v25 = v22;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( v8 == v24 )
        goto LABEL_163;
      v26 = v23[4];
      if ( v24[4] )
      {
        v27 = (const char *)v24[3];
        v28 = s1;
        if ( v26 )
          goto LABEL_40;
LABEL_41:
        if ( strcmp(v28, v27) )
        {
          if ( !under_debugger )
            sub_37E160(51504);
          goto LABEL_224;
        }
      }
      else
      {
        v27 = s1;
        if ( v26 )
        {
LABEL_40:
          v28 = (const char *)v23[3];
          goto LABEL_41;
        }
      }
      if ( (*v23 & 2) == 0 )
      {
        v29 = (_QWORD *)v23[2];
        if ( (*(_BYTE *)v29 & 2) != 0 )
        {
          v65 = (_QWORD *)(*v23 & 0xFFFFFFFFFFFFFFFCLL);
          v66 = *v65;
          if ( (*v65 & 2) != 0 || (_QWORD *)v65[2] != v23 )
          {
LABEL_149:
            v23 = v65;
          }
          else
          {
            while ( 1 )
            {
              v23 = (_QWORD *)(v66 & 0xFFFFFFFFFFFFFFFCLL);
              v66 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v66 & 2) != 0 )
                break;
              v67 = v65;
              v65 = v23;
              if ( (_QWORD *)v23[2] != v67 )
                goto LABEL_149;
            }
          }
        }
        else
        {
          for ( i = (_QWORD *)v29[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
            v29 = i;
          v23 = v29;
        }
      }
      if ( (*v24 & 2) != 0 )
      {
LABEL_50:
        if ( v25 == v23 )
          goto LABEL_51;
        continue;
      }
      break;
    }
    v31 = (unsigned __int64 *)v24[2];
    if ( (*(_BYTE *)v31 & 2) == 0 )
    {
      do
      {
        v24 = v31;
        v31 = (unsigned __int64 *)v31[1];
      }
      while ( (*(_BYTE *)v31 & 2) == 0 );
      goto LABEL_50;
    }
    v68 = (_QWORD *)(*v24 & 0xFFFFFFFFFFFFFFFCLL);
    v69 = *v68;
    if ( (*v68 & 2) == 0 && (unsigned __int64 *)v68[2] == v24 )
    {
      do
      {
        v24 = (unsigned __int64 *)(v69 & 0xFFFFFFFFFFFFFFFCLL);
        v69 = *(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v69 & 2) != 0 )
          goto LABEL_50;
        v70 = v68;
        v68 = v24;
      }
      while ( (_QWORD *)v24[2] == v70 );
    }
    v24 = v68;
    if ( v25 != v23 )
      continue;
    break;
  }
LABEL_51:
  if ( v8 != v24 )
  {
LABEL_52:
    if ( !under_debugger )
      sub_37E160(51502);
    goto LABEL_224;
  }
LABEL_99:
  if ( v78 )
  {
LABEL_100:
    if ( v81 )
      goto LABEL_101;
LABEL_113:
    qfree(v78);
  }
  if ( !v8 )
    return v91 - __readfsqword(0x28u);
LABEL_115:
  if ( !v6 )
    goto LABEL_116;
LABEL_134:
  v59 = *v8;
  v60 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v60 & 2) != 0 )
    goto LABEL_116;
  v61 = *(_QWORD **)(v60 + 8);
  if ( (*(_BYTE *)v61 & 2) == 0 )
  {
    v73 = (__int64 *)v61[1];
    if ( (*(_BYTE *)v73 & 2) != 0 )
    {
      v74 = (__int64 *)v61[2];
      if ( (*(_BYTE *)v74 & 2) != 0 )
      {
LABEL_206:
        v76 = v61[3];
        if ( v76 )
        {
          v61[4] = 0;
          qfree(v76);
        }
        *v61 |= 2uLL;
LABEL_181:
        if ( v61 )
          qfree(v61);
        v62 = *(_QWORD *)(v60 + 16);
        if ( (*(_BYTE *)v62 & 2) != 0 )
        {
LABEL_143:
          if ( (*(_BYTE *)v60 & 2) == 0 )
            goto LABEL_185;
          goto LABEL_144;
        }
LABEL_137:
        v63 = *(__int64 **)(v62 + 8);
        if ( (*(_BYTE *)v63 & 2) != 0 )
        {
          v64 = *(__int64 **)(v62 + 16);
          if ( (*(_BYTE *)v64 & 2) != 0 )
            goto LABEL_212;
        }
        else
        {
          sub_316160(v63);
          v64 = *(__int64 **)(v62 + 16);
          if ( (*(_BYTE *)v64 & 2) != 0 )
            goto LABEL_140;
        }
        sub_316160(v64);
LABEL_140:
        if ( (*(_BYTE *)v62 & 2) != 0 )
        {
LABEL_141:
          if ( v62 )
            qfree(v62);
          goto LABEL_143;
        }
LABEL_212:
        v77 = *(_QWORD *)(v62 + 24);
        if ( v77 )
        {
          *(_QWORD *)(v62 + 32) = 0;
          qfree(v77);
        }
        *(_QWORD *)v62 |= 2uLL;
        goto LABEL_141;
      }
    }
    else
    {
      sub_316160(v73);
      v74 = (__int64 *)v61[2];
      if ( (*(_BYTE *)v74 & 2) != 0 )
        goto LABEL_180;
    }
    sub_316160(v74);
LABEL_180:
    if ( (*(_BYTE *)v61 & 2) != 0 )
      goto LABEL_181;
    goto LABEL_206;
  }
  v62 = *(_QWORD *)(v60 + 16);
  if ( (*(_BYTE *)v62 & 2) == 0 )
    goto LABEL_137;
LABEL_185:
  v75 = *(_QWORD *)(v60 + 24);
  if ( v75 )
  {
    *(_QWORD *)(v60 + 32) = 0;
    qfree(v75);
  }
  *(_QWORD *)v60 |= 2uLL;
LABEL_144:
  if ( v59 > 3 )
    qfree(v60);
LABEL_116:
  qfree(v8);
  return v91 - __readfsqword(0x28u);
}
