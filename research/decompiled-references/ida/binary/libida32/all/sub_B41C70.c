__int64 __fastcall sub_B41C70(__int64 a1)
{
  _DWORD **v1; // rcx
  __int64 v2; // rsi
  __int64 result; // rax
  _DWORD *v4; // rdx

  v1 = (_DWORD **)(a1 + 48);
  v2 = a1 + 48 + 8LL * *(unsigned int *)(a1 + 16);
  result = 0;
  if ( v2 != a1 + 48 )
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

