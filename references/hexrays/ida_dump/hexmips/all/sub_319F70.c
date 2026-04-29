unsigned __int64 __fastcall sub_319F70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rax
  bool v7; // zf
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars28; // [rsp+28h] [rbp+28h]
  __int128 vars30; // [rsp+30h] [rbp+30h]
  __int64 vars40; // [rsp+40h] [rbp+40h]
  unsigned __int64 vars48; // [rsp+48h] [rbp+48h]

  vars48 = __readfsqword(0x28u);
  vars0[2] = a1;
  v6 = *(_QWORD *)(a1 + 64);
  vars0[3] = 0;
  vars0[4] = 0;
  vars0[0] = off_4BEB58;
  vars28 = 0;
  vars40 = 0;
  v7 = *(_BYTE *)(a2 + 64) == 0;
  vars0[1] = v6;
  vars30 = 0;
  sub_319510((unsigned int *)a2, vars0, !v7, (__m128)0LL, a4, a5, a6);
  vars0[0] = off_4BEB58;
  if ( vars28 )
  {
    *(_QWORD *)&vars30 = 0;
    qfree(vars28);
  }
  return vars48 - __readfsqword(0x28u);
}
