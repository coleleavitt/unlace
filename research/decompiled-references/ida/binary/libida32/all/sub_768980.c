__int64 __fastcall sub_768980(__int64 (__fastcall *a1)(__int64, __int64), __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r10d
  __int64 v5; // r14
  _BYTE *v6; // rax
  const char *v7; // rbx
  char v8; // al
  int v11; // r13d
  int v12; // r15d
  __int64 result; // rax
  const char *v14; // r14
  char *v15; // rbx
  int v16; // r9d
  char v17; // al
  char *v18; // rdx
  char *v19; // rsi
  int v20; // r8d
  int v21; // edx
  unsigned int v22; // ecx
  size_t v23; // rax
  size_t v24; // rdx
  _BYTE *v25; // rbx
  size_t v26; // r8
  unsigned int v27; // edi
  size_t v28; // r13
  char v29; // al
  char *v30; // rbx
  char v31; // al
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rcx
  char *v35; // r13
  char *v36; // rbx
  char v37; // al
  int v38; // edx
  int v39; // eax
  __int64 v40; // rdx
  int v41; // ecx
  __int64 v42; // rcx
  char v43; // al
  int i; // r8d
  __int64 v45; // rdx
  size_t v46; // rax
  unsigned __int64 v47; // r11
  char *v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rcx
  __int64 v51; // rsi
  char v52; // al
  char v53; // dl
  __int64 v54; // rdx
  size_t v55; // rax
  size_t v56; // rax
  __int64 v57; // rdx
  unsigned int v58; // edx
  size_t v59; // rbx
  size_t v61; // rax
  char v62; // cl
  size_t v63; // rax
  char v64; // [rsp+0h] [rbp-498h]
  int v65; // [rsp+8h] [rbp-490h]
  char v66; // [rsp+8h] [rbp-490h]
  char v67; // [rsp+8h] [rbp-490h]
  char v68; // [rsp+8h] [rbp-490h]
  char v69; // [rsp+8h] [rbp-490h]
  char v70; // [rsp+8h] [rbp-490h]
  char v71; // [rsp+8h] [rbp-490h]
  int v72; // [rsp+8h] [rbp-490h]
  char v73; // [rsp+8h] [rbp-490h]
  char v74; // [rsp+8h] [rbp-490h]
  __int64 v75; // [rsp+10h] [rbp-488h]
  char *v77; // [rsp+20h] [rbp-478h]
  int v78; // [rsp+20h] [rbp-478h]
  int v79; // [rsp+20h] [rbp-478h]
  int v80; // [rsp+20h] [rbp-478h]
  int v81; // [rsp+20h] [rbp-478h]
  int v82; // [rsp+20h] [rbp-478h]
  int v83; // [rsp+20h] [rbp-478h]
  int v84; // [rsp+20h] [rbp-478h]
  char v85; // [rsp+20h] [rbp-478h]
  __int64 v86; // [rsp+28h] [rbp-470h]
  int v87; // [rsp+28h] [rbp-470h]
  int v88; // [rsp+28h] [rbp-470h]
  size_t v89; // [rsp+30h] [rbp-468h]
  char v90; // [rsp+30h] [rbp-468h]
  int v91; // [rsp+30h] [rbp-468h]
  int v92; // [rsp+30h] [rbp-468h]
  char v93; // [rsp+38h] [rbp-460h]
  int v94; // [rsp+38h] [rbp-460h]
  size_t v95; // [rsp+38h] [rbp-460h]
  int v96; // [rsp+38h] [rbp-460h]
  char v97; // [rsp+38h] [rbp-460h]
  char v98; // [rsp+38h] [rbp-460h]
  int v99; // [rsp+38h] [rbp-460h]
  char v100; // [rsp+38h] [rbp-460h]
  int v101; // [rsp+40h] [rbp-458h]
  int v102; // [rsp+40h] [rbp-458h]
  size_t v103; // [rsp+40h] [rbp-458h]
  int v104; // [rsp+40h] [rbp-458h]
  int v105; // [rsp+40h] [rbp-458h]
  unsigned int v106; // [rsp+40h] [rbp-458h]
  __int64 v107; // [rsp+48h] [rbp-450h]
  char s[1024]; // [rsp+50h] [rbp-448h] BYREF
  _BYTE v109[8]; // [rsp+450h] [rbp-48h] BYREF
  unsigned __int64 v110; // [rsp+458h] [rbp-40h]

  v4 = *(_DWORD *)(a4 + 8);
  v110 = __readfsqword(0x28u);
  v5 = a4;
  if ( v4 <= 0 || (v75 = a3 + 32, !*(_QWORD *)(a3 + 16)) || (v6 = *(_BYTE **)(a3 + 8), v7 = v6 + 1, (v8 = *v6) == 0) )
  {
    v11 = 0;
    goto LABEL_11;
  }
  v11 = 0;
  v65 = 0;
  v12 = v4;
  while ( v8 != 37 )
  {
    result = a1(a2, (unsigned int)v8);
    if ( (_DWORD)result )
      return result;
    ++v11;
    v14 = v7;
LABEL_8:
    v8 = *v14;
    v7 = v14 + 1;
    if ( !*v14 )
    {
      v5 = a4;
LABEL_11:
      *(_DWORD *)(v5 + 8) = v11;
      return 0;
    }
  }
  v15 = (char *)(v7 + 1);
  v16 = 0;
  while ( 1 )
  {
    v17 = *(v15 - 1);
    v18 = v15 - 1;
    if ( v17 == 43 )
    {
      v16 |= 2u;
      goto LABEL_17;
    }
    if ( v17 > 43 )
      break;
    if ( v17 == 32 )
    {
      v16 |= 4u;
    }
    else
    {
      if ( v17 != 35 )
      {
        v19 = v15 - 1;
        if ( v17 != 42 )
          goto LABEL_32;
        if ( --v12 > 0 )
        {
          v87 = v16;
          result = idcv_long(v75, v19);
          if ( (_DWORD)result )
            return result;
          v39 = *(_DWORD *)(v75 + 8);
          v18 = v15 - 1;
          v16 = v87;
          v65 = v39;
          v75 += 32;
          if ( v39 < 0 )
          {
            v16 = v87 | 1;
            v65 = -v39;
          }
        }
        else if ( v65 )
        {
          return 1531;
        }
        v20 = v65;
        v19 = v18 + 1;
        v65 = 0;
        v21 = (unsigned __int8)v18[1];
        goto LABEL_53;
      }
      v16 |= 8u;
    }
LABEL_17:
    ++v15;
  }
  if ( v17 == 45 )
  {
    v16 |= 1u;
    goto LABEL_17;
  }
  if ( v17 == 48 )
  {
    v19 = v15;
    if ( (v16 & 1) == 0 )
      v16 |= 0x10u;
    v17 = *v15;
LABEL_32:
    v22 = v17;
    v20 = -1;
    if ( (unsigned int)v17 > 0x7F )
    {
LABEL_33:
      v101 = v20;
      v93 = v16;
      v23 = strlen(v19);
      LOBYTE(v16) = v93;
      v24 = 0;
      v86 = v23;
      v25 = (_BYTE *)v23;
      v20 = v101;
      v77 = (char *)&byte_22CD811;
      v14 = &byte_22CD811;
      goto LABEL_34;
    }
  }
  else
  {
    v22 = v17;
    v19 = v15 - 1;
  }
  v20 = -1;
  while ( v22 - 48 <= 9 )
  {
    v38 = 0;
    if ( v20 != -1 )
      v38 = 10 * v20;
    v22 = *++v19;
    v20 = (char)(v17 - 48) + v38;
    v17 = v22;
    if ( v22 > 0x7F )
      goto LABEL_33;
  }
  v21 = (unsigned __int8)*v19;
LABEL_53:
  if ( (_BYTE)v21 != 46 )
  {
    v86 = -1;
    goto LABEL_59;
  }
  v31 = v19[1];
  if ( v31 != 42 )
  {
    v32 = v31;
    ++v19;
    if ( (unsigned int)v31 > 0x7F )
      goto LABEL_33;
    v33 = 0;
    while ( v32 - 48 <= 9 )
    {
      ++v19;
      v33 = (char)(v31 - 48) + 10 * v33;
      v32 = *v19;
      v31 = *v19;
      if ( v32 > 0x7F )
        goto LABEL_33;
    }
    v86 = v33;
    v21 = (unsigned __int8)*v19;
LABEL_59:
    if ( (unsigned __int8)(v21 - 70) <= 0x26u )
    {
      v34 = 0x4400000141LL;
      if ( _bittest64(&v34, (unsigned int)(v21 - 70)) )
        LOBYTE(v21) = *++v19;
    }
    v14 = v19 + 1;
    switch ( (char)v21 )
    {
      case '%':
        s[0] = 37;
        goto LABEL_143;
      case 'E':
      case 'G':
      case 'e':
      case 'f':
      case 'g':
        if ( --v12 <= 0 )
        {
          if ( v65 == 1531 )
            goto LABEL_178;
          v40 = 0;
        }
        else
        {
          v78 = v20;
          v66 = v16;
          result = idcv_float(v75);
          LOBYTE(v16) = v66;
          v20 = v78;
          if ( (_DWORD)result )
            goto LABEL_177;
          v40 = v75 + 8;
          v75 += 32;
        }
        if ( (unsigned int)(v20 + 1) <= 1 )
        {
          v42 = 15;
          v20 = 0;
        }
        else
        {
          v41 = 0;
          if ( v86 >= 0 )
            v41 = v86;
          v42 = (v20 << 8) | (v41 << 16) | 0xFu;
        }
        v79 = v20;
        v67 = v16;
        realtoasc(s, 1024, v40, v42);
        v43 = s[0];
        v19 = s;
        for ( i = v79; v43 == 32; ++v19 )
          v43 = v19[1];
        if ( v43 == 45 )
        {
          ++v19;
          v45 = 1;
          v77 = "-";
        }
        else
        {
          v45 = 1;
          v77 = "+";
          if ( (v67 & 2) == 0 )
          {
            v77 = " ";
            if ( (v67 & 4) == 0 )
            {
              v45 = 0;
              v77 = (char *)&byte_22CD811;
            }
          }
        }
        v107 = v45;
        v104 = i;
        v46 = strlen(v19);
        LOBYTE(v16) = v67;
        v65 = 0;
        v86 = v46;
        v20 = v104;
        v25 = (_BYTE *)v46;
        v24 = v107;
        goto LABEL_34;
      case 'X':
      case 'x':
        v47 = 16;
        v77 = (char *)&byte_22CD811;
        if ( (v16 & 8) != 0 )
        {
          v48 = "0x";
          if ( (_BYTE)v21 != 120 )
            v48 = "0X";
          v77 = v48;
        }
        goto LABEL_99;
      case 'a':
        if ( --v12 > 0 )
        {
          v83 = v20;
          v72 = v16;
          result = idcv_long(v75, v19);
          if ( (_DWORD)result )
            return result;
          v58 = *(_DWORD *)(v75 + 8);
          v16 = v72;
          v20 = v83;
          v75 += 32;
        }
        else
        {
          if ( v65 )
            return 1531;
          v58 = 0;
        }
        v81 = v20;
        v69 = v16;
        if ( off_2C52638 )
          off_2C52638(s, 1024, v58);
        else
          qsnprintf((int)s, 1024, (int)"%a", v58, v20, v16, v64);
        v56 = strlen(s);
        LOBYTE(v16) = v69;
        v20 = v81;
        v19 = s;
        v57 = v56;
LABEL_131:
        v25 = (_BYTE *)v86;
        if ( v86 < v56 )
        {
          v65 = 0;
          v24 = 0;
        }
        else
        {
          v25 = (_BYTE *)v56;
          v86 = v57;
          v24 = 0;
          v65 = 0;
        }
        v77 = (char *)&byte_22CD811;
        goto LABEL_34;
      case 'b':
        v47 = 2;
        v77 = "0b";
        if ( (v16 & 8) == 0 )
          goto LABEL_124;
        goto LABEL_99;
      case 'c':
        if ( --v12 <= 0 )
        {
          s[0] = 0;
          if ( v65 == 1531 )
            goto LABEL_178;
          v24 = 0;
          v19 = s;
          v25 = (_BYTE *)(&dword_0 + 1);
          v65 = 0;
          v86 = 1;
          v77 = (char *)&byte_22CD811;
          goto LABEL_34;
        }
        v84 = v20;
        v73 = v16;
        result = idcv_long(v75, v19);
        LOBYTE(v16) = v73;
        v20 = v84;
        if ( !(_DWORD)result )
        {
          v65 = 0;
          s[0] = *(_DWORD *)(v75 + 8);
          v75 += 32;
LABEL_143:
          v24 = 0;
          v25 = (_BYTE *)(&dword_0 + 1);
          v86 = 1;
          v77 = (char *)&byte_22CD811;
          v19 = s;
          goto LABEL_34;
        }
        s[0] = 0;
        if ( (_DWORD)result != 1531 )
          return result;
        goto LABEL_178;
      case 'd':
      case 'i':
        if ( --v12 <= 0 )
        {
          if ( v65 == 1531 )
            goto LABEL_178;
          if ( (v16 & 2) != 0 )
          {
            if ( !v86 )
            {
LABEL_157:
              v24 = 0;
              v25 = nullptr;
              v19 = nullptr;
              v65 = 0;
              v77 = (char *)&byte_22CD811;
              goto LABEL_34;
            }
            v47 = 10;
            v50 = 0;
            v77 = "+";
            goto LABEL_107;
          }
          v65 = v16 & 4;
          if ( (v16 & 4) == 0 )
          {
            if ( !v86 )
              goto LABEL_176;
            v49 = v75;
            v62 = 0;
            v51 = 0;
            v77 = (char *)&byte_22CD811;
            goto LABEL_188;
          }
          if ( v86 )
          {
            v49 = v75;
            v62 = 0;
            v51 = 0;
            v77 = " ";
            goto LABEL_188;
          }
          v65 = 0;
        }
        else
        {
          if ( *(_BYTE *)v75 == 2 )
          {
            v51 = *(int *)(v75 + 8);
            v49 = v75 + 32;
            v50 = v51;
            if ( v51 < 0 )
            {
LABEL_106:
              v75 = v49;
              v50 = -(__int64)v50;
              v47 = 10;
              v77 = "-";
LABEL_107:
              v52 = 39;
              if ( (_BYTE)v21 == 88 )
                v52 = 7;
              v19 = v109;
              while ( 1 )
              {
                v53 = v50 % v47 + 48;
                if ( v53 > 57 )
                  v53 += v52;
                *--v19 = v53;
                if ( v50 < v47 )
                  break;
                v50 /= v47;
              }
              v54 = 1024;
              if ( v86 <= 1024 )
                v54 = v86;
              v86 = v54;
              v105 = v20;
              if ( v54 <= v109 - v19 )
              {
                v25 = (_BYTE *)(v109 - v19);
                v100 = v16;
                v63 = strlen(v77);
                v86 = v109 - v19;
                v65 = 0;
                LOBYTE(v16) = v100;
                v24 = v63;
                v20 = v105;
              }
              else
              {
                v98 = v16;
                v25 = (_BYTE *)v54;
                memset(&v109[-v54], 48, v54 - (v109 - v19));
                v55 = strlen(v77);
                v19 = &v109[-v86];
                LOBYTE(v16) = v98;
                v65 = 0;
                v20 = v105;
                v24 = v55;
              }
              goto LABEL_34;
            }
            if ( (v16 & 2) != 0 )
            {
              v25 = (_BYTE *)(v51 | v86);
              if ( !(v51 | v86) )
              {
LABEL_102:
                v75 = v49;
                v24 = 0;
                v19 = nullptr;
                v65 = 0;
                v86 = 0;
                v77 = (char *)&byte_22CD811;
                goto LABEL_34;
              }
              v62 = 32;
              v77 = "+";
              goto LABEL_188;
            }
            v65 = v16 & 4;
            if ( (v16 & 4) != 0 )
            {
              v25 = (_BYTE *)(v51 | v86);
              if ( !(v51 | v86) )
              {
                v24 = 0;
                v65 = 0;
                goto LABEL_215;
              }
              v62 = 32;
              v77 = " ";
            }
            else
            {
              v25 = (_BYTE *)(v51 | v86);
              if ( !(v51 | v86) )
              {
                v24 = 0;
LABEL_215:
                v75 += 32;
                v19 = nullptr;
                v86 = 0;
                v77 = (char *)&byte_22CD811;
                goto LABEL_34;
              }
              v62 = 32;
              v77 = (char *)&byte_22CD811;
            }
LABEL_188:
            v75 = v49;
            v47 = 10;
            v50 = v51 & ~(-1LL << v62);
            goto LABEL_107;
          }
          v92 = v20;
          v85 = v16;
          v74 = v21;
          result = idcv_int64(v75, v19);
          LOBYTE(v21) = v74;
          LOBYTE(v16) = v85;
          v20 = v92;
          if ( (_DWORD)result )
          {
LABEL_177:
            if ( (_DWORD)result != 1531 )
              return result;
LABEL_178:
            v24 = 0;
            v77 = (char *)&byte_22CD811;
LABEL_167:
            v75 += 32;
            v25 = &byte_5;
            v19 = "<obj>";
            v65 = 1531;
            v86 = 5;
LABEL_34:
            v26 = v20 - v24 - (_QWORD)v25;
            if ( (v16 & 0x10) != 0 )
            {
              v36 = v77;
              v37 = *v77;
              if ( *v77 )
              {
                v97 = v16;
                v103 = v26;
                do
                {
                  ++v36;
                  result = a1(a2, (unsigned int)v37);
                  if ( (_DWORD)result )
                    return result;
                  v37 = *v36;
                }
                while ( *v36 );
                v26 = v103;
                v11 = (_DWORD)v36 + v11 - (_DWORD)v77;
                if ( (v97 & 1) != 0 )
                {
LABEL_64:
                  if ( v86 - 1 < 0 )
                    goto LABEL_150;
                  goto LABEL_65;
                }
                v77 = v36;
                v27 = 48;
              }
              else
              {
                if ( (v16 & 1) != 0 )
                  goto LABEL_64;
                v27 = 48;
              }
            }
            else
            {
              if ( (v16 & 1) != 0 )
              {
                v29 = *v77;
                goto LABEL_44;
              }
              v27 = 32;
            }
            if ( (__int64)(v26 - 1) >= 0 )
            {
              v94 = v11;
              v28 = v26 - 1;
              v102 = v26 - 1;
              while ( 1 )
              {
                result = a1(a2, v27);
                if ( (_DWORD)result )
                  return result;
                v26 = v28 - 1;
                if ( !v28 )
                  break;
                --v28;
              }
              v29 = *v77;
              v11 = v94 + v102 + 1;
              if ( !*v77 )
              {
                if ( v86 - 1 < 0 )
                  goto LABEL_8;
LABEL_65:
                v96 = v11;
                v35 = v19;
                v89 = v26;
                do
                {
                  result = a1(a2, (unsigned int)*v35++);
                  if ( (_DWORD)result )
                    return result;
                }
                while ( &v19[v86] != v35 );
                v26 = v89;
                v11 = v86 + v96;
LABEL_150:
                v59 = v26 - 1;
                if ( (__int64)(v26 - 1) >= 0 )
                {
                  while ( 1 )
                  {
                    result = a1(a2, 32);
                    if ( (_DWORD)result )
                      return result;
                    ++v11;
                    if ( v59-- == 0 )
                      goto LABEL_8;
                  }
                }
                goto LABEL_8;
              }
LABEL_45:
              v30 = v77;
              v95 = v26;
              do
              {
                ++v30;
                result = a1(a2, (unsigned int)v29);
                if ( (_DWORD)result )
                  return result;
                v29 = *v30;
              }
              while ( *v30 );
              v26 = v95;
              v11 = v11 + (_DWORD)v30 - (_DWORD)v77;
              goto LABEL_64;
            }
            --v26;
            v29 = *v77;
LABEL_44:
            if ( !v29 )
              goto LABEL_64;
            goto LABEL_45;
          }
          v49 = v75 + 32;
          v50 = *(_QWORD *)(v75 + 8);
          if ( (v50 & 0x8000000000000000LL) != 0LL )
            goto LABEL_106;
          if ( (v85 & 2) != 0 )
          {
            if ( !(v50 | v86) )
              goto LABEL_174;
            v75 += 32;
            v47 = 10;
            v77 = "+";
            goto LABEL_107;
          }
          v65 = v85 & 4;
          if ( (v85 & 4) == 0 )
          {
            v75 += 32;
            if ( !(v50 | v86) )
              goto LABEL_175;
            v47 = 10;
            v77 = (char *)&byte_22CD811;
            goto LABEL_107;
          }
          if ( v50 | v86 )
          {
            v75 += 32;
            v47 = 10;
            v77 = " ";
            goto LABEL_107;
          }
LABEL_174:
          v65 = 0;
          v75 = v49;
LABEL_175:
          v86 = 0;
        }
LABEL_176:
        v24 = 0;
        v25 = nullptr;
        v19 = nullptr;
        v77 = (char *)&byte_22CD811;
        goto LABEL_34;
      case 'o':
        v47 = 8;
        v77 = "0";
        if ( (v16 & 8) == 0 )
LABEL_124:
          v77 = (char *)&byte_22CD811;
        goto LABEL_99;
      case 's':
        if ( --v12 <= 0 )
          goto LABEL_190;
        v80 = v20;
        v68 = v16;
        result = idcv_string(v75);
        LOBYTE(v16) = v68;
        v20 = v80;
        if ( (_DWORD)result )
          goto LABEL_177;
        v19 = (char *)haystack;
        if ( *(_QWORD *)(v75 + 16) )
          v19 = *(char **)(v75 + 8);
        if ( v19 )
        {
          v56 = strlen(v19);
          v75 += 32;
          LOBYTE(v16) = v68;
          v20 = v80;
          v57 = v56;
        }
        else
        {
          v75 += 32;
LABEL_190:
          v57 = 6;
          v56 = 6;
          v19 = "(null)";
        }
        goto LABEL_131;
      case 'u':
        v47 = 10;
        v77 = (char *)&byte_22CD811;
LABEL_99:
        if ( --v12 <= 0 )
        {
          if ( v65 == 1531 )
            goto LABEL_166;
          v50 = 0;
          if ( v86 )
            goto LABEL_107;
          goto LABEL_157;
        }
        if ( *(_BYTE *)v75 == 2 )
        {
          v49 = v75 + 32;
          v50 = *(int *)(v75 + 8);
          v25 = (_BYTE *)(v50 | v86);
          if ( !(v50 | v86) )
            goto LABEL_102;
          v75 += 32;
          v50 = (unsigned int)v50;
          goto LABEL_107;
        }
        v106 = v47;
        v99 = v20;
        v90 = v16;
        v70 = v21;
        result = idcv_int64(v75, v19);
        LOBYTE(v21) = v70;
        LOBYTE(v16) = v90;
        v20 = v99;
        v47 = v106;
        if ( (_DWORD)result )
        {
          if ( (_DWORD)result != 1531 )
            return result;
LABEL_166:
          v88 = v20;
          v71 = v16;
          v61 = strlen(v77);
          LOBYTE(v16) = v71;
          v20 = v88;
          v24 = v61;
          goto LABEL_167;
        }
        v49 = v75 + 32;
        v50 = *(_QWORD *)(v75 + 8);
        if ( v50 | v86 )
        {
          v75 += 32;
          goto LABEL_107;
        }
        goto LABEL_174;
      default:
        goto LABEL_33;
    }
  }
  if ( --v12 > 0 )
  {
    v91 = v20;
    v82 = v16;
    result = idcv_long(v75, v19);
    if ( !(_DWORD)result )
    {
      v16 = v82;
      v20 = v91;
      v86 = *(int *)(v75 + 8);
      v75 += 32;
      goto LABEL_161;
    }
  }
  else
  {
    if ( !v65 )
    {
      v86 = 0;
LABEL_161:
      v21 = (unsigned __int8)v19[2];
      v65 = 0;
      v19 += 2;
      goto LABEL_59;
    }
    return 1531;
  }
  return result;
}

