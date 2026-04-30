__int64 __fastcall sub_1B5200(__int64 a1, char *a2, const char *a3)
{
  unsigned __int64 v4; // rdi
  int v5; // r14d
  __m128i *v6; // r14
  __int64 v7; // rax
  __m128i v8; // xmm0
  int v9; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // [rsp+10h] [rbp-98h]
  __m128i v17; // [rsp+30h] [rbp-78h] BYREF
  __m128i v18; // [rsp+40h] [rbp-68h] BYREF
  __m128i v19; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-40h]
  unsigned __int64 v21; // [rsp+78h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  QT::QObject::property((QT::QObject *)&v19, a2);
  v4 = v20 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (_UNKNOWN *)(v20 & 0xFFFFFFFFFFFFFFFCLL) == &unk_85CFA0 )
    goto LABEL_7;
  if ( !v4 || !&unk_85CFA0 )
    goto LABEL_8;
  v5 = *(_DWORD *)&byte_9[4 * (v20 >> 2) + 3];
  if ( !v5 )
    v5 = QT::QMetaType::registerHelper(v4);
  if ( v5 == 4099 )
  {
LABEL_7:
    v18 = _mm_load_si128(&v19);
  }
  else
  {
LABEL_8:
    v17.m128i_i32[0] = 0;
    v6 = &v19;
    *(__int64 *)((char *)v17.m128i_i64 + 4) = 0xFFFF;
    v17.m128i_i16[6] = 0;
    if ( (v20 & 1) != 0 )
      v6 = (__m128i *)(*(int *)(v19.m128i_i64[0] + 4) + v19.m128i_i64[0]);
    v7 = QT::QVariant::metaType((QT::QVariant *)&v19);
    QT::QMetaType::convert(v7, v6, &unk_85CFA0, &v17);
    v18 = _mm_load_si128(&v17);
  }
  v8 = _mm_load_si128(&v18);
  v9 = _mm_cvtsi128_si32(v8);
  v17 = v8;
  v16 = v8;
  QT::QVariant::~QVariant((QT::QVariant *)&v19);
  if ( !v9 )
  {
    if ( !strcmp(a3, "color") )
    {
      v11 = QT::QWidget::palette((QT::QWidget *)a2);
      v12 = 0;
      v13 = v11;
    }
    else
    {
      if ( strcmp(a3, "background_color") )
        goto LABEL_14;
      v15 = QT::QWidget::palette((QT::QWidget *)a2);
      v12 = 10;
      v13 = v15;
    }
    v14 = *(_QWORD *)QT::QPalette::brush(v13, 4, v12);
    v16.m128i_i64[0] = *(_QWORD *)(v14 + 8);
    *(__int64 *)((char *)v16.m128i_i64 + 6) = *(_QWORD *)(v14 + 14);
    v9 = *(_DWORD *)(v14 + 8);
  }
LABEL_14:
  v16.m128i_i32[0] = v9;
  v19 = v16;
  return v16.m128i_i64[0];
}
