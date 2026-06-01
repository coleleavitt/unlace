__int64 __fastcall sub_321BA0(const char *a1)
{
  __m128i si128; // xmm0
  __m128i v2; // xmm1
  __int64 v3; // rcx
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _DWORD *v7; // rax
  double v8; // xmm0_8
  const char *v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  _DWORD *v13; // rax
  const char *v14; // rbp
  const char *v15; // rdx
  char *v16; // r14
  char v17; // r8
  __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r8
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  const char *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rax
  const char *v28; // r8
  const char *v29; // rcx
  double v30; // xmm0_8
  __int64 v32; // r8
  unsigned __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // r8
  unsigned __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rbx
  __int64 v39; // r8
  unsigned __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rbx
  __int64 v43; // r8
  unsigned __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rbx
  unsigned __int64 v47; // rdx
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __int64 v50; // rcx
  struct _Unwind_Exception *v51; // rbx
  unsigned __int64 v53; // [rsp+8h] [rbp-558h]
  unsigned __int64 v54; // [rsp+8h] [rbp-558h]
  unsigned __int64 v55; // [rsp+8h] [rbp-558h]
  unsigned __int64 v56; // [rsp+8h] [rbp-558h]
  unsigned __int64 v57; // [rsp+8h] [rbp-558h]
  unsigned __int64 v58; // [rsp+8h] [rbp-558h]
  __int64 v59; // [rsp+10h] [rbp-550h]
  __int64 v60; // [rsp+10h] [rbp-550h]
  __int64 v61; // [rsp+10h] [rbp-550h]
  __int64 v62; // [rsp+10h] [rbp-550h]
  __int64 v63; // [rsp+10h] [rbp-550h]
  char v64; // [rsp+10h] [rbp-550h]
  void *ptr[2]; // [rsp+18h] [rbp-548h] BYREF
  __int64 v66; // [rsp+28h] [rbp-538h]
  const char *v67; // [rsp+38h] [rbp-528h] BYREF
  __int128 v68; // [rsp+40h] [rbp-520h]
  const char *v69; // [rsp+58h] [rbp-508h] BYREF
  __int128 v70; // [rsp+60h] [rbp-500h]
  const char *v71; // [rsp+78h] [rbp-4E8h] BYREF
  __int128 v72; // [rsp+80h] [rbp-4E0h]
  __int64 v73; // [rsp+98h] [rbp-4C8h] BYREF
  __int128 v74; // [rsp+A0h] [rbp-4C0h]
  const char *v75; // [rsp+B8h] [rbp-4A8h] BYREF
  __int128 v76; // [rsp+C0h] [rbp-4A0h]
  void *v77[4]; // [rsp+D8h] [rbp-488h] BYREF
  void *v78[2]; // [rsp+F8h] [rbp-468h] BYREF
  __int64 v79; // [rsp+108h] [rbp-458h]
  _BYTE v80[1032]; // [rsp+118h] [rbp-448h] BYREF
  unsigned __int64 v81; // [rsp+520h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v66 = 0;
  if ( sub_203890() )
  {
    QT::QFont::family((QT::QFont *)v78);
    si128 = _mm_load_si128((const __m128i *)ptr);
    v2 = _mm_load_si128((const __m128i *)v78);
    v3 = v79;
    v79 = v66;
    v66 = v3;
    *(__m128i *)ptr = v2;
    *(__m128i *)v78 = si128;
    if ( si128.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)si128.m128i_i64[0], 1u) )
      free(v78[0]);
  }
  else
  {
    sub_3D7160((QT::QFont *)v77);
    QT::QFont::family((QT::QFont *)v78);
    v48 = _mm_load_si128((const __m128i *)ptr);
    v49 = _mm_load_si128((const __m128i *)v78);
    v50 = v79;
    v79 = v66;
    v66 = v50;
    *(__m128i *)ptr = v49;
    *(__m128i *)v78 = v48;
    if ( v48.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v48.m128i_i64[0], 1u) )
      free(v78[0]);
    QT::QFont::~QFont((QT::QFont *)v77);
  }
  v4 = (_QWORD *)qword_8CDA60;
  *(_QWORD *)&xmmword_8CDA68 = 0;
  if ( !*((_QWORD *)&xmmword_8CDA68 + 1) )
  {
    qword_8CDA60 = qvector_reserve(&qword_8CDA60, qword_8CDA60, 1, 8);
    v4 = (_QWORD *)(qword_8CDA60 + 8 * xmmword_8CDA68);
  }
  *v4 = 1;
  v5 = xmmword_8CDA68;
  qword_8CDA50 = 1;
  v6 = (_QWORD *)(qword_8CDA60 + 8 * (xmmword_8CDA68 + 1));
  *(_QWORD *)&xmmword_8CDA68 = xmmword_8CDA68 + 1;
  if ( (_QWORD *)qword_8CDA60 == v6 )
    goto LABEL_106;
  v7 = (_DWORD *)qword_8CDA60;
  while ( *v7 != 41 || v7[1] )
  {
    v7 += 2;
    if ( v6 == (_QWORD *)v7 )
      goto LABEL_106;
  }
  if ( v7 == (_DWORD *)v6 )
  {
LABEL_106:
    v47 = v5 + 2;
    if ( *((_QWORD *)&xmmword_8CDA68 + 1) < v47 )
    {
      qword_8CDA60 = qvector_reserve(&qword_8CDA60, qword_8CDA60, v47, 8);
      v6 = (_QWORD *)(qword_8CDA60 + 8 * xmmword_8CDA68);
    }
    *v6 = 41;
    *(_QWORD *)&xmmword_8CDA68 = xmmword_8CDA68 + 1;
  }
  v8 = 0.0;
  qword_8CDA40 = 41;
  qword_8CDA30 = 41;
  v67 = nullptr;
  v69 = nullptr;
  v71 = nullptr;
  v68 = 0;
  v70 = 0;
  v72 = 0;
  sub_169A50((__int64 *)&v71, (__int64)"c%d", 41);
  v9 = &s1;
  if ( !(_QWORD)v72 )
  {
    v10 = HIDWORD(qword_8CDA50);
    if ( HIDWORD(qword_8CDA50) )
      goto LABEL_15;
LABEL_105:
    sub_169A50((__int64 *)&v69, (__int64)"c%d", qword_8CDA50);
    goto LABEL_22;
  }
  v10 = HIDWORD(qword_8CDA50);
  v9 = v71;
  if ( !HIDWORD(qword_8CDA50) )
    goto LABEL_105;
LABEL_15:
  v11 = qword_8CDA60;
  v12 = qword_8CDA60 + 8 * xmmword_8CDA68;
  if ( qword_8CDA60 == v12 )
    goto LABEL_114;
  v13 = (_DWORD *)qword_8CDA60;
  while ( (_DWORD)qword_8CDA50 != *v13 || (_DWORD)v10 != v13[1] )
  {
    v13 += 2;
    if ( (_DWORD *)v12 == v13 )
      goto LABEL_114;
  }
  if ( v13 == (_DWORD *)v12 )
  {
LABEL_114:
    sub_3183B0(0.0, qword_8CDA60, v10, v12, (unsigned int)qword_8CDA50);
    goto LABEL_115;
  }
  sub_169A50((__int64 *)&v69, (__int64)"c%zu", ((__int64)v13 - qword_8CDA60 + 424) >> 3);
LABEL_22:
  v14 = &s1;
  if ( (_QWORD)v70 )
    v14 = v69;
  QT::QString::toUtf8_helper((QT::QString *)v78, (const QT::QString *)ptr);
  v15 = (const char *)v78[1];
  if ( !v78[1] )
    v15 = (const char *)&QT::QByteArray::_empty;
  sub_169A50(
    (__int64 *)&v67,
    (__int64)"<span style=\"white-space: pre; font-family: %s,monospace;\" class=\"%s %s\">",
    v15,
    v14,
    v9);
  if ( v78[0] && !_InterlockedSub((volatile signed __int32 *)v78[0], 1u) )
    free(v78[0]);
  v8 = 0.0;
  byte_8CDA59 = 0;
  byte_8CDA58 = 0;
  qword_8CDA48 = qword_8CDA50;
  v73 = 0;
  v74 = 0;
  v75 = nullptr;
  v76 = 0;
  QT::QWidget::windowTitle((QT::QWidget *)v77);
  QT::QString::toUtf8_helper((QT::QString *)v78, (const QT::QString *)v77);
  v16 = (char *)v78[1];
  if ( !v78[1] )
    v16 = (char *)&QT::QByteArray::_empty;
  *(_QWORD *)&v74 = 0;
  v17 = *v16;
  if ( *v16 )
  {
    v18 = 0;
    while ( 1 )
    {
      switch ( v17 )
      {
        case '"':
          if ( v18 )
          {
            v43 = v18 + 5;
            v44 = v18 + 6;
            --v18;
          }
          else
          {
            v44 = 7;
            v43 = 6;
          }
          v45 = v73;
          if ( *((_QWORD *)&v74 + 1) < v44 )
          {
            v59 = v43;
            v53 = v44;
            v73 = qvector_reserve(&v73, v73, v44, 1);
            v43 = v59;
            v45 = v73;
            v44 = v53;
          }
          *(_QWORD *)&v74 = v44;
          *(_BYTE *)(v45 + v43) = 0;
          v46 = v73 + v18;
          *(_DWORD *)v46 = 1869967654;
          *(_WORD *)(v46 + 4) = 15220;
          goto LABEL_39;
        case '&':
          if ( v18 )
          {
            v35 = v18 + 4;
            v36 = v18 + 5;
            --v18;
          }
          else
          {
            v36 = 6;
            v35 = 5;
          }
          v37 = v73;
          if ( *((_QWORD *)&v74 + 1) < v36 )
          {
            v61 = v35;
            v55 = v36;
            v73 = qvector_reserve(&v73, v73, v36, 1);
            v35 = v61;
            v37 = v73;
            v36 = v55;
          }
          *(_QWORD *)&v74 = v36;
          *(_BYTE *)(v37 + v35) = 0;
          v38 = v73 + v18;
          *(_DWORD *)v38 = 1886216486;
          *(_BYTE *)(v38 + 4) = 59;
          goto LABEL_39;
        case '\'':
          if ( v18 )
          {
            v39 = v18 + 5;
            v40 = v18 + 6;
            --v18;
          }
          else
          {
            v40 = 7;
            v39 = 6;
          }
          v41 = v73;
          if ( *((_QWORD *)&v74 + 1) < v40 )
          {
            v60 = v39;
            v54 = v40;
            v73 = qvector_reserve(&v73, v73, v40, 1);
            v39 = v60;
            v41 = v73;
            v40 = v54;
          }
          *(_QWORD *)&v74 = v40;
          *(_BYTE *)(v41 + v39) = 0;
          v42 = v73 + v18;
          *(_DWORD *)v42 = 858792742;
          *(_WORD *)(v42 + 4) = 15161;
          goto LABEL_39;
        case '<':
          if ( v18 )
          {
            v32 = v18 + 3;
            v33 = v18 + 4;
            --v18;
          }
          else
          {
            v33 = 5;
            v32 = 4;
          }
          v34 = v73;
          if ( *((_QWORD *)&v74 + 1) < v33 )
          {
            v62 = v32;
            v56 = v33;
            v73 = qvector_reserve(&v73, v73, v33, 1);
            v32 = v62;
            v34 = v73;
            v33 = v56;
          }
          *(_QWORD *)&v74 = v33;
          *(_BYTE *)(v34 + v32) = 0;
          *(_DWORD *)(v73 + v18) = 997485606;
          goto LABEL_39;
        case '>':
          if ( v18 )
          {
            v21 = v18 + 3;
            v22 = v18 + 4;
            --v18;
          }
          else
          {
            v22 = 5;
            v21 = 4;
          }
          v23 = v73;
          if ( *((_QWORD *)&v74 + 1) < v22 )
          {
            v63 = v21;
            v57 = v22;
            v73 = qvector_reserve(&v73, v73, v22, 1);
            v21 = v63;
            v23 = v73;
            v22 = v57;
          }
          *(_QWORD *)&v74 = v22;
          ++v16;
          *(_BYTE *)(v23 + v21) = 0;
          *(_DWORD *)(v73 + v18) = 997484326;
          v17 = *v16;
          if ( !*v16 )
            goto LABEL_46;
          goto LABEL_40;
        default:
          v19 = 2;
          if ( v18 )
            v19 = v18-- + 1;
          v20 = v73;
          if ( *((_QWORD *)&v74 + 1) < v19 )
          {
            v64 = v17;
            v58 = v19;
            v73 = qvector_reserve(&v73, v73, v19, 1);
            v17 = v64;
            v20 = v73;
            v19 = v58;
          }
          *(_QWORD *)&v74 = v19;
          *(_BYTE *)(v20 + v18) = v17;
          *(_BYTE *)(v73 + v18 + 1) = 0;
LABEL_39:
          v17 = *++v16;
          if ( !v17 )
            goto LABEL_46;
LABEL_40:
          v18 = v74;
          break;
      }
    }
  }
LABEL_46:
  if ( v78[0] && !_InterlockedSub((volatile signed __int32 *)v78[0], 1u) )
    free(v78[0]);
  if ( v77[0] && !_InterlockedSub((volatile signed __int32 *)v77[0], 1u) )
    free(v77[0]);
  v24 = &s1;
  if ( (_QWORD)v68 )
    v24 = v67;
  v10 = HIDWORD(qword_8CDA30);
  if ( HIDWORD(qword_8CDA30) )
  {
    v11 = qword_8CDA60;
    v25 = (unsigned int)qword_8CDA30;
    v26 = qword_8CDA60 + 8 * xmmword_8CDA68;
    if ( qword_8CDA60 != v26 )
    {
      v27 = (_QWORD *)qword_8CDA60;
      while ( qword_8CDA30 != *v27 )
      {
        if ( (_QWORD *)v26 == ++v27 )
          goto LABEL_115;
      }
      if ( v27 != (_QWORD *)v26 )
      {
        sub_169A50((__int64 *)&v75, (__int64)"c%zu", ((__int64)v27 - qword_8CDA60 + 424) >> 3);
        goto LABEL_61;
      }
    }
LABEL_115:
    v51 = (struct _Unwind_Exception *)sub_3183B0(0.0, v11, v10, v26, v25);
    if ( v71 )
    {
      *(_QWORD *)&v72 = 0;
      v8 = qfree(v71, (const char *)v10);
    }
    if ( v69 )
    {
      *(_QWORD *)&v70 = 0;
      v8 = qfree(v69, (const char *)v10, v8);
    }
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree(v67, (const char *)v10, v8);
    }
    sub_16D970(ptr);
    _Unwind_Resume(v51);
  }
  sub_169A50((__int64 *)&v75, (__int64)"c%d", qword_8CDA30);
LABEL_61:
  v28 = &s1;
  if ( (_QWORD)v76 )
    v28 = v75;
  v29 = &s1;
  if ( (_QWORD)v74 )
    v29 = (const char *)v73;
  v30 = qsnprintf(
          v80,
          1024,
          "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\" \"http://www.w3.org/TR/html4/loose.dtd\">\n"
          "<html>\n"
          "<head>\n"
          "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=ISO-8859-1\">\n"
          "<title>%s</title>\n"
          "</head>\n"
          "<body class=\"%s\">\n"
          "%s\n",
          v29,
          v28,
          v24);
  qfputs(v80, a1);
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    v30 = qfree(v75, a1, v30);
  }
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    v30 = qfree(v73, a1, v30);
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    v30 = qfree(v71, a1, v30);
  }
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    v30 = qfree(v69, a1, v30);
  }
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67, a1, v30);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return 0;
}
