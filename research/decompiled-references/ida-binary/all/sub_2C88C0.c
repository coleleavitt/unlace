__int64 __fastcall hv_hexplace_gen_t__::vfunc_9(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = nbits(a2);
  v3 = *(_DWORD *)(a1 + 28);
  if ( (unsigned int)(v2 - 1) <= 7 )
    v3 *= *(_DWORD *)(a1 + 24);
  return v3;
}
