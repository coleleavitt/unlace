QT::QLabel *__fastcall sub_4ED5D0(__int64 a1, __int64 a2)
{
  QT::QLabel *v2; // rbx
  __int64 v3; // rax
  size_t v4; // rax
  const char *v5; // r12
  size_t v6; // rdx
  double v7; // xmm0_8
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = (QT::QLabel *)operator new(0x28u);
  v3 = *(_QWORD *)(a2 + 112);
  if ( v3 )
  {
    v4 = v3 - 1;
    v5 = *(const char **)(a2 + 104);
    v6 = v4 >> 63;
  }
  else
  {
    LOBYTE(v6) = 0;
    v4 = 0;
    v5 = &s1;
  }
  if ( !v5 || (_BYTE)v6 )
  {
    v4 = 0;
    if ( v5 )
      v4 = strlen(v5);
  }
  v7 = QT::QString::fromUtf8(ptr, v4, v5);
  QT::QLabel::QLabel(v2, ptr, 0, 0, v7);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( !*(_BYTE *)(a2 + 128) )
      return v2;
LABEL_13:
    QT::QLabel::setTextFormat(v2, 1);
    QT::QLabel::setTextInteractionFlags(v2, 13);
    QT::QLabel::setOpenExternalLinks(v2, 1);
    return v2;
  }
  if ( *(_BYTE *)(a2 + 128) )
    goto LABEL_13;
  return v2;
}
