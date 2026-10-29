unsigned __int64 __fastcall sub_356930(__int64 a1)
{
  int outfile_encoding_idx; // eax
  const char *encoding_name; // rbx
  QT::QAbstractButton *v3; // rbp
  size_t v4; // rax
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  outfile_encoding_idx = get_outfile_encoding_idx();
  if ( outfile_encoding_idx > 0 )
  {
    encoding_name = (const char *)get_encoding_name((unsigned int)outfile_encoding_idx);
    v3 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1960LL);
    v4 = 0;
    if ( encoding_name )
      v4 = strlen(encoding_name);
  }
  else
  {
    encoding_name = "<default>";
    v3 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1960LL);
    v4 = 9;
  }
  QT::QString::fromUtf8(ptr, v4, encoding_name);
  QT::QAbstractButton::setText(v3, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v7 - __readfsqword(0x28u);
}
