__int64 __fastcall sub_3E1B10(QT::QWidget *this, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  const char *v4; // rbp
  void *v5; // r12
  double v7; // xmm0_8
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // r13
  size_t v11; // r14
  __int64 v12; // rax
  void *ptr[4]; // [rsp+0h] [rbp-458h] BYREF
  char s[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v15; // [rsp+428h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v2 = sub_384550(a2);
  v3 = *((_QWORD *)this + 141);
  if ( v2 && (v4 = *(const char **)(v2 + 24)) != nullptr )
  {
    v5 = *((void **)this + 140);
    if ( v3 > 1 && !strcmp(*((const char **)this + 140), *(const char **)(v2 + 24)) )
      return 0;
    v9 = strlen(v4);
    v10 = v9;
    if ( v9 )
    {
      v11 = v9 + 1;
      if ( *((_QWORD *)this + 142) < v9 + 1 )
      {
        v12 = qvector_reserve((char *)this + 1120, v5, v9 + 1, 1);
        *((_QWORD *)this + 140) = v12;
        v5 = (void *)v12;
      }
      *((_QWORD *)this + 141) = v11;
      memmove(v5, v4, v10);
      *(_BYTE *)(*((_QWORD *)this + 140) + v10) = 0;
      v5 = *((void **)this + 140);
      goto LABEL_10;
    }
  }
  else
  {
    if ( v3 <= 1 )
      return 0;
    v5 = *((void **)this + 140);
  }
  *((_QWORD *)this + 141) = 0;
LABEL_10:
  v7 = qsnprintf(s, 1024, "%s (%s)", "Locals", (const char *)v5);
  v8 = strlen(s);
  QT::QString::fromUtf8(ptr, v8, s, v7);
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  if ( !ptr[0] || _InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    return 1;
  free(ptr[0]);
  return 1;
}
