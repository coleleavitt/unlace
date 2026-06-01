__int64 __fastcall sub_B40DF0(__int64 a1)
{
  _DWORD **v1; // rcx
  __int64 v2; // rsi
  __int64 result; // rax
  _DWORD *v4; // rdx

  v1 = (_DWORD **)(a1 + 24);
  v2 = a1 + 24 + 8LL * *(unsigned __int16 *)(a1 + 4) - 8;
  result = (**(_DWORD **)(a1 + 16) >> 14) & 0x1F;
  if ( v2 != a1 + 24 )
  {
    do
    {
      v4 = *v1++;
      result = (*v4 >> 14) & 0x1F | (unsigned int)result;
    }
    while ( (_DWORD **)v2 != v1 );
  }
  return result;
}

