unsigned __int64 __fastcall sub_4D8080(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  QT::QComboBox *v4; // r14
  int v5; // r12d
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  size_t v12; // rax
  const char *v13; // r12
  size_t v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  int *v20; // rax
  QT::QComboBox *v21; // r14
  __int64 v22; // rax
  unsigned int v23; // eax
  QT::QAbstractButton *v24; // r12
  unsigned int v25; // esi
  int v26; // ebp
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 i; // r12
  QT::QLineEdit *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 *v34; // rax
  __int64 v35; // rdi
  int v37; // [rsp+Ch] [rbp-CCh]
  __m128i *v38; // [rsp+10h] [rbp-C8h]
  __int64 v39; // [rsp+18h] [rbp-C0h]
  _BYTE v40[8]; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v42; // [rsp+38h] [rbp-A0h]
  __m128i ptr[2]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v44; // [rsp+70h] [rbp-68h] BYREF
  __int64 v45; // [rsp+80h] [rbp-58h]
  __int64 v46; // [rsp+88h] [rbp-50h]
  unsigned __int64 v47; // [rsp+98h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 88) = a2;
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 208LL))(v3, a2, 7);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 96) + 8LL) + 104LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL),
    1);
  QT::QComboBox::clear(*(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 8LL));
  v4 = *(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 8LL);
  v44 = 0;
  v45 = 0;
  v46 = 2;
  QT::QString::fromUtf8(ptr, 5, "(any)");
  v5 = QT::QComboBox::count(v4);
  QT::QIcon::QIcon((QT::QIcon *)&v41);
  QT::QComboBox::insertItem(v4, v5, (const QT::QIcon *)&v41, (const QT::QString *)ptr, (const QT::QVariant *)&v44);
  QT::QIcon::~QIcon((QT::QIcon *)&v41);
  if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
    free((void *)ptr[0].m128i_i64[0]);
  QT::QVariant::~QVariant((QT::QVariant *)&v44);
  v6 = *(_QWORD *)(a1 + 80);
  v41 = 0;
  v42 = 0;
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 248LL))(v6, &v41, 0);
  v38 = (__m128i *)(a1 + 48);
  sub_4D5E40((void **)(a1 + 48), v42, v7, v8, v9, v10);
  v11 = v41;
  v39 = v41 + 24 * v42;
  if ( v41 != v39 )
  {
    do
    {
      v22 = *(_QWORD *)(v11 + 8);
      if ( v22 )
      {
        v12 = v22 - 1;
        v13 = *(const char **)v11;
        v14 = v12 >> 63;
        if ( !*(_QWORD *)v11 )
          goto LABEL_17;
      }
      else
      {
        v13 = &s1;
        LOBYTE(v14) = 0;
        v12 = 0;
        if ( !&s1 )
        {
LABEL_17:
          v12 = 0;
          if ( v13 )
            v12 = strlen(v13);
          goto LABEL_8;
        }
      }
      if ( (_BYTE)v14 )
        goto LABEL_17;
LABEL_8:
      QT::QString::fromUtf8(ptr, v12, v13);
      sub_1D5510(v38, *(_QWORD *)(a1 + 64), ptr, v15, v16, v17);
      v20 = *(int **)(a1 + 48);
      if ( !v20 || *v20 > 1 )
        sub_1B21C0(v38, 0, 0, 0, v18, v19);
      v21 = *(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 8LL);
      v44 = 0;
      v45 = 0;
      v46 = 2;
      v37 = QT::QComboBox::count(v21);
      QT::QIcon::QIcon((QT::QIcon *)v40);
      QT::QComboBox::insertItem(v21, v37, (const QT::QIcon *)v40, (const QT::QString *)ptr, (const QT::QVariant *)&v44);
      QT::QIcon::~QIcon((QT::QIcon *)v40);
      QT::QVariant::~QVariant((QT::QVariant *)&v44);
      if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
        free((void *)ptr[0].m128i_i64[0]);
      v11 += 24;
    }
    while ( v39 != v11 );
  }
  *(_DWORD *)(a1 + 72) = reg_int_op("UIFilterFlags", 0, 0, 0);
  v23 = reg_int_op("UIFilterColor", 0, 0xFFFFFFFFLL, 0);
  *(_DWORD *)(a1 + 76) = v23;
  v24 = *(QT::QAbstractButton **)(a1 + 104);
  v25 = __ROR4__(_byteswap_ulong(v23), 8);
  if ( v23 == -1 )
    v25 = 11791331;
  v26 = *(_DWORD *)(a1 + 72);
  QT::QColor::QColor((QT::QColor *)&v44, v25);
  sub_4AF280(v24, (int *)&v44);
  sub_4D4100(a1, v26);
  sub_4D5C40(a1, *(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 24LL));
  QT::QComboBox::setCurrentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 24LL), 0);
  v27 = *(_QWORD *)(a1 + 80);
  v28 = *(_QWORD *)(v27 + 1848);
  for ( i = v28 + 80LL * *(_QWORD *)(v27 + 1856); i != v28; v28 += 80 )
    sub_4D6B90((__m128i *)a1, v28);
  v30 = (QT::QLineEdit *)QT::QComboBox::lineEdit(*(QT::QComboBox **)(*(_QWORD *)(a1 + 96) + 24LL));
  QT::QLineEdit::selectAll(v30);
  QT::QWidget::setFocus(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL), 7);
  v31 = v41;
  if ( v41 )
  {
    v32 = v42;
    if ( (_QWORD)v42 )
    {
      v33 = 0;
      do
      {
        v34 = (__int64 *)(v31 + 24 * v33);
        v35 = *v34;
        if ( *v34 )
        {
          v34[1] = 0;
          qfree(v35, &byte_7);
          v31 = v41;
        }
        ++v33;
      }
      while ( v32 != v33 );
    }
    *(_QWORD *)&v42 = 0;
    qfree(v31, &byte_7);
  }
  return v47 - __readfsqword(0x28u);
}
