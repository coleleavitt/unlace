__int64 __fastcall sub_537630(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __int64 v8; // rax
  QT::QAction *v10; // rbp
  const char *v13; // rdi
  char *v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rbx
  char *v17; // rax
  __int64 v18; // rdi
  size_t v19; // rax
  int v20; // eax
  bool v21; // bl
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int128 v23; // [rsp+18h] [rbp-30h]
  unsigned __int64 v24; // [rsp+28h] [rbp-20h]

  v8 = a2;
  v24 = __readfsqword(0x28u);
  if ( !*(_DWORD *)(a1 + 160) )
    return 0;
  v10 = *(QT::QAction **)(a1 + 192);
  switch ( v8 )
  {
    case 1LL:
      sub_518A60((QT::QString *)&ptr, a3, nullptr, a7);
      QT::QAction::setText(v10, (const QT::QString *)&ptr);
      goto LABEL_7;
    case 2LL:
      ptr = nullptr;
      v23 = 0;
      sub_536F00((__int64)&ptr, (const char *)a3, 0, a4, a5, a6);
      v13 = &s1;
      if ( *(_QWORD *)(a1 + 40) )
        v13 = *(const char **)(a1 + 32);
      sub_4B5050(v13, &ptr, 1u, 0.0, a8);
      v14 = (char *)ptr;
      if ( ptr )
      {
        v15 = v23;
        if ( (_QWORD)v23 )
        {
          v16 = 0;
          do
          {
            v17 = &v14[24 * v16];
            v18 = *(_QWORD *)v17;
            if ( *(_QWORD *)v17 )
            {
              *((_QWORD *)v17 + 1) = 0;
              qfree(v18, (const char *)&ptr);
              v14 = (char *)ptr;
            }
            ++v16;
          }
          while ( v15 != v16 );
        }
        *(_QWORD *)&v23 = 0;
        qfree(v14, (const char *)&ptr);
      }
      return 1;
    case 3LL:
      if ( a3 )
      {
        v19 = strlen((const char *)a3);
        QT::QString::fromUtf8(&ptr, v19, (const char *)a3);
      }
      else
      {
        QT::QString::fromUtf8(&ptr, 0, (const char *)&unk_5C2F25);
      }
      QT::QAction::setToolTip(v10, (const QT::QString *)&ptr);
LABEL_7:
      if ( ptr )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
      }
      break;
    case 4LL:
      (*(void (__fastcall **)(void **, _QWORD *, _QWORD))(*QT::QCoreApplication::self + 136LL))(
        &ptr,
        QT::QCoreApplication::self,
        *(unsigned int *)a3);
      QT::QAction::setIcon(v10, (const QT::QIcon *)&ptr);
      QT::QIcon::~QIcon((QT::QIcon *)&ptr);
      break;
    case 5LL:
      v20 = *(_DWORD *)a3;
      *(_DWORD *)(a1 + 120) = *(_DWORD *)a3;
      v21 = v20 <= 3;
      if ( v20 <= 3 != (unsigned __int8)QT::QAction::isEnabled(v10) )
        QT::QAction::setEnabled(v10, v21);
      break;
    case 6LL:
      QT::QAction::setCheckable(*(QT::QAction **)(a1 + 192), *a3);
      break;
    case 7LL:
      QT::QAction::setChecked(*(QT::QAction **)(a1 + 192), *a3);
      break;
    case 8LL:
      QT::QAction::setVisible(*(QT::QAction **)(a1 + 192), *a3);
      break;
    default:
      return 0;
  }
  return 1;
}
