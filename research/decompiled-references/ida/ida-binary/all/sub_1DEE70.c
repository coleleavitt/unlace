__int64 __fastcall dbgreg_place_t__::vfunc_13(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 result; // rax

  if ( *a2 >= a3 )
    return 0;
  a1[2] = unpack_dd(a2, a3);
  result = 0;
  if ( *a2 < a3 )
  {
    a1[3] = unpack_dd(a2, a3);
    a1[4] = unpack_dd(a2, a3);
    a1[5] = unpack_dd(a2, a3);
    return 1;
  }
  return result;
}
