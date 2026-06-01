__int64 __fastcall sub_76D2C0(__int64 a1)
{
  _DWORD **v1; // rdx
  unsigned int v2; // ecx
  __int64 v3; // rsi
  _DWORD *v4; // rax

  v1 = (_DWORD **)(a1 + 48);
  v2 = 0;
  v3 = a1 + 48 + 8LL * *(unsigned int *)(a1 + 16);
  if ( v3 != a1 + 48 )
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

