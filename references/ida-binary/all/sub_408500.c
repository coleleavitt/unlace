__int64 __fastcall sub_408500(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v8; // rax
  QT::QVariant *(__fastcall *v9)(QT::QVariant *, __int64, __int64, __int64); // rax
  __int64 v10; // rbx
  QT::QVariant *(__fastcall *v12)(QT::QVariant *, __int64, __int64, __int64); // rax
  unsigned __int64 v13; // rdi
  int v14; // r13d
  int v15; // eax
  _QWORD *v16; // r13
  __int64 v17; // rax
  __int64 *func; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-C0h] BYREF
  __m128i v21; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+20h] [rbp-A8h]
  _QWORD v23[4]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v24[32]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v25[3]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-40h]
  unsigned __int64 v27; // [rsp+98h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v22 = a8;
  v8 = *(_QWORD *)a1;
  v21 = _mm_loadu_si128((const __m128i *)&a7);
  v9 = *(QT::QVariant *(__fastcall **)(QT::QVariant *, __int64, __int64, __int64))(v8 + 144);
  if ( v9 == sub_408230 )
    QT::QStandardItemModel::data(v24, a1, &v21, 257);
  else
    v9((QT::QVariant *)v24, a1, (__int64)&v21, 257);
  if ( (unsigned int)QT::QVariant::toInt((QT::QVariant *)v24, nullptr) )
  {
    if ( v22 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64, __m128i *))(*(_QWORD *)v22 + 104LL))(v23, v22, &v21);
    }
    else
    {
      v23[0] = -1;
      v23[1] = 0;
      v23[2] = 0;
    }
    v12 = *(QT::QVariant *(__fastcall **)(QT::QVariant *, __int64, __int64, __int64))(*(_QWORD *)a1 + 144LL);
    if ( v12 == sub_408230 )
      QT::QStandardItemModel::data(v25, a1, v23, 258);
    else
      v12((QT::QVariant *)v25, a1, (__int64)v23, 258);
    v13 = v26 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (_DWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL) == QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType )
      goto LABEL_18;
    if ( !v13 || !QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType )
      goto LABEL_20;
    v14 = *(_DWORD *)&byte_9[4 * (v26 >> 2) + 3];
    if ( !v14 )
      v14 = QT::QMetaType::registerHelper(v13);
    v15 = QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType[3];
    if ( !v15 )
      v15 = QT::QMetaType::registerHelper(QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType);
    if ( v14 == v15 )
    {
LABEL_18:
      v10 = v25[0];
    }
    else
    {
LABEL_20:
      v20 = 0;
      v16 = v25;
      if ( (v26 & 1) != 0 )
        v16 = (_QWORD *)(*(int *)(v25[0] + 4LL) + v25[0]);
      v17 = QT::QVariant::metaType((QT::QVariant *)v25);
      QT::QMetaType::convert(v17, v16, QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType, &v20);
      v10 = v20;
    }
    QT::QVariant::~QVariant((QT::QVariant *)v25);
    QT::QVariant::~QVariant((QT::QVariant *)v24);
    func = (__int64 *)get_func(v10);
    if ( func )
    {
      v19 = *func;
      if ( v19 != -1 )
        return v19;
    }
  }
  else
  {
    v10 = -1;
    QT::QVariant::~QVariant((QT::QVariant *)v24);
  }
  return v10;
}
