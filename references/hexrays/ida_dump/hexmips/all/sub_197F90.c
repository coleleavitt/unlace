unsigned __int64 __fastcall sub_197F90(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 vars0; // [rsp+18h] [rbp+0h] BYREF
  unsigned __int64 vars8; // [rsp+20h] [rbp+8h]

  v2 = (unsigned int)*(char *)(a2 + 12);
  vars8 = __readfsqword(0x28u);
  sub_327340(&vars0, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL) + 1504LL), v2);
  copy_tinfo_t(a1 + 448, &vars0);
  clear_tinfo_t(&vars0);
  vars0 = 25;
  copy_tinfo_t(a1 + 456, &vars0);
  clear_tinfo_t(&vars0);
  print_tinfo(a1 + 400, 0, 0, 0, 0, a1 + 448, 0, 0);
  print_tinfo(a1 + 424, 0, 0, 0, 0, a1 + 456, 0, 0);
  return vars8 - __readfsqword(0x28u);
}
