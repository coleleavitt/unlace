unsigned __int64 __fastcall sub_25EB40(
        _QWORD *a1,
        char a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  const char *v12; // r12
  char *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  char *v16; // rcx
  int v17; // r8d
  int v18; // r9d
  __int32 v19; // r15d
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // r13
  __m128 v23; // xmm0
  const char *p_src; // rsi
  double v25; // xmm4_8
  double v26; // xmm5_8
  __int64 v27; // rdx
  char *v28; // r8
  int v29; // r9d
  double v30; // xmm4_8
  double v31; // xmm5_8
  __int64 v32; // rdi
  __int64 v33; // r13
  __int64 v34; // r15
  _QWORD *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rdi
  char *v38; // rcx
  __int64 v39; // r13
  __int64 v40; // r15
  char *v41; // rdx
  __int64 v42; // rdi
  int v43; // eax
  __int64 v44; // r15
  _QWORD *v45; // r15
  __int64 v46; // rax
  const char *v47; // r13
  char *v48; // rax
  size_t v49; // rax
  double v50; // xmm0_8
  const char *v51; // rsi
  const char *v52; // r13
  __int64 debugger_plugins; // r14
  char *v54; // rbx
  __int64 v55; // r15
  __int64 v56; // r12
  size_t v58; // rax
  unsigned __int64 v59; // rcx
  char *v60; // rax
  unsigned __int8 *v61; // rax
  unsigned __int16 v62; // r13
  char *v63; // rdi
  const char *v64; // rax
  char *v65; // rax
  const char *v66; // r15
  char *v67; // rax
  char v68; // [rsp+Fh] [rbp-2511h]
  _QWORD *v69; // [rsp+18h] [rbp-2508h]
  char *v70; // [rsp+18h] [rbp-2508h]
  size_t v71; // [rsp+20h] [rbp-2500h]
  size_t v72; // [rsp+20h] [rbp-2500h]
  size_t v73; // [rsp+20h] [rbp-2500h]
  size_t v74; // [rsp+20h] [rbp-2500h]
  size_t na; // [rsp+28h] [rbp-24F8h]
  __int64 v77; // [rsp+38h] [rbp-24E8h] BYREF
  void *src; // [rsp+40h] [rbp-24E0h] BYREF
  __int128 v79; // [rsp+48h] [rbp-24D8h]
  unsigned __int8 *v80; // [rsp+60h] [rbp-24C0h] BYREF
  __int128 v81; // [rsp+68h] [rbp-24B8h]
  __int64 v82; // [rsp+80h] [rbp-24A0h] BYREF
  __int128 v83; // [rsp+88h] [rbp-2498h]
  char *v84; // [rsp+A0h] [rbp-2480h] BYREF
  __int128 v85; // [rsp+A8h] [rbp-2478h]
  void *ptr; // [rsp+C0h] [rbp-2460h] BYREF
  __int128 v87; // [rsp+C8h] [rbp-2458h]
  char v88; // [rsp+D8h] [rbp-2448h]
  char v89[1023]; // [rsp+E0h] [rbp-2440h] BYREF
  char v90; // [rsp+4DFh] [rbp-2041h] BYREF
  char s[4096]; // [rsp+4E0h] [rbp-2040h] BYREF
  char v92[4104]; // [rsp+14E0h] [rbp-1040h] BYREF
  unsigned __int64 v93; // [rsp+24E8h] [rbp-38h]

  v93 = __readfsqword(0x28u);
  v10 = *a1;
  if ( !*a1 || !*(_QWORD *)(v10 + 48) )
    return v93 - __readfsqword(0x28u);
  v12 = (const char *)qbasename(*(_QWORD *)(v10 + 8));
  v13 = strchr(v12, 95);
  if ( !v13 )
  {
    v13 = strchr(v12, 46);
    if ( !v13 )
      LODWORD(v13) = (_DWORD)v12 + strlen(v12);
  }
  *(double *)a3.m128_u64 = qsnprintf(v89, 1024, "-r%*.*s", (int)v13 - (int)v12, (int)v13 - (int)v12, v12);
  v14 = a1[1];
  s[0] = 0;
  v19 = sub_2297A0(v14);
  if ( a2 )
    v19 &= 0xFFFFFE8F;
  if ( (*(_BYTE *)(a1[1] + 32LL) & 1) != 0 )
  {
    if ( (v19 & 0x80u) == 0 )
      v19 |= 8u;
  }
  else
  {
    v19 &= 0xFFFFFFF8;
  }
  sub_258CA0(a1, 1, v15, v16, v17, v18, a3, a4, a5, a6, v20, v21, a9, a10);
  v22 = a1[1];
  v23 = 0;
  src = nullptr;
  v80 = nullptr;
  v82 = 0;
  ptr = nullptr;
  v88 = 1;
  v79 = 0;
  v81 = 0;
  v83 = 0;
  v87 = 0;
  sub_2451C0(v22, nullptr, 0);
  p_src = (const char *)&src;
  v68 = sub_25DAA0(
          v19,
          (__int64 *)&src,
          (__int64 *)&v80,
          s,
          nullptr,
          nullptr,
          0.0,
          a4,
          a5,
          a6,
          v25,
          v26,
          a9,
          a10,
          v92,
          &v82,
          (__int64)&ptr,
          &v77,
          nullptr);
  if ( v68 )
  {
    if ( (*(_QWORD *)(v22 + 32) & 1) == 0 )
      goto LABEL_18;
    v29 = v79;
    if ( (unsigned __int64)v79 <= 1 && (*(_QWORD *)(v22 + 32) & 3LL) == 1 )
      goto LABEL_18;
    v72 = v79;
    v58 = strlen(v89);
    v29 = v72;
    v60 = &v89[v58];
    if ( (unsigned __int64)v81 > 1 && (v19 & 4) != 0 )
    {
      if ( v60 >= s )
      {
LABEL_115:
        if ( under_debugger )
          goto LABEL_119;
        interr(518, p_src, v27, v59, *(double *)v23.m128_u64);
        goto LABEL_117;
      }
      v27 = (__int64)(v60 + 1);
      *v60 = 58;
      if ( v60 + 1 >= s )
      {
LABEL_91:
        v59 = (unsigned __int64)&v90;
LABEL_92:
        v90 = 0;
        v28 = &v90;
        goto LABEL_70;
      }
      v59 = (unsigned __int64)&v90;
      v61 = v80;
      if ( (char *)v27 == &v90 )
        goto LABEL_92;
      while ( 1 )
      {
        p_src = (const char *)*v61++;
        *(_BYTE *)v27 = (_BYTE)p_src;
        if ( !(_BYTE)p_src )
          break;
        if ( (char *)++v27 == &v90 )
          goto LABEL_92;
      }
      v60 = (char *)v27;
    }
    if ( v60 >= s )
    {
LABEL_117:
      if ( !under_debugger )
        interr(518, p_src, v27, v59, *(double *)v23.m128_u64);
      goto LABEL_119;
    }
    v28 = v60 + 1;
    *v60 = 64;
    if ( v60 + 1 < s )
    {
LABEL_70:
      if ( (v19 & 1) != 0 )
      {
        v62 = v77;
        if ( !v72 )
        {
          v84 = nullptr;
          v23 = 0;
          v85 = 0;
          if ( !(_WORD)v77 )
            goto LABEL_73;
          v59 = (unsigned __int16)v77;
          if ( (_WORD)v77 == 23946 )
            goto LABEL_73;
          v74 = (size_t)v28;
          p_src = "%s:%u";
          sub_169A50((__int64 *)&v84, (__int64)"%s:%u", &s1, (unsigned __int16)v77);
          goto LABEL_106;
        }
      }
      else
      {
        v77 = 23946;
        if ( !v72 )
        {
          v84 = nullptr;
          v23 = 0;
          v85 = 0;
LABEL_73:
          if ( v28 < s )
          {
            v63 = v84;
            v64 = v84;
            if ( !(_QWORD)v85 )
              v64 = &s1;
            if ( v28 == &v90 )
            {
LABEL_93:
              v90 = 0;
            }
            else
            {
              while ( 1 )
              {
                v27 = *(unsigned __int8 *)v64++;
                *v28 = v27;
                if ( !(_BYTE)v27 )
                  break;
                if ( ++v28 == &v90 )
                  goto LABEL_93;
              }
            }
            if ( v63 )
            {
              *(_QWORD *)&v85 = 0;
              *(double *)v23.m128_u64 = qfree(v63, p_src);
            }
            goto LABEL_18;
          }
          if ( under_debugger )
LABEL_119:
            BUG();
          interr(520, p_src, v27, v59, *(double *)v23.m128_u64);
          goto LABEL_115;
        }
        v62 = 23946;
      }
      v70 = v28;
      v65 = (char *)qalloc_or_throw(v72);
      p_src = (const char *)src;
      v66 = v65;
      memcpy(v65, src, v72);
      v23 = 0;
      v84 = nullptr;
      v29 = v72;
      v28 = v70;
      v85 = 0;
      if ( !v62 || (v59 = v62, v62 == 23946) )
      {
        if ( v72 != 1 )
        {
          p_src = v66;
          v84 = (char *)qvector_reserve(&v84, 0, v72, 1);
          *(_QWORD *)&v85 = v72;
          memmove(v84, v66, v72 - 1);
          v29 = v72;
          v28 = v70;
          v84[v72 - 1] = 0;
        }
      }
      else
      {
        if ( *v66 == 91
          || (v73 = (size_t)v70, v67 = strchr(v66, 58), v28 = v70, LODWORD(v59) = v62, !v67)
          || v67 - v66 == -1 )
        {
          p_src = "%s:%u";
          v73 = (size_t)v28;
          sub_169A50((__int64 *)&v84, (__int64)"%s:%u", v66, v59);
        }
        else
        {
          p_src = "[%s]:%u";
          sub_169A50((__int64 *)&v84, (__int64)"[%s]:%u", v66, v62);
        }
        v28 = (char *)v73;
      }
      if ( !v66 )
        goto LABEL_73;
      v74 = (size_t)v28;
      *(double *)v23.m128_u64 = qfree(v66, p_src);
LABEL_106:
      v28 = (char *)v74;
      goto LABEL_73;
    }
    goto LABEL_91;
  }
  v32 = qword_8CC2F0;
  if ( qword_8CC2F0 )
  {
    v71 = xmmword_8CC2F8;
    if ( (_QWORD)xmmword_8CC2F8 )
    {
      v33 = 0;
      v34 = 0;
      do
      {
        v35 = (_QWORD *)(v32 + v33);
        v36 = *(_QWORD *)(v32 + v33 + 32);
        if ( v36 )
        {
          v35[5] = 0;
          v69 = v35;
          qfree(v36, (const char *)&src);
          v35 = v69;
        }
        v37 = v35[1];
        if ( v37 )
        {
          v35[2] = 0;
          qfree(v37, (const char *)&src);
        }
        ++v34;
        v33 += 56;
        v32 = qword_8CC2F0;
      }
      while ( v71 != v34 );
    }
    *(_QWORD *)&xmmword_8CC2F8 = 0;
    *(double *)v23.m128_u64 = qfree(v32, (const char *)&src);
    qword_8CC2F0 = 0;
    *((_QWORD *)&xmmword_8CC2F8 + 1) = 0;
  }
LABEL_18:
  v38 = (char *)ptr;
  if ( ptr )
  {
    v39 = v87;
    if ( (_QWORD)v87 )
    {
      v40 = 0;
      do
      {
        v41 = &v38[24 * v40];
        v42 = *(_QWORD *)v41;
        if ( *(_QWORD *)v41 )
        {
          *((_QWORD *)v41 + 1) = 0;
          qfree(v42, p_src);
          v38 = (char *)ptr;
        }
        ++v40;
      }
      while ( v39 != v40 );
    }
    *(_QWORD *)&v87 = 0;
    *(double *)v23.m128_u64 = qfree(v38, p_src);
  }
  if ( v82 )
  {
    *(_QWORD *)&v83 = 0;
    *(double *)v23.m128_u64 = qfree(v82, p_src, *(double *)v23.m128_u64);
  }
  if ( v80 )
  {
    *(_QWORD *)&v81 = 0;
    *(double *)v23.m128_u64 = qfree(v80, p_src, *(double *)v23.m128_u64);
  }
  if ( src )
  {
    *(_QWORD *)&v79 = 0;
    *(double *)v23.m128_u64 = qfree(src, p_src, *(double *)v23.m128_u64);
  }
  if ( v68 )
  {
    if ( a2 )
      qstrncat(v89, "+", 1024);
    if ( dword_8CD7F4 <= 0 )
    {
      v43 = 0;
    }
    else
    {
      v27 = qword_8CD7F8;
      v43 = 0;
      while ( **(_BYTE **)v27 != 45 || *(_BYTE *)(*(_QWORD *)v27 + 1LL) != 114 )
      {
        ++v43;
        v27 += 8;
        if ( v43 == dword_8CD7F4 )
          goto LABEL_87;
      }
    }
    if ( v43 == dword_8CD7F4 )
    {
LABEL_87:
      sub_303690(v89, (unsigned int)dword_8CD7F4, v27, *(double *)v23.m128_u64);
    }
    else
    {
      v44 = 8LL * v43;
      qfree(*(_QWORD *)(qword_8CD7F8 + v44), (const char *)(unsigned int)dword_8CD7F4, *(double *)v23.m128_u64);
      v45 = (_QWORD *)(qword_8CD7F8 + v44);
      *v45 = qstrdup(v89);
    }
    v46 = *a1;
    v47 = *(const char **)(*a1 + 24LL);
    v85 = 0;
    v84 = nullptr;
    if ( v47 )
    {
      na = strlen(v47);
      v48 = (char *)qvector_reserve(&v84, 0, na + 1, 1);
      *(_QWORD *)&v85 = na + 1;
      v84 = v48;
      memmove(v48, v47, na);
      v84[na] = 0;
      v46 = *a1;
    }
    *(_DWORD *)(v46 + 144) |= 0x4000u;
    v49 = strlen(s);
    v50 = QT::QString::fromUtf8(&ptr, v49, s);
    v51 = nullptr;
    sub_30A6D0((QT::QString *)&ptr);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    v52 = &s1;
    if ( (_QWORD)v85 )
      v52 = v84;
    debugger_plugins = get_debugger_plugins(&ptr);
    if ( debugger_plugins )
    {
      v54 = (char *)ptr;
      v55 = 0;
      while ( 1 )
      {
        v56 = *(_QWORD *)v54;
        v51 = v52;
        if ( !strcmp(*(const char **)(*(_QWORD *)v54 + 24LL), v52) )
          break;
        v54 += 16;
        if ( debugger_plugins == ++v55 )
          goto LABEL_54;
      }
      if ( v54 )
        *(_DWORD *)(v56 + 144) &= ~0x4000u;
    }
LABEL_54:
    if ( v84 )
    {
      *(_QWORD *)&v85 = 0;
      qfree(v84, v51, v50);
    }
  }
  else
  {
    sub_258CA0(nullptr, 3, v27, v38, (int)v28, v29, v23, a4, a5, a6, v30, v31, a9, a10);
  }
  return v93 - __readfsqword(0x28u);
}
