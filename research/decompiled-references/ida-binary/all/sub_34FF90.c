unsigned __int64 __fastcall sub_34FF90(__int64 a1, QT::QAbstractButton *a2, __int64 a3, __int64 a4, double a5)
{
  void **v5; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rdi
  int default_encoding_idx; // eax
  const char *encoding_name; // rbp
  size_t v11; // rax
  struct _Unwind_Exception *v12; // rbx
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v6 = *(_QWORD **)(a1 + 56);
  v14 = __readfsqword(0x28u);
  if ( a2 == (QT::QAbstractButton *)v6[120] )
  {
    v7 = 1;
  }
  else if ( a2 == (QT::QAbstractButton *)v6[122] )
  {
    v7 = 2;
  }
  else
  {
    if ( a2 != (QT::QAbstractButton *)v6[124] )
    {
      v12 = (struct _Unwind_Exception *)sub_34A8F0(a5, a1, (__int64)a2, a3, a4);
      sub_16D970(v5);
      _Unwind_Resume(v12);
    }
    v7 = 4;
  }
  default_encoding_idx = get_default_encoding_idx(v7);
  if ( default_encoding_idx > 0 )
  {
    encoding_name = (const char *)get_encoding_name((unsigned int)default_encoding_idx);
    v11 = 0;
    if ( encoding_name )
      v11 = strlen(encoding_name);
    QT::QString::fromUtf8(ptr, v11, encoding_name);
    QT::QAbstractButton::setText(a2, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v14 - __readfsqword(0x28u);
}
