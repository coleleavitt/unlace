unsigned __int64 __fastcall sub_38C8E0(__int64 a1)
{
  int v2; // ebp
  size_t v3; // rax
  char *v4; // r8
  size_t v5; // r9
  __int64 v6; // rdx
  const char *v7; // rdi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  char *v11; // rdx
  __int64 v12; // rdi
  void *v13; // rax
  const char *v14; // rsi
  QT::QTreeWidgetItem *v15; // rbx
  int v17; // [rsp+0h] [rbp-F8h]
  int v18; // [rsp+8h] [rbp-F0h]
  char *v19; // [rsp+8h] [rbp-F0h]
  __int64 v20; // [rsp+8h] [rbp-F0h]
  int v21; // [rsp+10h] [rbp-E8h]
  int v22; // [rsp+14h] [rbp-E4h]
  int v23; // [rsp+14h] [rbp-E4h]
  QT::QVariant *v24; // [rsp+18h] [rbp-E0h]
  char *src; // [rsp+20h] [rbp-D8h]
  size_t n; // [rsp+28h] [rbp-D0h]
  char *v27; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+38h] [rbp-C0h]
  void *v29[4]; // [rsp+50h] [rbp-A8h] BYREF
  void *ptr; // [rsp+70h] [rbp-88h] BYREF
  char *s; // [rsp+78h] [rbp-80h]
  _BYTE v32[40]; // [rsp+90h] [rbp-68h] BYREF
  unsigned __int64 v33; // [rsp+B8h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v22 = QT::QTreeWidget::topLevelItemCount(*(QT::QTreeWidget **)(a1 + 80));
  if ( v22 > 0 )
  {
    v2 = 0;
    v24 = (QT::QVariant *)v29;
    while ( 1 )
    {
      v15 = (QT::QTreeWidgetItem *)QT::QTreeWidget::topLevelItem(*(QT::QTreeWidget **)(a1 + 80), v2);
      (*(void (__fastcall **)(_BYTE *, QT::QTreeWidgetItem *, _QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(v32, v15, 0, 0);
      QT::QVariant::toString(v24);
      QT::QVariant::~QVariant((QT::QVariant *)v32);
      QT::QString::toLocal8Bit_helper((QT::QString *)&ptr, (const QT::QChar *)v29[1], (__int64)v29[2]);
      v27 = nullptr;
      v28 = 0;
      if ( s )
        break;
      v4 = (char *)&QT::QByteArray::_empty;
      if ( &QT::QByteArray::_empty )
      {
        v6 = 1;
        v5 = 0;
        goto LABEL_4;
      }
LABEL_5:
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      if ( v29[0] && !_InterlockedSub((volatile signed __int32 *)v29[0], 1u) )
        free(v29[0]);
      v7 = &s1;
      if ( (_QWORD)v28 )
        v7 = v27;
      v8 = sub_4D8F60(v7);
      v11 = (char *)&s1;
      v12 = *(_QWORD *)(a1 + 48) + 104LL;
      v13 = (void *)v28;
      if ( (_QWORD)v28 )
      {
        v11 = v27;
        v13 = (void *)(v28 - 1);
      }
      s = v11;
      ptr = v13;
      v14 = (const char *)((unsigned __int8)sub_4DA730(
                                              v12,
                                              0,
                                              (unsigned int)&ptr,
                                              v8,
                                              v9,
                                              v10,
                                              v17,
                                              v18,
                                              v21,
                                              (__int64)v24,
                                              (__int64)src,
                                              n,
                                              (__int64)v27)
                         ^ 1u);
      QT::QTreeWidgetItem::setHidden(v15, (bool)v14);
      if ( v27 )
      {
        *(_QWORD *)&v28 = 0;
        qfree(v27, v14);
      }
      if ( v23 == ++v2 )
        return v33 - __readfsqword(0x28u);
    }
    v19 = s;
    v3 = strlen(s);
    v4 = v19;
    v5 = v3;
    v6 = v3 + 1;
LABEL_4:
    n = v5;
    src = v4;
    v20 = v6;
    v27 = (char *)qvector_reserve(&v27, 0, v6, 1);
    *(_QWORD *)&v28 = v20;
    v18 = n;
    memmove(v27, src, n);
    v27[n] = 0;
    goto LABEL_5;
  }
  return v33 - __readfsqword(0x28u);
}
