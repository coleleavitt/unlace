__int64 __fastcall sub_5F4DE0(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  __int64 result; // rax
  char v8; // al
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // al
  __int64 v11; // r12
  __int64 v12; // rax
  char v13; // dl
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // r12
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  unsigned int v19; // eax
  unsigned int v20; // r12d
  char **p_s; // rdx
  __int64 v22; // rbx
  char v23; // al
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r12
  char v27; // al
  int v28; // edx
  __int64 v29; // rsi
  int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // r12d
  char v33; // al
  char v34; // r13
  unsigned int v35; // eax
  bool v36; // cl
  bool v37; // r13
  __int64 v38; // rdx
  unsigned int v39; // r13d
  const char *v40; // r13
  char *v41; // rax
  void *v42; // rax
  size_t v43; // r8
  __int64 v44; // rax
  size_t v45; // rdx
  __int64 v46; // r13
  __int64 v47; // rdi
  char *v48; // rsi
  void *v49; // rax
  _BYTE *v50; // rax
  __int64 v51; // rdx
  unsigned int v52; // edx
  int v53; // eax
  int v54; // eax
  int v55; // esi
  __int64 v56; // r15
  char v57; // al
  size_t v58; // rsi
  int v59; // eax
  char v60; // al
  _BYTE *v61; // rsi
  char *v62; // rdi
  size_t v63; // rdx
  __int64 v64; // rdx
  _DWORD *v65; // rax
  __int64 v66; // rdx
  bool v67; // al
  char v68; // al
  __int64 v69; // rdx
  _DWORD *v70; // rax
  __int64 v71; // rdx
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
  __int128 v84; // [rsp+18h] [rbp-C0h]
  __int64 v85; // [rsp+28h] [rbp-B0h]
  int v86; // [rsp+30h] [rbp-A8h]
  _BYTE v87[88]; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v88; // [rsp+98h] [rbp-40h]

  v88 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 216);
  if ( v3 == 6 || !v3 && !*(_BYTE *)(a2 + 186) )
    return set_qerrno(47);
  v8 = *(_BYTE *)(a1 + 753);
  if ( v8 )
  {
    if ( *(_BYTE *)(a2 + 185) )
      return set_qerrno(1288);
    *(_BYTE *)(a2 + 185) = v8;
    if ( (a3 & 4) == 0 )
      *(_BYTE *)(a1 + 753) = 0;
  }
  v9 = *(_BYTE *)(a2 + 186);
  v10 = v9 & 0xF;
  if ( (v9 & 0xF) == 0xC )
  {
    if ( v9 > 0x3Fu )
      return set_qerrno(71);
    v24 = *(_QWORD *)(a2 + 48);
    v25 = *(_QWORD *)(v24 + 40);
    v26 = v25 & 0x180000000LL;
    if ( (v25 & 0x40000000) != 0 )
    {
      if ( !v26 )
        return set_qerrno(1670);
      if ( (v25 & 0x100000000LL) != 0 )
      {
        v27 = 1;
        goto LABEL_56;
      }
      v40 = *(const char **)v24;
      v41 = strstr(*(const char **)v24, "::");
      if ( !v41 )
      {
        if ( !under_debugger )
          interr(1553);
        BUG();
      }
      s = nullptr;
      v42 = (void *)(v41 - v40);
      v84 = 0;
      v43 = (size_t)v42;
      if ( v42 )
      {
        v62 = nullptr;
        v63 = (size_t)v42 + 1;
        if ( v42 != (void *)-1LL )
        {
          ne = (size_t)v42 + 1;
          srcb = v42;
          s = (char *)qvector_reserve(&s, 0, v63, 1);
          v43 = (size_t)srcb;
          v62 = s;
          v63 = ne;
        }
        *(_QWORD *)&v84 = v63;
        nf = v43;
        memmove(v62, v40, v43);
        s[nf] = 0;
      }
      v44 = sub_5E7430(a1);
      *(_BYTE *)(v44 + 186) = 61;
      v45 = v84;
      v46 = v44;
      v47 = 1;
      v48 = (char *)haystack;
      if ( (_QWORD)v84 )
      {
        v48 = s;
        v45 = strlen(s);
        v47 = v45 + 1;
      }
      nc = v45;
      v49 = (void *)qalloc_or_throw(v47);
      v50 = memcpy(v49, v48, nc);
      v50[nc] = 0;
      *(_QWORD *)(v46 + 72) = v50;
      v27 = 10;
      *(_BYTE *)(v24 + 186) = 10;
      *(_QWORD *)(v24 + 48) = v46;
      if ( !s )
      {
LABEL_56:
        *(_BYTE *)(v24 + 186) = v27;
        LOWORD(v28) = *(_QWORD *)(a2 + 40);
        v29 = *(_QWORD *)(a2 + 40) & 0x1E0LL;
        if ( (v28 & 0x1E0) != 0 || (LODWORD(v29) = *(_DWORD *)(v24 + 40) & 0x1E0, (_DWORD)v29) )
        {
          sub_5E5A10(a2, v29);
          v28 = *(_DWORD *)(a2 + 40);
        }
        v30 = v28 & 0xF000;
        if ( v30 )
        {
          v31 = *(_DWORD *)(a2 + 180);
        }
        else
        {
          if ( v26 )
            sub_5E2A10(v24);
          while ( (*(_BYTE *)(v24 + 186) & 0xF) == 0xB )
            v24 = *(_QWORD *)(v24 + 48);
          v31 = *(_DWORD *)(v24 + 180);
          v30 = *(_DWORD *)(v24 + 40) & 0xF000;
        }
        v32 = sub_5EA130(a1, a2, v30, v31);
        if ( v32 )
          return 0xFFFFFFFFLL;
        n = *(_DWORD *)(a2 + 68);
        v33 = sub_5E9440(a1, v24);
        if ( !v33 )
          return 0xFFFFFFFFLL;
        v34 = v33 & 0xF;
        v35 = n;
        if ( n <= 0x10 )
          v35 = getinf(99);
        v36 = v35 == 176 || v35 == 256;
        if ( v34 == 12 )
          return set_qerrno(74);
        v37 = v35 != 176 && v35 != 256 && v34 == 11;
        if ( v37 )
          return set_qerrno(74);
        v38 = *(_QWORD *)(a2 + 40) & 0x30000LL;
        if ( (*(_QWORD *)(a2 + 40) & 0x30000) == 0 )
          LODWORD(v38) = *(_DWORD *)(v24 + 40) & 0x30000;
        *(_QWORD *)(a2 + 40) = (unsigned int)v38 | *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFCFFFFLL;
        if ( !*(_BYTE *)(v24 + 185) )
        {
          if ( *(_QWORD *)(a2 + 16) )
          {
            if ( (*(_BYTE *)(v24 + 186) & 0xFu) <= 9 && *(_QWORD *)(v24 + 16) )
              return set_qerrno(1667);
          }
          else
          {
            *(_QWORD *)(a2 + 16) = *(_QWORD *)(v24 + 16);
            *(_QWORD *)(v24 + 16) = 0;
            if ( !*(_QWORD *)(a2 + 16) )
              goto LABEL_110;
          }
          srca = v35 == 176 || v35 == 256;
          v53 = sub_5EA000(a1, a2);
          v36 = srca;
          if ( v53 )
            return 0xFFFFFFFFLL;
LABEL_110:
          if ( n - 208 <= 0x2F )
          {
            srcc = v36;
            v32 = 1;
            v67 = sub_5E95A0(a1, v24);
            v68 = sub_6AA620(v24 + 112, n, v67);
            v36 = srcc;
            if ( !v68 )
              return set_qerrno(1162);
          }
          if ( (*(_BYTE *)(v24 + 186) & 0xF) == 0xD
            && (~*(_BYTE *)(v24 + 186) & 0x30) != 0
            && (*(_BYTE *)(v24 + 80) & 2) != 0 )
          {
            return set_qerrno(79);
          }
          na = v36;
          if ( (unsigned int)sub_5F4DE0(a1, v24, v32) )
            return 0xFFFFFFFFLL;
          v54 = *(_DWORD *)(v24 + 112);
          v55 = *(_DWORD *)(a2 + 64);
          if ( v54 == 2 )
          {
            v69 = *(_QWORD *)(v24 + 120);
            v70 = *(_DWORD **)v69;
            v71 = *(_QWORD *)v69 + 24LL * *(_QWORD *)(v69 + 8);
            if ( v70 == (_DWORD *)v71 )
            {
LABEL_115:
              src = 1;
              if ( v55 <= 0 )
              {
LABEL_153:
                v15 = *(_QWORD *)(a2 + 40) | 0x20000000LL;
                *(_QWORD *)(a2 + 40) = v15;
                goto LABEL_17;
              }
LABEL_116:
              v56 = 0;
              while ( 1 )
              {
                v61 = *(_BYTE **)(*(_QWORD *)(a2 + 56) + 8 * v56);
                if ( (v61[186] & 0xF) == 0xD && (~v61[186] & 0x30) != 0 && (v61[80] & 2) != 0 )
                  return set_qerrno(79);
                if ( v61[185] )
                  return set_qerrno(1288);
                nb = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 8 * v56);
                v57 = sub_5E9440(a1, (__int64)v61);
                v58 = nb;
                if ( (*(_BYTE *)(nb + 43) & 0xE) != 0 && (v57 & 0xF) != 0xA )
                  return set_qerrno(1201);
                if ( v32 )
                {
                  v59 = *(_DWORD *)(nb + 112);
                  if ( v59 )
                  {
                    if ( v59 == 2 )
                    {
                      v64 = *(_QWORD *)(nb + 120);
                      v65 = *(_DWORD **)v64;
                      v66 = *(_QWORD *)v64 + 24LL * *(_QWORD *)(v64 + 8);
                      if ( v65 == (_DWORD *)v66 )
                      {
LABEL_151:
                        src = 1;
                        v60 = v37;
                      }
                      else
                      {
                        while ( *v65 == 1 )
                        {
                          v65 += 6;
                          if ( (_DWORD *)v66 == v65 )
                            goto LABEL_151;
                        }
                        v60 = v37 & src;
                      }
                    }
                    else
                    {
                      src |= v59 == 1;
                      v60 = v37 & src;
                    }
                  }
                  else
                  {
                    v37 = 1;
                    cleanup_argloc(nb + 112);
                    v58 = nb;
                    v60 = src;
                    *(_DWORD *)(nb + 112) = 1;
                    *(_QWORD *)(nb + 120) = 0;
                  }
                  if ( v60 )
                    return set_qerrno(1725);
                }
                if ( (unsigned int)sub_5F4DE0(a1, v58, v32 | 2) )
                  return 0xFFFFFFFFLL;
                if ( *(_DWORD *)(a2 + 64) <= (int)++v56 )
                {
                  if ( !src )
                    goto LABEL_16;
                  goto LABEL_153;
                }
              }
            }
            while ( *v70 == 1 )
            {
              v70 += 6;
              if ( (_DWORD *)v71 == v70 )
                goto LABEL_115;
            }
          }
          else if ( v54 == 1 )
          {
            goto LABEL_115;
          }
          src = 0;
          v37 = na;
          if ( v55 <= 0 )
            goto LABEL_16;
          goto LABEL_116;
        }
        return set_qerrno(1288);
      }
      *(_QWORD *)&v84 = 0;
      qfree(s);
    }
    v27 = *(_BYTE *)(v24 + 186) & 0x3F;
    goto LABEL_56;
  }
  if ( v10 > 0xCu )
  {
    if ( v10 == 13 && (v9 & 0x3F) != 0x3D )
    {
      sub_5EA4A0(a1, a2);
      v23 = *(_BYTE *)(a2 + 186);
      if ( (v23 & 0x2F) == 0xD )
      {
        if ( (unsigned int)sub_5F4920(a1, a2) )
          return 0xFFFFFFFFLL;
        v23 = *(_BYTE *)(a2 + 186);
      }
      if ( (v23 & 0x3F) == 0x2D && (unsigned int)sub_5EA6A0(a1, a2) )
        return 0xFFFFFFFFLL;
    }
LABEL_16:
    v15 = *(_QWORD *)(a2 + 40);
    goto LABEL_17;
  }
  if ( v10 != 10 )
  {
    if ( v10 == 11 )
    {
      v11 = *(_QWORD *)(a2 + 48);
      v12 = *(_QWORD *)(v11 + 40);
      if ( (v12 & 0x10000000) != 0 )
      {
        *(_QWORD *)(v11 + 40) = v12 & 0xFFFFFFFFEFFFFFFFLL;
        *(_QWORD *)(a2 + 40) |= 0x10000000uLL;
      }
      if ( !(unsigned int)sub_5F4DE0(a1, v11, 0) )
      {
        v13 = *(_BYTE *)(a2 + 186) & 0x3F;
        *(_BYTE *)(a2 + 186) = v13;
        *(_BYTE *)(a2 + 186) = v13 | *(_BYTE *)(v11 + 186) & 0xC0;
        v14 = sub_5E9440(a1, v11);
        if ( v14 )
        {
          if ( (v14 & 0xF) == 0xC || (v14 & 0x3F) == 1 )
            return set_qerrno(73);
          goto LABEL_16;
        }
      }
      return 0xFFFFFFFFLL;
    }
    goto LABEL_16;
  }
  v16 = *(_QWORD *)(a2 + 48);
  if ( (*(_BYTE *)(v16 + 186) & 0xF) == 0xC )
  {
    v51 = *(_QWORD *)(a2 + 40);
    if ( (v51 & 0xF000) != 0 )
    {
      if ( (unsigned int)sub_5EA130(a1, *(_QWORD *)(a2 + 48), v51, *(_DWORD *)(a2 + 180)) )
        return 0xFFFFFFFFLL;
      v51 = *(_QWORD *)(a2 + 40);
    }
    v17 = *(_QWORD *)(v16 + 40);
    v52 = v51 & 0x30000;
    if ( v52 )
    {
      v17 = v52 | v17 & 0xFFFFFFFFFFFCFFFFLL;
      *(_QWORD *)(v16 + 40) = v17;
    }
  }
  else
  {
    v17 = *(_QWORD *)(v16 + 40);
  }
  if ( (v17 & 0x10000000) != 0 )
  {
    *(_QWORD *)(v16 + 40) = v17 & 0xFFFFFFFFEFFFFFFFLL;
    *(_QWORD *)(a2 + 40) |= 0x10000000uLL;
  }
  if ( (unsigned int)sub_5F4DE0(a1, v16, 0) )
    return 0xFFFFFFFFLL;
  v18 = *(_QWORD *)(v16 + 40) & 0x1E0LL;
  if ( (*(_DWORD *)(v16 + 40) & 0x1E0u) <= 0xDF && (_DWORD)v18 )
    sub_5E5A10(a2, v18);
  v15 = *(_QWORD *)(a2 + 40);
  if ( (*(_DWORD *)(a2 + 40) & 0x1E0u) > 0xDF )
  {
    sub_5E5A10(a2, v15 & 0x1E0);
    v15 = *(_QWORD *)(a2 + 40);
  }
  if ( (v15 & 0x1F) != 0 )
    return set_qerrno(72);
  if ( *(_QWORD *)(a2 + 32) && !*(_DWORD *)(a2 + 176) )
    return set_qerrno(1692);
LABEL_17:
  if ( (v15 & 0x1F000000) != 0 && (a3 & 2) == 0 )
    return set_qerrno(1668);
  if ( !*(_DWORD *)(a2 + 112) )
    return 0;
  v19 = sub_5F4860(a1, a2, 1);
  v20 = v19;
  if ( (a3 & 1) == 0 )
  {
    v39 = 1324;
    v22 = a2 + 112;
    goto LABEL_77;
  }
  s = nullptr;
  v85 = 0;
  v86 = -1;
  v84 = 0;
  if ( (unsigned __int8)sub_5F4CE0(a1, (__int64)&s, a2, (void *)(int)v19) )
  {
    p_s = nullptr;
    if ( *(_DWORD *)(a2 + 112) == 2 )
      p_s = &s;
    v22 = a2 + 112;
    if ( (unsigned __int8)optimize_argloc(v22, v20, p_s) )
    {
      if ( s )
      {
        *(_QWORD *)&v84 = 0;
        qfree(s);
      }
      return 0;
    }
    if ( s )
    {
      *(_QWORD *)&v84 = 0;
      qfree(s);
    }
    v39 = 691;
LABEL_77:
    print_argloc(v87, 80, v22, v20, 2);
    set_error_string(0, v87);
    return set_qerrno(v39);
  }
  result = set_qerrno(1562);
  if ( s )
  {
    nd = result;
    *(_QWORD *)&v84 = 0;
    qfree(s);
    return nd;
  }
  return result;
}
