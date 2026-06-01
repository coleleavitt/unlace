__int64 __fastcall sub_76D480(__int64 a1)
{
  unsigned int v1; // eax
  _DWORD **v2; // rdx
  unsigned int v3; // esi
  __int64 v4; // rdi
  _DWORD *v5; // rax
  _DWORD **v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // eax

  v1 = *(_DWORD *)(a1 + 16) & 0x7FFFFFFF;
  if ( !v1 )
    return 0;
  if ( *(char *)(a1 + 19) < 0 )
  {
    v7 = (_DWORD **)(a1 + 40);
    v3 = 0;
    v8 = a1 + 8 * (v1 - 1 + 2LL * v1) + 8;
    v9 = a1 + 16LL * v1;
    do
    {
      if ( *(_DWORD *)(v9 + 40) )
        v10 = ((unsigned __int8)(*v7[1] >> 14) | (unsigned __int8)(**v7 >> 14)) & 0x1A;
      else
        v10 = ((unsigned __int8)(*v7[1] >> 14) | (unsigned __int8)(**v7 >> 14)) & 0x1B;
      v9 += 8;
      v3 |= v10;
      v7 += 2;
    }
    while ( v9 != v8 );
  }
  else
  {
    v2 = (_DWORD **)(a1 + 40);
    v3 = 0;
    v4 = a1 + 16LL * (v1 - 1) + 56;
    do
    {
      v5 = *v2;
      v2 += 2;
      v3 |= ((unsigned __int8)(*v5 >> 14) | (unsigned __int8)(**(v2 - 1) >> 14)) & 0x1B;
    }
    while ( v2 != (_DWORD **)v4 );
  }
  return v3;
}

