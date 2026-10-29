__int64 __fastcall form_actions_impl_t__::vfunc_3(__int64 a1, int a2, unsigned __int8 a3)
{
  unsigned int v5; // ebp
  __int64 v6; // rax
  const QT::QObject *v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v15; // r15
  __int64 v16; // rbx
  _QWORD *v17; // rdi
  unsigned __int8 v18; // [rsp+7h] [rbp-61h] BYREF
  __int64 v19; // [rsp+8h] [rbp-60h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v21; // [rsp+20h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v5 = a3;
  v22 = __readfsqword(0x28u);
  v6 = sub_4F9180(a1, a2, &v18, &v19);
  if ( !v6 )
    return 0;
  v7 = (const QT::QObject *)v6;
  v8 = toupper(v18);
  if ( (v8 == 67 || v8 == 82) && QT::QMetaObject::cast((QT::QMetaObject *)&QT::QButtonGroup::staticMetaObject, v7) )
  {
    QT::QButtonGroup::buttons((QT::QButtonGroup *)ptr);
    if ( (int)v21 > 0 )
    {
      v15 = 0;
      v16 = 8LL * (unsigned int)(v21 - 1) + 8;
      do
      {
        v17 = *(_QWORD **)((char *)ptr[1] + v15);
        if ( v17 && (*(_BYTE *)(v17[1] + 48LL) & 1) != 0 )
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*v17 + 104LL))(v17, (unsigned __int8)v5);
        v15 += 8;
      }
      while ( v15 != v16 );
    }
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  else if ( (*(_BYTE *)(*((_QWORD *)v7 + 1) + 48LL) & 1) != 0 )
  {
    (*(void (__fastcall **)(const QT::QObject *, _QWORD))(*(_QWORD *)v7 + 104LL))(v7, a3);
  }
  v9 = v19;
  if ( v19 )
  {
    v10 = 0;
    v11 = 0;
    if ( *(_QWORD *)(v19 + 16) )
    {
      do
      {
        v12 = *(_QWORD **)(*(_QWORD *)(v9 + 8) + 8 * v11);
        if ( v12 && (*(_BYTE *)(v12[1] + 48LL) & 1) != 0 )
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*v12 + 104LL))(v12, v5);
          v9 = v19;
        }
        v11 = ++v10;
      }
      while ( (unsigned __int64)v10 < *(_QWORD *)(v9 + 16) );
    }
  }
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 368LL);
  if ( v13 )
    QT::QTimer::singleShot(0, 0, v13, "1on_child_visibility_changed()");
  return 1;
}
