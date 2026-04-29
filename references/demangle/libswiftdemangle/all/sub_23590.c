_QWORD *__fastcall sub_23590(_QWORD *a1, _WORD *a2, size_t a3, __int64 a4)
{
  __int64 vars0[7]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  sub_22ED0(vars0);
  sub_230A0(a1, vars0, a2, a3, a4);
  if ( vars0[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)vars0[0] + 8LL))(vars0[0]);
  return a1;
}
