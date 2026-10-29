signed __int64 __fastcall sub_5630C0(
        unsigned __int64 a1,
        char *a2,
        size_t a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int16 a6,
        char a7,
        char *a8)
{
  size_t v8; // rbx
  char **v12; // rax
  char v13; // r14
  char *v14; // r12
  int v15; // eax
  int v16; // eax
  unsigned __int16 v17; // si
  char *v18; // rax
  char v19; // r9
  char *v20; // rcx
  __int64 v21; // r8
  char *v22; // rdi
  char *v23; // r12
  __int64 v24; // rax
  char *v25; // rdi
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  char *v29; // r12
  __int64 v30; // rdx
  signed __int64 result; // rax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdi
  unsigned __int16 *v35; // rax
  __int64 v36; // r9
  unsigned __int16 *v37; // rsi
  unsigned __int64 v38; // r14
  char *v39; // rax
  int v40; // eax
  unsigned int v41; // r15d
  __int64 v42; // rbx
  unsigned int v43; // r13d
  __int64 v44; // r10
  bool v45; // al
  char *v46; // r11
  int v47; // eax
  char v48; // al
  int v49; // eax
  int v50; // r9d
  int v51; // ecx
  unsigned __int16 *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // eax
  unsigned int v56; // r14d
  char *v57; // r12
  char *v58; // rdi
  __int64 v59; // rax
  char *v60; // rax
  bool v61; // r8
  char *v62; // rcx
  __int64 v63; // r8
  int v64; // eax
  char *v65; // rax
  __int64 v66; // [rsp-10h] [rbp-98h]
  char **v68; // [rsp+8h] [rbp-80h]
  unsigned __int8 maxlen; // [rsp+10h] [rbp-78h]
  size_t maxlena; // [rsp+10h] [rbp-78h]
  bool maxlenc; // [rsp+10h] [rbp-78h]
  bool maxlenb; // [rsp+10h] [rbp-78h]
  bool maxlend; // [rsp+10h] [rbp-78h]
  char v74; // [rsp+18h] [rbp-70h]
  __int64 v75; // [rsp+18h] [rbp-70h]
  char *v76; // [rsp+20h] [rbp-68h]
  char *v77; // [rsp+28h] [rbp-60h]
  unsigned __int16 v78; // [rsp+30h] [rbp-58h]
  unsigned __int16 v79; // [rsp+30h] [rbp-58h]
  unsigned __int8 v80; // [rsp+30h] [rbp-58h]
  unsigned __int16 v81; // [rsp+30h] [rbp-58h]
  int v82; // [rsp+30h] [rbp-58h]
  unsigned __int16 v83; // [rsp+30h] [rbp-58h]
  unsigned __int16 v84; // [rsp+30h] [rbp-58h]
  unsigned __int8 v85; // [rsp+37h] [rbp-51h]
  char *v86; // [rsp+38h] [rbp-50h] BYREF
  __int16 v87; // [rsp+45h] [rbp-43h]
  char v88; // [rsp+47h] [rbp-41h]
  char *v89; // [rsp+48h] [rbp-40h] BYREF

  v8 = a3;
  v86 = a2;
  if ( !a1 )
    return snprintf(a2, a3, "(NULL)");
  v89 = a2;
  v12 = &v86;
  if ( a3 > 1 )
    v12 = &v89;
  v13 = a1 & 1;
  v68 = v12;
  if ( a5 )
  {
    v14 = a2;
    if ( a8 == "__ROOT__" || (v78 = a6, v15 = snprintf(a2, a3, " "), a6 = v78, v14 = &a2[v15], v89 = v14, !a8) )
    {
LABEL_8:
      if ( !v13 )
        goto LABEL_9;
LABEL_26:
      if ( !a6 )
      {
LABEL_27:
        v20 = sub_563060(a4, BYTE1(a1));
LABEL_28:
        v19 = 1;
        v21 = (a1 >> 5) & 1;
        goto LABEL_12;
      }
LABEL_52:
      v20 = sub_563060(a4, a6);
      goto LABEL_28;
    }
LABEL_7:
    v79 = a6;
    v16 = snprintf(*v68, v8, "%s: ", a8);
    a6 = v79;
    v14 += v16;
    v89 = v14;
    goto LABEL_8;
  }
  if ( v13 )
  {
    if ( (a1 & 0x20) != 0 )
    {
      v14 = a2;
      if ( a8 == "__ROOT__" )
        goto LABEL_26;
LABEL_25:
      v81 = a6;
      v32 = snprintf(a2, a3, " ");
      a6 = v81;
      v14 = &a2[v32];
      v89 = v14;
      if ( !a8 )
        goto LABEL_26;
      goto LABEL_7;
    }
    if ( a6 )
    {
      if ( a7 )
      {
        v14 = a2;
        if ( a8 == "__ROOT__" )
          goto LABEL_52;
        goto LABEL_25;
      }
      if ( a8 != "__ROOT__" )
        return 0;
      v62 = sub_563060(a4, a6);
    }
    else
    {
      if ( (a1 & 2) != 0 && (a1 & 4) != 0 )
      {
        v14 = a2;
        if ( a8 == "__ROOT__" )
          goto LABEL_27;
        goto LABEL_25;
      }
      if ( a8 != "__ROOT__" )
        return 0;
      v62 = sub_563060(a4, BYTE1(a1));
    }
    v63 = (a1 >> 2) & 1;
    goto LABEL_99;
  }
  LOBYTE(v28) = (*(_BYTE *)(a1 + 45) & 2) != 0;
  if ( (*(_BYTE *)(a1 + 45) & 2) != 0 )
  {
LABEL_47:
    v14 = a2;
    if ( a8 == "__ROOT__" || (v83 = a6, v47 = snprintf(a2, a3, " "), a6 = v83, v14 = &a2[v47], v89 = v14, !a8) )
    {
LABEL_9:
      v17 = *(_WORD *)(a1 + 40);
      if ( v17 != 0xFFFF )
        goto LABEL_10;
LABEL_76:
      if ( *(_DWORD *)(a1 + 36) )
      {
        v17 = -1;
        goto LABEL_10;
      }
LABEL_77:
      v17 = -1;
      if ( *(_DWORD *)(a1 + 16) )
      {
        v55 = snprintf(*v68, v8, "(UNEXPECTED ");
        v56 = *(_DWORD *)(a1 + 48);
        v57 = &v14[v55];
        v89 = v57;
        v58 = *v68;
        if ( v56 == -1 )
        {
          v59 = snprintf(v58, v8, "INVALID");
        }
        else if ( v56 )
        {
          switch ( v56 )
          {
            case 0xAu:
              v59 = snprintf(v58, v8, "'\\n'");
              break;
            case 9u:
              v59 = snprintf(v58, v8, "'\\t'");
              break;
            case 0xDu:
              v59 = snprintf(v58, v8, "'\\r'");
              break;
            default:
              if ( v56 - 1 <= 0x7E && (v58 = *v68, ((*__ctype_b_loc())[v56] & 0x4000) != 0) )
                v59 = snprintf(v58, v8, "'%c'", v56);
              else
                v59 = snprintf(v58, v8, "%d", v56);
              break;
          }
        }
        else
        {
          v59 = snprintf(v58, v8, "'\\0'");
        }
        v30 = *(unsigned int *)(a1 + 36);
        v29 = &v57[v59];
        v89 = v29;
        if ( !(_DWORD)v30 )
          return &v29[snprintf(*v68, v8, ")", v27, v28)] - a2;
        goto LABEL_31;
      }
LABEL_10:
      if ( !a6 )
      {
LABEL_11:
        v18 = sub_563060(a4, v17);
        v19 = 0;
        v20 = v18;
        LOBYTE(v21) = (*(_BYTE *)(a1 + 45) & 2) != 0;
LABEL_12:
        v74 = v19;
        v80 = v21;
        v22 = *v68;
        if ( (_BYTE)v21 )
        {
          v76 = v20;
          v23 = &v14[snprintf(v22, v8, "(MISSING ")];
          v89 = v23;
          if ( a7 )
          {
            v25 = *v68;
          }
          else
          {
            if ( v74 )
              v24 = (a1 >> 2) & 1;
            else
              LOBYTE(v24) = (*(_BYTE *)(a1 + 44) & 2) != 0;
            v25 = *v68;
            if ( !(_BYTE)v24 )
            {
              maxlen = v80;
              v26 = snprintf(v25, v8, "\"%s\"", v76);
              goto LABEL_18;
            }
          }
          maxlen = v80;
          v26 = snprintf(v25, v8, "%s", v76);
LABEL_18:
          v28 = maxlen;
          v29 = &v23[v26];
          v89 = v29;
          if ( v13 )
            return &v29[snprintf(*v68, v8, ")", v27, v28)] - a2;
          v30 = *(unsigned int *)(a1 + 36);
          if ( !(_DWORD)v30 )
            return &v29[snprintf(*v68, v8, ")", v27, v28)] - a2;
LABEL_32:
          v33 = 0;
          if ( *(_WORD *)(a1 + 66) )
            v33 = *(_QWORD *)(a4 + 128)
                + 2LL * *(unsigned __int16 *)(a1 + 66) * (unsigned int)*(unsigned __int16 *)(a4 + 36);
          if ( *(_DWORD *)(a4 + 32) )
          {
            v34 = *(_QWORD *)(a4 + 96);
            v35 = (unsigned __int16 *)(*(_QWORD *)(a4 + 88) + 4LL * *(unsigned __int16 *)(a1 + 66));
            v36 = *v35;
            v37 = (unsigned __int16 *)(v34 + 4 * v36);
            v38 = v34 + 4 * (v36 + v35[1]);
          }
          else
          {
            v38 = 0;
            v37 = nullptr;
          }
          v39 = nullptr;
          v85 = v28;
          if ( !(_BYTE)v28 )
            v39 = a8;
          v75 = v33;
          v77 = v39;
          v40 = a5;
          v41 = 0;
          v82 = v40;
          maxlena = v8;
          v42 = a4;
          v43 = 0;
          do
          {
            v44 = *(_QWORD *)(a1 + 8 * (v41 - v30));
            v45 = (v44 & 8) != 0;
            if ( (v44 & 1) == 0 )
              v45 = (*(_BYTE *)(v44 + 44) & 4) != 0;
            v46 = *v68;
            if ( v45 )
            {
              v29 += sub_5630C0(v44, (_DWORD)v46, maxlena, v42, v82, 0, 0, 0);
            }
            else
            {
              if ( v75 && *(_WORD *)(v75 + 2LL * v43) )
              {
                v49 = sub_562EC0(v42, *(_WORD *)(v75 + 2LL * v43));
                v87 = v49;
                v88 = BYTE2(v49);
                v51 = BYTE1(v49);
              }
              else
              {
                v50 = 0;
                v51 = 0;
              }
              v52 = v37;
              if ( (unsigned __int64)v37 >= v38 )
              {
LABEL_73:
                v53 = (__int64)v77;
              }
              else
              {
                while ( *((_BYTE *)v52 + 3) || *((unsigned __int8 *)v52 + 2) != v43 )
                {
                  v52 += 2;
                  if ( (unsigned __int64)v52 >= v38 )
                    goto LABEL_73;
                }
                v53 = *(_QWORD *)(*(_QWORD *)(v42 + 80) + 8LL * *v52);
              }
              ++v43;
              v54 = sub_5630C0(v44, (_DWORD)v46, maxlena, v42, v82, v50, v51, v53);
              v27 = v66;
              v29 += v54;
            }
            v30 = *(unsigned int *)(a1 + 36);
            ++v41;
            v89 = v29;
          }
          while ( v41 < (unsigned int)v30 );
          v28 = v85;
          v8 = maxlena;
          if ( !v85 )
            return v29 - a2;
          return &v29[snprintf(*v68, v8, ")", v27, v28)] - a2;
        }
        v29 = &v14[snprintf(v22, v8, "(%s", v20)];
        v89 = v29;
        if ( v13 )
          return &v29[snprintf(*v68, v8, ")", v27, v28)] - a2;
        v30 = *(unsigned int *)(a1 + 36);
        if ( !(_DWORD)v30 )
          return &v29[snprintf(*v68, v8, ")", v27, v28)] - a2;
LABEL_31:
        LOBYTE(v28) = 1;
        goto LABEL_32;
      }
LABEL_54:
      v17 = a6;
      goto LABEL_11;
    }
    goto LABEL_7;
  }
  if ( a6 )
  {
    if ( a7 )
    {
      if ( a8 == "__ROOT__" )
      {
        v14 = a2;
        if ( *(_WORD *)(a1 + 40) != 0xFFFF )
          goto LABEL_54;
        goto LABEL_76;
      }
      v84 = a6;
      v64 = snprintf(a2, a3, " ");
      a6 = v84;
      v14 = &a2[v64];
      v89 = v14;
      if ( !a8 )
      {
        if ( *(_WORD *)(a1 + 40) != 0xFFFF || *(_DWORD *)(a1 + 36) )
          goto LABEL_54;
        goto LABEL_77;
      }
      goto LABEL_7;
    }
    if ( a8 != "__ROOT__" )
      goto LABEL_59;
    maxlenc = (*(_BYTE *)(a1 + 45) & 2) != 0;
    v60 = sub_563060(a4, a6);
    v61 = maxlenc;
    v62 = v60;
  }
  else
  {
    v48 = *(_BYTE *)(a1 + 44);
    if ( (v48 & 1) != 0 && (v48 & 2) != 0 )
      goto LABEL_47;
    if ( a8 != "__ROOT__" )
    {
LABEL_59:
      v30 = *(unsigned int *)(a1 + 36);
      if ( (_DWORD)v30 )
      {
        v29 = a2;
        goto LABEL_32;
      }
      return 0;
    }
    maxlend = (*(_BYTE *)(a1 + 45) & 2) != 0;
    v65 = sub_563060(a4, *(_WORD *)(a1 + 40));
    v61 = maxlend;
    v62 = v65;
  }
  if ( *(_DWORD *)(a1 + 36) )
  {
    maxlenb = v61;
    result = snprintf(a2, v8, "(%s", v62);
    v29 = &a2[(int)result];
    v89 = v29;
LABEL_117:
    v30 = *(unsigned int *)(a1 + 36);
    LOBYTE(v28) = maxlenb;
    if ( (_DWORD)v30 )
      goto LABEL_32;
    return result;
  }
  LOBYTE(v63) = (*(_BYTE *)(a1 + 44) & 2) != 0;
LABEL_99:
  if ( !(_BYTE)v63 )
  {
    maxlenb = 0;
    result = snprintf(a2, v8, "(\"%s\")", v62);
    v29 = &a2[(int)result];
    v89 = v29;
    if ( v13 )
      return result;
    goto LABEL_117;
  }
  result = snprintf(a2, v8, "(%s)", v62);
  v29 = &a2[(int)result];
  v89 = v29;
  if ( !v13 )
  {
    v30 = *(unsigned int *)(a1 + 36);
    if ( (_DWORD)v30 )
    {
      LOBYTE(v28) = a5;
      goto LABEL_32;
    }
  }
  return result;
}
