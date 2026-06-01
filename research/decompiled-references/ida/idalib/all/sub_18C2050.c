__int64 __fastcall sub_18C2050(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int8 v5; // dl

  if ( !a3 || *(char *)(a3 + 19) >= 0 )
    return 4;
  if ( !a2 )
  {
    if ( a4 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 11 )
        return 1;
      if ( *(_QWORD *)(a4 + 8) == *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19088LL) )
        return 2;
    }
    return 0;
  }
  result = 3;
  v5 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v5 != 38 )
  {
    if ( !a4
      || (result = 1,
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL) != 11) )
    {
      if ( (unsigned int)v5 - 35 <= 3 )
      {
        if ( sub_B979F0((_QWORD *)a2) )
          return 0;
        else
          return 2;
      }
      return 0;
    }
  }
  return result;
}
