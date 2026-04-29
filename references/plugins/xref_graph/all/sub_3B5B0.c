__int64 __fastcall sub_3B5B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v3; // rbp
  size_t v4; // r12
  __int64 v5; // r14
  void *v6; // rax
  _BYTE *v8; // rax
  void *v9[4]; // [rsp+0h] [rbp-98h] BYREF
  void *ptr[4]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v11[40]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v2 = QT::QListWidget::currentItem(*(QT::QListWidget **)(a2 + 40));
  if ( !v2 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v8 = (_BYTE *)qvector_reserve(a1, 0, 1, 1);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = 1;
    *v8 = 0;
    return a1;
  }
  (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v11, v2, 0);
  QT::QVariant::toString((QT::QVariant *)v9);
  QT::QVariant::~QVariant((QT::QVariant *)v11);
  QT::QString::toUtf8_helper(ptr, v9);
  v3 = (const char *)ptr[1];
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v3 )
  {
    v4 = strlen(v3);
    v5 = v4 + 1;
LABEL_4:
    v6 = (void *)qvector_reserve(a1, 0, v5, 1);
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = v5;
    memmove(v6, v3, v4);
    *(_BYTE *)(*(_QWORD *)a1 + v4) = 0;
    goto LABEL_5;
  }
  v3 = (const char *)&QT::QByteArray::_empty;
  if ( &QT::QByteArray::_empty )
  {
    v5 = 1;
    v4 = 0;
    goto LABEL_4;
  }
LABEL_5:
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v9[0] && !_InterlockedSub((volatile signed __int32 *)v9[0], 1u) )
    free(v9[0]);
  return a1;
}
