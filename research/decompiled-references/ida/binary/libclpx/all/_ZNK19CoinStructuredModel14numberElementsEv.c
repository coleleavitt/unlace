__int64 __fastcall CoinStructuredModel::numberElements(CoinStructuredModel *this)
{
  __int64 v2; // rbx
  unsigned int v3; // r12d
  __int64 v4; // rdi

  if ( *((int *)this + 27) <= 0 )
    return 0;
  v2 = 0;
  v3 = 0;
  do
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v2);
    v3 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    ++v2;
  }
  while ( *((_DWORD *)this + 27) > (int)v2 );
  return v3;
}

