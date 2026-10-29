unsigned __int64 __fastcall sub_8F0880(__int64 a1, char a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // r8d
  char v6; // cl
  unsigned __int64 v7; // rax
  int v8; // esi
  int v9; // r14d

  v5 = 0;
  v6 = 8 - a2;
  v7 = 0;
  do
  {
    v8 = *(__int16 *)(a1 + 2LL * v5);
    v9 = *(_DWORD *)(a3 + 4LL * v5);
    if ( *(_WORD *)(a1 + 2LL * v5) == 0xFFFF )
      v8 = 1;
    ++v5;
    v7 += (unsigned int)(dword_23B33E0[v8 << v6] * v9);
  }
  while ( a4 >= v5 );
  return v7 >> 8;
}

