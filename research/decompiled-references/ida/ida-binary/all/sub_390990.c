__int64 __fastcall sub_390990(
        __int64 a1,
        QT::QTableWidgetItem *a2,
        QT::QTreeWidgetItem *a3,
        __int64 a4,
        __m128i *a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  char v13; // r15
  QT::QTableWidgetItem *v14; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  const char *v20; // rsi
  __int64 v21; // r13
  double v22; // xmm4_8
  double v23; // xmm5_8
  unsigned int v24; // ebx
  const char *v25; // rsi
  const char *v26; // rdx
  size_t v27; // rax
  char *v28; // rbx
  unsigned __int64 v29; // rdx
  __m128i v30; // xmm0
  __m128i si128; // xmm1
  __int64 v32; // rcx
  const char **v33; // rax
  const char **v34; // rdi
  __int64 v35; // r12
  __int64 v36; // rbp
  const char *v37; // rdi
  __m128i v39; // xmm0
  QT::QComboBox *v40; // rdi
  __int64 v41; // rax
  double v42; // xmm4_8
  double v43; // xmm5_8
  unsigned __int8 isChecked; // al
  unsigned __int64 v45; // rdx
  size_t v46; // rax
  const char *v47; // rbp
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  void (__fastcall *v52)(__int64, const char **, unsigned __int64 *, const char ***, char *, _QWORD); // [rsp+8h] [rbp-E0h]
  __int64 v53; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v54; // [rsp+28h] [rbp-C0h] BYREF
  const char **v55; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v56; // [rsp+38h] [rbp-B0h]
  const char *v57; // [rsp+50h] [rbp-98h] BYREF
  __int64 v58; // [rsp+58h] [rbp-90h]
  char *s; // [rsp+70h] [rbp-78h] BYREF
  __int128 v60; // [rsp+78h] [rbp-70h]
  void *ptr[2]; // [rsp+90h] [rbp-58h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v63; // [rsp+A8h] [rbp-40h]

  v13 = a4;
  v14 = a2;
  v63 = __readfsqword(0x28u);
  if ( a5 )
  {
    a2 = (QT::QTableWidgetItem *)&unk_5C2F25;
    QT::QString::assign(a5, &unk_5C2F25, 0);
  }
  v18 = sub_389C80(v14, a2, (__int64)a3, a4, a6);
  v19 = *(_QWORD *)(v18 + 8);
  v20 = (const char *)&v55;
  v21 = v18;
  v55 = nullptr;
  v54 = v19;
  v56 = 0;
  v24 = sub_38F320(a1, (char *)&v55, v19, a3, v13, 0.0, a7, a8, a9, v22, v23, a12, a13);
  if ( v24 != -1 )
  {
    if ( !(_QWORD)v56 )
    {
      v34 = v55;
      v24 = -1;
      if ( !v55 )
        return v24;
      goto LABEL_30;
    }
    (*(void (__fastcall **)(const char **, _QWORD, const char ***))(**(_QWORD **)(a1 + 64) + 8LL))(
      &v57,
      *(_QWORD *)(a1 + 64),
      &v55);
    if ( v24 == 1
      && (v20 = *v55,
          (*(unsigned __int8 (__fastcall **)(_QWORD, const char *, unsigned __int64))(**(_QWORD **)(a1 + 64) + 16LL))(
            *(_QWORD *)(a1 + 64),
            *v55,
            v54)) )
    {
      if ( a5 )
      {
        v25 = *(const char **)(get_ash() + 320);
        s = nullptr;
        v60 = 0;
        v26 = &s1;
        if ( !v25 )
          v25 = "sizeof(%s)";
        if ( v58 )
          v26 = v57;
        sub_1ADAF0((__int64 *)&s, (__int64)v25, v26);
        if ( (_QWORD)v60 )
        {
          v27 = v60 - 1;
          v28 = s;
          v29 = (unsigned __int64)(v60 - 1) >> 63;
        }
        else
        {
          LOBYTE(v29) = 0;
          v27 = 0;
          v28 = (char *)&s1;
        }
        if ( !v28 || (_BYTE)v29 )
        {
          v27 = 0;
          if ( v28 )
            v27 = strlen(v28);
        }
        v20 = (const char *)v27;
        QT::QString::fromUtf8(ptr, v27, v28);
        v30 = _mm_loadu_si128(a5);
        si128 = _mm_load_si128((const __m128i *)ptr);
        v32 = v62;
        v62 = a5[1].m128i_i64[0];
        a5[1].m128i_i64[0] = v32;
        *a5 = si128;
        *(__m128i *)ptr = v30;
        if ( v30.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v30.m128i_i64[0], 1u) )
          free(ptr[0]);
        if ( s )
        {
          *(_QWORD *)&v60 = 0;
          qfree(s, v20);
        }
      }
      if ( v57 )
      {
        v58 = 0;
        qfree(v57, v20);
      }
      v24 = 7;
    }
    else
    {
      v39 = _mm_load_si128((const __m128i *)&xmmword_5DD0F0);
      v40 = *(QT::QComboBox **)(a1 + 96);
      s = nullptr;
      LODWORD(v62) = 0;
      *(__m128i *)ptr = v39;
      v41 = QT::QComboBox::lineEdit(v40);
      sub_357F80((const char **)&s, v41, (__int128 *)ptr, *(double *)v39.m128i_i64, a7, a8, a9, v42, v43, a12, a13);
      v53 = *(_QWORD *)(a1 + 64);
      v52 = *(void (__fastcall **)(__int64, const char **, unsigned __int64 *, const char ***, char *, _QWORD))(*(_QWORD *)v53 + 24LL);
      isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 72) + 120LL));
      v20 = (const char *)&v57;
      v52(v53, &v57, &v54, &v55, s, isChecked);
      if ( v24 )
      {
        v51 = *((_QWORD *)*v55 + 3);
        if ( !v51 || (v24 = 6, (unsigned __int64)&s[*(_QWORD *)(v21 + 8)] < v51) )
          v24 = (&s[v54] != nullptr) + 3;
      }
      else
      {
        v24 = 5;
      }
      if ( a5 )
      {
        append_disp(&v57, &s[v54], 0);
        append_disp(&v57, -(__int64)s, 0);
        if ( v58 )
        {
          v46 = v58 - 1;
          v47 = v57;
          v45 = (unsigned __int64)(v58 - 1) >> 63;
        }
        else
        {
          LOBYTE(v45) = 0;
          v46 = 0;
          v47 = &s1;
        }
        if ( !v47 || (_BYTE)v45 )
        {
          v46 = 0;
          if ( v47 )
            v46 = strlen(v47);
        }
        v20 = (const char *)v46;
        QT::QString::fromUtf8(ptr, v46, v47);
        v48 = _mm_loadu_si128(a5);
        v49 = _mm_load_si128((const __m128i *)ptr);
        v50 = v62;
        v62 = a5[1].m128i_i64[0];
        a5[1].m128i_i64[0] = v50;
        *a5 = v49;
        *(__m128i *)ptr = v48;
        if ( v48.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v48.m128i_i64[0], 1u) )
          free(ptr[0]);
      }
      if ( v57 )
      {
        v58 = 0;
        qfree(v57, v20);
      }
    }
  }
  v33 = v55;
  v34 = v55;
  if ( v55 )
  {
    v35 = v56;
    if ( (_QWORD)v56 )
    {
      v36 = 0;
      do
      {
        v37 = v33[v36];
        if ( v37 )
        {
          (*(void (__fastcall **)(const char *))(*(_QWORD *)v37 + 8LL))(v37);
          v33 = v55;
        }
        ++v36;
        v34 = v33;
      }
      while ( v35 != v36 );
    }
LABEL_30:
    *(_QWORD *)&v56 = 0;
    qfree(v34, v20);
  }
  return v24;
}
