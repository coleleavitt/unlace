bool __fastcall sub_592880(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rax
  unsigned int v6; // esi
  int v7; // ecx
  int v8; // edx

  v3 = *(unsigned int *)(a1 + 56);
  v4 = *a2;
  if ( !(_DWORD)v3 )
    return (**(_DWORD **)(a1 + 48) & 1) != 0;
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4 * v5);
    v8 = *(_DWORD *)(v4 + 8 * v5++);
    v6 += v8 << v7;
  }
  while ( v3 != v5 );
  return (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 4LL * (v6 >> 5)) & (1 << v6)) != 0;
}

