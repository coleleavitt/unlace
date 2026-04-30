unsigned __int64 __fastcall vault_files_dirtree_widget_picker_t__::vfunc_5(__int64 *a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  QT::QStatusBar *v4; // rbx
  size_t v5; // rax
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v2 = *a1;
  v8 = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(__int64 *))(v2 + 136))(a1);
  if ( v3 )
  {
    v4 = (QT::QStatusBar *)v3;
    v5 = 0;
    if ( a2 )
      v5 = strlen(a2);
    QT::QString::fromUtf8(ptr, v5, a2);
    QT::QStatusBar::showMessage(v4, (const QT::QString *)ptr, 0);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v8 - __readfsqword(0x28u);
}
