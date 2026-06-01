__int64 __fastcall sub_7EBD40(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 *v4; // r13
  unsigned int v5; // r12d
  __int64 v6; // rsi
  __int64 v7; // rsi

  v2 = *(__int64 **)(a2 + 8);
  if ( v2 )
  {
    result = 5LL * *((unsigned int *)v2 - 1);
    v4 = &v2[5 * *((unsigned int *)v2 - 1)];
    if ( v2 != v4 )
    {
      v5 = *(_DWORD *)a2;
      do
      {
        v6 = *v2;
        if ( *(_WORD *)(*v2 + 4) || (*(_BYTE *)(v6 + 30) & 1) == 0 )
          result = (__int64)sub_7EB9B0(a1, v6, v5);
        v7 = v2[2];
        if ( *(_WORD *)(v7 + 4) || (*(_BYTE *)(v7 + 30) & 1) == 0 )
          result = (__int64)sub_7EB9B0(a1, v7, v5);
        v2 += 5;
      }
      while ( v4 != v2 );
    }
  }
  return result;
}

