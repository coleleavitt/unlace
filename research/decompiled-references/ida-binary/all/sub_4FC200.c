__int64 __fastcall sub_4FC200(__int64 a1, int *a2, const QT::QObject *a3)
{
  const QT::QObject *v4; // r12
  QT::QAbstractButton *v5; // rax
  void *v6; // r15
  QT::QAbstractButton **v7; // rbx
  QT::QAbstractButton *v8; // r13
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  QT::QAbstractButton **v13; // [rsp+8h] [rbp-B0h]
  void *v14; // [rsp+10h] [rbp-A8h]
  void *ptr[4]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v16[11]; // [rsp+60h] [rbp-58h]

  v16[3] = __readfsqword(0x28u);
  if ( a3 )
  {
    v4 = a3;
    v5 = (QT::QAbstractButton *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QRadioButton::staticMetaObject, a3);
    if ( v5 && QT::QAbstractButton::group(v5) )
    {
      QT::QButtonGroup::buttons((QT::QButtonGroup *)ptr);
      v6 = ptr[0];
      v13 = (QT::QAbstractButton **)ptr[1];
      v14 = ptr[2];
      if ( ptr[0] )
        _InterlockedAdd((volatile signed __int32 *)ptr[0], 1u);
      v7 = v13;
      while ( &v13[(_QWORD)v14] != v7 )
      {
        v8 = *v7++;
        if ( (unsigned __int8)QT::QAbstractButton::isChecked(v8) )
        {
          v4 = v8;
          break;
        }
      }
      if ( v6 && !_InterlockedSub((volatile signed __int32 *)v6, 1u) )
        free(v6);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
    *(_QWORD *)(a1 + 304) = v4;
  }
  else
  {
    v10 = *a2;
    v11 = *(_QWORD *)(a1 + 72);
    if ( v10 >= v11 )
    {
      if ( (unsigned int)(v10 - v11) <= 3 )
      {
        v12 = *(_QWORD *)(a1 + 408);
        v16[0] = 0x1000000004000LL;
        v16[1] = 0x100000000400000LL;
        *(_QWORD *)(a1 + 304) = QT::QDialogButtonBox::button(v12, *((unsigned int *)v16 + (int)v10 - (int)v11));
      }
    }
    else
    {
      *(_QWORD *)(a1 + 304) = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v10);
    }
  }
  *(_DWORD *)(a1 + 176) = 1;
  return 1;
}
