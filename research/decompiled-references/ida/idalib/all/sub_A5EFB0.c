__int64 *__fastcall sub_A5EFB0(__int64 a1)
{
  __int64 *result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  if ( !(_BYTE)byte_2CCC408 && __cxa_guard_acquire(&byte_2CCC408) )
  {
    qword_2CCC420 &= 0xFFFFFFFE00000000LL;
    qword_2CCC428 = 0;
    qword_2CCC438 = 0;
    __cxa_guard_release(&byte_2CCC408);
  }
  result = (__int64 *)(*(_QWORD *)(a1 + 72) & 0xFFFFFFFFFFFFFFF8LL);
  if ( !result )
    return &qword_2CCC420;
  v2 = (*(__int64 *)(a1 + 72) >> 1) & 3;
  if ( v2 == 1 )
  {
    v3 = result[9];
    result = nullptr;
    if ( v3 )
    {
      result = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
      if ( ((v3 >> 1) & 3) == 2 )
      {
        if ( result )
          return (__int64 *)result[1];
      }
    }
  }
  else if ( v2 == 2 )
  {
    return (__int64 *)result[1];
  }
  return result;
}
