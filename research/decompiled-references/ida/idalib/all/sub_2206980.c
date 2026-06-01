unsigned __int64 __fastcall sub_2206980(__int64 **a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rsi

  result = ((unsigned __int64)*((unsigned int *)a1 + 2) + 63) >> 6;
  if ( !result )
    return 0;
  v2 = **a1;
  if ( v2 == -1 )
  {
    v3 = (__int64)(*a1 + 1);
    v4 = v3 + 8LL * (unsigned int)(result - 1);
    LODWORD(result) = 0;
    while ( 1 )
    {
      result = (unsigned int)(result + 64);
      if ( v4 == v3 )
        break;
      v3 += 8;
      v2 = *(_QWORD *)(v3 - 8);
      if ( v2 != -1 )
        goto LABEL_8;
    }
  }
  else
  {
    LODWORD(result) = 0;
LABEL_8:
    _RCX = ~v2;
    __asm { tzcnt   rcx, rcx }
    return (unsigned int)(_RCX + result);
  }
  return result;
}
