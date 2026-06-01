__int64 __fastcall sub_3F3CE0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r14
  __int64 v7; // rax
  const char *v8; // rsi
  _BYTE *v9; // rdi
  _QWORD *v10; // r14
  __int64 v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // rax
  __int16 flags; // ax
  __int64 v17; // rdx
  char tinfo_property; // al
  _QWORD *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // r14
  __m128i *v23; // rax
  _QWORD *v24; // r14
  __int64 v25; // rax
  _QWORD *v26; // r14
  __int64 v27; // rax
  char v28[8]; // [rsp+8h] [rbp-230h] BYREF
  _BYTE *v29; // [rsp+10h] [rbp-228h] BYREF
  __int128 v30; // [rsp+18h] [rbp-220h]
  _BYTE v31[240]; // [rsp+30h] [rbp-208h] BYREF
  __int64 v32; // [rsp+120h] [rbp-118h]
  unsigned __int64 v33; // [rsp+208h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  if ( a3 != -1 )
  {
    sub_40E9B0(v31, a3);
    if ( (unsigned __int8)sub_40B7E0(v31) )
    {
      if ( (get_tinfo_property(v32, 2) & 0x3F) == 0xD )
      {
        v29 = nullptr;
        v30 = 0;
        v14 = QT::QCoreApplication::self;
        v15 = qvector_reserve(&v29, 0, 29, 1);
        v29 = (_BYTE *)v15;
        *(_QWORD *)&v30 = 29;
        *(__m128i *)v15 = _mm_load_si128((const __m128i *)&xmmword_5DD400);
        *(__m128i *)(v15 + 12) = _mm_load_si128((const __m128i *)&xmmword_5DD830);
        v29[28] = 0;
        sub_479BE0(v28, v14, &v29);
        v8 = v28;
        QT::QIcon::operator QT::QVariant(a1, v28);
        QT::QIcon::~QIcon((QT::QIcon *)v28);
        v9 = v29;
        if ( !v29 )
          goto LABEL_12;
        goto LABEL_11;
      }
      if ( (get_tinfo_property(v32, 2) & 0x3F) != 0x1D )
      {
        tinfo_property = get_tinfo_property(v32, 2);
        v19 = QT::QCoreApplication::self;
        v30 = 0;
        v29 = nullptr;
        if ( (tinfo_property & 0x3F) == 0x2D )
        {
          v20 = qvector_reserve(&v29, 0, 27, 1);
          v29 = (_BYTE *)v20;
          *(_QWORD *)&v30 = 27;
          *(__m128i *)v20 = _mm_load_si128((const __m128i *)&xmmword_5DD400);
          *(__m128i *)(v20 + 10) = _mm_load_si128((const __m128i *)&xmmword_5DD850);
          v29[26] = 0;
          sub_479BE0(v28, v19, &v29);
          v8 = v28;
          QT::QIcon::operator QT::QVariant(a1, v28);
          QT::QIcon::~QIcon((QT::QIcon *)v28);
          v9 = v29;
          if ( !v29 )
            goto LABEL_12;
        }
        else
        {
          v21 = qvector_reserve(&v29, 0, 30, 1);
          v29 = (_BYTE *)v21;
          *(_QWORD *)&v30 = 30;
          *(__m128i *)v21 = _mm_load_si128((const __m128i *)&xmmword_5DD400);
          *(__m128i *)(v21 + 13) = _mm_load_si128((const __m128i *)&xmmword_5DD860);
          v29[29] = 0;
          sub_479BE0(v28, v19, &v29);
          v8 = v28;
          QT::QIcon::operator QT::QVariant(a1, v28);
          QT::QIcon::~QIcon((QT::QIcon *)v28);
          v9 = v29;
          if ( !v29 )
            goto LABEL_12;
        }
        goto LABEL_11;
      }
      v29 = nullptr;
      v30 = 0;
      v6 = QT::QCoreApplication::self;
      v7 = qvector_reserve(&v29, 0, 28, 1);
      v29 = (_BYTE *)v7;
      *(_QWORD *)&v30 = 28;
      *(__m128i *)v7 = _mm_load_si128((const __m128i *)&xmmword_5DD400);
      *(__m128i *)(v7 + 11) = _mm_load_si128((const __m128i *)&xmmword_5DD840);
      v29[27] = 0;
      sub_479BE0(v28, v6, &v29);
      v8 = v28;
      QT::QIcon::operator QT::QVariant(a1, v28);
      QT::QIcon::~QIcon((QT::QIcon *)v28);
      v9 = v29;
      if ( v29 )
      {
LABEL_11:
        *(_QWORD *)&v30 = 0;
        qfree(v9, v28);
      }
    }
    else
    {
      if ( !(unsigned __int8)sub_40B7F0(v31) )
      {
        if ( (unsigned __int8)sub_40B800(v31) )
        {
          v29 = nullptr;
          v30 = 0;
          v12 = QT::QCoreApplication::self;
          v13 = qvector_reserve(&v29, 0, 27, 1);
          v29 = (_BYTE *)v13;
          *(_QWORD *)&v30 = 27;
          *(__m128i *)v13 = _mm_load_si128((const __m128i *)&xmmword_5DD400);
          *(__m128i *)(v13 + 10) = _mm_load_si128((const __m128i *)&xmmword_5DD850);
          v29[26] = 0;
          sub_479BE0(v28, v12, &v29);
          v8 = v28;
          QT::QIcon::operator QT::QVariant(a1, v28);
          QT::QIcon::~QIcon((QT::QIcon *)v28);
          v9 = v29;
          if ( !v29 )
            goto LABEL_12;
        }
        else
        {
          v8 = nullptr;
          flags = get_flags_ex(a3, 0);
          v17 = flags & 0x600;
          if ( v17 == 1536 )
          {
            v29 = nullptr;
            v30 = 0;
            v22 = QT::QCoreApplication::self;
            v23 = (__m128i *)qvector_reserve(&v29, 0, 33, 1);
            v29 = v23;
            *(_QWORD *)&v30 = 33;
            *v23 = _mm_load_si128((const __m128i *)&xmmword_5DD870);
            v23[1] = _mm_load_si128((const __m128i *)&xmmword_5DD880);
            v29[32] = 0;
            sub_479BE0(v28, v22, &v29);
            v8 = v28;
            QT::QIcon::operator QT::QVariant(a1, v28);
            QT::QIcon::~QIcon((QT::QIcon *)v28);
            v9 = v29;
            if ( !v29 )
              goto LABEL_12;
          }
          else if ( v17 == 1024 )
          {
            v29 = nullptr;
            v30 = 0;
            v26 = QT::QCoreApplication::self;
            v27 = qvector_reserve(&v29, 0, 22, 1);
            v29 = (_BYTE *)v27;
            *(_QWORD *)&v30 = 22;
            *(__m128i *)v27 = _mm_load_si128((const __m128i *)&xmmword_5DD890);
            *(_QWORD *)(v27 + 13) = 0x6776732E39372F75LL;
            v29[21] = 0;
            sub_479BE0(v28, v26, &v29);
            v8 = v28;
            QT::QIcon::operator QT::QVariant(a1, v28);
            QT::QIcon::~QIcon((QT::QIcon *)v28);
            v9 = v29;
            if ( !v29 )
              goto LABEL_12;
          }
          else
          {
            if ( (flags & 0x4000) == 0 )
            {
              *(_QWORD *)(a1 + 16) = 0;
              *(_QWORD *)(a1 + 24) = 2;
              *(_OWORD *)a1 = 0;
              goto LABEL_12;
            }
            v29 = nullptr;
            v30 = 0;
            v24 = QT::QCoreApplication::self;
            v25 = qvector_reserve(&v29, 0, 22, 1);
            v29 = (_BYTE *)v25;
            *(_QWORD *)&v30 = 22;
            *(__m128i *)v25 = _mm_load_si128((const __m128i *)&xmmword_5DD890);
            *(_QWORD *)(v25 + 13) = 0x6776732E34372F75LL;
            v29[21] = 0;
            sub_479BE0(v28, v24, &v29);
            v8 = v28;
            QT::QIcon::operator QT::QVariant(a1, v28);
            QT::QIcon::~QIcon((QT::QIcon *)v28);
            v9 = v29;
            if ( !v29 )
              goto LABEL_12;
          }
        }
        goto LABEL_11;
      }
      v29 = nullptr;
      v30 = 0;
      v10 = QT::QCoreApplication::self;
      v11 = qvector_reserve(&v29, 0, 29, 1);
      v29 = (_BYTE *)v11;
      *(_QWORD *)&v30 = 29;
      *(__m128i *)v11 = _mm_load_si128((const __m128i *)&xmmword_5DD400);
      *(__m128i *)(v11 + 12) = _mm_load_si128((const __m128i *)&xmmword_5DD830);
      v29[28] = 0;
      sub_479BE0(v28, v10, &v29);
      v8 = v28;
      QT::QIcon::operator QT::QVariant(a1, v28);
      QT::QIcon::~QIcon((QT::QIcon *)v28);
      v9 = v29;
      if ( v29 )
        goto LABEL_11;
    }
LABEL_12:
    sub_3EFED0((__int64)v31, v8);
    return a1;
  }
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 2;
  *(_OWORD *)a1 = 0;
  return a1;
}
