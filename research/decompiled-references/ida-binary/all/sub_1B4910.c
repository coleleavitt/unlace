unsigned __int64 __fastcall sub_1B4910(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5,
        QT::QAbstractButton *a6,
        double a7)
{
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  const QT::QObject *v14; // rsi
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  char *v18; // rcx
  int *v19; // rax
  const char *v20; // rsi
  unsigned __int8 v21; // bl
  int v22; // r12d
  const char *v23; // rcx
  unsigned __int64 v24; // rdi
  int v25; // r15d
  int v26; // eax
  __m128i *v28; // r15
  __int64 v29; // rax
  char *v30; // [rsp+8h] [rbp-D0h]
  __int64 v31; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+18h] [rbp-C0h]
  _OWORD v33[2]; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v34; // [rsp+50h] [rbp-88h] BYREF
  __m128i v35; // [rsp+60h] [rbp-78h] BYREF
  __m128i v36; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v37; // [rsp+88h] [rbp-50h]
  unsigned __int64 v38; // [rsp+98h] [rbp-40h]

  v11 = a2;
  v12 = *(_QWORD *)(a1 + 256);
  v38 = __readfsqword(0x28u);
  v14 = (const QT::QObject *)QT::QStackedWidget::currentWidget(*(QT::QStackedWidget **)(v12 + 176));
  v15 = (char *)QT::QMetaObject::cast((QT::QMetaObject *)&off_881840, v14);
  if ( !v15 )
  {
    if ( !under_debugger )
      interr(40672, v14, v16, v17, a7);
    BUG();
  }
  v31 = 0;
  v32 = 0;
  if ( (v11 & 0x80000000) == 0LL && v11 < a4 )
  {
    v18 = v15;
    v19 = (int *)(a3 + 8 * v11);
    v20 = (const char *)&v31;
    v21 = *((_BYTE *)v19 + 4);
    v30 = v18;
    if ( v21 >= 0x7Eu )
      v21 = 0;
    v22 = *v19;
    if ( (unsigned __int8)sub_524BD0(v18 + 40, &v31) )
    {
      v23 = v30;
      if ( a5 && !*(_BYTE *)(a1 + 344) )
      {
        sub_1B3760((__int64)v30, v21);
        v23 = v30;
      }
      QT::QObject::property((QT::QObject *)&v36, v23);
      v24 = v37 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (_UNKNOWN *)(v37 & 0xFFFFFFFFFFFFFFFCLL) == &unk_85CFA0 )
        goto LABEL_16;
      if ( !v24 || !&unk_85CFA0 )
        goto LABEL_22;
      v25 = *(_DWORD *)&byte_9[4 * (v37 >> 2) + 3];
      if ( !v25 )
        v25 = QT::QMetaType::registerHelper(v24);
      if ( v25 == 4099 )
      {
LABEL_16:
        v35 = _mm_load_si128(&v36);
      }
      else
      {
LABEL_22:
        v34.m128i_i32[0] = 0;
        v28 = &v36;
        *(__int64 *)((char *)v34.m128i_i64 + 4) = 0xFFFF;
        v34.m128i_i16[6] = 0;
        if ( (v37 & 1) != 0 )
          v28 = (__m128i *)(*(int *)(v36.m128i_i64[0] + 4) + v36.m128i_i64[0]);
        v29 = QT::QVariant::metaType((QT::QVariant *)&v36);
        QT::QMetaType::convert(v29, v28, &unk_85CFA0, &v34);
        v35 = _mm_load_si128(&v34);
      }
      v20 = (const char *)v33;
      v34 = _mm_load_si128(&v35);
      v33[1] = v34;
      v33[0] = v34;
      sub_4AF280(a6);
      QT::QVariant::~QVariant((QT::QVariant *)&v36);
      v26 = *((_DWORD *)a6 + 20);
      if ( *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 256) + 144LL) == a6 && (unsigned int)(v22 + 2129403314) <= 0x2F )
        *((_DWORD *)a6 + 20) = v26 | 1;
      else
        *((_DWORD *)a6 + 20) = v26 & 0xFFFFFFFE;
    }
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31, v20);
    }
  }
  return v38 - __readfsqword(0x28u);
}
