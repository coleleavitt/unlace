__int64 __fastcall sub_1F6420(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  bool v7; // zf
  int v8; // eax
  _QWORD *v9; // rdi
  __int64 v10; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+10h] [rbp-18h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( (_DWORD)a3 != 2 )
  {
    QT::QWidget::inputMethodQuery(a1);
    return a1;
  }
  v10 = -1;
  v7 = *(_BYTE *)(a2 + 968) == 0;
  v11[0] = 0;
  if ( v7 )
  {
    v9 = nullptr;
LABEL_10:
    sub_1761D0(v9, &v10, (__int64)v11);
    QT::QVariant::QVariant(
      a1,
      v11[0],
      (unsigned int)(v10 + LODWORD(v11[0])) | ((unsigned __int64)(unsigned int)(HIDWORD(v10) + HIDWORD(v11[0])) << 32));
    return a1;
  }
  if ( *(_QWORD *)(a2 + 424) )
  {
    v8 = *(_DWORD *)(a2 + 416);
    if ( v8 == 2 )
    {
      v9 = *(_QWORD **)(a2 + 896);
    }
    else if ( v8 == 3 )
    {
      v9 = *(_QWORD **)(a2 + 904);
    }
    else
    {
      v9 = nullptr;
      if ( v8 == 1 )
        v9 = *(_QWORD **)(a2 + 888);
    }
    goto LABEL_10;
  }
  sub_1E69C0(a5, a1, a2, a3, a4);
  return sub_1F6580();
}
