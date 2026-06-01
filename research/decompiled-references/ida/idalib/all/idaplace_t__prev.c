__int64 __fastcall idaplace_t__prev(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = prev_visea(*(_QWORD *)(a1 + 16));
  return 1;
}
