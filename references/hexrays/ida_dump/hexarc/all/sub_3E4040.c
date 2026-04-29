unsigned __int64 __fastcall sub_3E4040(__int64 a1, __int64 *a2)
{
  __int64 vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  __int64 *vars10; // [rsp+10h] [rbp+10h] BYREF
  __int128 vars18; // [rsp+18h] [rbp+18h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  vars28 = __readfsqword(0x28u);
  vars0[0] = 0;
  vars0[1] = 0;
  sub_5D900(vars0, 132, 4);
  vars10 = nullptr;
  vars18 = 0;
  sub_5DD00(a2, vars0);
  sub_30F930(a2 + 2, &vars10);
  if ( vars10 )
  {
    *(_QWORD *)&vars18 = 0;
    qfree(vars10);
  }
  qfree(vars0[0]);
  return vars28 - __readfsqword(0x28u);
}
