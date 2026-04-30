unsigned __int64 __fastcall sub_1DE4F0(_QWORD *a1, QT::QWidget *a2)
{
  QT::QTextEdit *v2; // r13
  QT::QAbstractButton *v3; // r13
  QT::QAbstractButton *v4; // rbp
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "CopyrightDialog", "Copyright warning", nullptr, -1);
  QT::QWidget::setWindowTitle(a2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v2 = (QT::QTextEdit *)a1[2];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "CopyrightDialog",
    "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
    "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
    "p, li { white-space: pre-wrap; }\n"
    "</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
    "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0p"
    "x;\"><span style=\" font-size:8pt;\">The file you attempt to disassemble has been protected against disassembly by i"
    "ts author. This usually means that the file is copyrighted. However, nothing prevents the author or a trojan horse, "
    "virus or any other kind of harmful software to abuse this protection system. You could also be legally entitled to d"
    "isassemble this software for forensic or national security reasons. Do you understand that</span></p>\n"
    "<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
    "-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
    "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0p"
    "x;\"><span style=\" font-size:8pt;\"> 1.if you disassemble this file you might be in violation of your local laws.</"
    "span></p>\n"
    "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0p"
    "x;\"><span style=\" font-size:8pt;\"> 2.you are solely responsible for your actions.</span></p>\n"
    "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0p"
    "x;\"><span style=\" font-size:8pt;\"> 3.by disassembling this file, you release and discharge the providers and deve"
    "lopers of IDA from any and all liability which might arise. Bypassing this warning message shall constitute an impli"
    "cit acceptance of the terms herein set forth.</span></p></body></html>",
    nullptr,
    -1);
  QT::QTextEdit::setHtml(v2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v3 = (QT::QAbstractButton *)a1[3];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "CopyrightDialog",
    "Yes, I understand fully that I am proceeding under my own responsibility",
    nullptr,
    -1);
  QT::QAbstractButton::setText(v3, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = (QT::QAbstractButton *)a1[4];
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "CopyrightDialog",
    "No, I have changed my mind",
    nullptr,
    -1);
  QT::QAbstractButton::setText(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v7 - __readfsqword(0x28u);
}
