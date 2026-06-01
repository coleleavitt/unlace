__int64 __fastcall sub_22DAF0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v15; // rax
  char v16; // [rsp+0h] [rbp-8h]

  if ( (*(_BYTE *)(dbg + 36) & 0x10) == 0 )
  {
    sub_169630(
      (int)"The current debugger does not support exceptions",
      a10,
      a11,
      a12,
      a13,
      a14,
      a1,
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      v16);
    return 0;
  }
  v15 = sub_534430("commdbg:EditExceptions");
  if ( !v15 )
    return 0;
  sub_5314B0(v15);
  return 0;
}
