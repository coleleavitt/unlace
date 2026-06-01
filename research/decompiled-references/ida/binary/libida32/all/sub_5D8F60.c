__int64 __fastcall sub_5D8F60(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  __int64 v5; // rbx
  __int64 v7; // rdi
  __int64 result; // rax
  char v9; // al
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // al
  __int64 v12; // r12
  __int64 v13; // rax
  char v14; // dl
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  int v20; // eax
  unsigned int v21; // r12d
  char **p_s; // rdx
  __int64 v23; // rbx
  char v24; // al
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // r12
  char v28; // al
  int v29; // edx
  __int64 v30; // rsi
  int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // r12d
  char v34; // al
  char v35; // r13
  unsigned int v36; // eax
  bool v37; // cl
  bool v38; // r13
  __int64 v39; // rdx
  unsigned int v40; // r13d
  const char *v41; // r13
  char *v42; // rax
  void *v43; // rax
  size_t v44; // r8
  __int64 v45; // rax
  size_t v46; // rdx
  __int64 v47; // r13
  __int64 v48; // rdi
  char *v49; // rsi
  void *v50; // rax
  _BYTE *v51; // rax
  __int64 v52; // rdx
  unsigned int v53; // edx
  int v54; // eax
  int v55; // eax
  __int64 v56; // r15
  char v57; // al
  int v58; // eax
  char v59; // al
  char *v60; // rdi
  size_t v61; // rdx
  __int64 v62; // rdx
  _DWORD *v63; // rax
  __int64 v64; // rdx
  bool v65; // al
  char v66; // al
  __int64 v67; // rdx
  _DWORD *v68; // rax
  __int64 v69; // rdx
  unsigned int n; // [rsp+0h] [rbp-D8h]
  size_t nc; // [rsp+0h] [rbp-D8h]
  unsigned int nd; // [rsp+0h] [rbp-D8h]
  bool na; // [rsp+0h] [rbp-D8h]
  size_t nb; // [rsp+0h] [rbp-D8h]
  size_t nf; // [rsp+0h] [rbp-D8h]
  size_t ne; // [rsp+0h] [rbp-D8h]
  bool srca; // [rsp+8h] [rbp-D0h]
  char src; // [rsp+8h] [rbp-D0h]
  bool srcc; // [rsp+8h] [rbp-D0h]
  void *srcb; // [rsp+8h] [rbp-D0h]
  char *s; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v82; // [rsp+18h] [rbp-C0h]
  __int64 v83; // [rsp+28h] [rbp-B0h]
  int v84; // [rsp+30h] [rbp-A8h]
  _BYTE v85[88]; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v86; // [rsp+98h] [rbp-40h]

  v86 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 208);
  if ( v3 == 6 || (v5 = a2, !v3) && !*(_BYTE *)(a2 + 186) )
  {
    v7 = 47;
    return set_qerrno(v7, a2);
  }
  v9 = *(_BYTE *)(a1 + 737);
  if ( v9 )
  {
    if ( *(_BYTE *)(a2 + 185) )
      goto LABEL_53;
    *(_BYTE *)(a2 + 185) = v9;
    if ( (a3 & 4) == 0 )
      *(_BYTE *)(a1 + 737) = 0;
  }
  v10 = *(_BYTE *)(a2 + 186);
  v11 = v10 & 0xF;
  if ( (v10 & 0xF) == 0xC )
  {
    if ( v10 > 0x3Fu )
    {
      v7 = 71;
      return set_qerrno(v7, a2);
    }
    v25 = *(_QWORD *)(a2 + 48);
    v26 = *(_QWORD *)(v25 + 40);
    v27 = v26 & 0x180000000LL;
    if ( (v26 & 0x40000000) != 0 )
    {
      if ( !v27 )
      {
        v7 = 1670;
        return set_qerrno(v7, a2);
      }
      if ( (v26 & 0x100000000LL) != 0 )
      {
        v28 = 1;
        goto LABEL_57;
      }
      v41 = *(const char **)v25;
      v42 = strstr(*(const char **)v25, "::");
      if ( !v42 )
      {
        if ( !under_debugger )
          interr(1553);
        BUG();
      }
      s = nullptr;
      v43 = (void *)(v42 - v41);
      v82 = 0;
      v44 = (size_t)v43;
      if ( v43 )
      {
        v60 = nullptr;
        v61 = (size_t)v43 + 1;
        if ( v43 != (void *)-1LL )
        {
          ne = (size_t)v43 + 1;
          srcb = v43;
          s = (char *)qvector_reserve(&s, 0, v61, 1);
          v44 = (size_t)srcb;
          v60 = s;
          v61 = ne;
        }
        *(_QWORD *)&v82 = v61;
        nf = v44;
        memmove(v60, v41, v44);
        s[nf] = 0;
      }
      v45 = sub_5CB650(a1);
      *(_BYTE *)(v45 + 186) = 61;
      v46 = v82;
      v47 = v45;
      v48 = 1;
      v49 = (char *)haystack;
      if ( (_QWORD)v82 )
      {
        v49 = s;
        v46 = strlen(s);
        v48 = v46 + 1;
      }
      nc = v46;
      v50 = (void *)qalloc_or_throw(v48, v49);
      v51 = memcpy(v50, v49, nc);
      v51[nc] = 0;
      *(_QWORD *)(v47 + 72) = v51;
      v28 = 10;
      *(_BYTE *)(v25 + 186) = 10;
      *(_QWORD *)(v25 + 48) = v47;
      if ( !s )
      {
LABEL_57:
        *(_BYTE *)(v25 + 186) = v28;
        LOWORD(v29) = *(_QWORD *)(v5 + 40);
        v30 = *(_QWORD *)(v5 + 40) & 0x1E0LL;
        if ( (v29 & 0x1E0) != 0 || (LODWORD(v30) = *(_DWORD *)(v25 + 40) & 0x1E0, (_DWORD)v30) )
        {
          sub_5C9C60(v5, v30);
          v29 = *(_DWORD *)(v5 + 40);
        }
        v31 = v29 & 0xF000;
        if ( v31 )
        {
          v32 = *(_DWORD *)(v5 + 180);
        }
        else
        {
          if ( v27 )
            sub_5C6D00(v25);
          while ( (*(_BYTE *)(v25 + 186) & 0xF) == 0xB )
            v25 = *(_QWORD *)(v25 + 48);
          v32 = *(_DWORD *)(v25 + 180);
          v31 = *(_DWORD *)(v25 + 40) & 0xF000;
        }
        v33 = sub_5CE340(a1, v5, v31, v32);
        if ( v33 )
          return 0xFFFFFFFFLL;
        a2 = v25;
        n = *(_DWORD *)(v5 + 68);
        v34 = sub_5CD650(a1, v25);
        if ( !v34 )
          return 0xFFFFFFFFLL;
        v35 = v34 & 0xF;
        v36 = n;
        if ( n <= 0x10 )
          v36 = getinf(99);
        v37 = v36 == 176 || v36 == 256;
        if ( v35 == 12 || (v38 = v36 != 176 && v36 != 256 && v35 == 11) )
        {
          v7 = 74;
          return set_qerrno(v7, a2);
        }
        v39 = *(_QWORD *)(v5 + 40) & 0x30000LL;
        if ( (*(_QWORD *)(v5 + 40) & 0x30000) == 0 )
          LODWORD(v39) = *(_DWORD *)(v25 + 40) & 0x30000;
        *(_QWORD *)(v5 + 40) = (unsigned int)v39 | *(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFFCFFFFLL;
        if ( !*(_BYTE *)(v25 + 185) )
        {
          if ( *(_QWORD *)(v5 + 16) )
          {
            if ( (*(_BYTE *)(v25 + 186) & 0xFu) <= 9 && *(_QWORD *)(v25 + 16) )
            {
              v7 = 1667;
              return set_qerrno(v7, a2);
            }
          }
          else
          {
            *(_QWORD *)(v5 + 16) = *(_QWORD *)(v25 + 16);
            *(_QWORD *)(v25 + 16) = 0;
            if ( !*(_QWORD *)(v5 + 16) )
              goto LABEL_111;
          }
          a2 = v5;
          srca = v36 == 176 || v36 == 256;
          v54 = sub_5CE210(a1, v5);
          v37 = srca;
          if ( v54 )
            return 0xFFFFFFFFLL;
LABEL_111:
          if ( n - 208 <= 0x2F )
          {
            srcc = v37;
            v33 = 1;
            v65 = sub_5CD7B0(a1, v25);
            a2 = n;
            v66 = sub_689E30(v25 + 112, n, v65);
            v37 = srcc;
            if ( !v66 )
            {
              v7 = 1162;
              return set_qerrno(v7, a2);
            }
          }
          if ( (*(_BYTE *)(v25 + 186) & 0xF) == 0xD
            && (~*(_BYTE *)(v25 + 186) & 0x30) != 0
            && (*(_BYTE *)(v25 + 80) & 2) != 0 )
          {
            goto LABEL_131;
          }
          na = v37;
          if ( (unsigned int)sub_5D8F60(a1, v25, v33) )
            return 0xFFFFFFFFLL;
          v55 = *(_DWORD *)(v25 + 112);
          a2 = *(unsigned int *)(v5 + 64);
          if ( v55 == 2 )
          {
            v67 = *(_QWORD *)(v25 + 120);
            v68 = *(_DWORD **)v67;
            v69 = *(_QWORD *)v67 + 24LL * *(_QWORD *)(v67 + 8);
            if ( v68 == (_DWORD *)v69 )
            {
LABEL_116:
              src = 1;
              if ( (int)a2 <= 0 )
              {
LABEL_154:
                v16 = *(_QWORD *)(v5 + 40) | 0x20000000LL;
                *(_QWORD *)(v5 + 40) = v16;
                goto LABEL_18;
              }
LABEL_117:
              v56 = 0;
              while ( 1 )
              {
                a2 = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8 * v56);
                if ( (*(_BYTE *)(a2 + 186) & 0xF) == 0xD
                  && (~*(_BYTE *)(a2 + 186) & 0x30) != 0
                  && (*(_BYTE *)(a2 + 80) & 2) != 0 )
                {
                  break;
                }
                if ( *(_BYTE *)(a2 + 185) )
                  goto LABEL_53;
                nb = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8 * v56);
                v57 = sub_5CD650(a1, a2);
                a2 = nb;
                if ( (*(_BYTE *)(nb + 43) & 0xE) != 0 && (v57 & 0xF) != 0xA )
                {
                  v7 = 1201;
                  return set_qerrno(v7, a2);
                }
                if ( v33 )
                {
                  v58 = *(_DWORD *)(nb + 112);
                  if ( v58 )
                  {
                    if ( v58 == 2 )
                    {
                      v62 = *(_QWORD *)(nb + 120);
                      v63 = *(_DWORD **)v62;
                      v64 = *(_QWORD *)v62 + 24LL * *(_QWORD *)(v62 + 8);
                      if ( v63 == (_DWORD *)v64 )
                      {
LABEL_152:
                        src = 1;
                        v59 = v38;
                      }
                      else
                      {
                        while ( *v63 == 1 )
                        {
                          v63 += 6;
                          if ( (_DWORD *)v64 == v63 )
                            goto LABEL_152;
                        }
                        v59 = v38 & src;
                      }
                    }
                    else
                    {
                      src |= v58 == 1;
                      v59 = v38 & src;
                    }
                  }
                  else
                  {
                    v38 = 1;
                    cleanup_argloc(nb + 112);
                    a2 = nb;
                    v59 = src;
                    *(_DWORD *)(nb + 112) = 1;
                    *(_DWORD *)(nb + 120) = 0;
                  }
                  if ( v59 )
                  {
                    v7 = 1725;
                    return set_qerrno(v7, a2);
                  }
                }
                if ( (unsigned int)sub_5D8F60(a1, a2, v33 | 2) )
                  return 0xFFFFFFFFLL;
                if ( *(_DWORD *)(v5 + 64) <= (int)++v56 )
                {
                  if ( !src )
                    goto LABEL_17;
                  goto LABEL_154;
                }
              }
LABEL_131:
              v7 = 79;
              return set_qerrno(v7, a2);
            }
            while ( *v68 == 1 )
            {
              v68 += 6;
              if ( (_DWORD *)v69 == v68 )
                goto LABEL_116;
            }
          }
          else if ( v55 == 1 )
          {
            goto LABEL_116;
          }
          src = 0;
          v38 = na;
          if ( (int)a2 <= 0 )
            goto LABEL_17;
          goto LABEL_117;
        }
LABEL_53:
        v7 = 1288;
        return set_qerrno(v7, a2);
      }
      *(_QWORD *)&v82 = 0;
      qfree(s);
    }
    v28 = *(_BYTE *)(v25 + 186) & 0x3F;
    goto LABEL_57;
  }
  if ( v11 > 0xCu )
  {
    if ( v11 == 13 && (v10 & 0x3F) != 0x3D )
    {
      sub_5CE6B0(a1, a2);
      v24 = *(_BYTE *)(a2 + 186);
      if ( (v24 & 0x2F) == 0xD )
      {
        if ( (unsigned int)sub_5D8AA0(a1, a2) )
          return 0xFFFFFFFFLL;
        v24 = *(_BYTE *)(a2 + 186);
      }
      if ( (v24 & 0x3F) == 0x2D && (unsigned int)sub_5CE8C0(a1, a2) )
        return 0xFFFFFFFFLL;
    }
LABEL_17:
    v16 = *(_QWORD *)(v5 + 40);
    goto LABEL_18;
  }
  if ( v11 != 10 )
  {
    if ( v11 == 11 )
    {
      v12 = *(_QWORD *)(a2 + 48);
      v13 = *(_QWORD *)(v12 + 40);
      if ( (v13 & 0x10000000) != 0 )
      {
        *(_QWORD *)(v12 + 40) = v13 & 0xFFFFFFFFEFFFFFFFLL;
        *(_QWORD *)(a2 + 40) |= 0x10000000uLL;
      }
      if ( !(unsigned int)sub_5D8F60(a1, v12, 0) )
      {
        a2 = v12;
        v14 = *(_BYTE *)(v5 + 186) & 0x3F;
        *(_BYTE *)(v5 + 186) = v14;
        *(_BYTE *)(v5 + 186) = v14 | *(_BYTE *)(v12 + 186) & 0xC0;
        v15 = sub_5CD650(a1, v12);
        if ( v15 )
        {
          if ( (v15 & 0xF) == 0xC || (v15 & 0x3F) == 1 )
          {
            v7 = 73;
            return set_qerrno(v7, a2);
          }
          goto LABEL_17;
        }
      }
      return 0xFFFFFFFFLL;
    }
    goto LABEL_17;
  }
  v17 = *(_QWORD *)(a2 + 48);
  if ( (*(_BYTE *)(v17 + 186) & 0xF) == 0xC )
  {
    v52 = *(_QWORD *)(a2 + 40);
    if ( (v52 & 0xF000) != 0 )
    {
      if ( (unsigned int)sub_5CE340(a1, *(_QWORD *)(a2 + 48), v52, *(_DWORD *)(a2 + 180)) )
        return 0xFFFFFFFFLL;
      v52 = *(_QWORD *)(a2 + 40);
    }
    v18 = *(_QWORD *)(v17 + 40);
    v53 = v52 & 0x30000;
    if ( v53 )
    {
      v18 = v53 | v18 & 0xFFFFFFFFFFFCFFFFLL;
      *(_QWORD *)(v17 + 40) = v18;
    }
  }
  else
  {
    v18 = *(_QWORD *)(v17 + 40);
  }
  if ( (v18 & 0x10000000) != 0 )
  {
    *(_QWORD *)(v17 + 40) = v18 & 0xFFFFFFFFEFFFFFFFLL;
    *(_QWORD *)(a2 + 40) |= 0x10000000uLL;
  }
  if ( (unsigned int)sub_5D8F60(a1, v17, 0) )
    return 0xFFFFFFFFLL;
  v19 = *(_QWORD *)(v17 + 40) & 0x1E0LL;
  if ( (*(_DWORD *)(v17 + 40) & 0x1E0u) <= 0xDF && (_DWORD)v19 )
    sub_5C9C60(v5, v19);
  v16 = *(_QWORD *)(v5 + 40);
  a2 = v16 & 0x1E0;
  if ( (*(_DWORD *)(v5 + 40) & 0x1E0u) > 0xDF )
  {
    sub_5C9C60(v5, a2);
    v16 = *(_QWORD *)(v5 + 40);
  }
  if ( (v16 & 0x1F) != 0 )
  {
    v7 = 72;
    return set_qerrno(v7, a2);
  }
  if ( *(_QWORD *)(v5 + 32) )
  {
    a2 = *(unsigned int *)(v5 + 176);
    if ( !(_DWORD)a2 )
    {
      v7 = 1692;
      return set_qerrno(v7, a2);
    }
  }
LABEL_18:
  if ( (v16 & 0x1F000000) != 0 && (a3 & 2) == 0 )
  {
    v7 = 1668;
    return set_qerrno(v7, a2);
  }
  if ( !*(_DWORD *)(v5 + 112) )
    return 0;
  v20 = sub_5D89D0(a1, v5, 1);
  v21 = v20;
  if ( (a3 & 1) == 0 )
  {
    v40 = 1324;
    v23 = v5 + 112;
    goto LABEL_78;
  }
  s = nullptr;
  v83 = 0;
  v84 = -1;
  v82 = 0;
  if ( (unsigned __int8)sub_5D8E60(a1, (__int64)&s, v5, v20) )
  {
    p_s = nullptr;
    if ( *(_DWORD *)(v5 + 112) == 2 )
      p_s = &s;
    v23 = v5 + 112;
    if ( (unsigned __int8)optimize_argloc(v23, v21, p_s) )
    {
      if ( s )
      {
        *(_QWORD *)&v82 = 0;
        qfree(s);
      }
      return 0;
    }
    if ( s )
    {
      *(_QWORD *)&v82 = 0;
      qfree(s);
    }
    v40 = 691;
LABEL_78:
    print_argloc(v85, 80, v23, v21, 2);
    set_error_string();
    return set_qerrno(v40, v85);
  }
  result = set_qerrno(1562, &s);
  if ( s )
  {
    nd = result;
    *(_QWORD *)&v82 = 0;
    qfree(s);
    return nd;
  }
  return result;
}

