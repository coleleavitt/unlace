__int64 __fastcall CoinWarmStartBasis::numberBasicStructurals(CoinWarmStartBasis *this)
{
  int v1; // r8d
  __int64 v2; // rdi
  __int64 result; // rax
  int i; // esi
  bool v5; // dl

  v1 = *((_DWORD *)this + 2);
  if ( v1 <= 0 )
    return 0;
  v2 = *((_QWORD *)this + 3);
  LODWORD(result) = 0;
  for ( i = 0; i != v1; ++i )
  {
    v5 = ((*(char *)(v2 + (i >> 2)) >> ((2 * i) & 6)) & 3) == 1;
    result = v5 + (unsigned int)result;
  }
  return result;
}

