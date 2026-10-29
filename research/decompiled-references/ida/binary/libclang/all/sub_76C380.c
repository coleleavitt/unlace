__int64 __fastcall sub_76C380(__int64 a1, _DWORD **a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned int v5; // esi
  _DWORD **v6; // rax
  _DWORD **i; // rdi
  _DWORD **v8; // rdi
  _DWORD **v9; // rdx
  _DWORD *v10; // rax

  v3 = *(unsigned __int8 *)(a1 + 3);
  v5 = (**(_DWORD **)(a1 + v3) >> 14) & 0x1B | 4;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    v5 = (**(_DWORD **)(a1 + v3) >> 14) & 0x1F;
  v6 = (_DWORD **)(a1 + v3 + 8LL * ((*(_BYTE *)(a1 + 2) & 8) != 0) + 8);
  for ( i = &v6[*(unsigned int *)(a1 + 16)]; i != v6; ++v6 )
  {
    if ( *v6 )
      v5 |= (**v6 >> 14) & 0x1F;
  }
  v8 = &a2[a3];
  if ( v8 != a2 )
  {
    v9 = a2;
    do
    {
      v10 = *v9++;
      v5 |= (*v10 >> 14) & 0x1F;
    }
    while ( v8 != v9 );
  }
  return v5;
}

