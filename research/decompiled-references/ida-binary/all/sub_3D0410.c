__int64 __fastcall sub_3D0410(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // r14d
  char *v3; // r12
  size_t v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // r12
  const char *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r12
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // ebx
  int v21; // r8d
  int v22; // r9d
  __m128i *v23; // rdi
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __m128i v28; // xmm0
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  char v37; // r14
  const char *v38; // rax
  int v39; // edx
  int v40; // ecx
  const void *v41; // r8
  size_t v42; // r9
  size_t v43; // rax
  unsigned __int16 v44; // ax
  char v45; // r15
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  void *v55; // r14
  const char *v56; // rdi
  char *v57; // r15
  const char *v58; // r14
  int v59; // eax
  const char *v60; // rax
  size_t v61; // rdx
  const char *v62; // rax
  size_t v63; // rax
  size_t v64; // r14
  char *v65; // rdi
  size_t v66; // rdx
  __m128i v67; // [rsp+0h] [rbp-1A0h]
  __m128i v68; // [rsp+0h] [rbp-1A0h]
  __m128i v69; // [rsp+0h] [rbp-1A0h]
  __m128i v70; // [rsp+0h] [rbp-1A0h]
  __m128i v71; // [rsp+0h] [rbp-1A0h]
  __m128i v72; // [rsp+0h] [rbp-1A0h]
  __m128i v73; // [rsp+10h] [rbp-190h]
  __m128i v74; // [rsp+10h] [rbp-190h]
  __m128i v75; // [rsp+10h] [rbp-190h]
  size_t v76; // [rsp+20h] [rbp-180h]
  const void *v77; // [rsp+28h] [rbp-178h]
  size_t nb; // [rsp+30h] [rbp-170h]
  size_t n; // [rsp+30h] [rbp-170h]
  bool na; // [rsp+30h] [rbp-170h]
  size_t nd; // [rsp+30h] [rbp-170h]
  size_t nc; // [rsp+30h] [rbp-170h]
  size_t ne; // [rsp+30h] [rbp-170h]
  char *v84; // [rsp+40h] [rbp-160h]
  char *v85; // [rsp+40h] [rbp-160h]
  size_t v87; // [rsp+48h] [rbp-158h]
  size_t v88; // [rsp+48h] [rbp-158h]
  char *v89; // [rsp+48h] [rbp-158h]
  const char *v90; // [rsp+48h] [rbp-158h]
  _BYTE v91[8]; // [rsp+58h] [rbp-148h] BYREF
  char *v92; // [rsp+60h] [rbp-140h] BYREF
  __int128 v93; // [rsp+68h] [rbp-138h]
  char *s1; // [rsp+80h] [rbp-120h] BYREF
  __int128 v95; // [rsp+88h] [rbp-118h]
  void *ptr; // [rsp+A0h] [rbp-100h] BYREF
  __int128 v97; // [rsp+A8h] [rbp-F8h]
  void *v98; // [rsp+C0h] [rbp-E0h] BYREF
  char *s[2]; // [rsp+C8h] [rbp-D8h]
  __m128i v100; // [rsp+E0h] [rbp-C0h] BYREF
  __m128i v101; // [rsp+F0h] [rbp-B0h] BYREF
  __m128i v102; // [rsp+100h] [rbp-A0h] BYREF
  __m128i v103; // [rsp+110h] [rbp-90h] BYREF
  __m128i v104; // [rsp+120h] [rbp-80h] BYREF
  __m128i v105; // [rsp+130h] [rbp-70h] BYREF
  __m128i v106; // [rsp+140h] [rbp-60h] BYREF
  __m128i v107; // [rsp+150h] [rbp-50h] BYREF
  unsigned __int64 v108; // [rsp+168h] [rbp-38h]

  v108 = __readfsqword(0x28u);
  QT::QPlainTextEdit::textCursor((QT::QPlainTextEdit *)v91);
  v1 = QT::QTextCursor::blockNumber((QT::QTextCursor *)v91);
  v2 = QT::QTextCursor::positionInBlock((QT::QTextCursor *)v91);
  QT::QPlainTextEdit::document(*(QT::QPlainTextEdit **)(a1 + 16));
  QT::QTextDocument::toPlainText((QT::QTextDocument *)&ptr);
  QT::QString::toUtf8_helper((QT::QString *)&v98, (const QT::QString *)&ptr);
  v3 = s[0];
  v92 = nullptr;
  v93 = 0;
  if ( s[0] )
  {
    v4 = strlen(s[0]);
    v5 = v4 + 1;
  }
  else
  {
    v3 = (char *)&QT::QByteArray::_empty;
    if ( !&QT::QByteArray::_empty )
      goto LABEL_4;
    v5 = 1;
    v4 = 0;
  }
  nb = v4;
  v84 = (char *)v5;
  v92 = (char *)qvector_reserve(&v92, 0, v5, 1);
  *(_QWORD *)&v93 = v84;
  memmove(v92, v3, nb);
  v92[nb] = 0;
LABEL_4:
  if ( v98 && !_InterlockedSub((volatile signed __int32 *)v98, 1u) )
    free(v98);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  v6 = 0;
  v7 = (char *)&::s1;
  if ( (_QWORD)v93 )
  {
    v7 = v92;
    v6 = (unsigned int)strlen(v92);
  }
  v8 = nullptr;
  v9 = sub_583FC0(*(_QWORD *)(a1 + 24), 0, v7, v6);
  v10 = v9;
  if ( !v9 )
    goto LABEL_22;
  sub_57A940(&v100, v9);
  v8 = (const char *)(((unsigned __int64)(unsigned int)(v2 - 1) << 32) | v1);
  sub_5692E0(
    (unsigned int)&v102,
    v1,
    v1,
    v11,
    v12,
    v13,
    (__int128)_mm_load_si128(&v100),
    (__int128)_mm_load_si128(&v101));
  v67 = _mm_load_si128(&v102);
  v20 = sub_567740(
          (unsigned int)&v102,
          v1,
          v14,
          v15,
          v16,
          v17,
          v67.m128i_i32[0],
          v67.m128i_i32[2],
          _mm_load_si128(&v103).m128i_i64[0]);
  if ( (_BYTE)v20 )
  {
    sub_57F8E0(v10);
LABEL_22:
    v20 = 1;
    goto LABEL_23;
  }
  v68 = _mm_load_si128(&v102);
  v73 = _mm_load_si128(&v103);
  v85 = (char *)sub_5675C0(
                  (unsigned int)&v102,
                  (_DWORD)v8,
                  v18,
                  v19,
                  v21,
                  v22,
                  v68.m128i_i32[0],
                  v68.m128i_i32[2],
                  v73.m128i_i64[0],
                  v73.m128i_i64[1]);
  v23 = &v104;
  sub_57BF30(
    (unsigned int)&v104,
    (_DWORD)v8,
    v24,
    v25,
    v26,
    v27,
    (__int128)_mm_load_si128(&v102),
    (__int128)_mm_load_si128(&v103));
  s1 = nullptr;
  v95 = 0;
  v97 = 0;
  v28 = _mm_load_si128(&v104);
  ptr = nullptr;
  v37 = sub_567740(
          (unsigned int)&v104,
          (_DWORD)v8,
          v29,
          v30,
          v31,
          v32,
          v28.m128i_i32[0],
          v28.m128i_i32[2],
          _mm_load_si128(&v105).m128i_i64[0]);
  if ( v37 )
  {
    v37 = 0;
    v45 = 0;
  }
  else
  {
    v69 = _mm_load_si128(&v104);
    v74 = _mm_load_si128(&v105);
    v38 = (const char *)sub_5675C0(
                          (unsigned int)&v104,
                          (_DWORD)v8,
                          v33,
                          v34,
                          v35,
                          v36,
                          v69.m128i_i32[0],
                          v69.m128i_i32[2],
                          v74.m128i_i64[0],
                          v74.m128i_i64[1]);
    if ( v38
      && (LODWORD(v23) = (_DWORD)v38, n = (size_t)v38, v43 = strlen(v38), v41 = (const void *)n, (v42 = v43) != 0) )
    {
      v23 = (__m128i *)ptr;
      v61 = v43 + 1;
      if ( *((_QWORD *)&v97 + 1) < v43 + 1 )
      {
        v76 = v43;
        v77 = (const void *)n;
        nc = v43 + 1;
        ptr = (void *)qvector_reserve(&ptr, ptr, v61, 1);
        v42 = v76;
        v23 = (__m128i *)ptr;
        v41 = v77;
        v61 = nc;
      }
      *(_QWORD *)&v97 = v61;
      LODWORD(v8) = (_DWORD)v41;
      nd = v42;
      memmove(v23, v41, v42);
      LODWORD(v42) = nd;
      *((_BYTE *)ptr + nd) = 0;
    }
    else
    {
      *(_QWORD *)&v97 = 0;
    }
    v70 = _mm_load_si128(&v104);
    v44 = sub_5678C0(
            (_DWORD)v23,
            (_DWORD)v8,
            v39,
            v40,
            (_DWORD)v41,
            v42,
            v70.m128i_i32[0],
            v70.m128i_i32[2],
            _mm_load_si128(&v105).m128i_i64[0]);
    v87 = sub_565570(*(_QWORD *)(a1 + 32), v44);
    if ( v87 && (v45 = sub_5657C0(v87)) != 0 )
    {
      v62 = (const char *)sub_5658D0(v87);
      v90 = v62;
      if ( v62 && (v63 = strlen(v62), (v64 = v63) != 0) )
      {
        v65 = s1;
        v66 = v63 + 1;
        if ( *((_QWORD *)&v95 + 1) < v63 + 1 )
        {
          ne = v63 + 1;
          s1 = (char *)qvector_reserve(&s1, s1, v66, 1);
          v66 = ne;
          v65 = s1;
        }
        *(_QWORD *)&v95 = v66;
        memmove(v65, v90, v64);
        s1[v64] = 0;
        v37 = v45;
      }
      else
      {
        *(_QWORD *)&v95 = 0;
        v37 = v45;
      }
    }
    else
    {
      v45 = 1;
    }
  }
  v8 = nullptr;
  sub_567990(
    (unsigned int)&v106,
    0,
    v33,
    v34,
    v35,
    v36,
    (__int128)_mm_load_si128(&v100),
    (__int128)_mm_load_si128(&v101));
  v71 = _mm_load_si128(&v106);
  na = 0;
  if ( !(unsigned __int8)sub_567740(
                           (unsigned int)&v106,
                           0,
                           v47,
                           v48,
                           v49,
                           v50,
                           v71.m128i_i32[0],
                           v71.m128i_i32[2],
                           _mm_load_si128(&v107).m128i_i64[0]) )
  {
    v72 = _mm_load_si128(&v106);
    v75 = _mm_load_si128(&v107);
    v60 = (const char *)sub_5675C0(
                          (unsigned int)&v106,
                          0,
                          v51,
                          v52,
                          v53,
                          v54,
                          v72.m128i_i32[0],
                          v72.m128i_i32[2],
                          v75.m128i_i64[0],
                          v75.m128i_i64[1]);
    v8 = "enum_specifier";
    na = strcmp(v60, "enum_specifier") == 0;
  }
  v98 = nullptr;
  *(_OWORD *)s = 0;
  if ( !v85 )
  {
    if ( !v37 )
      goto LABEL_41;
LABEL_40:
    if ( !(_QWORD)v95 )
      goto LABEL_41;
    v8 = "identifier";
    v57 = s1;
    if ( !strcmp(s1, "identifier") )
    {
      if ( !(_QWORD)v97 )
        goto LABEL_42;
      v58 = (const char *)ptr;
      v8 = "field_declaration";
      if ( strcmp((const char *)ptr, "field_declaration") )
        goto LABEL_42;
      if ( strcmp(v57, "end") )
        goto LABEL_50;
    }
    else
    {
      v8 = "end";
      if ( strcmp(v57, "end") )
      {
LABEL_50:
        v8 = "comment";
        if ( strcmp(v57, "comment") )
          goto LABEL_41;
        if ( !(_QWORD)v97 )
          goto LABEL_42;
        v58 = (const char *)ptr;
LABEL_53:
        v59 = *(unsigned __int8 *)v58;
        if ( (v59 != 123 || v58[1]) && (v59 != 58 || v58[1]) )
        {
          v8 = "struct";
          LOBYTE(v20) = strcmp(v58, "struct") == 0;
          goto LABEL_42;
        }
        goto LABEL_41;
      }
      if ( !(_QWORD)v97 )
        goto LABEL_42;
      v58 = (const char *)ptr;
    }
    v8 = "typedef";
    if ( strcmp(v58, "typedef") )
      goto LABEL_42;
    v8 = "comment";
    if ( strcmp(v57, "comment") )
      goto LABEL_41;
    goto LABEL_53;
  }
  v88 = strlen(v85);
  v8 = v85;
  v98 = (void *)qvector_reserve(&v98, 0, v88 + 1, 1);
  s[0] = (char *)(v88 + 1);
  memmove(v98, v85, v88);
  *((_BYTE *)v98 + v88) = 0;
  if ( v37 )
    goto LABEL_40;
  v89 = s[0];
  if ( !s[0] )
    goto LABEL_41;
  if ( (unsigned __int64)(s[0] - 1) > 0xA )
  {
    v55 = v98;
    v8 = "_identifier";
    if ( !strncmp((char *)v98 + (unsigned __int64)s[0] - 12, "_identifier", 0xBu) && v45 )
      goto LABEL_42;
    v56 = &v89[(_QWORD)v55 - 11];
    goto LABEL_38;
  }
  if ( s[0] != &byte_9[2] )
  {
LABEL_41:
    v20 = 1;
    goto LABEL_42;
  }
  v56 = (const char *)v98;
LABEL_38:
  v8 = "identifier";
  LOBYTE(v20) = na & (strncmp(v56, "identifier", 0xAu) == 0);
  v20 ^= 1u;
LABEL_42:
  sub_57F8E0(v10);
  if ( v98 )
  {
    s[0] = nullptr;
    qfree(v98, v8);
  }
  if ( ptr )
  {
    *(_QWORD *)&v97 = 0;
    qfree(ptr, v8);
  }
  if ( s1 )
  {
    *(_QWORD *)&v95 = 0;
    qfree(s1, v8);
  }
LABEL_23:
  if ( v92 )
  {
    *(_QWORD *)&v93 = 0;
    qfree(v92, v8);
  }
  QT::QTextCursor::~QTextCursor((QT::QTextCursor *)v91);
  return v20;
}
