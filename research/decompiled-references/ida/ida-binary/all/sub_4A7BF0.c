unsigned __int64 __fastcall sub_4A7BF0(QT::QApplication *a1, __int64 a2)
{
  const QT::QObject *v2; // rax
  int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  size_t v6; // r12
  char *v7; // r12
  const char *v8; // rsi
  char *v9; // r15
  QT::QAction *v10; // rbp
  const char *v11; // rax
  const char *v12; // r15
  const char *v13; // rsi
  __int64 v14; // rsi
  _BOOL8 (__fastcall *v16)(__int64); // rax
  _BOOL8 (__fastcall *v17)(__int64); // rax
  __int64 v19; // [rsp+18h] [rbp-80h]
  void *ptr[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v21; // [rsp+30h] [rbp-68h]
  char *s1; // [rsp+40h] [rbp-58h] BYREF
  __int128 v23; // [rsp+48h] [rbp-50h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( !*((_QWORD *)a1 + 299) )
    return v24 - __readfsqword(0x28u);
  v2 = (const QT::QObject *)QT::QApplication::focusWidget(a1);
  v19 = QT::QMetaObject::cast((QT::QMetaObject *)&off_895EA0, v2);
  if ( v19 )
    sub_48F170(*((_QWORD *)a1 + 298), a2);
  v3 = 0;
  QT::QWidget::actions((QT::QWidget *)ptr);
  if ( v21 > 0 )
  {
    while ( 1 )
    {
      if ( !ptr[0] || *(int *)ptr[0] > 1 )
        sub_1821F0((__int64)ptr, 0, 0, 0, v4, v5);
      v10 = *((QT::QAction **)ptr[1] + v3);
      if ( !(unsigned __int8)QT::QAction::isEnabled(v10) )
        goto LABEL_11;
      v11 = (const char *)sub_531430(v10);
      s1 = nullptr;
      v12 = v11;
      v23 = 0;
      if ( v11 )
      {
        v6 = strlen(v11);
        s1 = (char *)qvector_reserve(&s1, 0, v6 + 1, 1);
        *(_QWORD *)&v23 = v6 + 1;
        memmove(s1, v12, v6);
        s1[v6] = 0;
        if ( (_QWORD)v23 )
        {
          v7 = s1;
          v8 = "UndoAction";
          v9 = s1;
          if ( !strcmp(s1, "UndoAction") )
            goto LABEL_9;
          v8 = "RedoAction";
          if ( !strcmp(v7, "RedoAction") )
            goto LABEL_9;
          if ( v19 )
          {
            v8 = "ChooserCopy";
            if ( !strcmp(v7, "ChooserCopy") || (v8 = "ChooserCopyAll", !strcmp(v7, "ChooserCopyAll")) )
            {
LABEL_45:
              v9 = v7;
LABEL_9:
              if ( v9 )
              {
                *(_QWORD *)&v23 = 0;
                qfree(v9, v8);
              }
              goto LABEL_11;
            }
          }
          v8 = "ChooserUnsort";
          if ( strcmp(v7, "ChooserUnsort") )
            goto LABEL_30;
          v17 = *(_BOOL8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 448LL);
          if ( v17 == sub_49AD80 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 299) + 15LL) & 0x20) != 0 )
              goto LABEL_45;
          }
          else if ( !v17((__int64)a1) )
          {
LABEL_38:
            v9 = s1;
            goto LABEL_9;
          }
        }
      }
      if ( !(_QWORD)v23 )
        goto LABEL_18;
      v7 = s1;
LABEL_30:
      v8 = "ChooserQuickFilter";
      v9 = v7;
      if ( !strcmp(v7, "ChooserQuickFilter")
        || (v8 = "ChooserModifyFilters", !strcmp(v7, "ChooserModifyFilters"))
        || (v8 = "ChooserResetFilters", !strcmp(v7, "ChooserResetFilters")) )
      {
        v16 = *(_BOOL8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 456LL);
        if ( v16 == sub_49ADA0 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 299) + 15LL) & 0x40) != 0 )
            goto LABEL_9;
        }
        else if ( !v16((__int64)a1) )
        {
          goto LABEL_38;
        }
      }
LABEL_18:
      if ( (unsigned __int8)QT::QAction::isSeparator(v10) )
      {
        v13 = nullptr;
        sub_5392E0(a2, 0, 1);
      }
      else
      {
        v13 = (const char *)v10;
        sub_5399B0(a2, v10, 0, 1);
      }
      if ( s1 )
      {
        *(_QWORD *)&v23 = 0;
        ++v3;
        qfree(s1, v13);
        if ( v3 >= v21 )
          break;
      }
      else
      {
LABEL_11:
        if ( ++v3 >= v21 )
          break;
      }
    }
  }
  sub_534680(&qword_8D1C40, &unk_86CB80, 5, 0);
  sub_539A10(a2, &qword_8D1C40);
  v14 = *((_QWORD *)a1 + 268);
  if ( v14 )
  {
    sub_534680((char *)a1 + 2120, v14, *((_QWORD *)a1 + 269), 0);
    sub_539A10(a2, (char *)a1 + 2120);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v24 - __readfsqword(0x28u);
}
