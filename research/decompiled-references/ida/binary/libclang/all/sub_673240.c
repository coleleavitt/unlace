__int64 __fastcall sub_673240(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 *v6; // rbx
  __int64 v7; // r13
  __int64 result; // rax
  __int64 v9; // rsi

  if ( !a2 )
    return 1;
  v6 = (__int64 *)(a2 + 24);
  v7 = a2 + (unsigned int)(8 * *(_DWORD *)(a2 + 20)) + 24;
  if ( 8 * *(_DWORD *)(a2 + 20) )
  {
    while ( 1 )
    {
      result = sub_66D270(a1, *v6, a3, a4, a5, a6);
      if ( !(_BYTE)result )
        break;
      if ( (__int64 *)v7 == ++v6 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    if ( (*(_BYTE *)(a2 + 23) & 0x40) != 0
      && (v9 = *(_QWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24)) != 0 )
    {
      return sub_672CC0(a1, v9, a3, a4, a5, a6);
    }
    else
    {
      return 1;
    }
  }
  return result;
}

