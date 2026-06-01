unsigned __int64 __fastcall sub_1EBD50(QT::QFrame *this, __int64 a2, double a3)
{
  bool v3; // zf
  unsigned int v5; // r13d
  _DWORD *v6; // rax
  __int64 v7; // rdx
  int v8; // r15d
  int v9; // r12d
  int v10; // r14d
  bool v11; // bp
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // rdx^4
  int v20; // ebp
  __int64 v21; // rdi
  __int64 v22; // rdi
  int v23; // [rsp+8h] [rbp-60h]
  int v24; // [rsp+Ch] [rbp-5Ch]
  _BYTE v25[12]; // [rsp+10h] [rbp-58h] BYREF
  int v26; // [rsp+1Ch] [rbp-4Ch]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v3 = *((_BYTE *)this + 968) == 0;
  v27 = __readfsqword(0x28u);
  if ( !v3 )
  {
    v5 = QT::QFrame::frameWidth(this);
    v6 = *(_DWORD **)(QT::QAbstractScrollArea::viewport(this) + 32LL);
    v8 = v6[5];
    v9 = v6[8] + 1 - v6[6];
    v23 = v6[7];
    if ( (*((_BYTE *)this + 564) & 0x10) == 0 )
      goto LABEL_3;
    if ( !*((_QWORD *)this + 53) )
    {
      sub_1E69C0(a3, (__int64)this, a2, v7, (unsigned int)v6[7]);
      return sub_1EBFA0(this, a2);
    }
    if ( *((_DWORD *)this + 104) == 1 )
    {
      v20 = reg_int_op("ShowEcfringe", 0, 1, 0);
      (*(void (__fastcall **)(_QWORD, bool))(**((_QWORD **)this + 96) + 104LL))(*((_QWORD *)this + 96), v20 != 0);
      if ( v20 )
      {
        v21 = *((_QWORD *)this + 96);
        v10 = 16;
        *(_QWORD *)v25 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 224).m128i_u64[0];
        QT::QWidget::move(v21, v25);
        v22 = *((_QWORD *)this + 96);
        *(_DWORD *)v25 = 16;
        *(_DWORD *)&v25[4] = v9;
        QT::QWidget::resize(v22, v25);
LABEL_5:
        v11 = !(*((_BYTE *)this + 564) & 1);
        (*(void (__fastcall **)(_QWORD, bool))(**((_QWORD **)this + 95) + 104LL))(*((_QWORD *)this + 95), v11);
        v12 = 0;
        if ( v11 )
        {
          v13 = *((_QWORD *)this + 95);
          v14 = *(_DWORD *)(*(_QWORD *)(v13 + 32) + 32LL) + 1 - *(_DWORD *)(*(_QWORD *)(v13 + 32) + 24LL);
          *(_DWORD *)v25 = v5;
          v24 = v14;
          *(_DWORD *)&v25[4] = v5 + v9;
          QT::QWidget::move(v13, v25);
          v15 = *((_QWORD *)this + 95);
          *(_DWORD *)&v25[4] = v24;
          *(_DWORD *)v25 = v23 - 2 * v5 + 1 - v8;
          QT::QWidget::resize(v15, v25);
          v12 = v24;
        }
        goto LABEL_8;
      }
    }
    else
    {
LABEL_3:
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 96) + 104LL))(*((_QWORD *)this + 96), 0);
    }
    v10 = 0;
    goto LABEL_5;
  }
  v12 = 0;
  v10 = 0;
LABEL_8:
  *(_DWORD *)v25 = v10;
  *(_QWORD *)&v25[4] = 0;
  v26 = v12;
  v16 = QT::QAbstractScrollArea::viewportMargins(this);
  if ( *(_DWORD *)v25 != (_DWORD)v16 || *(_QWORD *)&v25[4] != __PAIR64__(v17, HIDWORD(v16)) || v26 != v18 )
    QT::QAbstractScrollArea::setViewportMargins(this, v25);
  return v27 - __readfsqword(0x28u);
}
