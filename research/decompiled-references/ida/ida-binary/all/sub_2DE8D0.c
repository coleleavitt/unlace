__int64 __fastcall IdaMenu__::vfunc_5(
        QT::QMenu *this,
        QT::QEvent *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        __int64 a13)
{
  __int64 active; // rax
  volatile signed __int32 *v15; // r15
  int v16; // eax
  char v17; // [rsp+Fh] [rbp-89h]
  char v18; // [rsp+Fh] [rbp-89h]
  __int64 v19; // [rsp+18h] [rbp-80h] BYREF
  void *v20[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v21; // [rsp+30h] [rbp-68h]
  void *ptr[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+50h] [rbp-48h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  active = QT::QMenu::activeAction(this);
  if ( *((_WORD *)a2 + 4) != 110 || !active )
    goto LABEL_2;
  QT::QAction::text((QT::QAction *)ptr);
  QT::QAction::toolTip((QT::QAction *)v20);
  v15 = (volatile signed __int32 *)v20[0];
  if ( v23 == v21 )
  {
    v16 = QT::QtPrivate::equalStrings(v23, v20[1], v23, ptr[1]) ^ 1;
    if ( !v15 )
      goto LABEL_12;
  }
  else
  {
    LOBYTE(v16) = 1;
    if ( !v20[0] )
    {
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      goto LABEL_16;
    }
  }
  if ( !_InterlockedSub(v15, 1u) )
  {
    v18 = v16;
    free(v20[0]);
    LOBYTE(v16) = v18;
  }
LABEL_12:
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v17 = v16;
    free(ptr[0]);
    LOBYTE(v16) = v17;
  }
  if ( (_BYTE)v16 )
  {
LABEL_16:
    *(__m128i *)v20 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
    QT::QAction::toolTip((QT::QAction *)ptr);
    QT::QToolTip::showText((char *)a2 + 24, ptr, 0, v20, 0xFFFFFFFFLL);
    goto LABEL_3;
  }
LABEL_2:
  v23 = 0;
  *(__m128i *)v20 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  v19 = 0;
  *(_OWORD *)ptr = 0;
  QT::QToolTip::showText(&v19, ptr, 0, v20, 0xFFFFFFFFLL);
LABEL_3:
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return QT::QMenu::event(this, a2);
}
