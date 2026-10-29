__int64 __fastcall sub_410440(__int64 a1, void **a2, _QWORD *a3, char a4, __int64 a5)
{
  __int64 ea_name; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // rdx
  size_t v11; // rax
  const char *v12; // rbp
  void **p_ptr; // rsi
  __m128i v14; // xmm0
  double v15; // xmm0_8
  unsigned __int64 v16; // rdx
  size_t v17; // rax
  char *v18; // r14
  double v19; // xmm0_8
  double v20; // xmm0_8
  size_t v21; // rax
  char *v22; // rbp
  unsigned __int64 v23; // rdx
  double v24; // xmm0_8
  __int64 v25; // rax
  size_t v26; // rax
  char *v27; // rbp
  unsigned __int64 v28; // rdx
  char *v29; // [rsp+20h] [rbp-158h] BYREF
  __int128 v30; // [rsp+28h] [rbp-150h]
  char *s; // [rsp+40h] [rbp-138h] BYREF
  __int128 v32; // [rsp+48h] [rbp-130h]
  __m128i v33; // [rsp+60h] [rbp-118h] BYREF
  __int64 v34; // [rsp+70h] [rbp-108h]
  void *v35[4]; // [rsp+80h] [rbp-F8h] BYREF
  void *v36[4]; // [rsp+A0h] [rbp-D8h] BYREF
  void *v37[4]; // [rsp+C0h] [rbp-B8h] BYREF
  void *v38[4]; // [rsp+E0h] [rbp-98h] BYREF
  void *v39[4]; // [rsp+100h] [rbp-78h] BYREF
  void *ptr; // [rsp+120h] [rbp-58h] BYREF
  __int128 v41; // [rsp+128h] [rbp-50h]
  unsigned __int64 v42; // [rsp+138h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_40B4D0(a3) )
  {
    sub_40EFC0(a1, a2, a4, a5);
    if ( *(_QWORD *)(a1 + 16) )
      return a1;
    if ( *(_QWORD *)a1 && !_InterlockedSub(*(volatile signed __int32 **)a1, 1u) )
      free(*(void **)a1);
  }
  v30 = 0;
  v29 = nullptr;
  sub_169A50((__int64 *)&v29, (__int64)"0x%a", a2);
  v32 = 0;
  s = nullptr;
  ea_name = get_ea_name(&s, a2, 21, 0);
  v9 = ea_name;
  if ( (a4 & 1) != 0 )
  {
    v15 = QT::QString::fromUtf8(v36, 26, "<font color=\"%1\">%2</font>");
    sub_40BAA0((__int64)v37, 12, a5);
    QT::QString::arg(v38, v36, v37, 0, 32, v15);
    if ( (_QWORD)v30 )
    {
      v17 = v30 - 1;
      v18 = v29;
      v16 = (unsigned __int64)(v30 - 1) >> 63;
    }
    else
    {
      LOBYTE(v16) = 0;
      v17 = 0;
      v18 = (char *)&s1;
    }
    if ( !v18 || (_BYTE)v16 )
    {
      v17 = 0;
      if ( v18 )
        v17 = strlen(v18);
    }
    v19 = QT::QString::fromUtf8(v39, v17, v18);
    QT::QString::toHtmlEscaped((QT::QString *)&ptr);
    p_ptr = v38;
    QT::QString::arg(&v33, v38, &ptr, 0, 32, v19);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    if ( v39[0] && !_InterlockedSub((volatile signed __int32 *)v39[0], 1u) )
      free(v39[0]);
    if ( v38[0] && !_InterlockedSub((volatile signed __int32 *)v38[0], 1u) )
      free(v38[0]);
    if ( v37[0] && !_InterlockedSub((volatile signed __int32 *)v37[0], 1u) )
      free(v37[0]);
    if ( v36[0] && !_InterlockedSub((volatile signed __int32 *)v36[0], 1u) )
      free(v36[0]);
    if ( v9 > 0 )
    {
      v20 = QT::QString::fromUtf8(v35, 29, " (<font color=\"%1\">%2</font>)");
      sub_40BAA0((__int64)v36, 6, a5);
      QT::QString::arg(v37, v35, v36, 0, 32, v20);
      if ( (_QWORD)v32 )
      {
        v21 = v32 - 1;
        v22 = s;
        v23 = (unsigned __int64)(v32 - 1) >> 63;
      }
      else
      {
        LOBYTE(v23) = 0;
        v21 = 0;
        v22 = (char *)&s1;
      }
      if ( !v22 || (_BYTE)v23 )
      {
        v21 = 0;
        if ( v22 )
          v21 = strlen(v22);
      }
      v24 = QT::QString::fromUtf8(v38, v21, v22);
      QT::QString::toHtmlEscaped((QT::QString *)v39);
      QT::QString::arg(&ptr, v37, v39, 0, 32, v24);
      p_ptr = &ptr;
      QT::QString::append((QT::QString *)&v33, (const QT::QString *)&ptr);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      if ( v39[0] && !_InterlockedSub((volatile signed __int32 *)v39[0], 1u) )
        free(v39[0]);
      if ( v38[0] && !_InterlockedSub((volatile signed __int32 *)v38[0], 1u) )
        free(v38[0]);
      if ( v37[0] && !_InterlockedSub((volatile signed __int32 *)v37[0], 1u) )
        free(v37[0]);
      if ( v36[0] && !_InterlockedSub((volatile signed __int32 *)v36[0], 1u) )
        free(v36[0]);
      if ( v35[0] && !_InterlockedSub((volatile signed __int32 *)v35[0], 1u) )
        free(v35[0]);
    }
    v14 = _mm_load_si128(&v33);
    v25 = v34;
    *(__m128i *)a1 = v14;
    *(_QWORD *)(a1 + 16) = v25;
  }
  else if ( ea_name <= 0 )
  {
    if ( (_QWORD)v30 )
    {
      v26 = v30 - 1;
      v27 = v29;
      v28 = (unsigned __int64)(v30 - 1) >> 63;
    }
    else
    {
      LOBYTE(v28) = 0;
      v26 = 0;
      v27 = (char *)&s1;
    }
    if ( !v27 || (_BYTE)v28 )
    {
      v26 = 0;
      if ( v27 )
        v26 = strlen(v27);
    }
    p_ptr = (void **)v26;
    *(double *)v14.m128i_i64 = QT::QString::fromUtf8(a1, v26, v27);
  }
  else
  {
    ptr = nullptr;
    v41 = 0;
    sub_169A50((__int64 *)&ptr, (__int64)"0x%a (%s)", 0.0, (const char *)a2);
    if ( (_QWORD)v41 )
    {
      v11 = v41 - 1;
      v12 = (const char *)ptr;
      v10 = (unsigned __int64)(v41 - 1) >> 63;
    }
    else
    {
      LOBYTE(v10) = 0;
      v11 = 0;
      v12 = &s1;
    }
    if ( !v12 || (_BYTE)v10 )
    {
      v11 = 0;
      if ( v12 )
        v11 = strlen(v12);
    }
    p_ptr = (void **)v11;
    *(double *)v14.m128i_i64 = QT::QString::fromUtf8(a1, v11, v12);
    if ( ptr )
    {
      *(_QWORD *)&v41 = 0;
      *(double *)v14.m128i_i64 = qfree(ptr, (const char *)p_ptr, *(double *)v14.m128i_i64);
    }
  }
  if ( s )
  {
    *(_QWORD *)&v32 = 0;
    *(double *)v14.m128i_i64 = qfree(s, (const char *)p_ptr, *(double *)v14.m128i_i64);
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29, (const char *)p_ptr, *(double *)v14.m128i_i64);
  }
  return a1;
}
