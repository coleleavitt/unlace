/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_862A0
// Address: 0x00000000000862A0

//----- (00000000000862A0) ----------------------------------------------------
__int64 __fastcall sub_862A0(__int64 a1, __int64 a2, int a3, _DWORD *a4, double a5, __m128 a6)
{
  char **v8; // rbx
  char *v9; // rax
  char i; // cl
  char *v11; // rcx
  char *v12; // rcx
  char v13; // al
  char v14; // dl
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rcx
  char *v19; // rax
  unsigned __int8 v20; // r13
  char *v21; // r14
  int v22; // eax
  __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  _QWORD *v25; // rax
  _BYTE *v26; // rbp
  char v27; // r14
  __int64 v28; // rcx
  char *v29; // rax
  int v30; // ecx
  __int64 v31; // rsi
  char *v33; // rax
  char v34; // cl
  unsigned __int8 v35; // al
  char *v36; // rax
  char v37; // cl
  char v38; // al
  __int64 v39; // rdi
  void *v40; // rax
  char *v41; // rbp
  char v42; // al
  char v43; // r14
  __int64 v44; // rbp
  char *v45; // rax
  char *v46; // rax
  char v47; // r12
  __int64 v48; // rax
  char *v49; // rax
  __int64 v50; // rax
  __int64 v51; // r14
  char *v52; // rax
  __int64 v53; // rsi
  unsigned __int8 v54; // al
  char *v55; // rax
  char v56; // cl
  unsigned __int8 v57; // al
  char v58; // cl
  unsigned __int8 v59; // al
  char *v60; // rdx
  int v61; // r14d
  __int64 v62; // r12
  int v63; // esi
  int v64; // eax
  unsigned __int64 v65; // r14
  char *v66; // rbp
  char *v67; // rbp
  bool v68; // si
  char v69; // dl
  char v70; // r13
  char *v71; // rax
  int v72; // r14d
  __int64 v73; // rax
  int v74; // edi
  bool v75; // zf
  int v76; // eax
  char v77; // bp
  unsigned __int8 v78; // bp
  __int64 v79; // rcx
  __int64 v80; // r14
  char *j; // r15
  char v82; // bp
  unsigned __int8 v83; // bp
  char *v84; // rax
  unsigned __int8 v85; // bl
  __int64 v86; // rdx
  _BYTE *v87; // rcx
  __int64 v88; // rsi
  char v89; // al
  char *v90; // rbp
  int v91; // eax
  char v92; // al
  char **v93; // r14
  size_t v94; // rbx
  char *v95; // rax
  unsigned __int8 v96; // r12
  __int64 v97; // rcx
  __int64 v99; // [rsp+8h] [rbp-60h]
  char *v100; // [rsp+8h] [rbp-60h]
  unsigned int v101; // [rsp+8h] [rbp-60h]
  char *v102; // [rsp+8h] [rbp-60h]
  bool v103; // [rsp+17h] [rbp-51h]
  unsigned __int8 *src; // [rsp+18h] [rbp-50h]
  _BYTE *v105; // [rsp+20h] [rbp-48h]
  char v106; // [rsp+2Ch] [rbp-3Ch]
  __int64 v107; // [rsp+30h] [rbp-38h]
  int v108; // [rsp+30h] [rbp-38h]

  v8 = (char **)(a1 + 8);
  v99 = a3;
  v107 = a1 + 56;
  v9 = *(char **)(a1 + 8);
  for ( i = *(_BYTE *)(a1 + 128); ; i = 1 )
  {
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 24) = 0;
    if ( i )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = v9;
          v13 = *v9;
          if ( v13 != 42 )
            break;
          v9 = v12 + 1;
          *v8 = v12 + 1;
          v14 = v12[1];
          if ( v14 == 41 )
          {
            if ( (*(_BYTE *)(a1 + 508) & 2) != 0 )
              goto LABEL_14;
          }
          else if ( v14 == 47 && (*(_BYTE *)(a1 + 508) & 1) != 0 )
          {
LABEL_14:
            *(_QWORD *)(a1 + 8) = v12 + 2;
            *(_BYTE *)(a1 + 128) = 0;
            goto LABEL_19;
          }
        }
        if ( !v13 )
          break;
        v11 = v12 + 1;
        *v8 = v11;
        v9 = v11;
      }
LABEL_15:
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 == v99 )
      {
        if ( !*(*v8 - 1) )
          --*v8;
        *(_WORD *)(a2 + 24) = 1;
        return 0;
      }
      v16 = *(_QWORD *)(a1 + 56);
      v17 = 56 * (v15 - 1);
      *(_QWORD *)a1 = *(_QWORD *)(v16 + v17 + 24);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v16 + v17 + 32);
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(v16 + v17 + 48);
      if ( v15 )
      {
        *(_QWORD *)(a1 + 64) = v15 - 1;
        sub_38490((char **)(v17 + v16));
      }
    }
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_19:
        v19 = *v8;
        do
        {
          do
          {
            *v8 = ++v19;
            v20 = *(v19 - 1);
          }
          while ( (unsigned __int8)(v20 - 9) < 5u );
        }
        while ( v20 == 32 );
        if ( a4 )
          *a4 = *(_DWORD *)(a1 + 288);
        switch ( v20 )
        {
          case 0u:
            goto LABEL_15;
          case 0x2Fu:
            v21 = *v8;
            if ( **v8 == 47 && (*(_BYTE *)(a1 + 508) & 4) != 0 )
              goto LABEL_15;
            goto LABEL_32;
          case 0x3Bu:
            if ( (*(_BYTE *)(a1 + 508) & 8) != 0 )
              goto LABEL_15;
            v21 = *v8;
LABEL_32:
            *(_QWORD *)(a1 + 24) = v21 - 1;
            goto LABEL_33;
        }
        if ( (char)v20 > -2 )
          break;
        v23 = *(_QWORD *)(a1 + 64);
        if ( !v23 )
        {
          v53 = (char)v20;
          goto LABEL_100;
        }
        v24 = v20 ^ 0x80LL;
        v25 = *(_QWORD **)(a1 + 56);
        if ( v25[7 * *(int *)(a1 + 80) + 1] > v24 )
        {
          v26 = *(_BYTE **)(v25[7 * *(int *)(a1 + 80)] + 24 * v24);
          if ( v26 )
          {
            if ( *v26 )
            {
              if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v23 + 1) )
              {
                v25 = qvector_reserve(v107, *(char **)(a1 + 56), v23 + 1, 0x38u);
                *(_QWORD *)(a1 + 56) = v25;
                v23 = *(_QWORD *)(a1 + 64);
              }
              v18 = 7 * v23;
              a5 = 0.0;
              *(_OWORD *)&v25[v18] = 0;
              v25[v18 + 2] = 0;
              ++*(_QWORD *)(a1 + 64);
              v25[v18 + 3] = *(_QWORD *)a1;
              v25[v18 + 4] = *(_QWORD *)(a1 + 8);
              LODWORD(v25[v18 + 6]) = *(_DWORD *)(a1 + 80);
              v25[v18 + 5] = 0;
              *(_DWORD *)(a1 + 80) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 56LL * *(int *)(a1 + 80) + 48);
              *(_QWORD *)(a1 + 8) = v26;
              *(_QWORD *)a1 = v26;
            }
          }
        }
      }
      v21 = *(char **)(a1 + 8);
      *(_QWORD *)(a1 + 24) = v21 - 1;
      if ( (v20 & 0x80u) != 0 )
      {
        v27 = 0;
        goto LABEL_52;
      }
LABEL_33:
      if ( !isalpha(v20) )
        break;
      if ( v20 != 76 )
        goto LABEL_40;
      if ( *v21 == 39 )
      {
        *v8 = v21 + 1;
        v39 = a2;
        *(_BYTE *)(a2 + 40) = 1;
        goto LABEL_69;
      }
      if ( *v21 == 34 )
      {
        *v8 = v21 + 1;
        v38 = 1;
        v39 = a2;
        goto LABEL_76;
      }
LABEL_40:
      v22 = sub_86110(a1, 0, a2, a5, a6);
      if ( v22 != 1 )
      {
        if ( v22 != -1 )
          return 0;
        return get_qerrno();
      }
    }
    if ( v20 == 36 || v20 == 95 )
      goto LABEL_40;
    v27 = 1;
LABEL_52:
    if ( !__strchr_chk("?(),.[\\]`{};~@", v20, 15, a5, *(double *)a6.m128_u64) )
      break;
    v28 = a2;
    *(_WORD *)(a2 + 24) = v20;
    if ( v20 != 40 )
    {
      if ( v20 != 46 )
        return 0;
      v60 = *(char **)(a1 + 8);
      v61 = (unsigned __int8)*v60;
      v108 = *(_DWORD *)(a1 + 340);
      if ( (v108 & 1) == 0 )
        goto LABEL_130;
      if ( (v61 & 0x80u) != 0 )
        return 0;
      if ( (unsigned int)(v61 - 48) > 9
        || (v105 = (_BYTE *)(a1 + 340), v62 = (__int64)(v60 - 1), (unsigned __int64)(v60 - 1) > *(_QWORD *)a1)
        && ((v63 = (unsigned __int8)*(v60 - 2), (v63 & 0x80u) == 0)
         && (v100 = *(char **)(a1 + 8), v64 = isalnum(v63), v60 = v100, v28 = a2, v64)
         || (_BYTE)v63 == 95
         || (_BYTE)v63 == 36) )
      {
LABEL_130:
        if ( (_BYTE)v61 == 46 && v60[1] == 46 )
        {
          *v8 = v60 + 2;
          *(_WORD *)(v28 + 24) = 11868;
        }
        return 0;
      }
      goto LABEL_164;
    }
    v29 = *v8;
    if ( **v8 != 42 || (*(_BYTE *)(a1 + 508) & 2) == 0 )
      return 0;
LABEL_2:
    *(_BYTE *)(a1 + 128) = 1;
    v9 = v29 + 1;
    *(_QWORD *)(a1 + 8) = v9;
  }
  if ( __strchr_chk("!%&*+-/<=>^|:", v20, 14) )
  {
    *(_WORD *)(a2 + 24) = v20;
    v29 = *v8;
    v30 = **v8;
    if ( v30 == 61 )
    {
      *(_WORD *)(a2 + 24) = (v20 << 8) | 0x3D;
      ++*v8;
      return 0;
    }
    if ( v20 <= 0x3Eu && (v31 = 0x5400284000000000LL, _bittest64(&v31, v20)) || v20 == 124 )
    {
      if ( v30 == v20 )
      {
        *(_WORD *)(a2 + 24) = v20 | (v20 << 8);
        v71 = *v8 + 1;
        *v8 = v71;
        if ( (v20 | 2) == 0x3E && *v71 == 61 )
        {
          *(_WORD *)(a2 + 24) += 61;
          ++*v8;
        }
      }
      else if ( v20 == 45 && (_BYTE)v30 == 62 )
      {
        *(_WORD *)(a2 + 24) = 11582;
        ++*v8;
      }
      return 0;
    }
    if ( v20 != 47 || (_BYTE)v30 != 42 || (*(_BYTE *)(a1 + 508) & 1) == 0 )
      return 0;
    goto LABEL_2;
  }
  v39 = a2;
  if ( ((unsigned int)v20 - 48 > 9) | (unsigned __int8)v27 ^ 1 )
  {
    if ( v20 == 39 )
    {
LABEL_69:
      *(_WORD *)(v39 + 24) = 5;
      *(_QWORD *)(v39 + 32) = 0;
      v33 = *v8;
      v34 = **v8;
      if ( v34 == 39 || !v34 )
        return set_qerrno(0x1Au);
      *v8 = v33 + 1;
      v35 = *v33;
      if ( v35 == 92 )
      {
        v35 = back_char(v8);
        v39 = a2;
      }
      *(_QWORD *)(v39 + 32) = (*(_QWORD *)(v39 + 32) << 8) | v35;
      v36 = *v8;
      v37 = **v8;
      if ( !v37 )
        return set_qerrno(0x1Au);
      if ( v37 == 39 )
      {
        *v8 = v36 + 1;
        *(_QWORD *)(v39 + 32) = *(char *)(v39 + 32);
        return 0;
      }
      *v8 = v36 + 1;
      v54 = *v36;
      if ( v54 == 92 )
      {
        v54 = back_char(v8);
        v39 = a2;
      }
      *(_QWORD *)(v39 + 32) = (*(_QWORD *)(v39 + 32) << 8) | v54;
      v55 = *v8;
      v56 = **v8;
      if ( !v56 )
        return set_qerrno(0x1Au);
      if ( v56 != 39 )
      {
        *v8 = v55 + 1;
        v57 = *v55;
        if ( v57 == 92 )
        {
          v57 = back_char(v8);
          v39 = a2;
        }
        *(_QWORD *)(v39 + 32) = (*(_QWORD *)(v39 + 32) << 8) | v57;
        v55 = *v8;
        v58 = **v8;
        if ( !v58 )
          return set_qerrno(0x1Au);
        if ( v58 != 39 )
        {
          *v8 = v55 + 1;
          v59 = *v55;
          if ( v59 == 92 )
          {
            v59 = back_char(v8);
            v39 = a2;
          }
          *(_QWORD *)(v39 + 32) = (*(_QWORD *)(v39 + 32) << 8) | v59;
          v55 = *v8;
          if ( **v8 != 39 )
            return set_qerrno(0x1Au);
        }
      }
      *v8 = v55 + 1;
      return 0;
    }
    if ( v20 != 35 )
    {
      if ( v20 == 34 )
      {
        v38 = 0;
LABEL_76:
        *(_BYTE *)(v39 + 40) = v38;
        *(_WORD *)(v39 + 24) = 4;
        *(_QWORD *)(v39 + 8) = 0;
        if ( *(_QWORD *)(v39 + 16) <= 0x3FFu )
        {
          v40 = qvector_reserve(a2, *(char **)v39, 0x400u, 1u);
          v39 = a2;
          *(_QWORD *)a2 = v40;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v41 = *v8;
            v42 = **v8;
            if ( v42 == 92 )
              break;
            if ( v42 == 34 )
            {
              *v8 = v41 + 1;
              return 0;
            }
            if ( !v42 )
              return set_qerrno(0x18u);
            *v8 = v41 + 1;
            v43 = *v41;
            v44 = *(_QWORD *)(v39 + 8);
            if ( v44 )
              --v44;
            v45 = *(char **)v39;
            if ( *(_QWORD *)(v39 + 16) < (unsigned __int64)(v44 + 2) )
            {
              v45 = (char *)qvector_reserve(a2, v45, v44 + 2, 1u);
              v39 = a2;
              *(_QWORD *)a2 = v45;
            }
            *(_QWORD *)(v39 + 8) = v44 + 2;
            v45[v44] = v43;
LABEL_78:
            *(_BYTE *)(*(_QWORD *)v39 + v44 + 1) = 0;
          }
          v46 = v41 + 1;
          if ( (*(_BYTE *)(a1 + 340) & 0x10) == 0 )
          {
            *v8 = v46;
            v39 = a2;
            v47 = back_char(v8);
            v48 = *(_QWORD *)(a2 + 8);
            v44 = v48 - 1;
            if ( !v48 )
              v44 = 0;
            v49 = *(char **)a2;
            if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v44 + 2) )
            {
              v49 = (char *)qvector_reserve(a2, v49, v44 + 2, 1u);
              v39 = a2;
              *(_QWORD *)a2 = v49;
            }
            *(_QWORD *)(v39 + 8) = v44 + 2;
            v49[v44] = v47;
            goto LABEL_78;
          }
          if ( !*v46 )
            return set_qerrno(0x18u);
          v50 = *(_QWORD *)(v39 + 8);
          v51 = v50 - 1;
          if ( !v50 )
            v51 = 0;
          v52 = *(char **)v39;
          if ( *(_QWORD *)(v39 + 16) < (unsigned __int64)(v51 + 3) )
          {
            v52 = (char *)qvector_reserve(a2, v52, v51 + 3, 1u);
            v39 = a2;
            *(_QWORD *)a2 = v52;
          }
          *(_QWORD *)(v39 + 8) = v51 + 3;
          v52[v51 + 2] = 0;
          *(_WORD *)(*(_QWORD *)v39 + v51) = *(_WORD *)v41;
          *v8 += 2;
        }
      }
      goto LABEL_204;
    }
    v84 = *v8;
    v53 = **v8;
    if ( v53 > -2 )
    {
LABEL_204:
      v53 = (char)v20;
      goto LABEL_100;
    }
    if ( *(_QWORD *)(a1 + 64) )
    {
      *v8 = v84 + 1;
      v85 = *v84 ^ 0x80;
      *(_WORD *)(a2 + 24) = 4;
      *(_BYTE *)(a2 + 40) = 0;
      *(_QWORD *)(a2 + 8) = 0;
      if ( *(_QWORD *)(a2 + 16) <= 0x3FFu )
      {
        v39 = a2;
        *(_QWORD *)a2 = qvector_reserve(a2, *(char **)a2, 0x400u, 1u);
      }
      sub_86030(a1, v39, v85, *(_DWORD *)(a1 + 80));
      return 0;
    }
LABEL_100:
    set_error_data(0, v53);
    return set_qerrno(0x1Bu);
  }
  v60 = *(char **)(a1 + 8);
  v105 = (_BYTE *)(a1 + 340);
  v62 = (__int64)(v60 - 1);
  v108 = *(_DWORD *)(a1 + 340);
  if ( (v108 & 1) == 0 )
    goto LABEL_134;
LABEL_164:
  v102 = v60;
  v72 = 0;
  src = (unsigned __int8 *)v62;
  while ( 1 )
  {
    while ( 1 )
    {
      v73 = v62 + 1;
      do
      {
        v62 = v73;
        v74 = *(unsigned __int8 *)(v73 - 1);
        if ( (v74 & 0x80u) != 0 )
          goto LABEL_172;
        ++v73;
      }
      while ( (unsigned int)(v74 - 48) < 0xA );
      if ( (_BYTE)v74 != 46 )
        break;
      v75 = v72 == 0;
      v72 |= v72 == 0;
      if ( !v75 )
        goto LABEL_184;
    }
LABEL_172:
    v76 = toupper(v74) << 24;
    if ( v76 != 1157627904 )
      break;
    if ( (v72 & 2) != 0 )
      goto LABEL_184;
    v72 |= 2u;
    if ( *(_BYTE *)v62 == 43 || *(_BYTE *)v62 == 45 )
      ++v62;
  }
  v60 = v102;
  if ( !v72 )
  {
    v62 = (__int64)src;
LABEL_134:
    src = (unsigned __int8 *)v62;
    v65 = v20 - 48LL;
    LOBYTE(v62) = *v60;
    v101 = 10;
    if ( v20 != 48 )
      goto LABEL_138;
    v101 = 8;
    if ( (char)v62 > 97 )
    {
      if ( (char)v62 != 98 )
      {
        if ( (char)v62 != 120 )
          goto LABEL_138;
        goto LABEL_207;
      }
    }
    else if ( (char)v62 != 66 )
    {
      if ( (char)v62 != 88 )
      {
LABEL_138:
        v66 = v60;
        goto LABEL_139;
      }
LABEL_207:
      v66 = v60 + 1;
      *v8 = v60 + 1;
      v62 = v60[1];
      if ( v62 < 0 || !isxdigit((unsigned __int8)v62) )
      {
        set_error_data(0, v62);
        ++*v8;
        return set_qerrno(0x14u);
      }
      v101 = 16;
LABEL_140:
      v67 = v66 + 1;
      do
      {
        if ( !isxdigit((unsigned __int8)v62) )
          break;
        *v8 = v67;
        if ( (unsigned __int8)v62 > 0x39u && v101 == 10
          || (unsigned __int8)v62 > 0x37u && v101 == 8
          || (unsigned __int8)v62 > 0x31u && v101 == 2 )
        {
          goto LABEL_215;
        }
        if ( (unsigned __int8)v62 >= 0x3Au )
        {
          if ( (unsigned __int8)v62 > 0x60u )
            LOBYTE(v62) = v62 - 32;
          LOBYTE(v62) = v62 - 7;
        }
        v65 = (unsigned __int8)v62 + v101 * v65 - 48;
        LOBYTE(v62) = *v67++;
      }
      while ( (v62 & 0x80u) == 0LL );
      v66 = v67 - 1;
LABEL_151:
      v68 = v101 != 10;
      v69 = 1;
      v70 = 0;
LABEL_191:
      ++v66;
      while ( 1 )
      {
        if ( (char)v62 > 107 )
        {
          if ( (_BYTE)v62 != 108 )
          {
            if ( (_BYTE)v62 == 117 )
              goto LABEL_202;
LABEL_217:
            v103 = v68;
            v106 = v69;
            if ( tolower((unsigned __int8)v62) != 105 )
            {
              v86 = a2;
              v88 = v65;
              v87 = v105;
              if ( (v108 & 8) == 0 )
                goto LABEL_240;
              goto LABEL_230;
            }
            if ( *v66 == 54 )
            {
              v89 = 1;
              v86 = a2;
              v87 = v105;
              v88 = v65;
              if ( v66[1] != 52 )
                goto LABEL_239;
LABEL_236:
              *v8 = v66 + 2;
              LOBYTE(v62) = v66[2];
              v70 = v89;
              if ( (v108 & 8) != 0 )
                goto LABEL_230;
LABEL_240:
              v92 = 0;
            }
            else
            {
              if ( *v66 == 51 )
              {
                v86 = a2;
                v87 = v105;
                v88 = v65;
                if ( v66[1] == 50 )
                {
                  v89 = 0;
                  goto LABEL_236;
                }
              }
              else
              {
                v86 = a2;
                v87 = v105;
                v88 = v65;
              }
LABEL_239:
              if ( (v108 & 8) == 0 )
                goto LABEL_240;
LABEL_230:
              if ( (v70 & 1) != 0 )
                goto LABEL_246;
              if ( (unsigned __int64)v88 <= 0x7FFFFFFF && v106 )
              {
                v92 = 0;
                v86 = a2;
                v88 = v65;
                goto LABEL_241;
              }
              v88 = v65;
              v86 = a2;
              if ( HIDWORD(v65) || (v92 = 1, !v103) )
              {
LABEL_246:
                *(_BYTE *)(v86 + 40) = v106 ^ 1 | (v88 < 0);
LABEL_247:
                *(_QWORD *)(v86 + 48) = v88;
                *(_WORD *)(v86 + 24) = 8;
                if ( (*v87 & 2) == 0 )
                  goto LABEL_248;
LABEL_250:
                if ( (v62 & 0x80u) != 0LL || !isalnum((unsigned __int8)v62) )
                {
                  v96 = v62 - 34;
                  if ( v96 > 0x3Du )
                    goto LABEL_248;
                  v97 = 0x2000000000001025LL;
                  if ( !_bittest64(&v97, v96) )
                    goto LABEL_248;
                }
                return set_qerrno(0x17u);
              }
            }
LABEL_241:
            *(_BYTE *)(v86 + 40) = v92;
            if ( (v70 & 1) != 0 )
              goto LABEL_247;
            *(_QWORD *)(v86 + 32) = v88;
            *(_WORD *)(v86 + 24) = 3;
            if ( (*v87 & 2) != 0 )
              goto LABEL_250;
LABEL_248:
            v93 = (char **)(a1 + 32);
            *(_QWORD *)(a1 + 40) = 0;
            v94 = *(_QWORD *)(a1 + 8) - (_QWORD)src;
            if ( *(_QWORD *)(a1 + 48) >= v94 + 1 )
            {
              v95 = *v93;
            }
            else
            {
              v95 = (char *)qvector_reserve(a1 + 32, *v93, v94 + 1, 1u);
              *v93 = v95;
            }
            *(_QWORD *)(a1 + 40) = v94 + 1;
            v95[v94] = 0;
            memmove(*(void **)(a1 + 32), src, v94);
            return 0;
          }
        }
        else if ( (_BYTE)v62 != 76 )
        {
          if ( (_BYTE)v62 != 85 )
            goto LABEL_217;
LABEL_202:
          *v8 = v66;
          LOBYTE(v62) = *v66;
          v68 = 1;
          v69 = 0;
          goto LABEL_191;
        }
        if ( (v70 & 1) != 0 )
          return set_qerrno(0x17u);
        *v8 = v66;
        LOBYTE(v62) = *v66++;
        if ( ((unsigned __int8)v62 | 0x20) == 0x6C )
        {
          *v8 = v66;
          LOBYTE(v62) = *v66;
          v70 = 1;
          goto LABEL_191;
        }
      }
    }
    v66 = v60 + 1;
    *v8 = v60 + 1;
    LOBYTE(v62) = v60[1];
    v101 = 2;
    if ( (v62 & 0xFE) != 0x30 )
    {
LABEL_215:
      set_error_data(0, (char)v62);
      return set_qerrno(0x14u);
    }
LABEL_139:
    if ( (v62 & 0x80u) != 0LL )
      goto LABEL_151;
    goto LABEL_140;
  }
  if ( v76 == 1275068416 || v76 == 1174405120 )
  {
    if ( (v77 = *(_BYTE *)v62, *(char *)v62 >= 0) && isalnum(*(unsigned __int8 *)v62)
      || (v78 = v77 - 36, v78 <= 0x3Bu) && (v79 = 0x800000000000401LL, _bittest64(&v79, v78)) )
    {
LABEL_184:
      v80 = 0x800000000000401LL;
      for ( j = (char *)src; ; ++j )
      {
        *v8 = j;
        v82 = *j;
        if ( *j < 0 || !isalnum((unsigned __int8)*j) )
        {
          v83 = v82 - 36;
          if ( v83 > 0x3Bu || !_bittest64(&v80, v83) )
            break;
        }
      }
      return set_qerrno(0x15u);
    }
  }
  *v8 = (char *)src;
  if ( (unsigned int)asctoreal(v8, a2 + 48, a5, a6) == 1 )
  {
    *(_WORD *)(a2 + 24) = 7;
    v90 = *v8;
    LOBYTE(v62) = **v8;
    v91 = toupper((unsigned __int8)v62) << 24;
    if ( v91 == 1275068416 || v91 == 1174405120 )
    {
      *v8 = v90 + 1;
      LOBYTE(v62) = v90[1];
    }
    if ( (*v105 & 2) == 0 )
      goto LABEL_248;
    goto LABEL_250;
  }
  return set_qerrno(0x16u);
}
// 33BA0: using guessed type __int64 __strchr_chk(const char *, ...);
