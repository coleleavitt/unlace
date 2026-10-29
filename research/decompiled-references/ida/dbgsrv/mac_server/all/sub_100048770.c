/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100048770
// Address: 0x0000000100048770

//----- (0000000100048770) ----------------------------------------------------
__int64 __fastcall sub_100048770(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  char **v5; // r14
  _BYTE *v6; // rdi
  char v7; // al
  _BYTE *v8; // rax
  int v9; // edx
  __int64 result; // rax
  char *v11; // rax
  __int64 v12; // r13
  char *v13; // r12
  int v14; // eax
  __int64 v15; // rdi
  unsigned __int64 v16; // r13
  _QWORD *v17; // rax
  _BYTE *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  char *v23; // rdi
  int v24; // edx
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rdx
  void *v28; // rax
  char *v29; // r12
  int v30; // eax
  char v31; // r12
  __int64 v32; // rax
  bool v33; // cf
  __int64 v34; // rax
  __int64 v35; // r13
  _BYTE *v36; // rax
  char *v37; // rax
  char v38; // al
  char v39; // bl
  __int64 v40; // r13
  _BYTE *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r13
  _BYTE *v45; // rax
  char *v46; // rax
  unsigned __int8 v47; // al
  char *v48; // rax
  unsigned __int8 v49; // al
  char *v50; // rax
  unsigned __int8 v51; // al
  unsigned __int8 v52; // al
  char *v53; // rcx
  unsigned __int8 *v54; // rcx
  __int64 v55; // rdx
  char *v56; // rbx
  __int64 v57; // rsi
  int v58; // eax
  char v59; // al
  char *v60; // rcx
  __int64 v61; // rax
  char v62; // dl
  bool v63; // di
  unsigned __int8 *v64; // rcx
  __int64 v65; // rsi
  unsigned __int8 v66; // bl
  __int64 v67; // rax
  __int64 v68; // rcx
  unsigned __int64 v69; // rcx
  char *v70; // rcx
  __int64 v71; // r12
  char v72; // r8
  unsigned __int8 v73; // r8
  char v74; // cl
  char v75; // r13
  char v76; // al
  char *v77; // rax
  int v78; // ecx
  char v79; // cl
  char v80; // al
  __int64 v81; // rdx
  __int64 v82; // rcx
  bool v83; // cl
  __int64 v84; // rcx
  __int64 v85; // [rsp+8h] [rbp-58h]
  const void *v86; // [rsp+8h] [rbp-58h]
  char v87; // [rsp+14h] [rbp-4Ch]
  _DWORD *v88; // [rsp+18h] [rbp-48h]
  _BYTE *v89; // [rsp+18h] [rbp-48h]
  __int64 *v90; // [rsp+20h] [rbp-40h]
  unsigned __int64 v91; // [rsp+20h] [rbp-40h]
  char v92; // [rsp+2Ch] [rbp-34h]
  bool v93; // [rsp+2Ch] [rbp-34h]

  v5 = (char **)(a1 + 8);
  v90 = (__int64 *)(a1 + 56);
  v85 = a3;
  v6 = *(_BYTE **)(a1 + 8);
  v7 = *(_BYTE *)(a1 + 128);
  v88 = a4;
  while ( 2 )
  {
    *(_QWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 24) = 0;
    if ( (v7 & 1) != 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = v6;
          if ( *v6 != 42 )
            break;
          ++v6;
          *v5 = v8 + 1;
          v9 = (unsigned __int8)v8[1];
          if ( v9 == 47 )
          {
            if ( (*(_DWORD *)(a1 + 572) & 1) != 0 )
              goto LABEL_11;
          }
          else if ( v9 == 41 && (*(_DWORD *)(a1 + 572) & 2) != 0 )
          {
LABEL_11:
            *(_QWORD *)(a1 + 8) = v8 + 2;
            *(_BYTE *)(a1 + 128) = 0;
            goto LABEL_13;
          }
        }
        if ( !*v6 )
          break;
        *v5 = ++v6;
      }
LABEL_45:
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 != v85 )
      {
        v21 = *(_QWORD *)(a1 + 56);
        v22 = 56 * v20;
        *(_QWORD *)a1 = *(_QWORD *)(v21 + v22 - 32);
        *(_QWORD *)(a1 + 8) = *(_QWORD *)(v21 + v22 - 24);
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(v21 + v22 - 8);
        sub_100044BA0(v90);
        a4 = v88;
        goto LABEL_13;
      }
      if ( !*(*v5 - 1) )
        --*v5;
      *(_WORD *)(a2 + 24) = 1;
      return 0;
    }
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_13:
        v11 = *v5;
        do
        {
          do
          {
            *v5 = ++v11;
            v12 = (unsigned __int8)*(v11 - 1);
          }
          while ( (unsigned int)(v12 - 9) < 5 );
        }
        while ( (_DWORD)v12 == 32 );
        if ( a4 )
          *a4 = *(_DWORD *)(a1 + 288);
        if ( !v12 )
          goto LABEL_45;
        if ( (_DWORD)v12 == 47 )
        {
          v13 = *v5;
          if ( **v5 == 47 && (*(_BYTE *)(a1 + 572) & 4) != 0 )
            goto LABEL_45;
          goto LABEL_26;
        }
        if ( (_DWORD)v12 == 59 )
        {
          if ( (*(_BYTE *)(a1 + 572) & 8) != 0 )
            goto LABEL_45;
          v13 = *v5;
LABEL_26:
          *(_QWORD *)(a1 + 24) = v13 - 1;
          goto LABEL_27;
        }
        if ( (char)v12 > -2 )
          break;
        v15 = *(_QWORD *)(a1 + 64);
        if ( !v15 )
          goto LABEL_155;
        v16 = v12 & 0x7F;
        v17 = *(_QWORD **)(a1 + 56);
        if ( v17[7 * *(int *)(a1 + 80) + 1] > v16 )
        {
          v18 = *(_BYTE **)(v17[7 * *(int *)(a1 + 80)] + 24 * v16);
          if ( v18 )
          {
            if ( *v18 )
            {
              if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v15 + 1) )
              {
                v17 = qvector_reserve((__int64)v90, *(void **)(a1 + 56), v15 + 1, 0x38u);
                a4 = v88;
                *(_QWORD *)(a1 + 56) = v17;
                v15 = *(_QWORD *)(a1 + 64);
              }
              v19 = 7 * v15;
              *(_OWORD *)&v17[v19] = 0;
              v17[v19 + 2] = 0;
              ++*(_QWORD *)(a1 + 64);
              v17[v19 + 3] = *(_QWORD *)a1;
              v17[v19 + 4] = *(_QWORD *)(a1 + 8);
              LODWORD(v17[v19 + 6]) = *(_DWORD *)(a1 + 80);
              v17[v19 + 5] = 0;
              *(_DWORD *)(a1 + 80) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 56LL * *(int *)(a1 + 80) + 48);
              *(_QWORD *)(a1 + 8) = v18;
              *(_QWORD *)a1 = v18;
            }
          }
        }
      }
      v13 = *(char **)(a1 + 8);
      *(_QWORD *)(a1 + 24) = v13 - 1;
      if ( (v12 & 0x80u) != 0LL )
        break;
LABEL_27:
      if ( (_DefaultRuneLocale.__runetype[v12] & 0x100) == 0 )
      {
        if ( (_DWORD)v12 != 36 && (_DWORD)v12 != 95 )
        {
          v92 = 1;
          goto LABEL_47;
        }
        goto LABEL_12;
      }
      if ( (_BYTE)v12 != 76 )
        goto LABEL_12;
      v14 = (unsigned __int8)*v13;
      if ( v14 == 39 )
      {
        *v5 = v13 + 1;
        v27 = a2;
        *(_BYTE *)(a2 + 40) = 1;
        goto LABEL_87;
      }
      if ( v14 == 34 )
      {
        *v5 = v13 + 1;
        v26 = 1;
        v27 = a2;
        goto LABEL_63;
      }
LABEL_12:
      result = sub_1000484B0(a1, 0, a2);
      a4 = v88;
      if ( (_DWORD)result != 1 )
      {
        if ( (_DWORD)result )
          return get_qerrno();
        return result;
      }
    }
    v92 = 0;
LABEL_47:
    if ( memchr("?(),.[\\]`{};~@", v12, 0xFu) )
    {
      *(_WORD *)(a2 + 24) = v12;
      result = 0;
      if ( (_BYTE)v12 == 40 )
      {
        v23 = *v5;
        if ( **v5 != 42 || (*(_BYTE *)(a1 + 572) & 2) == 0 )
          return result;
LABEL_60:
        *(_BYTE *)(a1 + 128) = 1;
        v6 = v23 + 1;
        *(_QWORD *)(a1 + 8) = v6;
        v7 = 1;
        a4 = v88;
        continue;
      }
      if ( (unsigned __int16)v12 != 46 )
        return result;
      v54 = *(unsigned __int8 **)(a1 + 8);
      v55 = *v54;
      if ( (*(_BYTE *)(a1 + 340) & 1) == 0 )
        goto LABEL_123;
      if ( (v55 & 0x80u) != 0LL )
        return result;
      if ( (_DefaultRuneLocale.__runetype[v55] & 0x400) == 0
        || (v89 = (_BYTE *)(a1 + 340), v56 = (char *)(v54 - 1), (unsigned __int64)(v54 - 1) > *(_QWORD *)a1)
        && ((v57 = (char)*(v54 - 2), v57 >= 0) && (_DefaultRuneLocale.__runetype[v57] & 0x500) != 0
         || (_BYTE)v57 == 95
         || (unsigned __int8)v57 == 36) )
      {
LABEL_123:
        if ( (_DWORD)v55 == 46 && v54[1] == 46 )
        {
          *v5 = (char *)(v54 + 2);
          *(_WORD *)(a2 + 24) = 11868;
        }
        return result;
      }
LABEL_142:
      v58 = sub_100049480(v56);
      v13 = *v5;
      if ( v58 )
      {
        v86 = v56;
        *v5 = v13 - 1;
        if ( v58 == -1 )
        {
          v67 = 0x800000000000401LL;
          while ( 1 )
          {
            v68 = *(v13 - 1);
            if ( v68 < 0 || (_DefaultRuneLocale.__runetype[v68] & 0x500) == 0 )
            {
              v69 = (unsigned int)(unsigned __int8)v68 - 36;
              if ( (unsigned int)v69 > 0x3B || !_bittest64(&v67, v69) )
                break;
            }
            *v5 = v13++;
          }
          return set_qerrno();
        }
        if ( (unsigned int)asctoreal(v5, (_OWORD *)(a2 + 48)) != 1 )
          return set_qerrno();
        *(_WORD *)(a2 + 24) = 7;
        LOBYTE(v56) = **v5;
        v59 = __toupper((unsigned __int8)v56);
        if ( v59 == 76 || v59 == 70 )
        {
          v60 = *v5 + 1;
          *v5 = v60;
          LOBYTE(v56) = *v60;
        }
LABEL_215:
        if ( (*v89 & 2) != 0 )
        {
          v83 = (char)v56 >= 0 && (_DefaultRuneLocale.__runetype[(unsigned __int8)v56] & 0x500) != 0;
          if ( v83 || (_BYTE)v56 == 95 || (_BYTE)v56 == 36 )
            return set_qerrno();
          if ( (unsigned __int8)v56 <= 0x2Eu )
          {
            v84 = 0x408400000000LL;
            if ( _bittest64(&v84, (unsigned __int8)v56) )
              return set_qerrno();
          }
        }
        *(_QWORD *)(a1 + 40) = 0;
        sub_100047FF0((void **)(a1 + 32), v86, *(_QWORD *)(a1 + 8) - (_QWORD)v86);
        return 0;
      }
LABEL_148:
      v86 = v56;
      v91 = v12 - 48;
      LOBYTE(v56) = *v13;
      v61 = 10;
      v93 = v12 == 48;
      if ( v12 == 48 )
      {
        v61 = 8;
        if ( (unsigned __int8)v56 <= 0x61u )
        {
          if ( (unsigned __int8)v56 != 66 )
          {
            if ( (unsigned __int8)v56 != 88 )
              goto LABEL_152;
LABEL_171:
            v64 = (unsigned __int8 *)(v13 + 1);
            *v5 = v13 + 1;
            v56 = (char *)v13[1];
            if ( (__int64)v56 < 0 || (_DefaultRuneLocale.__runetype[(_QWORD)v56] & 0x10000) == 0 )
            {
              set_error_data(0, (const char *)v13[1]);
              ++*v5;
              return set_qerrno();
            }
            v61 = 16;
            v62 = 0;
LABEL_181:
            v63 = 0;
LABEL_182:
            v70 = (char *)(v64 + 1);
            v71 = v12 - 48;
            do
            {
              v65 = (unsigned __int8)v56;
              if ( (_DefaultRuneLocale.__runetype[(unsigned __int8)v56] & 0x10000) == 0 )
                break;
              *v5 = v70;
              if ( (((unsigned __int8)v56 >= 0x32u) & (unsigned __int8)v62) != 0
                || v63 && (unsigned __int8)v56 >= 0x38u
                || (unsigned __int8)v56 >= 0x3Au && (_BYTE)v12 != 48 )
              {
                goto LABEL_156;
              }
              v72 = (_BYTE)v56 - 32;
              if ( (unsigned __int8)v56 < 0x61u )
                v72 = (char)v56;
              v73 = v72 - 7;
              if ( (unsigned __int8)v56 < 0x3Au )
                v73 = (unsigned __int8)v56;
              v71 = v73 + v61 * v71 - 48;
              LOBYTE(v56) = *v70++;
            }
            while ( (char)v56 >= 0 );
            v91 = v71;
            v13 = v70 - 1;
            goto LABEL_193;
          }
LABEL_175:
          v64 = (unsigned __int8 *)(v13 + 1);
          *v5 = v13 + 1;
          LOBYTE(v56) = v13[1];
          if ( ((unsigned __int8)v56 & 0xFE) == 0x30 )
          {
            v62 = 1;
            v61 = 2;
            goto LABEL_181;
          }
          v65 = (char)v56;
LABEL_156:
          set_error_data(0, (const char *)v65);
          return set_qerrno();
        }
        if ( (unsigned __int8)v56 == 98 )
          goto LABEL_175;
        if ( (unsigned __int8)v56 == 120 )
          goto LABEL_171;
      }
LABEL_152:
      if ( (char)v56 >= 0 )
      {
        v62 = 0;
        v63 = v12 == 48;
        v64 = (unsigned __int8 *)v13;
        goto LABEL_182;
      }
LABEL_193:
      v74 = 1;
      v75 = 0;
LABEL_194:
      while ( 1 )
      {
        ++v13;
        while ( ((unsigned __int8)v56 & 0xDF) == 0x4C )
        {
          if ( (v75 & 1) != 0 )
            return set_qerrno();
          *v5 = v13;
          LOBYTE(v56) = *v13;
          v76 = *v13++ & 0xDF;
          if ( v76 == 76 )
          {
            *v5 = v13;
            LOBYTE(v56) = *v13;
            v75 = 1;
            goto LABEL_194;
          }
        }
        v87 = v74;
        if ( ((unsigned __int8)v56 & 0xDF) != 0x55 )
          break;
        *v5 = v13;
        LOBYTE(v56) = *v13;
        v93 = 1;
        v74 = 0;
      }
      if ( __tolower((unsigned __int8)v56) == 105 )
      {
        v77 = *v5;
        v78 = (unsigned __int8)(*v5)[1];
        if ( v78 == 54 )
        {
          v79 = 1;
          if ( v77[2] == 52 )
          {
LABEL_207:
            *v5 = v77 + 3;
            LOBYTE(v56) = v77[3];
            v75 = v79;
          }
        }
        else if ( v78 == 51 && v77[2] == 50 )
        {
          v79 = 0;
          goto LABEL_207;
        }
      }
      if ( (*v89 & 8) == 0 )
      {
LABEL_209:
        v80 = 0;
        v81 = v91;
        goto LABEL_210;
      }
      v81 = v91;
      if ( (v75 & 1) != 0 )
        goto LABEL_213;
      if ( ((v91 >> 31 == 0) & (unsigned __int8)v87) != 0 )
        goto LABEL_209;
      v81 = v91;
      v80 = 1;
      if ( HIDWORD(v91) == 0 && v93 )
      {
LABEL_210:
        v82 = a2;
        *(_BYTE *)(a2 + 40) = v80;
        if ( (v75 & 1) == 0 )
        {
          *(_QWORD *)(a2 + 32) = v81;
          *(_WORD *)(a2 + 24) = 3;
          goto LABEL_215;
        }
      }
      else
      {
LABEL_213:
        v82 = a2;
        *(_BYTE *)(a2 + 40) = v81 < 0 || (v87 & 1) == 0;
      }
      *(_QWORD *)(v82 + 48) = v81;
      *(_WORD *)(v82 + 24) = 8;
      goto LABEL_215;
    }
    break;
  }
  if ( !memchr("!%&*+-/<=>^|:", v12, 0xEu) )
  {
    v27 = a2;
    if ( v92 && (_DefaultRuneLocale.__runetype[v12] & 0x400) != 0 )
    {
      v89 = (_BYTE *)(a1 + 340);
      v56 = v13 - 1;
      if ( (*(_BYTE *)(a1 + 340) & 1) != 0 )
        goto LABEL_142;
      goto LABEL_148;
    }
    if ( (_BYTE)v12 != 39 )
    {
      if ( (unsigned __int16)v12 == 35 )
      {
        v65 = *v13;
        if ( v65 <= -2 )
        {
          if ( *(_QWORD *)(a1 + 64) )
          {
            *v5 = v13 + 1;
            v66 = *v13 + 0x80;
            *(_WORD *)(a2 + 24) = 4;
            *(_BYTE *)(a2 + 40) = 0;
            *(_QWORD *)(a2 + 8) = 0;
            if ( *(_QWORD *)(a2 + 16) <= 0x3FFu )
              *(_QWORD *)v27 = qvector_reserve(a2, *(void **)a2, 0x400u, 1u);
            sub_1000483C0(a1, a2, v66, *(_DWORD *)(a1 + 80));
            return 0;
          }
          goto LABEL_156;
        }
      }
      else if ( (unsigned __int16)v12 == 34 )
      {
        v26 = 0;
LABEL_63:
        *(_BYTE *)(v27 + 40) = v26;
        *(_WORD *)(v27 + 24) = 4;
        *(_QWORD *)(v27 + 8) = 0;
        if ( *(_QWORD *)(v27 + 16) <= 0x3FFu )
        {
          v28 = qvector_reserve(a2, *(void **)v27, 0x400u, 1u);
          v27 = a2;
          *(_QWORD *)a2 = v28;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v29 = *v5;
            v30 = (unsigned __int8)**v5;
            if ( v30 == 92 )
              break;
            if ( v30 == 34 )
            {
              *v5 = v29 + 1;
              return 0;
            }
            if ( !**v5 )
              return set_qerrno();
            *v5 = v29 + 1;
            v31 = *v29;
            v32 = *(_QWORD *)(v27 + 8);
            v33 = v32 == 0;
            v34 = v32 - 1;
            v35 = 0;
            if ( !v33 )
              v35 = v34;
            v36 = *(_BYTE **)v27;
            if ( *(_QWORD *)(v27 + 16) < (unsigned __int64)(v35 + 2) )
            {
              v36 = qvector_reserve(a2, *(void **)v27, v35 + 2, 1u);
              v27 = a2;
              *(_QWORD *)a2 = v36;
            }
            *(_QWORD *)(v27 + 8) = v35 + 2;
            v36[v35] = v31;
LABEL_66:
            *(_BYTE *)(*(_QWORD *)v27 + v35 + 1) = 0;
          }
          v37 = v29 + 1;
          if ( (*(_BYTE *)(a1 + 340) & 0x10) == 0 )
          {
            *v5 = v37;
            v38 = back_char(v5);
            v27 = a2;
            v39 = v38;
            v40 = *(_QWORD *)(a2 + 8);
            v33 = v40 == 0;
            v35 = v40 - 1;
            if ( v33 )
              v35 = 0;
            v41 = *(_BYTE **)a2;
            if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v35 + 2) )
            {
              v41 = qvector_reserve(a2, *(void **)a2, v35 + 2, 1u);
              v27 = a2;
              *(_QWORD *)a2 = v41;
            }
            *(_QWORD *)(v27 + 8) = v35 + 2;
            v41[v35] = v39;
            goto LABEL_66;
          }
          if ( !*v37 )
            return set_qerrno();
          v42 = *(_QWORD *)(v27 + 8);
          v33 = v42 == 0;
          v43 = v42 - 1;
          v44 = 0;
          if ( !v33 )
            v44 = v43;
          v45 = *(_BYTE **)v27;
          if ( *(_QWORD *)(v27 + 16) < (unsigned __int64)(v44 + 3) )
          {
            v45 = qvector_reserve(a2, *(void **)v27, v44 + 3, 1u);
            v27 = a2;
            *(_QWORD *)a2 = v45;
          }
          *(_QWORD *)(v27 + 8) = v44 + 3;
          v45[v44 + 2] = 0;
          *(_WORD *)(*(_QWORD *)v27 + v44) = *(_WORD *)v29;
          *v5 += 2;
        }
      }
LABEL_155:
      v65 = (char)v12;
      goto LABEL_156;
    }
LABEL_87:
    *(_WORD *)(v27 + 24) = 5;
    *(_QWORD *)(v27 + 32) = 0;
    v46 = *v5;
    if ( **v5 == 39 || !**v5 )
      return set_qerrno();
    *v5 = v46 + 1;
    v47 = *v46;
    if ( v47 == 92 )
    {
      v47 = back_char(v5);
      v27 = a2;
    }
    *(_QWORD *)(v27 + 32) = (*(_QWORD *)(v27 + 32) << 8) | v47;
    v48 = *v5;
    if ( !**v5 )
      return set_qerrno();
    if ( **v5 == 39 )
    {
      *v5 = v48 + 1;
      *(_QWORD *)(v27 + 32) = *(char *)(v27 + 32);
      return 0;
    }
    *v5 = v48 + 1;
    v49 = *v48;
    if ( v49 == 92 )
    {
      v49 = back_char(v5);
      v27 = a2;
    }
    *(_QWORD *)(v27 + 32) = (*(_QWORD *)(v27 + 32) << 8) | v49;
    v50 = *v5;
    if ( !**v5 )
      return set_qerrno();
    if ( **v5 != 39 )
    {
      *v5 = v50 + 1;
      v51 = *v50;
      if ( v51 == 92 )
      {
        v51 = back_char(v5);
        v27 = a2;
      }
      *(_QWORD *)(v27 + 32) = (*(_QWORD *)(v27 + 32) << 8) | v51;
      v50 = *v5;
      if ( !**v5 )
        return set_qerrno();
      if ( **v5 != 39 )
      {
        *v5 = v50 + 1;
        v52 = *v50;
        if ( v52 == 92 )
        {
          v52 = back_char(v5);
          v27 = a2;
        }
        *(_QWORD *)(v27 + 32) = (*(_QWORD *)(v27 + 32) << 8) | v52;
        v50 = *v5;
        if ( **v5 != 39 )
          return set_qerrno();
      }
    }
    *v5 = v50 + 1;
    return 0;
  }
  *(_WORD *)(a2 + 24) = v12;
  v23 = *v5;
  v24 = **v5;
  if ( v24 == 61 )
  {
    *(_WORD *)(a2 + 24) = ((_WORD)v12 << 8) | 0x3D;
    ++*v5;
    return 0;
  }
  if ( (unsigned __int8)v12 <= 0x3Eu && (v25 = 0x5400284000000000LL, _bittest64(&v25, (unsigned __int8)v12))
    || (unsigned __int8)v12 == 124 )
  {
    if ( v24 == (_DWORD)v12 )
    {
      *(_WORD *)(a2 + 24) = v12 | ((_WORD)v12 << 8);
      v53 = *v5 + 1;
      *v5 = v53;
      result = 0;
      if ( ((unsigned int)v12 | 2) == 0x3E && *v53 == 61 )
      {
        *(_WORD *)(a2 + 24) += 61;
        ++*v5;
      }
    }
    else
    {
      result = 0;
      if ( (_BYTE)v12 == 45 && (_BYTE)v24 == 62 )
      {
        *(_WORD *)(a2 + 24) = 11582;
        ++*v5;
      }
    }
  }
  else
  {
    result = 0;
    if ( (_BYTE)v12 == 47 && (_BYTE)v24 == 42 && (*(_BYTE *)(a1 + 572) & 1) != 0 )
      goto LABEL_60;
  }
  return result;
}
