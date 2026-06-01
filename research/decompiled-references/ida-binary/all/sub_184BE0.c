__int64 __fastcall sub_184BE0(
        QT::QAction *this,
        QT::QEvent *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  bool v10; // zf
  QT::QEvent *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  QT::QEvent *v20; // rdx
  const char *v21; // rsi
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __int64 v29; // r12
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  QT::QEvent *v35; // rdx
  __int64 v36; // [rsp+0h] [rbp-C8h]
  void *v37[4]; // [rsp+10h] [rbp-B8h] BYREF
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  QT::QEvent *v39; // [rsp+38h] [rbp-90h]
  __int64 (__fastcall **v40)(); // [rsp+50h] [rbp-78h] BYREF
  __int64 v41; // [rsp+58h] [rbp-70h]
  __int128 v42; // [rsp+60h] [rbp-68h]
  _QWORD *v43; // [rsp+70h] [rbp-58h]
  char *v44; // [rsp+78h] [rbp-50h]
  char v45; // [rsp+80h] [rbp-48h]
  unsigned __int64 v46; // [rsp+88h] [rbp-40h]

  v10 = *((_WORD *)a2 + 4) == 117;
  v46 = __readfsqword(0x28u);
  v11 = a2;
  if ( !v10 )
    return QT::QAction::event(this, a2);
  ++dword_8C9810;
  if ( *((_BYTE *)a2 + 28) )
  {
    v41 = 0;
    v44 = (char *)a2 + 16;
    v40 = GlobalAction::event;
    v43 = nullptr;
    v45 = 1;
    v42 = 0;
    sub_5313B0(&v40);
    if ( v45 )
    {
      QT::QKeySequence::toString(v37, (char *)a2 + 16, 1);
      QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v37);
      a2 = v39;
      if ( !v39 )
        a2 = (QT::QEvent *)&QT::QByteArray::_empty;
      sub_169700(
        (int)"Conflicting shortcut: %s; Candidate actions:\n",
        (__int64)a2,
        v23,
        v24,
        v25,
        v26,
        (__m128)0LL,
        a4,
        a5,
        a6,
        v27,
        v28,
        a9,
        a10,
        v36);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      if ( v37[0] && !_InterlockedSub((volatile signed __int32 *)v37[0], 1u) )
        free(v37[0]);
      v29 = v41;
      v36 = v41 + 8 * v42;
      if ( v41 != v36 )
      {
        do
        {
          QT::QAction::text((QT::QAction *)v37);
          QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v37);
          v35 = v39;
          if ( !v39 )
            v35 = (QT::QEvent *)&QT::QByteArray::_empty;
          a2 = (QT::QEvent *)&s1;
          if ( *(_QWORD *)(*(_QWORD *)v29 + 40LL) )
            a2 = *(QT::QEvent **)(*(_QWORD *)v29 + 32LL);
          sub_169700(
            (int)"\t%s (%s)\n",
            (__int64)a2,
            (__int64)v35,
            v30,
            v31,
            v32,
            (__m128)0LL,
            a4,
            a5,
            a6,
            v33,
            v34,
            a9,
            a10,
            v36);
          if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
            free(ptr);
          if ( v37[0] && !_InterlockedSub((volatile signed __int32 *)v37[0], 1u) )
            free(v37[0]);
          v29 += 8;
        }
        while ( v36 != v29 );
      }
    }
    if ( v43 )
    {
      sub_530B40();
      if ( v45 )
      {
        QT::QAction::text((QT::QAction *)v37);
        QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v37);
        v20 = v39;
        if ( !v39 )
          v20 = (QT::QEvent *)&QT::QByteArray::_empty;
        v21 = &s1;
        if ( v43[5] )
          v21 = (const char *)v43[4];
        sub_169700(
          (int)"Executing action: %s (%s)\n",
          (__int64)v21,
          (__int64)v20,
          v15,
          v16,
          v17,
          (__m128)0LL,
          a4,
          a5,
          a6,
          v18,
          v19,
          a9,
          a10,
          v36);
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        if ( v37[0] && !_InterlockedSub((volatile signed __int32 *)v37[0], 1u) )
          free(v37[0]);
      }
      a2 = nullptr;
      QT::QAction::activate(v43[24], 0);
    }
    v40 = GlobalAction::event;
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(v41, a2, v12, v13, v14);
    }
  }
  result = QT::QAction::event(this, v11);
  --dword_8C9810;
  return result;
}
