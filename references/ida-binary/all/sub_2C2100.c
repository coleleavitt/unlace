unsigned __int64 __fastcall sub_2C2100(
        __m128i *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int32 v10; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  const __m128i *v15; // rax
  __int64 v16; // rcx
  double v17; // xmm4_8
  double v18; // xmm5_8
  __m128i v19; // xmm0
  __int32 v20; // eax
  void **v21; // r12
  __m128i *v22; // rdi
  QT::QCursor *v23; // rax
  __int64 v24; // r15
  unsigned int v25; // eax
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  __int64 v28; // r8
  unsigned int v29; // [rsp+4h] [rbp-11Ch]
  __m128i *v30; // [rsp+8h] [rbp-118h]
  __int64 v31; // [rsp+18h] [rbp-108h] BYREF
  __m128d v32; // [rsp+20h] [rbp-100h] BYREF
  __m128d v33; // [rsp+30h] [rbp-F0h] BYREF
  void *ptr[4]; // [rsp+40h] [rbp-E0h] BYREF
  __m128i v35; // [rsp+60h] [rbp-C0h] BYREF
  __m128i v36; // [rsp+70h] [rbp-B0h]
  __int64 v37; // [rsp+80h] [rbp-A0h]
  _BYTE v38[88]; // [rsp+90h] [rbp-90h] BYREF
  unsigned __int64 v39; // [rsp+E8h] [rbp-38h]

  v10 = a1[24].m128i_i32[0];
  v39 = __readfsqword(0x28u);
  if ( v10 )
  {
    v30 = a1 + 24;
    QT::QBasicTimer::stop((QT::QBasicTimer *)&a1[24]);
    v15 = (const __m128i *)sub_1EA6A0(a1[1].m128i_i64[0] + 384, a2, v13, v14, a3);
    v35 = _mm_loadu_si128(v15);
    v19 = _mm_loadu_si128(v15 + 1);
    v36 = v19;
    v37 = v15[2].m128i_i64[0];
    v20 = a1[23].m128i_i32[0];
    if ( v20 != -1 )
    {
      a1[23].m128i_i32[0] = -1;
      v36.m128i_i32[2] = v20;
    }
    v21 = (void **)a1[20].m128i_i64[0];
    if ( v21 )
    {
      sub_2BC330(
        (__int64)a1,
        a1[20].m128i_i64[0],
        &v35,
        *(double *)v19.m128i_i64,
        (__m128i)a4,
        a5,
        a6,
        v17,
        v18,
        a9,
        a10);
      a1[20].m128i_i64[0] = 0;
    }
    else
    {
      sub_2004D0(a1[1].m128i_i64[0], v35.m128i_i8, 0, v16, *(double *)v19.m128i_i64, a4, a5, a6, v17, v18, a9, a10);
      v23 = (QT::QCursor *)QT::QAbstractScrollArea::viewport((QT::QAbstractScrollArea *)a1[1].m128i_i64[0]);
      v31 = sub_1C7B10(v23);
      memset(ptr, 0, 24);
      v24 = QT::QPointingDevice::primaryPointingDevice((QT::QPointingDevice *)ptr, (const QT::QString *)&v35);
      v29 = QT::QGuiApplication::keyboardModifiers((QT::QGuiApplication *)ptr);
      v25 = QT::QGuiApplication::mouseButtons((QT::QGuiApplication *)ptr);
      v33 = _mm_cvtepi32_pd((__m64)v31);
      v32 = v33;
      QT::QMouseEvent::QMouseEvent(v38, 5, &v32, &v33, 0, v25, v29, v24);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      v28 = a1[27].m128i_i64[1];
      LOBYTE(ptr[0]) = 1;
      *(_OWORD *)((char *)ptr + 4) = -1;
      if ( v28 )
        v28 = *(_QWORD *)(v28 + 8);
      if ( (unsigned __int8)sub_2B5E00(
                              a1,
                              (__int64)ptr,
                              0,
                              0,
                              v28,
                              (const __m128i *)&v31,
                              (__m128)-1LL,
                              a4,
                              a5,
                              a6,
                              v26,
                              v27,
                              a9,
                              a10,
                              0) )
        v21 = ptr;
      sub_2B45E0((__int64)a1[15].m128i_i64, (const __m128i *)v21, (__int64)v38);
      QT::QMouseEvent::~QMouseEvent((QT::QMouseEvent *)v38);
    }
    v22 = (__m128i *)a1[20].m128i_i64[1];
    if ( v22 )
    {
      a1[20] = _mm_loadu_si128(v22);
      a1[21] = _mm_loadu_si128(v22 + 1);
      a1[22] = _mm_loadu_si128(v22 + 2);
      a1[23] = _mm_loadu_si128(v22 + 3);
      operator delete(v22, 0x40u);
      QT::QBasicTimer::start(v30, a1[21].m128i_i32[0], a1);
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[1].m128i_i64[0] + 760LL))(a1[1].m128i_i64[0]);
    }
  }
  return v39 - __readfsqword(0x28u);
}
