unsigned __int64 __fastcall sub_1F4A50(QT::QFrame *this, QT::QFrame *a2, __int64 a3, __int64 a4, double a5)
{
  char v5; // r13
  QT::QFrame *v6; // r12
  QT::QFrame *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 result; // rax
  __int64 v13; // rdx
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 (__fastcall *v16)(QT::QAbstractScrollArea *); // rax
  QT::QWidget *v17; // rax
  QT::QWidget *v18; // rdi

  v5 = a4;
  v6 = a2;
  if ( *((_DWORD *)a2 + 8) != *(_DWORD *)(a3 + 32)
    || *((_DWORD *)a2 + 6) != *(_DWORD *)(a3 + 24)
    || (result = *(unsigned int *)(a3 + 28), *((_DWORD *)a2 + 7) != (_DWORD)result)
    || (a5 = *(double *)a2, *(double *)a2 != *(double *)a3)
    || (a5 = *((double *)a2 + 1), a5 != *(double *)(a3 + 8))
    || (a5 = *((double *)a2 + 2), a5 != *(double *)(a3 + 16)) )
  {
    v9 = nullptr;
    if ( *((_BYTE *)this + 968) )
    {
      if ( !*((_QWORD *)this + 53) )
      {
        v16 = (__int64 (__fastcall *)(QT::QAbstractScrollArea *))sub_1E69C0(a5, 0, (__int64)a2, a3, a4);
        goto LABEL_33;
      }
      v10 = *((_DWORD *)this + 104);
      if ( v10 == 2 )
      {
        v9 = *((QT::QFrame **)this + 112);
      }
      else if ( v10 == 3 )
      {
        v9 = *((QT::QFrame **)this + 113);
      }
      else
      {
        v9 = nullptr;
        if ( v10 == 1 )
          v9 = *((QT::QFrame **)this + 111);
      }
    }
    (*(void (__fastcall **)(QT::QFrame *, QT::QFrame *, __int64))(*(_QWORD *)v9 + 112LL))(v9, a2, a3);
    if ( *((_DWORD *)a2 + 8) == *(_DWORD *)(a3 + 32) )
    {
LABEL_9:
      result = *((unsigned int *)this + 237);
      v13 = *((unsigned int *)this + 238);
      if ( (_DWORD)result == 10 || (_DWORD)result == 6 || (_DWORD)result == 11 )
      {
        v13 &= 1u;
        if ( (_DWORD)v13 )
        {
LABEL_14:
          if ( v5 )
            return sub_1F4990(0xAu, this, v6, a3);
          return result;
        }
      }
      else
      {
        result = (unsigned int)(result - 1);
        if ( (unsigned int)result > 1 )
          goto LABEL_14;
      }
      result = sub_1F3DE0((__int64)this, (const char *)a2, v13, v11, a5);
      goto LABEL_14;
    }
    sub_531B30(7, this, 0);
    v14 = *(_DWORD *)(a3 + 32);
    sub_1EBD50(this, (__int64)this, a5);
    sub_459C00(this, v14);
    v15 = *(_QWORD *)this;
    *((_BYTE *)this + 880) = 0;
    v9 = this;
    v16 = *(__int64 (__fastcall **)(QT::QAbstractScrollArea *))(v15 + 760);
    if ( v16 == sub_1E6980 )
    {
      v17 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(this);
      QT::QWidget::update(v17);
      v18 = *((QT::QWidget **)this + 96);
      if ( v18 && *(char *)(*((_QWORD *)v18 + 4) + 9LL) < 0 )
        QT::QWidget::update(v18);
      goto LABEL_28;
    }
LABEL_33:
    v16(v9);
LABEL_28:
    a2 = this;
    sub_1F4990(8u, this, *(unsigned int *)(a3 + 32));
    goto LABEL_9;
  }
  return result;
}
