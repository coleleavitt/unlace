unsigned __int64 __fastcall sub_1F69D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rbp
  QT::QWidget *v7; // rdi
  int v8; // eax
  __int64 v9; // rdi
  void (__fastcall *v10)(__int64, _QWORD); // rax
  __int64 v11; // rax
  struct _Unwind_Exception *v13; // rbx
  int v14; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+8h] [rbp-C0h]
  __int64 v16; // [rsp+10h] [rbp-B8h]
  _BYTE v17[136]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v18; // [rsp+A8h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v7 = qword_8CCE70;
  if ( qword_8CCE70 && *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
  {
    QT::QWidget::close(qword_8CCE70);
    if ( *(_BYTE *)(a1 + 968) )
      goto LABEL_4;
LABEL_13:
    v9 = 0;
    goto LABEL_9;
  }
  if ( !*(_BYTE *)(a1 + 968) )
    goto LABEL_13;
LABEL_4:
  if ( !*(_QWORD *)(a1 + 424) )
  {
    v13 = (struct _Unwind_Exception *)sub_1E69C0(a5, (__int64)v7, a2, a3, a4);
    sub_531E50(v5);
    _Unwind_Resume(v13);
  }
  v8 = *(_DWORD *)(a1 + 416);
  if ( v8 == 2 )
  {
    v9 = *(_QWORD *)(a1 + 896);
  }
  else if ( v8 == 3 )
  {
    v9 = *(_QWORD *)(a1 + 904);
  }
  else
  {
    v9 = 0;
    if ( v8 == 1 )
      v9 = *(_QWORD *)(a1 + 888);
  }
LABEL_9:
  sub_176320(v9);
  sub_532F10(v17, a1);
  v10 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 280);
  if ( v10 )
    v10(a1, *(_QWORD *)(a1 + 376));
  v11 = *QT::QCoreApplication::self;
  v14 = 1;
  v15 = a2;
  v16 = 0;
  (*(void (__fastcall **)(_QWORD *, _BYTE *, int *))(v11 + 184))(QT::QCoreApplication::self, v17, &v14);
  sub_531E50(v17);
  return v18 - __readfsqword(0x28u);
}
