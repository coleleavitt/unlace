unsigned __int64 __fastcall sub_3053E0(QT::QApplication *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  char v6; // r14
  int v7; // r13d
  int v8; // r8d
  int v9; // r9d
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rdi
  QT::QApplication *v13; // [rsp+0h] [rbp-48h] BYREF
  char v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( a3 && !QT::QApplication::activePopupWidget(a1) )
  {
    v5 = *(_QWORD *)(a3 + 8);
    v13 = a1;
    v14 = 0;
    v6 = *(_BYTE *)(v5 + 48) & 1;
    if ( v6 )
    {
      sub_2FEFB0(&v13, a3);
      v6 = v14;
    }
    v7 = (int)qword_8CD748;
    if ( qword_8CD748 )
      v7 = sub_53C480(qword_8CD748);
    sub_47B470(a1, a2, a3);
    v10 = (int)qword_8CD748;
    if ( qword_8CD748 )
      v10 = sub_53C480(qword_8CD748);
    callui(145, v10, v7, (unsigned int)&callui, v8, v9, v13);
    if ( v6 )
    {
      v11 = *((_QWORD *)v13 + 91);
      v12 = *(int *)(*((_QWORD *)v13 + 90) + 4 * v11 - 4);
      if ( v11 )
        *((_QWORD *)v13 + 91) = v11 - 1;
      if ( (int)v12 >= 0 )
        j__switch_dbctx(v12);
    }
  }
  return v15 - __readfsqword(0x28u);
}
