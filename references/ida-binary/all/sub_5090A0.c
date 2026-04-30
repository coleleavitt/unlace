__int64 __fastcall form_actions_impl_t__::vfunc_2(__int64 a1, int a2, bool a3)
{
  __int64 v5; // rax
  QT::QWidget *v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // rdx
  QT::QWidget *v11; // rdi
  __int64 v13; // rbx
  __int64 v14; // r12
  QT::QWidget *v15; // rdi
  unsigned __int8 v16; // [rsp+7h] [rbp-51h] BYREF
  __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v19; // [rsp+20h] [rbp-38h]
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v5 = sub_4F9180(a1, a2, &v16, &v17);
  if ( !v5 )
    return 0;
  v6 = (QT::QWidget *)v5;
  v7 = toupper(v16);
  if ( (v7 == 67 || v7 == 82) && QT::QMetaObject::cast((QT::QMetaObject *)&QT::QButtonGroup::staticMetaObject, v6) )
  {
    QT::QButtonGroup::buttons((QT::QButtonGroup *)ptr);
    if ( (int)v19 > 0 )
    {
      v13 = 0;
      v14 = 8LL * (unsigned int)(v19 - 1) + 8;
      do
      {
        v15 = *(QT::QWidget **)((char *)ptr[1] + v13);
        if ( v15 && (*(_BYTE *)(*((_QWORD *)v15 + 1) + 48LL) & 1) != 0 )
          QT::QWidget::setEnabled(v15, a3);
        v13 += 8;
      }
      while ( v13 != v14 );
    }
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  else if ( (*(_BYTE *)(*((_QWORD *)v6 + 1) + 48LL) & 1) != 0 )
  {
    QT::QWidget::setEnabled(v6, a3);
  }
  v8 = v17;
  if ( v17 )
  {
    v9 = 0;
    v10 = 0;
    if ( *(_QWORD *)(v17 + 16) )
    {
      do
      {
        v11 = *(QT::QWidget **)(*(_QWORD *)(v8 + 8) + 8 * v10);
        if ( v11 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)v11 + 1) + 48LL) & 1) != 0 )
          {
            QT::QWidget::setEnabled(v11, a3);
            v8 = v17;
          }
        }
        v10 = ++v9;
      }
      while ( (unsigned __int64)v9 < *(_QWORD *)(v8 + 16) );
    }
  }
  return 1;
}
