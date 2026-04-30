__int64 __fastcall sub_539D00(const char *a1, const char *a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r13d
  void **v11; // rbx
  __int64 v12; // rbp
  QT::QWidget *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // r15
  QT::QAction *v19; // rbp
  _QWORD *v20; // rdi
  __int64 v21; // rax
  const char *v22; // rdi
  void *ptr; // [rsp+0h] [rbp-98h]
  QT::QWidget *v24[2]; // [rsp+10h] [rbp-88h] BYREF
  __m128i v25; // [rsp+20h] [rbp-78h] BYREF
  __int64 v26; // [rsp+30h] [rbp-68h]
  void *v27[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v28; // [rsp+50h] [rbp-48h]
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  *(_OWORD *)v24 = 0;
  sub_536580(&v25, a1, (a3 & 0x40000) != 0, a4, a5, a6);
  ptr = (void *)v25.m128i_i64[0];
  v10 = sub_535E60(v24, &v25, 0, v7, v8, v9);
  if ( (_BYTE)v10 )
  {
    v14 = v24[0];
    QT::QWidget::actions((QT::QWidget *)v27);
    if ( (int)v28 <= 0 )
    {
LABEL_23:
      v10 = 0;
    }
    else
    {
      v17 = 0;
      v18 = 8LL * (unsigned int)(v28 - 1) + 8;
      while ( 1 )
      {
        if ( !v27[0] || *(int *)v27[0] > 1 )
        {
          v14 = nullptr;
          sub_1821F0((__int64)v27, 0, 0, 0, v15, v16);
        }
        v19 = *(QT::QAction **)((char *)v27[1] + v17);
        if ( QT::QCoreApplication::self )
        {
          v20 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, QT::QWidget *))(QT::QCoreApplication::self[2] + 32LL))(
                            QT::QCoreApplication::self + 2,
                            v14);
          if ( v20 )
          {
            v14 = v19;
            v21 = sub_530FC0(v20, (unsigned __int64)v19);
            if ( v21 )
            {
              v22 = &s1;
              if ( *(_QWORD *)(v21 + 40) )
                v22 = *(const char **)(v21 + 32);
              v14 = (QT::QWidget *)a2;
              if ( !strcmp(v22, a2) )
                break;
            }
          }
        }
        v17 += 8;
        if ( v17 == v18 )
          goto LABEL_23;
      }
      QT::QWidget::removeAction(v24[0], v19);
    }
    if ( v27[0] && !_InterlockedSub((volatile signed __int32 *)v27[0], 1u) )
      free(v27[0]);
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
    v11 = (void **)v25.m128i_i64[1];
    v12 = v25.m128i_i64[1] + 24 * v26;
    if ( v25.m128i_i64[1] != v12 )
    {
      do
      {
        if ( *v11 && !_InterlockedSub((volatile signed __int32 *)*v11, 1u) )
          free(*v11);
        v11 += 3;
      }
      while ( (void **)v12 != v11 );
    }
    free(ptr);
  }
  return v10;
}
