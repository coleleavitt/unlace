__int64 __fastcall CoinStructuredModel::blockIndex(CoinStructuredModel *this, int a2, int a3)
{
  _DWORD *v3; // rcx
  int v4; // edi
  __int64 result; // rax

  v3 = *((_DWORD **)this + 23);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = *((_DWORD *)this + 27);
  result = 0xFFFFFFFFLL;
  if ( v4 > 0 )
  {
    result = 0;
    while ( *v3 != a2 || v3[1] != a3 )
    {
      result = (unsigned int)(result + 1);
      v3 += 4;
      if ( (_DWORD)result == v4 )
        return 0xFFFFFFFFLL;
    }
  }
  return result;
}

