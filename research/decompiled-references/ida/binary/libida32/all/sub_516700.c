__int64 __fastcall sub_516700(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // ecx
  __int64 v7; // rsi
  unsigned int v8; // edi

  if ( !a2 )
    return 0;
  result = *(unsigned int *)(a2 + 4);
  if ( (_DWORD)result )
  {
    v3 = *(_DWORD *)(a2 + 20);
    v4 = *(_QWORD *)(a2 + 8);
    v5 = (unsigned int)result;
    if ( (v3 & 2) != 0 )
    {
      v7 = 0;
      result = 0;
      do
      {
        v8 = *(_DWORD *)(v4 + 8);
        if ( (unsigned int)result < v8 )
          result = v8;
        ++v7;
        v4 += 20;
      }
      while ( v5 != v7 );
    }
    else
    {
      result = *(unsigned int *)(v4 + 20LL * (unsigned int)result - 12);
    }
    v6 = (v3 >> 7) & 0x1F;
    if ( v6 )
      return -(1 << v6) & (unsigned int)((1 << v6) + result - 1);
  }
  return result;
}

