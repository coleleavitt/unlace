__int64 __fastcall toggle_fit_constantly_ah_t__::vfunc_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v7[1] = __readfsqword(0x28u);
  if ( a3 && *(_BYTE *)(a3 + 104) )
  {
    HIBYTE(v7[0]) = *(_BYTE *)(a3 + 105);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
      140,
      a2,
      7,
      (char *)v7 + 7,
      &callui,
      a6,
      v7[0]);
  }
  return 3;
}
