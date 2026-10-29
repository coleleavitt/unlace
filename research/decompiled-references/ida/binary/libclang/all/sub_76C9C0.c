__int64 __fastcall sub_76C9C0(__int64 a1)
{
  _DWORD **v1; // rdx
  unsigned int v2; // ecx
  __int64 v3; // rax
  _DWORD **v4; // rsi
  _DWORD *v5; // rax

  v1 = (_DWORD **)(a1 + 16);
  v2 = 0;
  v3 = 8LL * *(unsigned int *)(a1 + 72);
  v4 = (_DWORD **)(a1 + 16 + v3);
  if ( v3 )
  {
    do
    {
      v5 = *v1++;
      v2 |= (*v5 >> 14) & 0x1F;
    }
    while ( v4 != v1 );
  }
  return v2;
}

