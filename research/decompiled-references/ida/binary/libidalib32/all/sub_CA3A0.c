unsigned __int64 __fastcall sub_CA3A0(__int64 *a1)
{
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  vars0 = 0;
  vars8 = 0;
  sub_CA040(&vars0, a1);
  if ( (unsigned __int64)vars8 <= 1 )
    delinf();
  else
    setinf_buf();
  if ( vars0 )
  {
    *(_QWORD *)&vars8 = 0;
    qfree();
  }
  vars0 = 0;
  vars8 = 0;
  sub_CA260(&vars0, a1 + 3);
  if ( (unsigned __int64)vars8 <= 1 )
    delinf();
  else
    setinf_buf();
  if ( vars0 )
  {
    *(_QWORD *)&vars8 = 0;
    qfree();
  }
  return vars18 - __readfsqword(0x28u);
}

