__int64 __fastcall sub_4D2750(__int64 *a1)
{
  __int64 v1; // rax
  int v2; // eax
  int v3; // r13d
  int v4; // ebp
  int i; // r12d
  const QT::QObject *v8; // rax
  const QT::QObject *v9; // rbx
  QT::QWidget *v10; // r12
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  volatile signed __int32 *v14; // rax
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+10h] [rbp-38h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v1 = *a1;
  v17 = __readfsqword(0x28u);
  v2 = (*(__int64 (__fastcall **)(__int64 *))(v1 + 448))(a1);
  if ( v2 < 0 )
    return 0;
  v3 = v2;
  v4 = v2 - 1;
  if ( v2 )
  {
    while ( *(_BYTE *)((*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 456))(a1, (unsigned int)v4) + 44) )
    {
      if ( v4-- == 0 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    v4 = -1;
  }
  for ( i = v3 + 1; i < (*(int (__fastcall **)(__int64 *))(*a1 + 464))(a1); ++i )
  {
    if ( v4 >= 0 )
      goto LABEL_14;
    if ( !*(_BYTE *)((*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 456))(a1, (unsigned int)i) + 44) )
      v4 = i;
  }
  if ( v4 < 0 )
    return 0;
LABEL_14:
  if ( v4 >= (*(int (__fastcall **)(__int64 *))(*a1 + 464))(a1) )
    return 0;
  (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 480))(a1, (unsigned int)v4);
  v8 = (const QT::QObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 456))(a1, (unsigned int)v4);
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = (QT::QWidget *)QT::QMetaObject::cast((QT::QMetaObject *)&off_86E240, v8);
  if ( !v10 )
  {
    *(_OWORD *)ptr = 0;
    v16 = 0;
    QT::qt_qFindChildren_helper(v9, 0, 0, &off_86E240, ptr, 1);
    v14 = (volatile signed __int32 *)ptr[0];
    if ( v16 )
    {
      if ( !ptr[0] || *(int *)ptr[0] > 1 )
      {
        sub_1C92D0((__int64)ptr, 0, 0, 0, v12, v13);
        v14 = (volatile signed __int32 *)ptr[0];
      }
      v10 = *(QT::QWidget **)ptr[1];
      if ( v14 && !_InterlockedSub(v14, 1u) )
        free(ptr[0]);
      if ( v10 )
        goto LABEL_17;
    }
    else if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      free(ptr[0]);
    }
    return 0;
  }
LABEL_17:
  v11 = sub_4CD420(v10, 1u);
  if ( v11 )
    QT::QWidget::setFocus(v11, (unsigned int)(v4 < v3) + 1);
  return 1;
}
