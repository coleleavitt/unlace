QT::QObject *__fastcall sub_53F320(_QWORD *a1, const QT::QString *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v8; // rax
  QT::QObject *v9; // rax
  QT::QObject *v10; // r12
  void *v11; // rdi
  int v12; // esi
  void *v13; // rdi
  QT::QObject *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  const char *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rsi
  volatile signed __int32 *v20; // rax
  __int64 v22; // r14
  void ***v23; // rdi
  __m128i *v24; // r13
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128i *v29; // r15
  __int64 v30; // rax
  void *v31; // rdi
  volatile signed __int32 *v32; // rcx
  volatile signed __int32 *v33; // [rsp+8h] [rbp-A0h]
  __m128i ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v35; // [rsp+30h] [rbp-78h]
  __int64 v36; // [rsp+38h] [rbp-70h]
  _BYTE v37[40]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  v9 = (QT::QObject *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 112LL))(v8, a3, a4);
  v10 = v9;
  if ( *((_QWORD *)a2 + 2) )
  {
    QT::QObject::doSetObjectName(v9, a2);
    v22 = a1[5];
    v23 = (void ***)(a1 + 5);
    if ( !v22 || *(_DWORD *)v22 == 1 )
      v22 = 0;
    else
      _InterlockedAdd((volatile signed __int32 *)v22, 1u);
    sub_53DA20(v23);
    v24 = (__m128i *)a1[5];
    v25 = (__int64)&v24->m128i_i64[1];
    v29 = (__m128i *)sub_53E500((__int64)&v24->m128i_i64[1], (__int64)a2);
    if ( v29 == &v24[1] )
    {
      v32 = *(volatile signed __int32 **)a2;
      ptr.m128i_i64[1] = *((_QWORD *)a2 + 1);
      v35 = *((_QWORD *)a2 + 2);
      if ( v32 )
      {
        _InterlockedAdd(v32, 1u);
        ptr.m128i_i64[0] = (__int64)v32;
        v36 = 0;
        v33 = v32;
        v29 = sub_53F230(v25, &ptr, v26, (__int64)v32, v27, v28);
        if ( !_InterlockedSub(v33, 1u) )
          free((void *)v33);
      }
      else
      {
        v36 = 0;
        ptr.m128i_i64[0] = 0;
        v29 = sub_53F230(v25, &ptr, v26, 0, v27, v28);
      }
    }
    if ( v22 && !_InterlockedSub((volatile signed __int32 *)v22, 1u) )
    {
      sub_53BE30(*(void **)(v22 + 24));
      operator delete((void *)v22, 0x38u);
    }
    v29[3].m128i_i64[1] = (__int64)v10;
  }
  sub_53C6B0(&ptr, (__int64)a1, (__int64)a2);
  v11 = (void *)ptr.m128i_i64[1];
  if ( !ptr.m128i_i64[1] )
    v11 = &QT::QString::_empty;
  v12 = QT::QString::compare_helper(v11, v35, "Edit", 4, 1);
  if ( !v12 )
    goto LABEL_8;
  v13 = (void *)ptr.m128i_i64[1];
  if ( !ptr.m128i_i64[1] )
    v13 = &QT::QString::_empty;
  v12 = 1;
  if ( !(unsigned int)QT::QString::compare_helper(v13, v35, "Search", 6, 1) )
    goto LABEL_8;
  v31 = (void *)ptr.m128i_i64[1];
  if ( !ptr.m128i_i64[1] )
    v31 = &QT::QString::_empty;
  if ( !(unsigned int)QT::QString::compare_helper(v31, v35, "Jump", 4, 1) )
  {
    v12 = 2;
LABEL_8:
    QT::QVariant::QVariant((QT::QVariant *)v37, v12);
    QT::QObject::doSetProperty(v10, "libui_menu_role", (const QT::QVariant *)v37, (QT::QVariant *)v37);
    QT::QVariant::~QVariant((QT::QVariant *)v37);
  }
  v14 = (QT::QObject *)operator new(0x20u);
  QT::QObject::QObject(v14, nullptr);
  *((_QWORD *)v14 + 2) = 0;
  *(_QWORD *)v14 = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)v14, (__int64)v10, a5, v15, v16, v17);
  v18 = a1[7];
  v19 = a1[6];
  if ( a1[8] < (unsigned __int64)(v18 + 1) )
  {
    v30 = qvector_reserve(a1 + 6, v19, v18 + 1, 8);
    a1[6] = v30;
    v19 = v30;
    v18 = a1[7];
  }
  *(_QWORD *)(v19 + 8 * v18) = v14;
  v20 = (volatile signed __int32 *)ptr.m128i_i64[0];
  ++a1[7];
  if ( v20 && !_InterlockedSub(v20, 1u) )
    free((void *)ptr.m128i_i64[0]);
  return v10;
}
