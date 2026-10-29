__int64 __fastcall sub_22068B0(__int64 **a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned int v6; // ecx
  unsigned int v8; // ecx

  result = *((unsigned int *)a1 + 2);
  v2 = (unsigned __int64)(result + 63) >> 6;
  if ( !v2 )
    return 0;
  _RSI = **a1;
  if ( _RSI )
  {
    v6 = 0;
LABEL_10:
    __asm { tzcnt   rsi, rsi }
    v8 = _RSI + v6;
    if ( v8 <= (unsigned int)result )
      return v8;
  }
  else
  {
    v4 = (__int64)(*a1 + 1);
    v5 = v4 + 8LL * (unsigned int)(v2 - 1);
    v6 = 0;
    while ( 1 )
    {
      v6 += 64;
      if ( v4 == v5 )
        break;
      v4 += 8;
      _RSI = *(_QWORD *)(v4 - 8);
      if ( _RSI )
        goto LABEL_10;
    }
    if ( v6 <= (unsigned int)result )
      return v6;
  }
  return result;
}
