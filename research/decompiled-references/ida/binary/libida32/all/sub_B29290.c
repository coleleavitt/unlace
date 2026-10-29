__int64 __fastcall sub_B29290(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r13
  __int64 *v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // rsi

  result = *(_DWORD *)(a1 + 20) & 0x1FFFFFFF;
  if ( (*(_DWORD *)(a1 + 20) & 0x1FFFFFFF) != 0 )
  {
    result = (unsigned int)(result - 1);
    v3 = a1 + 8 * result + 32;
    v5 = (__int64 *)(a1 + 24);
    do
    {
      v6 = *v5;
      if ( *v5 )
      {
        v7 = *(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v6 + 40) & 7) != 0 )
          v7 = 0;
        sub_FF6970(a2, v7);
        result = *(_BYTE *)(v6 + 28) & 0x7F;
        if ( (_BYTE)result == 68 )
          result = sub_B29290(*(_QWORD *)(v6 + 56), a2);
      }
      ++v5;
    }
    while ( (__int64 *)v3 != v5 );
  }
  return result;
}

