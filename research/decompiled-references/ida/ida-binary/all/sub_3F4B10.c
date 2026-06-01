unsigned __int64 __fastcall sub_3F4B10(QT::QWidget *a1)
{
  QT::QCheckBox *v1; // r12
  double v2; // xmm0_8
  volatile signed __int32 *v3; // rax
  QT::QCheckBox *v4; // r12
  double v5; // xmm0_8
  volatile signed __int32 *v6; // rax
  QT::QWidget *v7; // r12
  double v8; // xmm0_8
  QT::QCheckBox *v9; // r12
  double v10; // xmm0_8
  volatile signed __int32 *v11; // rax
  QT::QWidget *v12; // r12
  double v13; // xmm0_8
  QT::QCheckBox *v14; // r12
  double v15; // xmm0_8
  volatile signed __int32 *v16; // rax
  QT::QWidget *v17; // r12
  double v18; // xmm0_8
  QT::QCheckBox *v19; // r12
  double v20; // xmm0_8
  volatile signed __int32 *v21; // rax
  QT::QWidget *v22; // r12
  double v23; // xmm0_8
  QT::QCheckBox *v24; // r12
  double v25; // xmm0_8
  volatile signed __int32 *v26; // rax
  QT::QWidget *v27; // r12
  double v28; // xmm0_8
  QT::QCheckBox *v29; // r12
  double v30; // xmm0_8
  volatile signed __int32 *v31; // rax
  QT::QWidget *v32; // r12
  double v33; // xmm0_8
  QT::QCheckBox *v34; // r12
  double v35; // xmm0_8
  volatile signed __int32 *v36; // rax
  QT::QWidget *v37; // r12
  double v38; // xmm0_8
  QT::QCheckBox *v39; // r12
  double v40; // xmm0_8
  volatile signed __int32 *v41; // rax
  QT::QWidget *v42; // r12
  double v43; // xmm0_8
  QT::QCheckBox *v44; // r12
  double v45; // xmm0_8
  volatile signed __int32 *v46; // rax
  QT::QWidget *v47; // r12
  double v48; // xmm0_8
  QT::QCheckBox *v49; // r12
  double v50; // xmm0_8
  volatile signed __int32 *v51; // rax
  QT::QWidget *v52; // rbx
  void *ptr[3]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  v1 = (QT::QCheckBox *)operator new(0x28u);
  v2 = QT::QString::fromUtf8(ptr, 4, "Sync");
  QT::QCheckBox::QCheckBox(v1, (const QT::QString *)ptr, a1);
  v3 = (volatile signed __int32 *)ptr[0];
  *((_QWORD *)a1 + 23) = v1;
  if ( v3 )
  {
    if ( !_InterlockedSub(v3, 1u) )
      free(ptr[0]);
    v1 = *((QT::QCheckBox **)a1 + 23);
  }
  QT::QAbstractButton::setChecked(v1, 0);
  v4 = (QT::QCheckBox *)operator new(0x28u);
  v5 = QT::QString::fromUtf8(ptr, 13, "Include Local", v2);
  QT::QCheckBox::QCheckBox(v4, (const QT::QString *)ptr, a1);
  v6 = (volatile signed __int32 *)ptr[0];
  *((_QWORD *)a1 + 24) = v4;
  if ( v6 )
  {
    if ( !_InterlockedSub(v6, 1u) )
      free(ptr[0]);
    v4 = *((QT::QCheckBox **)a1 + 24);
  }
  QT::QAbstractButton::setChecked(v4, 0);
  v7 = *((QT::QWidget **)a1 + 24);
  v8 = QT::QString::fromUtf8(ptr, 46, "Include references within the current function", v5);
  QT::QWidget::setToolTip(v7, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v9 = (QT::QCheckBox *)operator new(0x28u);
  v10 = QT::QString::fromUtf8(ptr, 15, "Simplified view", v8);
  QT::QCheckBox::QCheckBox(v9, (const QT::QString *)ptr, a1);
  v11 = (volatile signed __int32 *)ptr[0];
  *((_QWORD *)a1 + 25) = v9;
  if ( v11 )
  {
    if ( !_InterlockedSub(v11, 1u) )
      free(ptr[0]);
    v9 = *((QT::QCheckBox **)a1 + 25);
  }
  QT::QAbstractButton::setChecked(v9, 1);
  v12 = *((QT::QWidget **)a1 + 25);
  v13 = QT::QString::fromUtf8(ptr, 63, "Show simplified function names without templates and namespaces", v10);
  QT::QWidget::setToolTip(v12, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v14 = (QT::QCheckBox *)operator new(0x28u);
  v15 = QT::QString::fromUtf8(ptr, 12, "Show Address", v13);
  QT::QCheckBox::QCheckBox(v14, (const QT::QString *)ptr, a1);
  v16 = (volatile signed __int32 *)ptr[0];
  *((_QWORD *)a1 + 26) = v14;
  if ( v16 )
  {
    if ( !_InterlockedSub(v16, 1u) )
      free(ptr[0]);
    v14 = *((QT::QCheckBox **)a1 + 26);
  }
  QT::QAbstractButton::setChecked(v14, *((_BYTE *)a1 + 393));
  v17 = *((QT::QWidget **)a1 + 26);
  v18 = QT::QString::fromUtf8(ptr, 28, "Show/hide the Address column", v15);
  QT::QWidget::setToolTip(v17, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v19 = (QT::QCheckBox *)operator new(0x28u);
  v20 = QT::QString::fromUtf8(ptr, 12, "Show Segment", v18);
  QT::QCheckBox::QCheckBox(v19, (const QT::QString *)ptr, a1);
  v21 = (volatile signed __int32 *)ptr[0];
  *((_QWORD *)a1 + 27) = v19;
  if ( v21 )
  {
    if ( !_InterlockedSub(v21, 1u) )
      free(ptr[0]);
    v19 = *((QT::QCheckBox **)a1 + 27);
  }
  QT::QAbstractButton::setChecked(v19, *((_BYTE *)a1 + 394));
  v22 = *((QT::QWidget **)a1 + 27);
  v23 = QT::QString::fromUtf8(ptr, 28, "Show/hide the Segment column", v20);
  QT::QWidget::setToolTip(v22, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v24 = (QT::QCheckBox *)operator new(0x28u);
  v25 = QT::QString::fromUtf8(ptr, 11, "Show Offset", v23);
  QT::QCheckBox::QCheckBox(v24, (const QT::QString *)ptr, a1);
  v26 = (volatile signed __int32 *)ptr[0];
  *((_QWORD *)a1 + 28) = v24;
  if ( v26 )
  {
    if ( !_InterlockedSub(v26, 1u) )
      free(ptr[0]);
    v24 = *((QT::QCheckBox **)a1 + 28);
  }
  QT::QAbstractButton::setChecked(v24, *((_BYTE *)a1 + 395));
  v27 = *((QT::QWidget **)a1 + 28);
  v28 = QT::QString::fromUtf8(ptr, 27, "Show/hide the Offset column", v25);
  QT::QWidget::setToolTip(v27, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v29 = (QT::QCheckBox *)operator new(0x28u);
  v30 = QT::QString::fromUtf8(ptr, 15, "Show Data Items", v28);
  QT::QCheckBox::QCheckBox(v29, (const QT::QString *)ptr, a1);
  v31 = (volatile signed __int32 *)ptr[0];
  *((_QWORD *)a1 + 29) = v29;
  if ( v31 )
  {
    if ( !_InterlockedSub(v31, 1u) )
      free(ptr[0]);
    v29 = *((QT::QCheckBox **)a1 + 29);
  }
  QT::QAbstractButton::setChecked(v29, 1);
  v32 = *((QT::QWidget **)a1 + 29);
  v33 = QT::QString::fromUtf8(ptr, 32, "Show/hide data items in the tree", v30);
  QT::QWidget::setToolTip(v32, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v34 = (QT::QCheckBox *)operator new(0x28u);
  v35 = QT::QString::fromUtf8(ptr, 10, "Show Types", v33);
  QT::QCheckBox::QCheckBox(v34, (const QT::QString *)ptr, a1);
  v36 = (volatile signed __int32 *)ptr[0];
  *((_QWORD *)a1 + 30) = v34;
  if ( v36 )
  {
    if ( !_InterlockedSub(v36, 1u) )
      free(ptr[0]);
    v34 = *((QT::QCheckBox **)a1 + 30);
  }
  QT::QAbstractButton::setChecked(v34, 1);
  v37 = *((QT::QWidget **)a1 + 30);
  v38 = QT::QString::fromUtf8(ptr, 38, "Show/hide type definitions and members", v35);
  QT::QWidget::setToolTip(v37, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v39 = (QT::QCheckBox *)operator new(0x28u);
  v40 = QT::QString::fromUtf8(ptr, 15, "Show Duplicates", v38);
  QT::QCheckBox::QCheckBox(v39, (const QT::QString *)ptr, a1);
  v41 = (volatile signed __int32 *)ptr[0];
  *((_QWORD *)a1 + 31) = v39;
  if ( v41 )
  {
    if ( !_InterlockedSub(v41, 1u) )
      free(ptr[0]);
    v39 = *((QT::QCheckBox **)a1 + 31);
  }
  QT::QAbstractButton::setChecked(v39, 0);
  v42 = *((QT::QWidget **)a1 + 31);
  v43 = QT::QString::fromUtf8(ptr, 39, "Show duplicate entries in the xref tree", v40);
  QT::QWidget::setToolTip(v42, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v44 = (QT::QCheckBox *)operator new(0x28u);
  v45 = QT::QString::fromUtf8(ptr, 20, "Show Argument Values", v43);
  QT::QCheckBox::QCheckBox(v44, (const QT::QString *)ptr, a1);
  v46 = (volatile signed __int32 *)ptr[0];
  *((_QWORD *)a1 + 32) = v44;
  if ( v46 )
  {
    if ( !_InterlockedSub(v46, 1u) )
      free(ptr[0]);
    v44 = *((QT::QCheckBox **)a1 + 32);
  }
  QT::QAbstractButton::setChecked(v44, 0);
  v47 = *((QT::QWidget **)a1 + 32);
  v48 = QT::QString::fromUtf8(ptr, 65, "Display function argument values at call sites (when unambiguous)", v45);
  QT::QWidget::setToolTip(v47, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v49 = (QT::QCheckBox *)operator new(0x28u);
  v50 = QT::QString::fromUtf8(ptr, 12, "Change Focus", v48);
  QT::QCheckBox::QCheckBox(v49, (const QT::QString *)ptr, a1);
  v51 = (volatile signed __int32 *)ptr[0];
  *((_QWORD *)a1 + 33) = v49;
  if ( v51 )
  {
    if ( !_InterlockedSub(v51, 1u) )
      free(ptr[0]);
    v49 = *((QT::QCheckBox **)a1 + 33);
  }
  QT::QAbstractButton::setChecked(v49, 1);
  v52 = *((QT::QWidget **)a1 + 33);
  QT::QString::fromUtf8(ptr, 49, "Switch focus to IDA view after cycling references", v50);
  QT::QWidget::setToolTip(v52, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return vars18 - __readfsqword(0x28u);
}
