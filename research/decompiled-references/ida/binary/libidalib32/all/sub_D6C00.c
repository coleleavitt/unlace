__int64 sub_D6C00()
{
  int v0; // eax
  _DWORD *v1; // rdi
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  vars0 = 0;
  vars8 = 0;
  sub_C1280(dbg, (__int64)&vars0);
  if ( (unsigned __int64)vars8 > 1 )
  {
    if ( qword_251300 )
    {
      xmmword_251308 = 0;
      qfree();
      qword_251300 = nullptr;
      *(&xmmword_251308 + 1) = 0;
    }
    sub_D6770(dbg, (__int64)&vars0, 0);
  }
  v0 = xmmword_2512E8;
  v1 = qword_2515B0;
  if ( qword_2515B0 )
  {
    *(_QWORD *)qword_2515B0 = qword_2512E0;
    v1[2] = v0;
    sub_CC780((__int64)v1, 24);
  }
  else
  {
    sub_9E0A0();
  }
  sub_921F0((__int64)"Exception table has been reloaded");
  if ( vars0 )
  {
    *(_QWORD *)&vars8 = 0;
    qfree();
  }
  return 0;
}

