__int64 __fastcall sub_EF5120(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int *v3; // rbp
  __int64 v4; // r13
  char v5; // al
  __int64 v6; // rdx
  int v7; // ecx
  char v9; // al

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(unsigned int **)(a1 + 24);
  v4 = *v3;
  v5 = sub_FFF090(v2);
  v7 = 29;
  if ( !v5 )
  {
    if ( (unsigned __int8)sub_FFE580(v2, a2, v6, 29)
      || (unsigned __int8)sub_FFE5D0(v2)
      || (unsigned __int8)sub_FFEEE0(v2)
      || (v9 = sub_FFED80(v2), v7 = 8, v9) )
    {
      v7 = 16;
    }
  }
  return (__int64)&v3[2 * v4 + 4 + 2 * (unsigned int)(v7 + 6 * *(_DWORD *)(a1 + 32))];
}
