__int64 __fastcall sub_7C5540(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 result; // rax

  v3 = a2 + 16LL;
  v4 = a3 + 16LL;
  result = *(unsigned int *)(a1 + 4 * v3);
  *(_DWORD *)(a1 + 4 * v3) = *(_DWORD *)(a1 + 4 * v4);
  *(_DWORD *)(a1 + 4 * v4) = result;
  return result;
}

