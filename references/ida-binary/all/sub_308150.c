unsigned __int64 sub_308150()
{
  void **v0; // rax
  size_t v1; // rbx
  char *v2; // rsi
  unsigned __int64 v3; // rbp
  __int64 v4; // r12
  char *v5; // rax
  size_t v6; // rdx
  char *v7; // rax
  QT::QWidget *v8; // rbx
  size_t v9; // rax
  char *v10; // rbp
  unsigned __int64 v11; // rdx
  double v12; // xmm0_8
  const void **v14; // rbp
  char *v15; // rax
  const void *v16; // rsi
  char *s; // [rsp+0h] [rbp-58h] BYREF
  __int128 v18; // [rsp+8h] [rbp-50h]
  void *ptr[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v0 = sub_16C010();
  s = nullptr;
  v18 = 0;
  v1 = (size_t)v0[1];
  if ( v1 )
  {
    v14 = (const void **)v0;
    v4 = v1 + 4;
    v15 = (char *)qalloc_or_throw(v0[1]);
    *((_QWORD *)&v18 + 1) = v1;
    s = v15;
    v16 = *v14;
    v3 = v1 + 5;
    memcpy(v15, v16, v1);
    v6 = v1 - 1;
    *(_QWORD *)&v18 = v1;
    v2 = s;
    --v1;
    if ( *((_QWORD *)&v18 + 1) >= v3 )
    {
      *(_QWORD *)&v18 = v3;
      s[v4] = 0;
      if ( !v6 )
        goto LABEL_4;
      goto LABEL_19;
    }
  }
  else
  {
    v2 = nullptr;
    v3 = 6;
    v4 = 5;
  }
  v5 = (char *)qvector_reserve(&s, v2, v3, 1);
  v6 = v1;
  s = v5;
  *(_QWORD *)&v18 = v3;
  v5[v4] = 0;
  if ( !v1 )
    goto LABEL_4;
LABEL_19:
  memmove(s + 5, s, v6);
LABEL_4:
  v7 = s;
  *(_DWORD *)s = 541148233;
  v7[4] = 118;
  v8 = qword_8CD748;
  if ( (_QWORD)v18 )
  {
    v9 = v18 - 1;
    v10 = s;
    v11 = (unsigned __int64)(v18 - 1) >> 63;
  }
  else
  {
    LOBYTE(v11) = 0;
    v9 = 0;
    v10 = (char *)&s1;
  }
  if ( !v10 || (_BYTE)v11 )
  {
    v9 = 0;
    if ( v10 )
      v9 = strlen(v10);
  }
  v12 = QT::QString::fromUtf8(ptr, v9, v10);
  QT::QWidget::setWindowTitle(v8, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( s )
  {
    *(_QWORD *)&v18 = 0;
    qfree(s, (const char *)ptr, v12);
  }
  return v20 - __readfsqword(0x28u);
}
