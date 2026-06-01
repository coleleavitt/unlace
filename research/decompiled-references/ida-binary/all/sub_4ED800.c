QT::QCheckBox *__fastcall sub_4ED800(__int64 a1, __int64 a2)
{
  QT::QCheckBox *v2; // rbx
  __int64 v3; // rax
  size_t v4; // rax
  const char *v5; // r12
  size_t v6; // rdx
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = (QT::QCheckBox *)operator new(0x28u);
  v3 = *(_QWORD *)(a2 + 120);
  if ( v3 )
  {
    v4 = v3 - 1;
    v5 = *(const char **)(a2 + 112);
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
  QT::QString::fromUtf8(ptr, v4, v5);
  QT::QCheckBox::QCheckBox(v2, (const QT::QString *)ptr, nullptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QAbstractButton::setChecked(v2, **(_BYTE **)(a2 + 104));
  return v2;
}
