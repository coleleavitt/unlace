__int64 *__fastcall sub_519560(QT::QByteArray *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // r15
  int v15; // r9d
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // r15
  int v20; // r8d
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rbx
  __int64 v24; // r15
  int v25; // edi
  __int64 v26; // rbx
  bool v27; // zf
  __int64 v28; // r13
  __int64 v29; // rbx
  __int64 v30; // r15
  int v31; // esi
  __int64 v32; // rbx
  bool v33; // al
  __int64 v34; // r13
  __int64 v35; // rbx
  __int64 v36; // r15
  int v37; // edx
  __int64 v38; // rbx
  __int64 v39; // r13
  __int64 v40; // rbx
  __int64 v41; // r15
  int v42; // eax
  __int64 v43; // rbx
  __int64 v45; // r13
  void *v46; // rsi
  char *v47; // rsi
  char *v48; // rsi
  char *v49; // rsi
  char *v50; // rsi
  char *v51; // rsi
  char *v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // [rsp+0h] [rbp-B8h]
  __int64 v61; // [rsp+0h] [rbp-B8h]
  __int64 v62; // [rsp+0h] [rbp-B8h]
  int v63; // [rsp+0h] [rbp-B8h]
  bool v64; // [rsp+0h] [rbp-B8h]
  bool v65; // [rsp+0h] [rbp-B8h]
  int v66; // [rsp+0h] [rbp-B8h]
  __int64 v67; // [rsp+8h] [rbp-B0h]
  __int64 v68; // [rsp+8h] [rbp-B0h]
  __int64 v69; // [rsp+8h] [rbp-B0h]
  __int64 v70; // [rsp+8h] [rbp-B0h]
  __int64 v71; // [rsp+8h] [rbp-B0h]
  __int64 v72; // [rsp+8h] [rbp-B0h]
  __int64 v73; // [rsp+8h] [rbp-B0h]
  char v74; // [rsp+12h] [rbp-A6h] BYREF
  char v75; // [rsp+13h] [rbp-A5h] BYREF
  unsigned __int16 v76; // [rsp+14h] [rbp-A4h] BYREF
  char v77[2]; // [rsp+16h] [rbp-A2h] BYREF
  int v78; // [rsp+18h] [rbp-A0h] BYREF
  int v79; // [rsp+1Ch] [rbp-9Ch] BYREF
  __m128i si128; // [rsp+20h] [rbp-98h] BYREF
  __m128i v81; // [rsp+30h] [rbp-88h] BYREF
  __m128i v82; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v83[24]; // [rsp+50h] [rbp-68h] BYREF
  int v84; // [rsp+68h] [rbp-50h]
  unsigned __int64 v85; // [rsp+78h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  QT::QDataStream::QDataStream((QT::QDataStream *)v83, a1);
  v84 = 7;
  QT::QDataStream::operator>>(v83, &v82);
  if ( v82.m128i_i32[0] == 31051979
    && (v1 = QT::QDataStream::operator>>(v83, &v76), QT::QDataStream::operator>>(v1, v77), v76 <= 3u) )
  {
    v79 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
    v81 = si128;
    v82 = si128;
    v2 = QT::operator>>(v83, &si128);
    v3 = QT::operator>>(v2, &v82);
    v4 = QT::QDataStream::operator>>(v3, &v78);
    v5 = QT::QDataStream::operator>>(v4, &v74);
    QT::QDataStream::operator>>(v5, &v75);
    v75 = 0;
    if ( v76 > 1u )
    {
      QT::QDataStream::operator>>(v83, &v79);
      if ( v76 > 2u )
        QT::operator>>(v83, &v81);
    }
    v6 = qalloc_or_throw(24);
    *(_QWORD *)v6 = 0;
    v7 = (__int64 *)v6;
    *(_OWORD *)(v6 + 8) = 0;
    v60 = sub_518850(si128.m128i_i32);
    v8 = v7[1];
    v67 = *v7;
    if ( v8 )
    {
      v9 = *v7;
      v10 = 0;
      while ( !*(_QWORD *)(v9 + 8) || strcmp(*(const char **)v9, "frame_geometry") )
      {
        ++v10;
        v9 += 40;
        if ( v8 == v10 )
          goto LABEL_59;
      }
      v11 = v9 + 24;
    }
    else
    {
LABEL_59:
      if ( v7[2] < (unsigned __int64)(v8 + 1) )
      {
        v67 = qvector_reserve(v7, v67, v8 + 1, 40);
        v8 = v7[1];
        *v7 = v67;
      }
      v45 = v67 + 40 * v8;
      *(_QWORD *)v45 = 0;
      *(_OWORD *)(v45 + 8) = 0;
      *(_DWORD *)(v45 + 24) = 0;
      *(_QWORD *)(v45 + 32) = 0;
      ++v7[1];
      v46 = *(void **)v45;
      if ( *(_QWORD *)(v45 + 16) <= 0xEu )
      {
        v59 = qvector_reserve(v45, v46, 15, 1);
        *(_QWORD *)v45 = v59;
        v46 = (void *)v59;
      }
      *(_QWORD *)(v45 + 8) = 15;
      v11 = v45 + 24;
      qmemcpy(v46, "frame_geometry", 14);
      *(_BYTE *)(*(_QWORD *)(v11 - 24) + 14LL) = 0;
    }
    if ( *(_DWORD *)v11 )
      jvalue_t_clear(v11);
    *(_DWORD *)v11 = 4;
    *(_QWORD *)(v11 + 8) = v60;
    v61 = sub_518850(v82.m128i_i32);
    v12 = v7[1];
    v68 = *v7;
    if ( v12 )
    {
      v13 = *v7;
      v14 = 0;
      while ( !*(_QWORD *)(v13 + 8) || strcmp(*(const char **)v13, "normal_geometry") )
      {
        ++v14;
        v13 += 40;
        if ( v12 == v14 )
          goto LABEL_69;
      }
    }
    else
    {
LABEL_69:
      if ( v7[2] < (unsigned __int64)(v12 + 1) )
      {
        v68 = qvector_reserve(v7, v68, v12 + 1, 40);
        v12 = v7[1];
        *v7 = v68;
      }
      v13 = v68 + 40 * v12;
      *(_QWORD *)v13 = 0;
      *(_OWORD *)(v13 + 8) = 0;
      *(_DWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 32) = 0;
      ++v7[1];
      v48 = *(char **)v13;
      if ( *(_QWORD *)(v13 + 16) <= 0xFu )
      {
        v57 = qvector_reserve(v13, v48, 16, 1);
        *(_QWORD *)v13 = v57;
        v48 = (char *)v57;
      }
      *(_QWORD *)(v13 + 8) = 16;
      qmemcpy(v48, "normal_geometry", 15);
      *(_BYTE *)(*(_QWORD *)v13 + 15LL) = 0;
    }
    v15 = *(_DWORD *)(v13 + 24);
    v16 = v13 + 24;
    if ( v15 )
      jvalue_t_clear(v16);
    *(_DWORD *)v16 = 4;
    *(_QWORD *)(v16 + 8) = v61;
    v62 = sub_518850(v81.m128i_i32);
    v17 = v7[1];
    v69 = *v7;
    if ( v17 )
    {
      v18 = *v7;
      v19 = 0;
      while ( !*(_QWORD *)(v18 + 8) || strcmp(*(const char **)v18, "geometry") )
      {
        ++v19;
        v18 += 40;
        if ( v17 == v19 )
          goto LABEL_64;
      }
    }
    else
    {
LABEL_64:
      if ( v7[2] < (unsigned __int64)(v17 + 1) )
      {
        v69 = qvector_reserve(v7, v69, v17 + 1, 40);
        v17 = v7[1];
        *v7 = v69;
      }
      v18 = v69 + 40 * v17;
      *(_QWORD *)v18 = 0;
      *(_OWORD *)(v18 + 8) = 0;
      *(_DWORD *)(v18 + 24) = 0;
      *(_QWORD *)(v18 + 32) = 0;
      ++v7[1];
      v47 = *(char **)v18;
      if ( *(_QWORD *)(v18 + 16) <= 8u )
      {
        v58 = qvector_reserve(v18, v47, 9, 1);
        *(_QWORD *)v18 = v58;
        v47 = (char *)v58;
      }
      *(_QWORD *)(v18 + 8) = 9;
      *(_QWORD *)v47 = 0x797274656D6F6567LL;
      *(_BYTE *)(*(_QWORD *)v18 + 8LL) = 0;
    }
    v20 = *(_DWORD *)(v18 + 24);
    v21 = v18 + 24;
    if ( v20 )
      jvalue_t_clear(v21);
    *(_DWORD *)v21 = 4;
    *(_QWORD *)(v21 + 8) = v62;
    v22 = v7[1];
    v63 = v78;
    v70 = *v7;
    if ( v22 )
    {
      v23 = *v7;
      v24 = 0;
      while ( !*(_QWORD *)(v23 + 8) || strcmp(*(const char **)v23, "screen_number") )
      {
        ++v24;
        v23 += 40;
        if ( v22 == v24 )
          goto LABEL_79;
      }
    }
    else
    {
LABEL_79:
      if ( v7[2] < (unsigned __int64)(v22 + 1) )
      {
        v70 = qvector_reserve(v7, v70, v22 + 1, 40);
        v22 = v7[1];
        *v7 = v70;
      }
      v23 = v70 + 40 * v22;
      *(_QWORD *)v23 = 0;
      *(_OWORD *)(v23 + 8) = 0;
      *(_DWORD *)(v23 + 24) = 0;
      *(_QWORD *)(v23 + 32) = 0;
      ++v7[1];
      v50 = *(char **)v23;
      if ( *(_QWORD *)(v23 + 16) <= 0xDu )
      {
        v55 = qvector_reserve(v23, v50, 14, 1);
        *(_QWORD *)v23 = v55;
        v50 = (char *)v55;
      }
      *(_QWORD *)(v23 + 8) = 14;
      qmemcpy(v50, "screen_number", 13);
      *(_BYTE *)(*(_QWORD *)v23 + 13LL) = 0;
    }
    v25 = *(_DWORD *)(v23 + 24);
    v26 = v23 + 24;
    if ( v25 )
      jvalue_t_clear(v26);
    *(_DWORD *)v26 = 1;
    v27 = v74 == 0;
    *(_QWORD *)(v26 + 8) = v63;
    v28 = v7[1];
    v64 = !v27;
    v71 = *v7;
    if ( v28 )
    {
      v29 = *v7;
      v30 = 0;
      while ( !*(_QWORD *)(v29 + 8) || strcmp(*(const char **)v29, "maximized") )
      {
        ++v30;
        v29 += 40;
        if ( v28 == v30 )
          goto LABEL_74;
      }
    }
    else
    {
LABEL_74:
      if ( v7[2] < (unsigned __int64)(v28 + 1) )
      {
        v71 = qvector_reserve(v7, v71, v28 + 1, 40);
        v28 = v7[1];
        *v7 = v71;
      }
      v29 = v71 + 40 * v28;
      *(_QWORD *)v29 = 0;
      *(_OWORD *)(v29 + 8) = 0;
      *(_DWORD *)(v29 + 24) = 0;
      *(_QWORD *)(v29 + 32) = 0;
      ++v7[1];
      v49 = *(char **)v29;
      if ( *(_QWORD *)(v29 + 16) <= 9u )
      {
        v56 = qvector_reserve(v29, v49, 10, 1);
        *(_QWORD *)v29 = v56;
        v49 = (char *)v56;
      }
      *(_QWORD *)(v29 + 8) = 10;
      *(_QWORD *)v49 = 0x657A696D6978616DLL;
      v49[8] = 100;
      *(_BYTE *)(*(_QWORD *)v29 + 9LL) = 0;
    }
    v31 = *(_DWORD *)(v29 + 24);
    v32 = v29 + 24;
    if ( v31 )
      jvalue_t_clear(v32);
    v33 = v64;
    v27 = v75 == 0;
    *(_DWORD *)v32 = 5;
    v65 = !v27;
    *(_BYTE *)(v32 + 8) = v33;
    v34 = v7[1];
    v72 = *v7;
    if ( v34 )
    {
      v35 = *v7;
      v36 = 0;
      while ( !*(_QWORD *)(v35 + 8) || strcmp(*(const char **)v35, "fullscreen") )
      {
        ++v36;
        v35 += 40;
        if ( v34 == v36 )
          goto LABEL_89;
      }
    }
    else
    {
LABEL_89:
      if ( v7[2] < (unsigned __int64)(v34 + 1) )
      {
        v72 = qvector_reserve(v7, v72, v34 + 1, 40);
        v34 = v7[1];
        *v7 = v72;
      }
      v35 = v72 + 40 * v34;
      *(_QWORD *)v35 = 0;
      *(_OWORD *)(v35 + 8) = 0;
      *(_DWORD *)(v35 + 24) = 0;
      *(_QWORD *)(v35 + 32) = 0;
      ++v7[1];
      v52 = *(char **)v35;
      if ( *(_QWORD *)(v35 + 16) <= 0xAu )
      {
        v53 = qvector_reserve(v35, v52, 11, 1);
        *(_QWORD *)v35 = v53;
        v52 = (char *)v53;
      }
      *(_QWORD *)(v35 + 8) = 11;
      qmemcpy(v52, "fullscreen", 10);
      *(_BYTE *)(*(_QWORD *)v35 + 10LL) = 0;
    }
    v37 = *(_DWORD *)(v35 + 24);
    v38 = v35 + 24;
    if ( v37 )
      jvalue_t_clear(v38);
    *(_DWORD *)v38 = 5;
    *(_BYTE *)(v38 + 8) = v65;
    v39 = v7[1];
    v66 = v79;
    v73 = *v7;
    if ( v39 )
    {
      v40 = *v7;
      v41 = 0;
      while ( !*(_QWORD *)(v40 + 8) || strcmp(*(const char **)v40, "screen_width") )
      {
        ++v41;
        v40 += 40;
        if ( v39 == v41 )
          goto LABEL_84;
      }
    }
    else
    {
LABEL_84:
      if ( v7[2] < (unsigned __int64)(v39 + 1) )
      {
        v73 = qvector_reserve(v7, v73, v39 + 1, 40);
        v39 = v7[1];
        *v7 = v73;
      }
      v40 = v73 + 40 * v39;
      *(_QWORD *)v40 = 0;
      *(_OWORD *)(v40 + 8) = 0;
      *(_DWORD *)(v40 + 24) = 0;
      *(_QWORD *)(v40 + 32) = 0;
      ++v7[1];
      v51 = *(char **)v40;
      if ( *(_QWORD *)(v40 + 16) <= 0xCu )
      {
        v54 = qvector_reserve(v40, v51, 13, 1);
        *(_QWORD *)v40 = v54;
        v51 = (char *)v54;
      }
      *(_QWORD *)(v40 + 8) = 13;
      qmemcpy(v51, "screen_width", 12);
      *(_BYTE *)(*(_QWORD *)v40 + 12LL) = 0;
    }
    v42 = *(_DWORD *)(v40 + 24);
    v43 = v40 + 24;
    if ( v42 )
      jvalue_t_clear(v43);
    *(_DWORD *)v43 = 1;
    *(_QWORD *)(v43 + 8) = v66;
  }
  else
  {
    v7 = nullptr;
  }
  QT::QDataStream::~QDataStream((QT::QDataStream *)v83);
  return v7;
}
