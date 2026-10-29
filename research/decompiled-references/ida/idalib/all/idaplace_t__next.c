__int64 __fastcall idaplace_t__next(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = next_visea(*(_QWORD *)(a1 + 16));
  return 1;
}
