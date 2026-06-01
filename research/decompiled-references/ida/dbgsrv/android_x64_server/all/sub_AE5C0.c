/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AE5C0
// Address: 0x00000000000AE5C0

//----- (00000000000AE5C0) ----------------------------------------------------
_UNKNOWN **__fastcall sub_AE5C0(const char *src)
{
  _QWORD *v1; // rbx
  const char *v3; // rax

  if ( !(_BYTE)byte_156AA0 && _cxa_guard_acquire(&byte_156AA0) )
  {
    qword_156A98 = qsem_create(src, 1u);
    _cxa_guard_release(&byte_156AA0);
  }
  if ( !qword_156A98 )
  {
    v3 = qstrerror(0xFFFFFFFF);
    sub_3A5C0("%s qsem: %s", src, v3);
  }
  if ( !qsem_wait(qword_156A98, 0) )
    sub_3A5C0("%s: another running copy has been detected, exiting...", src);
  v1 = operator new(8u);
  *v1 = &off_14F7C0;
  sub_AF300((__int64)&qword_156A78, (__int64)v1);
  *v1 = &off_14F960;
  return &off_14F960;
}
// 14F7C0: using guessed type void (__fastcall __noreturn *off_14F7C0)();
// 14F960: using guessed type _UNKNOWN *off_14F960;
// 156A78: using guessed type __int64 qword_156A78;
// 156A98: using guessed type __int64 qword_156A98;
