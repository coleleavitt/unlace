__int64 __fastcall watchview_t__::vfunc_5(__m128i *this, __int64 a2, __int64 a3, __int64 a4, double a5, double a6)
{
  volatile signed __int32 *v6; // r12
  unsigned __int16 v8; // ax
  void **v9; // rsi
  void **v10; // r15
  size_t v11; // r13
  __int64 v12; // r13
  QT::QWidget *v13; // r13
  QT::QCoreApplication *v14; // rdi
  QT::QCoreApplication *v15; // rdi
  QT::QCoreApplication *v16; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  QT::QGesture *v24; // rax
  QT::QPanGesture *v25; // r12
  int v26; // r13d
  double v27; // xmm0_8
  double v28; // xmm1_8
  int v29; // edx
  unsigned int v30; // eax
  int v31; // edx
  __int64 (*v32)(); // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  int v35; // eax
  __int64 v36; // rax
  size_t v37; // r12
  __m256i *p_src; // rsi
  char *v39; // rdx
  char *v40; // rdx
  __int64 v41; // r9
  __int64 v42; // rax
  void **v43; // r8
  void *v44; // rdi
  __int64 v45; // rax
  void *v46; // rax
  const void *v47; // rsi
  void *v48; // rdi
  size_t v49; // rdx
  char isPrint; // r13
  __int64 v51; // rax
  volatile signed __int32 *v52; // r14
  unsigned __int16 *v53; // rax
  __int64 v54; // [rsp+10h] [rbp-150h]
  __int128 v56; // [rsp+20h] [rbp-140h] BYREF
  void *v57[2]; // [rsp+30h] [rbp-130h] BYREF
  __m256i src; // [rsp+50h] [rbp-110h] BYREF
  int v59; // [rsp+70h] [rbp-F0h]
  __int64 v60; // [rsp+78h] [rbp-E8h]
  void *v61; // [rsp+80h] [rbp-E0h]
  __int128 v62; // [rsp+88h] [rbp-D8h]
  __int64 v63; // [rsp+98h] [rbp-C8h]
  __int128 v64; // [rsp+A0h] [rbp-C0h]
  void *ptr[2]; // [rsp+B0h] [rbp-B0h] BYREF
  size_t n; // [rsp+C0h] [rbp-A0h]
  __int64 v67; // [rsp+C8h] [rbp-98h]
  __int64 v68; // [rsp+D0h] [rbp-90h]
  __int128 v69; // [rsp+D8h] [rbp-88h]
  __int128 v70; // [rsp+E8h] [rbp-78h]
  __int64 v71; // [rsp+F8h] [rbp-68h]
  __int128 v72; // [rsp+100h] [rbp-60h]
  _QWORD v73[10]; // [rsp+110h] [rbp-50h] BYREF

  v73[3] = __readfsqword(0x28u);
  v8 = *(_WORD *)(a2 + 8);
  if ( v8 != 198 )
  {
    if ( v8 > 0xC6u )
    {
      if ( v8 != 2003 )
      {
        if ( v8 == 3004 )
        {
          v18 = *((_QWORD *)this + 111);
          if ( v18 )
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 152LL))(v18, 0, 0);
          v19 = *((_QWORD *)this + 112);
          if ( v19 )
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v19 + 152LL))(v19, 0, 0);
          v20 = *((_QWORD *)this + 113);
          if ( v20 )
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v20 + 152LL))(v20, 0, 0);
        }
        else if ( v8 == 2002 )
        {
          v14 = *((QT::QCoreApplication **)this + 111);
          if ( v14 )
            sub_175FE0(v14, a2, a3);
          v15 = *((QT::QCoreApplication **)this + 112);
          if ( v15 )
            sub_175FE0(v15, a2, a3);
          v16 = *((QT::QCoreApplication **)this + 113);
          if ( v16 )
            sub_175FE0(v16, a2, a3);
        }
        return QT::QAbstractScrollArea::event((QT::QAbstractScrollArea *)this, (QT::QEvent *)a2);
      }
      v34 = *((_QWORD *)this + 53);
      if ( v34 )
      {
        v35 = *((_DWORD *)this + 104);
        v60 = 0;
        *(__m128i *)src.m256i_i8 = _mm_loadu_si128(this + 24);
        v59 = v35;
        *(__m128i *)&src.m256i_u64[2] = _mm_loadu_si128(this + 25);
        v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        v37 = *((_QWORD *)this + 62);
        v61 = nullptr;
        v60 = v36;
        v62 = 0;
        if ( v37 )
        {
          v46 = (void *)qalloc_or_throw(v37);
          v47 = *((const void **)this + 61);
          v61 = v46;
          *((_QWORD *)&v62 + 1) = v37;
          memcpy(v46, v47, v37);
          *(_QWORD *)&v62 = v37;
        }
        v63 = 0;
        v64 = 0;
        if ( *(_BYTE *)(a2 + 40) )
        {
          p_src = &src;
          navstack_entry_t_serialize(a2 + 16, &src);
        }
        else
        {
          p_src = (__m256i *)v57;
          n = 0;
          v39 = *(char **)(a2 + 16);
          v71 = 0;
          v67 = -1;
          v57[0] = v39;
          v40 = &v39[*(_QWORD *)(a2 + 24)];
          v68 = 0;
          *(_OWORD *)ptr = 0;
          v69 = 0;
          v70 = 0;
          v72 = 0;
          if ( (unsigned __int8)navstack_entry_t_deserialize(ptr, v57, v40, v60) )
          {
            p_src = (__m256i *)ptr;
            v42 = *((_QWORD *)this + 60);
            v73[0] = 0;
            v73[1] = v42;
            sub_1F0EE0((__int64)(this + 24), (__m128i *)ptr, v73, 7, 0, v41, 0.0);
          }
          if ( (_QWORD)v69 )
          {
            qfree(v69, p_src->m256i_i8);
            *(_QWORD *)&v69 = 0;
          }
          if ( *((_QWORD *)&v69 + 1) )
          {
            *(_QWORD *)&v70 = 0;
            qfree(*((_QWORD *)&v69 + 1), p_src->m256i_i8);
            *((_QWORD *)&v69 + 1) = 0;
            *((_QWORD *)&v70 + 1) = 0;
          }
          if ( v71 )
          {
            *(_QWORD *)&v72 = 0;
            qfree(v71, p_src->m256i_i8);
          }
          if ( *((_QWORD *)&v69 + 1) )
          {
            *(_QWORD *)&v70 = 0;
            qfree(*((_QWORD *)&v69 + 1), p_src->m256i_i8);
          }
          if ( (_QWORD)v69 )
            qfree(v69, p_src->m256i_i8);
        }
        if ( v60 )
        {
          qfree(v60, p_src->m256i_i8);
          v60 = 0;
        }
        if ( v61 )
        {
          *(_QWORD *)&v62 = 0;
          qfree(v61, p_src->m256i_i8);
          v61 = nullptr;
          *((_QWORD *)&v62 + 1) = 0;
        }
        if ( v63 )
        {
          *(_QWORD *)&v64 = 0;
          qfree(v63, p_src->m256i_i8);
        }
        if ( v61 )
        {
          *(_QWORD *)&v62 = 0;
          qfree(v61, p_src->m256i_i8);
        }
        if ( v60 )
          qfree(v60, p_src->m256i_i8);
        return QT::QAbstractScrollArea::event((QT::QAbstractScrollArea *)this, (QT::QEvent *)a2);
      }
      v53 = (unsigned __int16 *)sub_1E69C0(a5, 0, a2, a3, a4);
    }
    else
    {
      if ( v8 != 51 )
      {
        if ( v8 > 0x33u )
        {
          if ( v8 != 97 )
            return QT::QAbstractScrollArea::event((QT::QAbstractScrollArea *)this, (QT::QEvent *)a2);
          v21 = *((_QWORD *)this + 111);
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 480LL))(v21);
          v22 = *((_QWORD *)this + 112);
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 480LL))(v22);
          v23 = *((_QWORD *)this + 113);
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 480LL))(v23);
        }
        else if ( v8 != 21 )
        {
          if ( v8 == 33 )
          {
            QT::QWidget::windowTitle((QT::QWidget *)v57);
            v9 = v57;
            QT::QString::toUtf8_helper((QT::QString *)ptr, (const QT::QString *)v57);
            v10 = (void **)ptr[1];
            v11 = n;
            if ( !ptr[1] )
              v10 = (void **)&QT::QByteArray::_empty;
            memset(&src, 0, 24);
            if ( n )
            {
              v48 = nullptr;
              v49 = n + 1;
              if ( n != -1 )
              {
                src.m256i_i64[0] = qvector_reserve(&src, 0, v49, 1);
                v49 = v11 + 1;
                v48 = (void *)src.m256i_i64[0];
              }
              src.m256i_i64[1] = v49;
              v9 = v10;
              memmove(v48, v10, v11);
              *(_BYTE *)(src.m256i_i64[0] + v11) = 0;
            }
            if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
              free(ptr[0]);
            v12 = src.m256i_i64[1];
            if ( src.m256i_i64[1] > 1uLL )
            {
              v43 = (void **)src.m256i_i64[0];
              v44 = *((void **)this + 61);
              if ( *((_QWORD *)this + 63) < src.m256i_i64[1] )
              {
                v54 = src.m256i_i64[0];
                v51 = qvector_reserve((char *)this + 488, *((_QWORD *)this + 61), src.m256i_i64[1], 1);
                *((_QWORD *)this + 61) = v51;
                v43 = (void **)v54;
                v44 = (void *)v51;
              }
              *((_QWORD *)this + 62) = v12;
              v9 = v43;
              memmove(v44, v43, v12 - 1);
              *(_BYTE *)(*((_QWORD *)this + 61) + v12 - 1) = 0;
            }
            else
            {
              *((_QWORD *)this + 62) = 0;
            }
            if ( src.m256i_i64[0] )
            {
              src.m256i_i64[1] = 0;
              qfree(src.m256i_i64[0], (const char *)v9);
            }
            if ( v57[0] && !_InterlockedSub((volatile signed __int32 *)v57[0], 1u) )
              free(v57[0]);
            v13 = *((QT::QWidget **)this + 93);
            if ( v13 )
            {
              QT::QWidget::windowTitle((QT::QWidget *)ptr);
              QT::QWidget::setWindowTitle(v13, (const QT::QString *)ptr);
              if ( ptr[0] )
              {
                if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
                  free(ptr[0]);
              }
            }
          }
          return QT::QAbstractScrollArea::event((QT::QAbstractScrollArea *)this, (QT::QEvent *)a2);
        }
        sub_1F68C0((QT::QWidget *)this);
        return QT::QAbstractScrollArea::event((QT::QAbstractScrollArea *)this, (QT::QEvent *)a2);
      }
      v32 = *(__int64 (**)())(this->m128i_i64[0] + 976);
      if ( v32 == sub_1E66B0 || !(unsigned __int8)v32() )
        return QT::QAbstractScrollArea::event((QT::QAbstractScrollArea *)this, (QT::QEvent *)a2);
      v6 = *(volatile signed __int32 **)(a2 + 40);
      v33 = *(_QWORD *)(a2 + 56);
      if ( !v6 )
      {
        if ( v33 != 1 )
          return QT::QAbstractScrollArea::event((QT::QAbstractScrollArea *)this, (QT::QEvent *)a2);
        isPrint = QT::QChar::isPrint((QT::QChar *)**(unsigned __int16 **)(a2 + 48), a2);
        goto LABEL_103;
      }
      _InterlockedAdd(v6, 1u);
      if ( v33 != 1 )
      {
        if ( !_InterlockedSub(v6, 1u) )
          free((void *)v6);
        return QT::QAbstractScrollArea::event((QT::QAbstractScrollArea *)this, (QT::QEvent *)a2);
      }
      v52 = *(volatile signed __int32 **)(a2 + 40);
      v53 = *(unsigned __int16 **)(a2 + 48);
      if ( v52 )
      {
        _InterlockedAdd(v52, 1u);
        isPrint = QT::QChar::isPrint((QT::QChar *)*v53, a2);
        if ( !_InterlockedSub(v52, 1u) )
          free((void *)v52);
        goto LABEL_108;
      }
    }
    isPrint = QT::QChar::isPrint((QT::QChar *)*v53, a2);
LABEL_108:
    if ( !_InterlockedSub(v6, 1u) )
      free((void *)v6);
LABEL_103:
    if ( !isPrint )
      return QT::QAbstractScrollArea::event((QT::QAbstractScrollArea *)this, (QT::QEvent *)a2);
    *(_BYTE *)(a2 + 12) = 1;
    return 1;
  }
  v24 = (QT::QGesture *)QT::QGestureEvent::gesture(a2, (char *)&dword_0 + 3);
  v25 = v24;
  if ( v24 )
  {
    v26 = QT::QGesture::state(v24);
    QT::QPanGesture::delta(v25);
    v27 = a5 * 8.0;
    v28 = a6 * 8.0;
    if ( v27 != 0.0 || v28 != 0.0 )
    {
      memset(&src, 0, 24);
      v45 = QT::QPointingDevice::primaryPointingDevice(
              (QT::QPointingDevice *)&src,
              (const QT::QString *)((char *)&dword_0 + 3));
      *(_OWORD *)v57 = 0;
      v56 = 0;
      QT::QWheelEvent::QWheelEvent(
        ptr,
        &v56,
        v57,
        0,
        (unsigned int)(int)v27 | ((unsigned __int64)(unsigned int)(int)v28 << 32),
        0,
        0,
        0,
        0,
        0,
        v45);
      if ( src.m256i_i64[0] && !_InterlockedSub((volatile signed __int32 *)src.m256i_i64[0], 1u) )
        free((void *)src.m256i_i64[0]);
      (*(void (__fastcall **)(__m128i *, void **))(this->m128i_i64[0] + 184))(this, ptr);
      if ( BYTE4(ptr[1]) )
        *(_BYTE *)(a2 + 12) = 1;
      QT::QWheelEvent::~QWheelEvent((QT::QWheelEvent *)ptr);
    }
    v29 = *((_DWORD *)this + 142);
    v30 = v29 & 0xFFFFFFFE;
    v31 = v29 | 1;
    if ( (unsigned int)(v26 - 1) <= 1 )
      v30 = v31;
    *((_DWORD *)this + 142) = v30;
    return 1;
  }
  return 0;
}
