__int64 __fastcall sub_222A0A0(__int64 *a1, char *a2)
{
  __int64 *v2; // rbp
  char *v3; // rax
  char *v4; // r12
  char *v5; // rdx
  char v6; // r12
  __int64 *v8; // rcx
  size_t v9; // r13
  char *v10; // r14
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbp
  char *v13; // rax
  unsigned __int64 v15; // r14
  int v16; // r15d
  char *v17; // rax
  int v18; // ecx
  char v19; // dl
  int v20; // ebx
  __m128 *v21; // r13
  bool v22; // zf
  __int64 v23; // rdi
  __int64 v24; // rbp
  unsigned __int64 v25; // rdi
  char *v26; // rax
  char *v27; // r9
  char *v28; // r8
  char *v29; // rsi
  char v30; // di
  int v31; // edi
  unsigned __int8 v32; // r15
  unsigned __int8 v33; // bp
  unsigned __int8 v34; // r12
  unsigned __int8 v35; // r14
  int v36; // eax
  char *v37; // rcx
  unsigned __int16 v38; // r13
  int v39; // eax
  __int16 v40; // r13
  __int16 v41; // ax
  int v42; // eax
  char *v43; // rcx
  __int16 v44; // r13
  __int16 v45; // ax
  int v46; // eax
  __int16 v47; // r13
  __int16 v48; // ax
  char v49; // al
  char v50; // al
  _BYTE *v51; // rsi
  unsigned __int64 v52; // rax
  unsigned __int8 *v53; // rdx
  __int64 *v54; // r12
  unsigned __int8 v55; // si
  unsigned __int8 *v56; // rdx
  unsigned __int8 v57; // bl
  unsigned __int8 v58; // r15
  unsigned __int8 v59; // r14
  int v60; // ebp
  __int16 v61; // bp
  __int16 v62; // ax
  unsigned __int16 v63; // bp
  __int16 v64; // bp
  __int16 v65; // ax
  __int16 v66; // bp
  __int16 v67; // ax
  _BYTE *v68; // rcx
  __int64 *v69; // rcx
  char *v70; // [rsp+0h] [rbp-68h] BYREF
  char *v71; // [rsp+8h] [rbp-60h]
  __int16 *v72; // [rsp+10h] [rbp-58h]
  __int64 *v73; // [rsp+18h] [rbp-50h]
  __int16 v74; // [rsp+2Dh] [rbp-3Bh] BYREF
  char v75; // [rsp+2Fh] [rbp-39h]

  v2 = a1;
  v3 = (char *)a1[4];
  v4 = (char *)a1[3];
  if ( v3 == v4 )
    goto LABEL_18;
  v5 = v4 + 1;
  a1[3] = (__int64)(v4 + 1);
  v6 = *v4;
  if ( v6 == 34 )
    return 1;
  v8 = a1;
  v72 = &v74;
  while ( 2 )
  {
    if ( v3 == v5 )
    {
      v2 = v8;
      v4 = v3;
      goto LABEL_18;
    }
    if ( (v6 & 0xE0) == 0 )
      return sub_22286E0(v8, (__int64)"Control character in string");
    if ( v6 != 92 )
    {
      v9 = *((_QWORD *)a2 + 1);
      v10 = *(char **)a2;
      v11 = v9 + 1;
      if ( *(char **)a2 == a2 + 16 )
      {
        if ( v11 <= 0xF )
          goto LABEL_9;
        v12 = 15;
      }
      else
      {
        v12 = *((_QWORD *)a2 + 2);
        if ( v11 <= v12 )
        {
LABEL_9:
          v10[v9] = v6;
          v13 = *(char **)a2;
          *((_QWORD *)a2 + 1) = v11;
          v13[v9 + 1] = 0;
          goto LABEL_10;
        }
      }
      if ( (v11 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v24 = 2 * v12;
      if ( v11 < v24 )
      {
        v25 = v24 + 1;
        if ( v24 < 0 )
        {
          v25 = 0x8000000000000000LL;
          v24 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      else
      {
        v25 = v9 + 2;
        v24 = v9 + 1;
      }
      v71 = (char *)v8;
      v70 = a2 + 16;
      v26 = (char *)operator new(v25);
      v27 = *(char **)a2;
      v28 = a2 + 16;
      v10 = v26;
      v8 = (__int64 *)v71;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          *v26 = *v27;
        }
        else
        {
          v29 = *(char **)a2;
          v73 = (__int64 *)v71;
          v71 = v70;
          v70 = v27;
          memcpy(v26, v29, v9);
          v8 = v73;
          v28 = v71;
          v27 = v70;
        }
      }
      if ( v28 != v27 )
      {
        v70 = (char *)v8;
        operator delete(v27);
        v8 = (__int64 *)v70;
      }
      *(_QWORD *)a2 = v10;
      *((_QWORD *)a2 + 2) = v24;
      goto LABEL_9;
    }
    v8[3] = (__int64)(v5 + 1);
    v30 = *v5;
    switch ( *v5 )
    {
      case '"':
      case '/':
      case '\\':
        v70 = (char *)v8;
        sub_A6F610(a2, v30);
        v8 = (__int64 *)v70;
        goto LABEL_10;
      case 'b':
        v70 = (char *)v8;
        sub_A6F610(a2, 8);
        v8 = (__int64 *)v70;
        goto LABEL_10;
      case 'f':
        v70 = (char *)v8;
        sub_A6F610(a2, 12);
        v8 = (__int64 *)v70;
        goto LABEL_10;
      case 'n':
        v70 = (char *)v8;
        sub_A6F610(a2, 10);
        v8 = (__int64 *)v70;
        goto LABEL_10;
      case 'r':
        v70 = (char *)v8;
        sub_A6F610(a2, 13);
        v8 = (__int64 *)v70;
        goto LABEL_10;
      case 't':
        v70 = (char *)v8;
        sub_A6F610(a2, 9);
        v8 = (__int64 *)v70;
        goto LABEL_10;
      case 'u':
        if ( v5 + 1 == v3 )
        {
          v31 = 0;
          v32 = 0;
          goto LABEL_75;
        }
        v8[3] = (__int64)(v5 + 2);
        v31 = (unsigned __int8)v5[1];
        v32 = v5[1];
        if ( v5 + 2 == v3 )
        {
LABEL_75:
          v33 = 0;
          goto LABEL_76;
        }
        v8[3] = (__int64)(v5 + 3);
        v33 = v5[2];
        if ( v5 + 3 == v3 )
        {
LABEL_76:
          v34 = 0;
          v35 = 0;
          goto LABEL_53;
        }
        v8[3] = (__int64)(v5 + 4);
        v34 = v5[3];
        if ( v5 + 4 == v3 )
        {
          v35 = 0;
        }
        else
        {
          v8[3] = (__int64)(v5 + 5);
          v35 = v5[4];
        }
LABEL_53:
        v70 = (char *)v8;
        v36 = isxdigit(v31);
        v37 = v70;
        if ( !v36 )
        {
          v38 = 0;
          goto LABEL_78;
        }
        if ( v32 > 0x39u )
          v38 = (v32 & 0xDF) - 55;
        else
          v38 = v32 - 48;
        v39 = isxdigit(v33);
        v37 = v70;
        if ( !v39 )
        {
LABEL_78:
          v70 = v37;
          v49 = sub_22286E0((__int64 *)v37, (__int64)"Invalid \\u escape sequence");
          v43 = v70;
          if ( v49 )
            goto LABEL_67;
          return 0;
        }
        v40 = 16 * v38;
        if ( v33 > 0x39u )
          v41 = (v33 & 0xDF) - 55;
        else
          v41 = v33 - 48;
        v38 = v41 | v40;
        v42 = isxdigit(v34);
        v43 = v70;
        if ( v42
          && ((v44 = 16 * v38, v34 > 0x39u) ? (v45 = (v34 & 0xDF) - 55) : (v45 = v34 - 48),
              v38 = v45 | v44,
              v46 = isxdigit(v35),
              v43 = v70,
              v46) )
        {
          v47 = 16 * v38;
          if ( v35 > 0x39u )
            v48 = (v35 & 0xDF) - 55;
          else
            v48 = v35 - 48;
          v38 = v48 | v47;
        }
        else
        {
          v70 = v43;
          v50 = sub_22286E0((__int64 *)v43, (__int64)"Invalid \\u escape sequence");
          v43 = v70;
          if ( !v50 )
            return 0;
        }
        if ( (unsigned __int16)(v38 + 10240) > 0x7FFu )
          goto LABEL_67;
        if ( v38 > 0xDBFFu )
          goto LABEL_113;
        v51 = *((_BYTE **)v43 + 3);
        v52 = *((_QWORD *)v43 + 4);
        v53 = v51 + 2;
        if ( v52 < (unsigned __int64)(v51 + 2) || *v51 != 92 || v51[1] != 117 )
          goto LABEL_113;
        v70 = a2;
        v54 = (__int64 *)v43;
        while ( 1 )
        {
          if ( v53 == (unsigned __int8 *)v52 )
          {
            v54[3] = v52;
            v55 = 0;
          }
          else
          {
            v54[3] = (__int64)(v53 + 1);
            v55 = *v53;
          }
          v56 = (unsigned __int8 *)v54[3];
          if ( (unsigned __int8 *)v52 == v56 )
          {
            v57 = 0;
LABEL_120:
            v58 = 0;
            v59 = 0;
            goto LABEL_93;
          }
          v54[3] = (__int64)(v56 + 1);
          v57 = *v56;
          if ( (unsigned __int8 *)v52 == v56 + 1 )
            goto LABEL_120;
          v54[3] = (__int64)(v56 + 2);
          v58 = v56[1];
          if ( (unsigned __int8 *)v52 == v56 + 2 )
          {
            v59 = 0;
          }
          else
          {
            v54[3] = (__int64)(v56 + 3);
            v59 = v56[2];
          }
LABEL_93:
          LOBYTE(v71) = v55;
          if ( !isxdigit(v55) )
          {
            a2 = v70;
            v69 = v54;
            LOWORD(v60) = 0;
            goto LABEL_122;
          }
          if ( (unsigned __int8)v71 > 0x39u )
            v60 = ((unsigned __int8)v71 & 0xDF) - 55;
          else
            v60 = (unsigned __int8)v71 - 48;
          LODWORD(v71) = v60;
          if ( !isxdigit(v57) )
          {
            v69 = v54;
            a2 = v70;
LABEL_122:
            v70 = (char *)v69;
            if ( (unsigned __int8)sub_22286E0(v69, (__int64)"Invalid \\u escape sequence") )
            {
              v38 = v60;
              v74 = -16401;
              v75 = -67;
              sub_A6F5E0(a2, v72, 3u);
              v43 = v70;
              goto LABEL_67;
            }
            return 0;
          }
          v61 = 16 * v60;
          if ( v57 > 0x39u )
            v62 = (v57 & 0xDF) - 55;
          else
            v62 = v57 - 48;
          v63 = v62 | v61;
          if ( isxdigit(v58)
            && ((v64 = 16 * v63, v58 > 0x39u) ? (v65 = (v58 & 0xDF) - 55) : (v65 = v58 - 48),
                v63 = v65 | v64,
                isxdigit(v59)) )
          {
            v66 = 16 * v63;
            if ( v59 > 0x39u )
              v67 = (v59 & 0xDF) - 55;
            else
              v67 = v59 - 48;
            v63 = v67 | v66;
          }
          else if ( !(unsigned __int8)sub_22286E0(v54, (__int64)"Invalid \\u escape sequence") )
          {
            return 0;
          }
          if ( (unsigned __int16)(v63 + 9216) <= 0x3FFu )
          {
            a2 = v70;
            v71 = (char *)v54;
            sub_2229C00(((v38 - 55296) << 10) | (v63 - 56320) | 0x10000, v70);
            v8 = v54;
            goto LABEL_10;
          }
          v74 = -16401;
          v75 = -67;
          sub_A6F5E0(v70, v72, 3u);
          if ( (unsigned __int16)(v63 + 10240) > 0x7FFu )
            break;
          v68 = (_BYTE *)v54[3];
          v52 = v54[4];
          v53 = v68 + 2;
          if ( (unsigned __int64)(v68 + 2) <= v52 && *v68 == 92 )
          {
            v38 = v63;
            if ( v68[1] == 117 )
              continue;
          }
          a2 = v70;
          v43 = (char *)v54;
LABEL_113:
          v70 = v43;
          v74 = -16401;
          v75 = -67;
          sub_A6F5E0(a2, v72, 3u);
          v8 = (__int64 *)v70;
          goto LABEL_10;
        }
        v43 = (char *)v54;
        a2 = v70;
        v38 = v63;
LABEL_67:
        v70 = v43;
        sub_2229C00(v38, a2);
        v8 = (__int64 *)v70;
LABEL_10:
        v3 = (char *)v8[4];
        v4 = (char *)v8[3];
        if ( v3 != v4 )
        {
          v5 = v4 + 1;
          v8[3] = (__int64)(v4 + 1);
          v6 = *v4;
          if ( v6 == 34 )
            return 1;
          continue;
        }
        v2 = v8;
LABEL_18:
        v15 = v2[2];
        v16 = v15;
        if ( v15 >= (unsigned __int64)v4 )
        {
          v20 = 1;
        }
        else
        {
          v17 = (char *)v2[2];
          v18 = 1;
          do
          {
            v19 = *v17++;
            if ( v19 == 10 )
            {
              ++v18;
              v16 = (int)v17;
            }
          }
          while ( v4 != v17 );
          v20 = v18;
        }
        v21 = (__m128 *)operator new(0x20u);
        v21[1].m128_i32[0] = v20;
        v70 = "Unterminated string";
        v22 = *((_BYTE *)v2 + 8) == 0;
        v21[1].m128_i32[2] = (_DWORD)v4 - v15;
        v21[1].m128_i32[1] = (_DWORD)v4 - v16;
        *v21 = _mm_loadh_ps((const double *)&v70);
        if ( !v22 )
        {
          v23 = *v2;
          *((_BYTE *)v2 + 8) = 0;
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
        }
        *v2 = (__int64)v21;
        *((_BYTE *)v2 + 8) = 1;
        return 0;
      default:
        return sub_22286E0(v8, (__int64)"Invalid escape sequence");
    }
  }
}
