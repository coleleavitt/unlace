__int64 __fastcall sub_3E9290(
        char a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15,
        __int64 a16,
        __int64 a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        __int64 a23)
{
  int v23; // eax
  bool v24; // bp
  unsigned int v25; // ebx
  __int64 v27; // rax
  _QWORD *v28; // rax
  void *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  double v32; // xmm4_8
  double v33; // xmm5_8
  int v34; // edi
  int v35; // eax
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  double v40; // xmm4_8
  double v41; // xmm5_8
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+10h] [rbp-58h]
  _BYTE v45[40]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v46; // [rsp+48h] [rbp-20h]

  v46 = __readfsqword(0x28u);
  v23 = reg_int_op("DisplayWelcome", 0, 1, 0);
  v24 = v23 != 0;
  if ( a1 == 1 && !v23 )
    return 1;
  if ( (unsigned int)QT::QListWidget::currentRow(*(QT::QListWidget **)(*(_QWORD *)(qword_8D1260 + 48) + 112LL)) == -1 )
  {
    QT::QString::assign(qword_8D1260 + 64, &unk_5C2F25, 0);
    v28 = (_QWORD *)qword_8D1260;
  }
  else
  {
    v27 = QT::QListWidget::item(*(QT::QListWidget **)(*(_QWORD *)(qword_8D1260 + 48) + 112LL), 0);
    (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v27 + 24LL))(v45, v27, 0);
    QT::QVariant::toString((QT::QVariant *)&ptr);
    QT::QVariant::~QVariant((QT::QVariant *)v45);
    v28 = (_QWORD *)qword_8D1260;
    v29 = *(void **)(qword_8D1260 + 64);
    *(_QWORD *)(qword_8D1260 + 64) = ptr;
    ptr = v29;
    v30 = v28[9];
    v28[9] = v43;
    v43 = v30;
    v31 = v28[10];
    v28[10] = v44;
    v44 = v31;
    if ( v29 )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v29, 1u) )
        free(ptr);
      v28 = (_QWORD *)qword_8D1260;
    }
  }
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(v28[6] + 120LL), v24);
  v25 = batch;
  if ( batch )
    goto LABEL_15;
  v34 = qword_8D1260;
  v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_8D1260 + 424LL))(qword_8D1260);
  if ( v35 == 13 )
    return v25;
  if ( v35 <= 13 )
  {
    if ( v35 == 10 )
    {
      *(double *)a2.m128_u64 = QT::QString::fromUtf8(&ptr, 0, (const char *)&unk_5C2F25);
      sub_30A6D0((QT::QString *)&ptr, nullptr, a2, a3, a4, a5, v40, v41, a8, a9);
      if ( ptr )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
      }
      return 1;
    }
    if ( v35 != 12 )
      return 1;
LABEL_15:
    sub_30A6D0((QT::QString *)(qword_8D1260 + 64), nullptr, a2, a3, a4, a5, v32, v33, a8, a9);
    return 1;
  }
  if ( v35 != 14 )
    return 1;
  return sub_30AF40(v34, v24, v36, v37, v38, v39, a15, a16, a17, a18, a19, a20, a21, a22, a23);
}
