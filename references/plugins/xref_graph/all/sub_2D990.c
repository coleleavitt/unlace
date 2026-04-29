__int64 __fastcall toggle_options_ah_t__::vfunc_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v8[1] = __readfsqword(0x28u);
  if ( a3 )
  {
    if ( *(_BYTE *)(a3 + 104) )
    {
      v7 = *(_QWORD *)(a3 + 56);
      if ( v7 )
      {
        HIBYTE(v8[0]) = *(_BYTE *)(*(_QWORD *)(v7 + 32) + 9LL) >> 7;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
          140,
          a2,
          7,
          (char *)v8 + 7,
          &callui,
          a6,
          v8[0]);
      }
    }
  }
  return 3;
}
