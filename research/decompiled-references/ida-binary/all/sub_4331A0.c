__int64 __fastcall checkout_for_add_action_t__::vfunc_1(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // edx

  v2 = *a2;
  v3 = *a2 + 48 * a2[1];
  if ( v3 == *a2 )
    return 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(v2 + 24);
    if ( (v4 & 0x20) != 0 || (v4 & 2) == 0 )
      break;
    v2 += 48;
    if ( v3 == v2 )
      return 0;
  }
  return 1;
}
