/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054C50
// Address: 0x0000000140054C50

//----- (0000000140054C50) ----------------------------------------------------
char __fastcall sub_140054C50(_QWORD *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  char *v3; // rcx
  char *v4; // r8

  *a1 = &off_140099670;
  v2 = (struct _RTL_CRITICAL_SECTION *)qword_1400CB150;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CB150);
  v3 = (char *)xmmword_1400CB158;
  v4 = (char *)xmmword_1400CB158 + 8 * (_QWORD)*(&xmmword_1400CB158 + 1);
  if ( xmmword_1400CB158 != v4 )
  {
    do
    {
      if ( a1 == *(_QWORD **)v3 )
        break;
      v3 += 8;
    }
    while ( v3 != v4 );
    if ( v3 != v4 )
    {
      memcpy(v3, v3 + 8, 8 * ((v4 - v3) >> 3) - 8);
      *(&xmmword_1400CB158 + 1) = (char *)*(&xmmword_1400CB158 + 1) - 1;
    }
  }
  return sub_14005D6D0(v2);
}
// 140099670: using guessed type void (__fastcall __noreturn *off_140099670)();
// 1400CB150: using guessed type __int64 qword_1400CB150;
