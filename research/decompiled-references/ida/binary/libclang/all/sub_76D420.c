__int64 __fastcall sub_76D420(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned int v3; // edx
  _DWORD *v4; // rax

  v1 = *(unsigned int *)(a1 + 16);
  if ( !(_DWORD)v1 )
    return 0;
  v2 = a1 + 8 * v1;
  v3 = 0;
  do
  {
    v4 = *(_DWORD **)(a1 + 40);
    a1 += 8;
    v3 |= (*v4 >> 14) & 0x1B;
  }
  while ( v2 != a1 );
  return v3;
}

