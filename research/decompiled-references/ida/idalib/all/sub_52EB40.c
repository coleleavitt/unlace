unsigned __int64 __fastcall sub_52EB40(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax
  unsigned int v4; // ecx
  __int64 v5; // rdx
  int v6; // ecx
  __int64 i; // rsi

  if ( !a2 )
    return 0;
  v2 = *(unsigned int *)(a2 + 8);
  result = 0;
  if ( (_DWORD)v2 )
  {
    v4 = *(_DWORD *)(a2 + 28);
    v5 = *(_QWORD *)(a2 + 16);
    if ( (v4 & 2) != 0 )
    {
      for ( i = 0; i != v2; ++i )
      {
        if ( result < *(_QWORD *)(v5 + 16) )
          result = *(_QWORD *)(v5 + 16);
        v5 += 32;
      }
    }
    else
    {
      result = *(_QWORD *)(v5 + 32 * v2 - 16);
    }
    v6 = (v4 >> 7) & 0x1F;
    if ( v6 )
      return -(1 << v6) & ((1 << v6) - 1 + result);
  }
  return result;
}
