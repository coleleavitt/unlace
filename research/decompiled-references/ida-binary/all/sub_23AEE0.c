unsigned __int64 __fastcall sub_23AEE0(__int64 *a1)
{
  const char *v1; // rsi
  const char *v2; // rsi
  const char *vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  vars0 = nullptr;
  vars8 = 0;
  v1 = (const char *)a1;
  sub_23A6F0((__int64 *)&vars0, a1);
  if ( (unsigned __int64)vars8 <= 1 )
  {
    delinf(86);
  }
  else
  {
    v1 = vars0;
    setinf_buf(86, vars0, 0);
  }
  if ( vars0 )
  {
    *(_QWORD *)&vars8 = 0;
    qfree(vars0, v1);
  }
  v2 = (const char *)(a1 + 3);
  vars0 = nullptr;
  vars8 = 0;
  sub_23ADA0((__int64 *)&vars0, a1 + 3);
  if ( (unsigned __int64)vars8 <= 1 )
  {
    delinf(87);
  }
  else
  {
    v2 = vars0;
    setinf_buf(87, vars0, 0);
  }
  if ( vars0 )
  {
    *(_QWORD *)&vars8 = 0;
    qfree(vars0, v2);
  }
  return vars18 - __readfsqword(0x28u);
}
