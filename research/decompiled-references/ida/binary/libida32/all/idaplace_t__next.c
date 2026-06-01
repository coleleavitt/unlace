__int64 __fastcall idaplace_t__next(__int64 a1)
{
  *(_DWORD *)(a1 + 12) = next_visea(*(unsigned int *)(a1 + 12));
  return 1;
}

