__int64 __fastcall CoinStructuredModel::block(CoinStructuredModel *this, int a2, int a3)
{
  _DWORD *v3; // rax
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r8

  v3 = *((_DWORD **)this + 23);
  if ( !v3 )
    return 0;
  v4 = *((_DWORD *)this + 27);
  if ( v4 <= 0 )
    return 0;
  v5 = (unsigned int)(v4 - 1);
  v6 = 0;
  v7 = v5 + 1;
  while ( *v3 != a2 || v3[1] != a3 )
  {
    ++v6;
    v3 += 4;
    if ( v7 == v6 )
      return 0;
  }
  return *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v6);
}

