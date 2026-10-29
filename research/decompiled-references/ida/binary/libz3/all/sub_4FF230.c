__int64 __fastcall sub_4FF230(__int64 a1, unsigned int a2, __int64 *a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rdx
  bool v9; // zf
  unsigned int v10; // edx
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // edx

  v4 = a2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL);
  do
  {
    v6 = v4;
    v4 = *(_DWORD *)(v5 + 4LL * v4);
  }
  while ( v6 != v4 );
  v7 = *a3;
  v8 = v4 >> 5;
  if ( *a3 )
  {
    if ( (unsigned int)v8 < *(_DWORD *)(v7 - 4) )
    {
      v9 = (*(_DWORD *)(v7 + 4 * v8) & (1 << v4)) == 0;
      v10 = 1;
      if ( !v9 )
        return v10;
    }
  }
  do
  {
    v12 = a2;
    a2 = *(_DWORD *)(v5 + 4LL * a2);
  }
  while ( v12 != a2 );
  v13 = a3[1];
  v10 = 0;
  v14 = a2 >> 5;
  if ( !v13 || v14 >= *(_DWORD *)(v13 - 4) )
    return v10;
  v15 = a2 >> 5;
  LOBYTE(v15) = (*(_DWORD *)(v13 + 4LL * v14) & (1 << a2)) != 0;
  return v15;
}

