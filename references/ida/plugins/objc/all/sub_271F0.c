char __fastcall sub_271F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char result; // al
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  v4[0] = 0;
  result = sub_F2C0(a1, (__int64)v4, a3);
  if ( result )
  {
    if ( (unsigned int)callui(1004) )
      return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 408LL))(a1, a2, v4[0]);
    else
      return sub_158A0();
  }
  return result;
}
