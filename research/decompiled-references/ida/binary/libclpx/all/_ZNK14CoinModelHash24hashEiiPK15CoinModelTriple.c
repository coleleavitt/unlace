__int64 __fastcall CoinModelHash2::hash(CoinModelHash2 *a1, int a2, int a3, __int64 a4)
{
  signed int v7; // eax
  unsigned int *v8; // r8
  __int64 result; // rax
  _DWORD *v10; // rdi

  if ( !*((_DWORD *)a1 + 2) )
    return 0xFFFFFFFFLL;
  v7 = CoinModelHash2::hashValue(a1, a2, a3);
  while ( 1 )
  {
    v8 = (unsigned int *)(*(_QWORD *)a1 + 8LL * v7);
    result = *v8;
    if ( (int)result >= 0 )
    {
      v10 = (_DWORD *)(a4 + 16LL * (int)result);
      if ( (*v10 & 0x7FFFFFFF) == a2 && v10[1] == a3 )
        break;
    }
    v7 = v8[1];
    if ( v7 == -1 )
      return 0xFFFFFFFFLL;
  }
  return result;
}

