__m128 *__fastcall sub_3F6A20(__m128 *a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // eax
  double v12; // xmm0_8
  double v13; // xmm0_8
  __m128i si128; // xmm0
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  volatile signed __int32 *v19; // rax
  char v21; // r15
  __int64 v23; // [rsp+10h] [rbp-4F8h]
  unsigned int v24; // [rsp+1Ch] [rbp-4ECh]
  _QWORD v25[4]; // [rsp+20h] [rbp-4E8h] BYREF
  void *v26[2]; // [rsp+40h] [rbp-4C8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-4B8h]
  void *v28[4]; // [rsp+60h] [rbp-4A8h] BYREF
  void *v29[4]; // [rsp+80h] [rbp-488h] BYREF
  void *v30[4]; // [rsp+A0h] [rbp-468h] BYREF
  void *ptr[2]; // [rsp+C0h] [rbp-448h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-438h]
  void *v33; // [rsp+E0h] [rbp-428h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-420h] BYREF
  unsigned __int64 v35; // [rsp+F0h] [rbp-418h]
  char v36[8]; // [rsp+2C0h] [rbp-248h] BYREF
  __int64 v37; // [rsp+2C8h] [rbp-240h]
  _BYTE v38[40]; // [rsp+4A0h] [rbp-68h] BYREF
  unsigned __int64 v39; // [rsp+4C8h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  sub_3F1150((__int64)v25, a3);
  v6 = v25[0];
  v7 = v25[1];
  v8 = v25[2];
  v23 = v25[0];
  v9 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8934E0, *(const QT::QObject **)(*(_QWORD *)(a2 + 8) + 16LL));
  v10 = v9;
  if ( v7 == -1 )
  {
    if ( v8 == -1 )
      goto LABEL_36;
    sub_40E9B0(&v33, v23);
    if ( v10 )
      goto LABEL_46;
LABEL_8:
    v24 = a5;
    goto LABEL_9;
  }
  if ( !v9 )
  {
    if ( v8 == -1 )
      goto LABEL_36;
    sub_40E9B0(&v33, v23);
    goto LABEL_8;
  }
  if ( (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v9 + 256)) )
  {
    v11 = a5;
    LOBYTE(v11) = a5 | 0x80;
    v24 = v11;
    if ( v8 != -1 )
    {
      sub_40E9B0(&v33, v6);
      goto LABEL_47;
    }
    a5 = v11;
LABEL_36:
    sub_40E9B0(v36, v23);
    v37 = v7;
    (*(void (__fastcall **)(_BYTE *, _DWORD *, __int64))(*(_QWORD *)a3 + 16LL))(v38, a3, 260);
    v21 = QT::QVariant::toBool((QT::QVariant *)v38);
    QT::QVariant::~QVariant((QT::QVariant *)v38);
    if ( v21 )
    {
      sub_40BB50(&v33, v36, a5, v10);
      if ( v35 )
      {
        a1[1].m128_u64[0] = v35;
        *a1 = _mm_loadh_ps((const double *)&v34);
LABEL_43:
        sub_3EFED0((__int64)v36, v36);
        return a1;
      }
      if ( v33 && !_InterlockedSub((volatile signed __int32 *)v33, 1u) )
        free(v33);
    }
    if ( v10 && (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v10 + 200)) )
      sub_4128F0(a1, v36, a5, v10);
    else
      sub_4128B0(a1, v36, a5, v10);
    goto LABEL_43;
  }
  if ( v8 == -1 )
    goto LABEL_36;
  sub_40E9B0(&v33, v23);
LABEL_46:
  v24 = a5;
LABEL_47:
  if ( !(unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v10 + 200)) )
  {
LABEL_9:
    sub_4128B0(v26, &v33, a5, v10);
    sub_40E9B0(v36, v8);
    v37 = v7;
    if ( !v10 )
      goto LABEL_11;
    goto LABEL_10;
  }
  sub_4128F0(v26, &v33, a5, v10);
  sub_40E9B0(v36, v8);
  v37 = v7;
LABEL_10:
  if ( (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v10 + 200)) )
  {
    sub_4128F0(v28, v36, v24, v10);
    goto LABEL_12;
  }
LABEL_11:
  sub_4128B0(v28, v36, v24, v10);
LABEL_12:
  if ( (a5 & 1) != 0 )
  {
    v12 = QT::QString::fromUtf8(v30, 28, "<font color=\"%1\"> => </font>");
    v13 = sub_40BAA0(ptr, 9, v10, v12);
    QT::QString::arg(v29, v30, ptr, 0, 32, v13);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( v30[0] && !_InterlockedSub((volatile signed __int32 *)v30[0], 1u) )
      free(v30[0]);
  }
  else
  {
    QT::QString::fromUtf8(v29, 4, " => ");
  }
  si128 = _mm_load_si128((const __m128i *)v26);
  v32 = v27;
  *(__m128i *)ptr = si128;
  if ( si128.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
  QT::QString::append((QT::QString *)ptr, (const QT::QString *)v29);
  v15 = (unsigned __int64 *)QT::QString::append((QT::QString *)ptr, (const QT::QString *)v28);
  v16 = *v15;
  *v15 = 0;
  a1->m128_u64[0] = v16;
  v17 = v15[1];
  v15[1] = 0;
  a1->m128_u64[1] = v17;
  v18 = v15[2];
  v15[2] = 0;
  v19 = (volatile signed __int32 *)ptr[0];
  a1[1].m128_u64[0] = v18;
  if ( v19 && !_InterlockedSub(v19, 1u) )
    free(ptr[0]);
  if ( v29[0] && !_InterlockedSub((volatile signed __int32 *)v29[0], 1u) )
    free(v29[0]);
  if ( v28[0] && !_InterlockedSub((volatile signed __int32 *)v28[0], 1u) )
    free(v28[0]);
  sub_3EFED0((__int64)v36, (const char *)v28);
  if ( v26[0] && !_InterlockedSub((volatile signed __int32 *)v26[0], 1u) )
    free(v26[0]);
  sub_3EFED0((__int64)&v33, (const char *)v28);
  return a1;
}
