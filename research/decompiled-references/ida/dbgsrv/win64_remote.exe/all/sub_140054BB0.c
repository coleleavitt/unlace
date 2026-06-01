/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054BB0
// Address: 0x0000000140054BB0

//----- (0000000140054BB0) ----------------------------------------------------
_QWORD *__fastcall sub_140054BB0(_QWORD *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  void *v4; // rax

  *a1 = &off_140099670;
  v2 = (struct _RTL_CRITICAL_SECTION *)qword_1400CB150;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CB150);
  v3 = (__int64)*(&xmmword_1400CB158 + 1);
  if ( (unsigned __int64)*(&xmmword_1400CB158 + 1) + 1 <= qword_1400CB168 )
  {
    v4 = xmmword_1400CB158;
  }
  else
  {
    v4 = sub_14005ABE0(
           (__int64)&xmmword_1400CB158,
           xmmword_1400CB158,
           (unsigned __int64)*(&xmmword_1400CB158 + 1) + 1,
           8u);
    xmmword_1400CB158 = v4;
    v3 = (__int64)*(&xmmword_1400CB158 + 1);
  }
  *((_QWORD *)v4 + v3) = a1;
  *(&xmmword_1400CB158 + 1) = (char *)*(&xmmword_1400CB158 + 1) + 1;
  sub_14005D6D0(v2);
  return a1;
}
// 140099670: using guessed type void (__fastcall __noreturn *off_140099670)();
// 1400CB150: using guessed type __int64 qword_1400CB150;
// 1400CB168: using guessed type __int64 qword_1400CB168;
