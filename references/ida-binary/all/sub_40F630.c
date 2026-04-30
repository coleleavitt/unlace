QT::QString *__fastcall sub_40F630(
        QT::QString *this,
        const __m128i *a2,
        const QT::QString *a3,
        const QT::QString *a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  double v12; // xmm0_8
  volatile signed __int32 *v13; // rax
  volatile signed __int32 *v14; // rax
  volatile signed __int32 *v15; // rax
  volatile signed __int32 *v16; // rax
  volatile signed __int32 *v17; // rax
  volatile signed __int32 *v18; // rax
  volatile signed __int32 *v19; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  void *v23; // rdx
  void *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  double v27; // xmm0_8
  void *v29[4]; // [rsp+40h] [rbp-138h] BYREF
  void *v30[4]; // [rsp+60h] [rbp-118h] BYREF
  void *v31[4]; // [rsp+80h] [rbp-F8h] BYREF
  void *v32[4]; // [rsp+A0h] [rbp-D8h] BYREF
  void *v33[4]; // [rsp+C0h] [rbp-B8h] BYREF
  void *v34[4]; // [rsp+E0h] [rbp-98h] BYREF
  void *v35[2]; // [rsp+100h] [rbp-78h] BYREF
  __int64 v36; // [rsp+110h] [rbp-68h]
  void *ptr[2]; // [rsp+120h] [rbp-58h] BYREF
  __int64 v38; // [rsp+130h] [rbp-48h]
  unsigned __int64 v39; // [rsp+138h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( (a8 & 1) == 0 )
  {
    v21 = _mm_loadu_si128(a2);
    v38 = a2[1].m128i_i64[0];
    *(__m128i *)ptr = v21;
    if ( v21.m128i_i64[0] )
      _InterlockedAdd((volatile signed __int32 *)v21.m128i_i64[0], 1u);
    QT::QString::append(ptr, "::", 2);
    v22 = QT::QString::append((QT::QString *)ptr, a3);
    v23 = *(void **)v22;
    *(_QWORD *)v22 = 0;
    v35[0] = v23;
    v24 = *(void **)(v22 + 8);
    *(_QWORD *)(v22 + 8) = 0;
    v35[1] = v24;
    v25 = *(_QWORD *)(v22 + 16);
    *(_QWORD *)(v22 + 16) = 0;
    v36 = v25;
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      free(ptr[0]);
      if ( *((_QWORD *)a4 + 2) )
        goto LABEL_25;
    }
    else if ( *((_QWORD *)a4 + 2) )
    {
LABEL_25:
      QT::QString::fromUtf8(ptr, 1, " ");
      QT::QString::append((QT::QString *)ptr, a4);
      QT::QString::append((QT::QString *)v35, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
    v26 = v36;
    *(__m128i *)this = _mm_load_si128((const __m128i *)v35);
    *((_QWORD *)this + 2) = v26;
    return this;
  }
  v12 = QT::QString::fromUtf8(v29, 54, "<font color=\"%1\">%2</font>::<font color=\"%3\">%4</font>");
  sub_40BAA0((__int64)v30, a5, a9);
  QT::QString::arg(v31, v29, v30, 0, 32, v12);
  QT::QString::toHtmlEscaped((QT::QString *)v32);
  QT::QString::arg(v33, v31, v32, 0, 32, v12);
  sub_40BAA0((__int64)v34, a6, a9);
  QT::QString::arg(v35, v33, v34, 0, 32, v12);
  QT::QString::toHtmlEscaped((QT::QString *)ptr);
  QT::QString::arg(this, v35, ptr, 0, 32, v12);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    v13 = (volatile signed __int32 *)v35[0];
    if ( !v35[0] )
    {
LABEL_6:
      v14 = (volatile signed __int32 *)v34[0];
      if ( !v34[0] )
        goto LABEL_8;
      goto LABEL_7;
    }
  }
  else
  {
    v13 = (volatile signed __int32 *)v35[0];
    if ( !v35[0] )
      goto LABEL_6;
  }
  if ( _InterlockedSub(v13, 1u) )
    goto LABEL_6;
  free(v35[0]);
  v14 = (volatile signed __int32 *)v34[0];
  if ( !v34[0] )
  {
LABEL_8:
    v15 = (volatile signed __int32 *)v33[0];
    if ( !v33[0] )
      goto LABEL_10;
    goto LABEL_9;
  }
LABEL_7:
  if ( _InterlockedSub(v14, 1u) )
    goto LABEL_8;
  free(v34[0]);
  v15 = (volatile signed __int32 *)v33[0];
  if ( !v33[0] )
  {
LABEL_10:
    v16 = (volatile signed __int32 *)v32[0];
    if ( !v32[0] )
      goto LABEL_12;
    goto LABEL_11;
  }
LABEL_9:
  if ( _InterlockedSub(v15, 1u) )
    goto LABEL_10;
  free(v33[0]);
  v16 = (volatile signed __int32 *)v32[0];
  if ( !v32[0] )
  {
LABEL_12:
    v17 = (volatile signed __int32 *)v31[0];
    if ( !v31[0] )
      goto LABEL_14;
    goto LABEL_13;
  }
LABEL_11:
  if ( _InterlockedSub(v16, 1u) )
    goto LABEL_12;
  free(v32[0]);
  v17 = (volatile signed __int32 *)v31[0];
  if ( !v31[0] )
  {
LABEL_14:
    v18 = (volatile signed __int32 *)v30[0];
    if ( !v30[0] )
      goto LABEL_16;
    goto LABEL_15;
  }
LABEL_13:
  if ( _InterlockedSub(v17, 1u) )
    goto LABEL_14;
  free(v31[0]);
  v18 = (volatile signed __int32 *)v30[0];
  if ( !v30[0] )
  {
LABEL_16:
    v19 = (volatile signed __int32 *)v29[0];
    if ( !v29[0] )
      goto LABEL_18;
    goto LABEL_17;
  }
LABEL_15:
  if ( _InterlockedSub(v18, 1u) )
    goto LABEL_16;
  free(v30[0]);
  v19 = (volatile signed __int32 *)v29[0];
  if ( !v29[0] )
  {
LABEL_18:
    if ( !*((_QWORD *)a4 + 2) )
      return this;
    goto LABEL_29;
  }
LABEL_17:
  if ( _InterlockedSub(v19, 1u) )
    goto LABEL_18;
  free(v29[0]);
  if ( !*((_QWORD *)a4 + 2) )
    return this;
LABEL_29:
  v27 = QT::QString::fromUtf8(v32, 27, " <font color=\"%1\">%2</font>");
  sub_40BAA0((__int64)v33, a7, a9);
  QT::QString::arg(v34, v32, v33, 0, 32, v27);
  QT::QString::toHtmlEscaped((QT::QString *)v35);
  QT::QString::arg(ptr, v34, v35, 0, 32, v27);
  QT::QString::append(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v35[0] && !_InterlockedSub((volatile signed __int32 *)v35[0], 1u) )
    free(v35[0]);
  if ( v34[0] && !_InterlockedSub((volatile signed __int32 *)v34[0], 1u) )
    free(v34[0]);
  if ( v33[0] && !_InterlockedSub((volatile signed __int32 *)v33[0], 1u) )
    free(v33[0]);
  if ( v32[0] && !_InterlockedSub((volatile signed __int32 *)v32[0], 1u) )
    free(v32[0]);
  return this;
}
