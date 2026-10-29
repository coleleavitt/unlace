__int64 sub_D81F0()
{
  int v0; // eax
  _DWORD *v1; // rdi
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  vars0 = 0;
  vars8 = 0;
  sub_C2420(dbg, (__int64)&vars0);
  if ( (unsigned __int64)vars8 > 1 )
  {
    if ( qword_252470 )
    {
      xmmword_252478 = 0;
      qfree();
      qword_252470 = nullptr;
      *(&xmmword_252478 + 1) = 0;
    }
    sub_D7D60(dbg, (__int64)&vars0, 0);
  }
  v0 = xmmword_252458;
  v1 = qword_252758;
  if ( qword_252758 )
  {
    *(_QWORD *)qword_252758 = qword_252450;
    v1[2] = v0;
    sub_CDCF0((__int64)v1, 24);
  }
  else
  {
    sub_9E1E0();
  }
  sub_922D0((__int64)"Exception table has been reloaded");
  if ( vars0 )
  {
    *(_QWORD *)&vars8 = 0;
    qfree();
  }
  return 0;
}

