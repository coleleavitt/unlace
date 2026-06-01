unsigned __int64 __fastcall form_actions_impl_t__::vfunc_7(
        __int64 a1,
        int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  QT::QComboBox *v10; // rbx
  __int64 v12; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 *v15; // r13
  __int64 v16; // rbp
  size_t v17; // rax
  const char *v18; // r12
  size_t v19; // rdx
  int v20; // r15d
  __int64 v21; // rax
  char v22; // [rsp+1Fh] [rbp-99h] BYREF
  __int64 v23; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v24[8]; // [rsp+28h] [rbp-90h] BYREF
  void *ptr[4]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v26; // [rsp+50h] [rbp-68h] BYREF
  __int64 v27; // [rsp+60h] [rbp-58h]
  __int64 v28; // [rsp+68h] [rbp-50h]
  unsigned __int64 v29; // [rsp+78h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v10 = (QT::QComboBox *)sub_4F9180(a1, a2, &v22, &v23);
  if ( v22 == 69 )
  {
    if ( v10 )
    {
      v12 = sub_50FA70(v10);
      if ( v12 )
        sub_4A4600(v12, nullptr, 7u, 0, a3, a4, a5, a6, v13, v14, a9, a10);
    }
  }
  else if ( v22 == 98 )
  {
    QT::QComboBox::clear(v10);
    v15 = *(__int64 **)(v23 + 40);
    v16 = *v15;
    if ( 24 * v15[1] )
    {
      do
      {
        v27 = 0;
        v28 = 2;
        v26 = 0;
        v21 = *(_QWORD *)(v16 + 8);
        if ( v21 )
        {
          v17 = v21 - 1;
          v18 = *(const char **)v16;
          v19 = v17 >> 63;
          if ( !*(_QWORD *)v16 )
            goto LABEL_17;
        }
        else
        {
          v18 = &s1;
          LOBYTE(v19) = 0;
          v17 = 0;
          if ( !&s1 )
          {
LABEL_17:
            v17 = 0;
            if ( v18 )
              v17 = strlen(v18);
            goto LABEL_11;
          }
        }
        if ( (_BYTE)v19 )
          goto LABEL_17;
LABEL_11:
        QT::QString::fromUtf8(ptr, v17, v18);
        v20 = QT::QComboBox::count(v10);
        QT::QIcon::QIcon((QT::QIcon *)v24);
        QT::QComboBox::insertItem(
          v10,
          v20,
          (const QT::QIcon *)v24,
          (const QT::QString *)ptr,
          (const QT::QVariant *)&v26);
        QT::QIcon::~QIcon((QT::QIcon *)v24);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        v16 += 24;
        QT::QVariant::~QVariant((QT::QVariant *)&v26);
      }
      while ( v16 != *v15 + 24 * v15[1] );
    }
  }
  return v29 - __readfsqword(0x28u);
}
