unsigned __int64 __fastcall sub_1BC0E0(
        QT::QWidget **this,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char *v9; // r13
  size_t v10; // r14
  __int64 v11; // r15
  const char *v12; // r13
  size_t v13; // rax
  char *v14; // r15
  size_t v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  const char *v21; // rdx
  const char *v22; // rsi
  double v24; // xmm4_8
  double v25; // xmm5_8
  void *v26; // [rsp+0h] [rbp-E8h] BYREF
  __int128 v27; // [rsp+8h] [rbp-E0h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v29; // [rsp+28h] [rbp-C0h]
  void *v30; // [rsp+40h] [rbp-A8h] BYREF
  char *s[2]; // [rsp+48h] [rbp-A0h]
  __int64 v32; // [rsp+58h] [rbp-90h]
  __int128 v33; // [rsp+60h] [rbp-88h]
  __int64 v34; // [rsp+70h] [rbp-78h]
  __int128 v35; // [rsp+78h] [rbp-70h]
  __int64 v36; // [rsp+88h] [rbp-60h]
  __int128 v37; // [rsp+90h] [rbp-58h]
  unsigned __int64 v38; // [rsp+A8h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  QT::QComboBox::currentText((QT::QComboBox *)&ptr);
  QT::QString::toUtf8_helper((QT::QString *)&v30, (const QT::QString *)&ptr);
  v9 = s[0];
  v26 = nullptr;
  v27 = 0;
  if ( s[0] )
  {
    v10 = strlen(s[0]);
    v11 = v10 + 1;
  }
  else
  {
    v9 = (char *)&QT::QByteArray::_empty;
    if ( !&QT::QByteArray::_empty )
      goto LABEL_4;
    v11 = 1;
    v10 = 0;
  }
  v26 = (void *)qvector_reserve(&v26, 0, v11, 1);
  *(_QWORD *)&v27 = v11;
  memmove(v26, v9, v10);
  *((_BYTE *)v26 + v10) = 0;
LABEL_4:
  if ( v30 && !_InterlockedSub((volatile signed __int32 *)v30, 1u) )
    free(v30);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  ptr = nullptr;
  v12 = &s1;
  v29 = 0;
  if ( (_QWORD)v27 )
    v12 = (const char *)v26;
  v30 = nullptr;
  *(_OWORD *)s = 0;
  if ( v12 )
  {
    v13 = strlen(v12);
    v14 = (char *)(v13 + 1);
    v15 = v13;
    v30 = (void *)qvector_reserve(&v30, 0, v13 + 1, 1);
    s[0] = v14;
    memmove(v30, v12, v15);
    *((_BYTE *)v30 + v15) = 0;
  }
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  if ( !(unsigned __int8)sub_52EA50(&v30, &ptr) )
  {
    v21 = &s1;
    if ( (_QWORD)v29 )
    {
      v21 = (const char *)ptr;
      v22 = &s1;
      if ( !(_QWORD)v27 )
        goto LABEL_17;
    }
    else
    {
      v22 = &s1;
      if ( !(_QWORD)v27 )
      {
LABEL_17:
        sub_169700(
          (int)"Couldn't load theme \"%s\": %s\n",
          (__int64)v22,
          (__int64)v21,
          v16,
          v17,
          v18,
          (__m128)0LL,
          a3,
          a4,
          a5,
          v19,
          v20,
          a8,
          a9,
          (char)v26);
        goto LABEL_18;
      }
    }
    v22 = (const char *)v26;
    goto LABEL_17;
  }
  sub_52B340(this + 20, &v30);
  v22 = (_BYTE *)(&dword_0 + 1);
  sub_1BBDA0(this, 1u, 0.0, *(double *)a3.m128_u64, a4, a5, v24, v25, a8, a9);
LABEL_18:
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36, v22);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34, v22);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, v22);
  }
  if ( v30 )
  {
    s[0] = nullptr;
    qfree(v30, v22);
  }
  if ( ptr )
  {
    *(_QWORD *)&v29 = 0;
    qfree(ptr, v22);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26, v22);
  }
  return v38 - __readfsqword(0x28u);
}
