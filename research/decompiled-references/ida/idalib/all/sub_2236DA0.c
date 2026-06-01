void __fastcall __noreturn sub_2236DA0(__int64 a1)
{
  __m128i _0[2]; // [rsp+0h] [rbp+0h] BYREF
  void *vars20[2]; // [rsp+20h] [rbp+20h] BYREF
  _WORD _30[28]; // [rsp+30h] [rbp+30h] BYREF

  sub_D8B070(
    vars20,
    (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
    32,
    (__int64)"%lu",
    a1);
  sub_E7ED70(_0, "SmallVector capacity unable to grow. Already at maximum size ", vars20);
  if ( vars20[0] != _30 )
    operator delete(vars20[0]);
  vars20[0] = _0;
  _30[8] = 260;
  sub_2221AD0((__int64)vars20, 1u);
}
