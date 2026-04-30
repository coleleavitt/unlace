unsigned __int64 __fastcall sub_505180(__int64 a1)
{
  __int64 v1; // rax
  const QT::QObject **v2; // rbx
  const QT::QObject **v3; // r12
  const QT::QObject *v4; // rsi
  QT::QComboBox *v5; // rax
  QT::QComboBox *v6; // r15
  __int64 *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  int *v13; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  int *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r15
  __m128i *v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  int *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int *v51; // rax
  __int64 v52; // [rsp+8h] [rbp-70h] BYREF
  __m128i v53; // [rsp+10h] [rbp-68h] BYREF
  __int64 v54[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v55; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 48);
  v55 = __readfsqword(0x28u);
  v2 = *(const QT::QObject ***)(a1 + 40);
  v3 = &v2[9 * v1];
  if ( v3 != v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
          break;
LABEL_9:
        v2 += 9;
        if ( v3 == v2 )
          return v55 - __readfsqword(0x28u);
      }
      switch ( *((_BYTE *)v2 + 52) )
      {
        case ' ':
        case 'B':
        case 'K':
        case 'h':
          goto LABEL_9;
        case '=':
          v7 = v54;
          v30 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QTabWidget::staticMetaObject, v4);
          QT::QObject::connect(v54, v30, "2currentChanged(int)", a1, "1qtTabWidgetChanged()", 0);
          sub_4F4600((__m128i *)(a1 + 344), *(_QWORD *)(a1 + 360), v54, v31, v32, v33);
          v34 = *(int **)(a1 + 344);
          if ( !v34 || *v34 > 1 )
            goto LABEL_25;
          goto LABEL_26;
        case 'C':
        case 'c':
          if ( v2[4] )
            goto LABEL_9;
          v7 = v54;
          QT::QObject::connect(v54, v4, "2toggled(bool)", a1, "1qtInputFieldChanged()", 0);
          sub_4F4600((__m128i *)(a1 + 344), *(_QWORD *)(a1 + 360), v54, v21, v22, v23);
          v24 = *(int **)(a1 + 344);
          if ( !v24 || *v24 > 1 )
            goto LABEL_25;
          goto LABEL_26;
        case 'E':
          v25 = sub_50FA70(*v2);
          if ( !v25 )
            goto LABEL_9;
          v7 = v54;
          QT::QObject::connect(v54, v25, "2selection_state_changed(bool)", a1, "1qtChooserSelectionChanged(bool)", 1);
          sub_4F4600((__m128i *)(a1 + 344), *(_QWORD *)(a1 + 360), v54, v26, v27, v28);
          v29 = *(int **)(a1 + 344);
          if ( !v29 || *v29 > 1 )
            goto LABEL_25;
          goto LABEL_26;
        case 'R':
        case 'r':
          if ( v2[4] )
            goto LABEL_9;
          v7 = v54;
          QT::QObject::connect(v54, v4, "2toggled(bool)", a1, "1qtInputFieldChanged()", 0);
          sub_4F4600((__m128i *)(a1 + 344), *(_QWORD *)(a1 + 360), v54, v15, v16, v17);
          v20 = *(int **)(a1 + 344);
          if ( !v20 || *v20 > 1 )
            goto LABEL_25;
          goto LABEL_26;
        case 'p':
          v7 = v54;
          v43 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QLineEdit::staticMetaObject, v4);
          QT::QObject::connect(v54, v43, "2textChanged(QString)", a1, "1qtInputFieldChanged()", 0);
          sub_4F4600((__m128i *)(a1 + 344), *(_QWORD *)(a1 + 360), v54, v44, v45, v46);
          v47 = *(int **)(a1 + 344);
          if ( !v47 || *v47 > 1 )
            goto LABEL_25;
          goto LABEL_26;
        case 't':
          v7 = &v52;
          v35 = sub_50FF00(*v2);
          v53.m128i_i64[1] = 0;
          v54[1] = 0;
          v36 = v35;
          v53.m128i_i64[0] = (__int64)sub_4F9B60;
          v54[0] = (__int64)&loc_54EDD0;
          v37 = (__m128i *)operator new(0x20u);
          v38 = _mm_load_si128(&v53);
          v37->m128i_i32[0] = 1;
          v37->m128i_i64[1] = (__int64)sub_4F8A80;
          v37[1] = v38;
          QT::QObject::connectImpl(&v52, v36, v54, a1, &v53, v37, 0, 0, &off_89E260);
          sub_4F4600((__m128i *)(a1 + 344), *(_QWORD *)(a1 + 360), &v52, v39, v40, v41);
          v42 = *(int **)(a1 + 344);
          if ( !v42 || *v42 > 1 )
            goto LABEL_25;
          goto LABEL_26;
        default:
          v5 = (QT::QComboBox *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QComboBox::staticMetaObject, v4);
          v6 = v5;
          if ( !v5 )
            goto LABEL_9;
          v7 = v54;
          if ( (unsigned __int8)QT::QComboBox::isEditable(v5) )
          {
            QT::QObject::connect(v54, v6, "2editTextChanged(QString)", a1, "1qtInputFieldChanged()", 0);
            sub_4F4600((__m128i *)(a1 + 344), *(_QWORD *)(a1 + 360), v54, v8, v9, v10);
            v13 = *(int **)(a1 + 344);
            if ( !v13 || *v13 > 1 )
            {
              sub_4F4020((__m128i *)(a1 + 344), 0, 0, 0, v11, v12);
              QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v54);
              goto LABEL_9;
            }
          }
          else
          {
            QT::QObject::connect(v54, v6, "2currentIndexChanged(int)", a1, "1qtInputFieldChanged()", 0);
            sub_4F4600((__m128i *)(a1 + 344), *(_QWORD *)(a1 + 360), v54, v48, v49, v50);
            v51 = *(int **)(a1 + 344);
            if ( !v51 || *v51 > 1 )
LABEL_25:
              sub_4F4020((__m128i *)(a1 + 344), 0, 0, 0, v18, v19);
          }
LABEL_26:
          v2 += 9;
          QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v7);
          if ( v3 == v2 )
            return v55 - __readfsqword(0x28u);
          break;
      }
    }
  }
  return v55 - __readfsqword(0x28u);
}
