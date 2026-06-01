__int64 __fastcall enable_disable_bpt_ah_t__::vfunc_5(__int64 a1, __int64 *a2)
{
  void *v3; // rsi
  __int64 v5; // rax

  v3 = (void *)*a2;
  if ( (unsigned __int64)a2[2] <= 0xE )
  {
    v5 = qvector_reserve(a2, v3, 15, 1);
    *a2 = v5;
    v3 = (void *)v5;
  }
  a2[1] = 15;
  qmemcpy(v3, "No breakpoint!", 14);
  *(_BYTE *)(*a2 + 14) = 0;
  return 1;
}
