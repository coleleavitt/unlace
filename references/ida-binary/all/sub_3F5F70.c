__int64 __fastcall sub_3F5F70(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v4; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  double v9; // xmm0_8
  double v10; // xmm0_8
  double v11; // xmm0_8
  double v12; // xmm0_8
  void *v13[4]; // [rsp+0h] [rbp-78h] BYREF
  void *ptr[4]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v15[7]; // [rsp+40h] [rbp-38h] BYREF

  v4 = a4 & 1;
  v15[3] = __readfsqword(0x28u);
  if ( !(_DWORD)v4 )
  {
    if ( a3 == 1 )
    {
      QT::QString::fromUtf8(a1, 13, "References To", v4);
      return a1;
    }
    if ( a3 == 2 )
    {
      QT::QString::fromUtf8(a1, 15, "References From", v4);
      return a1;
    }
LABEL_9:
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)a1 = 0;
    return a1;
  }
  v7 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8934E0, *(const QT::QObject **)(*(_QWORD *)(a2 + 8) + 16LL));
  v15[0] = sub_40B940(32, v7);
  v15[1] = v8;
  if ( a3 == 1 )
  {
    v11 = QT::QString::fromUtf8(v13, 44, "<font color=\"%1\"><b>References To</b></font>");
    v12 = sub_40B9D0(ptr, v15, v11);
    QT::QString::arg(a1, v13, ptr, 0, 32, v12);
  }
  else
  {
    if ( a3 != 2 )
      goto LABEL_9;
    v9 = QT::QString::fromUtf8(v13, 46, "<font color=\"%1\"><b>References From</b></font>");
    v10 = sub_40B9D0(ptr, v15, v9);
    QT::QString::arg(a1, v13, ptr, 0, 32, v10);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v13[0] && !_InterlockedSub((volatile signed __int32 *)v13[0], 1u) )
    free(v13[0]);
  return a1;
}
