__int64 __fastcall type_editor_field_handler_t__::vfunc_5(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Child_helper; // rax
  QT::QLabel *v5; // rbx
  __int64 v6; // rax
  const char *v7; // rbp
  size_t v8; // rdx
  size_t v9; // rax
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  Child_helper = QT::qt_qFindChild_helper(a2, 0, 0, &off_896140, 1);
  if ( !Child_helper )
    return 1;
  v5 = (QT::QLabel *)Child_helper;
  v6 = *(_QWORD *)(a3 + 8);
  if ( v6 )
  {
    v9 = v6 - 1;
    v7 = *(const char **)a3;
    v8 = v9 >> 63;
    if ( !v7 )
    {
LABEL_10:
      v9 = 0;
      if ( v7 )
        v9 = strlen(v7);
      goto LABEL_5;
    }
  }
  else
  {
    v7 = &s1;
    LOBYTE(v8) = 0;
    v9 = 0;
    if ( !&s1 )
      goto LABEL_10;
  }
  if ( (_BYTE)v8 )
    goto LABEL_10;
LABEL_5:
  QT::QString::fromUtf8(ptr, v9, v7);
  QT::QLabel::setText(v5, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return 1;
}
