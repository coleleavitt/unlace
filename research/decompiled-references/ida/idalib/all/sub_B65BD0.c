__int64 __fastcall sub_B65BD0(__int64 a1)
{
  int v1; // eax
  _DWORD **v2; // rcx
  __int64 v3; // rsi
  __int64 result; // rax
  _DWORD *v5; // rdx

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    return 0;
  v2 = (_DWORD **)(a1 + 40);
  v3 = a1 + 8LL * (unsigned int)(v1 - 1) + 48;
  LODWORD(result) = 0;
  do
  {
    v5 = *v2++;
    result = (*v5 >> 14) & 0x1B | (unsigned int)result;
  }
  while ( (_DWORD **)v3 != v2 );
  return result;
}
