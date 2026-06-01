unsigned __int64 __fastcall sub_2F76D0(_QWORD *a1, QT::QWidget *a2)
{
  QT::QLabel *v2; // r13
  QT::QWidget *v3; // r13
  QT::QLabel *v4; // r13
  QT::QLabel *v5; // r13
  QT::QLabel *v6; // r13
  QT::QWidget *v7; // r13
  QT::QWidget *v8; // r13
  QT::QGroupBox *v9; // r13
  QT::QWidget *v10; // r13
  QT::QAbstractButton *v11; // r13
  QT::QWidget *v12; // r13
  QT::QAbstractButton *v13; // r13
  QT::QWidget *v14; // r13
  QT::QAbstractButton *v15; // r13
  QT::QWidget *v16; // r13
  QT::QAbstractButton *v17; // r13
  QT::QGroupBox *v18; // r13
  QT::QAbstractButton *v19; // r13
  QT::QWidget *v20; // r13
  QT::QAbstractButton *v21; // r13
  QT::QAbstractButton *v22; // r13
  QT::QWidget *v23; // r13
  QT::QAbstractButton *v24; // r13
  QT::QWidget *v25; // r13
  QT::QAbstractButton *v26; // r13
  QT::QWidget *v27; // r13
  QT::QAbstractButton *v28; // r13
  QT::QAbstractButton *v29; // r13
  QT::QWidget *v30; // r13
  QT::QAbstractButton *v31; // r13
  QT::QWidget *v32; // r13
  QT::QAbstractButton *v33; // rbp
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v36; // [rsp+18h] [rbp-30h]

  v36 = __readfsqword(0x28u);
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "Load a new file", nullptr, -1);
  QT::QWidget::setWindowTitle(a2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v2 = (QT::QLabel *)a1[1];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "Load file &as...", nullptr, -1);
  QT::QLabel::setText(v2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v3 = (QT::QWidget *)a1[2];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "LoadFileDialog",
    "The input file possibly has the listed formats",
    nullptr,
    -1);
  QT::QWidget::setToolTip(v3, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = (QT::QLabel *)a1[3];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "LoadFileDialog",
    "Processor t&ype (double-click to set)",
    nullptr,
    -1);
  QT::QLabel::setText(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = (QT::QLabel *)a1[7];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "Loading &segment", nullptr, -1);
  QT::QLabel::setText(v5, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v6 = (QT::QLabel *)a1[8];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "Loading o&ffset", nullptr, -1);
  QT::QLabel::setText(v6, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v7 = (QT::QWidget *)a1[9];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "LoadFileDialog",
    "The loading paragraph (a parapgrah is 16 bytes)",
    nullptr,
    -1);
  QT::QWidget::setToolTip(v7, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v8 = (QT::QWidget *)a1[10];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "LoadFileDialog",
    "Offset from the loading segment",
    nullptr,
    -1);
  QT::QWidget::setToolTip(v8, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v9 = (QT::QGroupBox *)a1[11];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "Analysis", nullptr, -1);
  QT::QGroupBox::setTitle(v9, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v10 = (QT::QWidget *)a1[13];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "LoadFileDialog",
    "If turned off, IDA will not analyse the program",
    nullptr,
    -1);
  QT::QWidget::setToolTip(v10, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v11 = (QT::QAbstractButton *)a1[13];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "&Enabled", nullptr, -1);
  QT::QAbstractButton::setText(v11, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v12 = (QT::QWidget *)a1[14];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "LoadFileDialog",
    "Display the analysis progression in the status line",
    nullptr,
    -1);
  QT::QWidget::setToolTip(v12, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v13 = (QT::QAbstractButton *)a1[14];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "In&dicator enabled", nullptr, -1);
  QT::QAbstractButton::setText(v13, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v14 = (QT::QWidget *)a1[17];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "Kernel analysis options", nullptr, -1);
  QT::QWidget::setToolTip(v14, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v15 = (QT::QAbstractButton *)a1[17];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "&Kernel options", nullptr, -1);
  QT::QAbstractButton::setText(v15, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v16 = (QT::QWidget *)a1[18];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "LoadFileDialog",
    "Processor specific options",
    nullptr,
    -1);
  QT::QWidget::setToolTip(v16, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v17 = (QT::QAbstractButton *)a1[18];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "&Processor options", nullptr, -1);
  QT::QAbstractButton::setText(v17, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v18 = (QT::QGroupBox *)a1[20];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "Options", nullptr, -1);
  QT::QGroupBox::setTitle(v18, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v19 = (QT::QAbstractButton *)a1[22];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "Loading &options", nullptr, -1);
  QT::QAbstractButton::setText(v19, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v20 = (QT::QWidget *)a1[23];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "LoadFileDialog",
    "Leaves to gaps between segments. Use only if IDA suggests it.",
    nullptr,
    -1);
  QT::QWidget::setToolTip(v20, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v21 = (QT::QAbstractButton *)a1[23];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "Fill segment &gaps", nullptr, -1);
  QT::QAbstractButton::setText(v21, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v22 = (QT::QAbstractButton *)a1[24];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "Load as c&ode segment", nullptr, -1);
  QT::QAbstractButton::setText(v22, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v23 = (QT::QWidget *)a1[25];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "LoadFileDialog",
    "IDA requires segments to be created now or later - manually",
    nullptr,
    -1);
  QT::QWidget::setToolTip(v23, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v24 = (QT::QAbstractButton *)a1[25];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "&Create segments", nullptr, -1);
  QT::QAbstractButton::setText(v24, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v25 = (QT::QWidget *)a1[26];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "LoadFileDialog",
    "Create a special group to represent flat memory",
    nullptr,
    -1);
  QT::QWidget::setToolTip(v25, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v26 = (QT::QAbstractButton *)a1[26];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "Create F&LAT group", nullptr, -1);
  QT::QAbstractButton::setText(v26, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v27 = (QT::QWidget *)a1[27];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "LoadFileDialog",
    "Create a separate imports segment with external definitions",
    nullptr,
    -1);
  QT::QWidget::setToolTip(v27, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v28 = (QT::QAbstractButton *)a1[27];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "Create &imports segment", nullptr, -1);
  QT::QAbstractButton::setText(v28, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v29 = (QT::QAbstractButton *)a1[28];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "Load &resources", nullptr, -1);
  QT::QAbstractButton::setText(v29, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v30 = (QT::QWidget *)a1[29];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "LoadFileDialog",
    "Use mnemonic import names instead of ordinals",
    nullptr,
    -1);
  QT::QWidget::setToolTip(v30, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v31 = (QT::QAbstractButton *)a1[29];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "Rename DLL en&tries", nullptr, -1);
  QT::QAbstractButton::setText(v31, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v32 = (QT::QWidget *)a1[30];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "LoadFileDialog",
    "Gives more control for some file types",
    nullptr,
    -1);
  QT::QWidget::setToolTip(v32, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v33 = (QT::QAbstractButton *)a1[30];
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "LoadFileDialog", "&Manual load", nullptr, -1);
  QT::QAbstractButton::setText(v33, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v36 - __readfsqword(0x28u);
}
