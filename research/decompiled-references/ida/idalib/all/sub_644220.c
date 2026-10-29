unsigned __int64 __fastcall sub_644220(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // [rsp+58h] [rbp-40h]

  v5 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 1016LL) )
    sub_387DF0(1229, a2, a3, a4);
  return v5 - __readfsqword(0x28u);
}
