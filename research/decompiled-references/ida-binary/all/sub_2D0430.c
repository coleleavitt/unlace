__int64 __fastcall hintplace_t__::vfunc_13(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  if ( *a2 >= a3 )
    return 0;
  *(_DWORD *)(a1 + 8) = unpack_dd(a2, a3);
  return 1;
}
