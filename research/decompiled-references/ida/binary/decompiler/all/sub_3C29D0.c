__int64 __fastcall sub_3C29D0(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 result; // rax

  if ( *a2 >= a3 )
    return 0;
  a1[2] = unpack_dd();
  a1[3] = unpack_dd();
  result = 0;
  if ( *a2 < a3 )
  {
    a1[4] = unpack_dd();
    return 1;
  }
  return result;
}
