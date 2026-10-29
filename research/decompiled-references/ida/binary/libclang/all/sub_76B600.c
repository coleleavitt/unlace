__int64 __fastcall sub_76B600(__int64 a1)
{
  _DWORD **v1; // rdx
  unsigned int v2; // ecx
  __int64 v3; // rsi
  _DWORD *v4; // rax

  v1 = (_DWORD **)(a1 + 24);
  v2 = 0;
  v3 = a1 + 24 + 8LL * *(unsigned int *)(a1 + 4);
  if ( v3 != a1 + 24 )
  {
    do
    {
      v4 = *v1++;
      v2 |= (*v4 >> 14) & 0x1F;
    }
    while ( (_DWORD **)v3 != v1 );
  }
  return v2;
}

