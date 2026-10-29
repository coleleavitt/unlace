unsigned __int64 __fastcall sub_A09840(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  char v3; // cl
  unsigned __int64 result; // rax
  int v5; // ecx
  char v6; // si
  int v7; // ecx
  __int64 v8; // r8
  int v9; // ecx
  int v10; // ecx
  int v11; // esi

  v1 = *a1;
  v2 = *a1 + 5;
  ++*a1;
  v3 = *(_BYTE *)v1;
  result = *(unsigned int *)(v1 + 1);
  *a1 = v2;
  v5 = v3 & 3;
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_DWORD *)(v1 + 5);
    *a1 = v1 + 9;
    v8 = v7 & 0x7FFFFFFF;
    if ( v6 == 1 )
    {
      return (((((v8 << 32) | result) >> 56) | 0x80) << 56) | ((v8 << 32) | result) & 0xFFFFFFFFFFFFFFLL;
    }
    else
    {
      v9 = *(_DWORD *)(v1 + 9);
      *a1 = v1 + 13;
      v10 = v9 & 0x7FFFFFFF;
      if ( v6 == 2 )
      {
        return (((((v8 << 32) | result) >> 56) | ((unsigned __int64)(v10 & 0x7FFFFFFF) << 8) | 0x8000000080LL) << 56)
             | ((v8 << 32) | result) & 0xFFFFFFFFFFFFFFLL;
      }
      else
      {
        v11 = *(_DWORD *)(v1 + 13);
        *a1 = v1 + 17;
        return (((((v8 << 32) | result) >> 56)
               | ((((unsigned __int64)(v11 & 0x7FFFFFFF) << 32) | v10 & 0x7FFFFFFF) << 8)
               | 0x8000000080LL) << 56)
             | ((v8 << 32) | result) & 0xFFFFFFFFFFFFFFLL;
      }
    }
  }
  return result;
}
