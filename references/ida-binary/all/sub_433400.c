__int64 __fastcall revert_if_unchanged_action_t__::vfunc_1(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *a2;
  v3 = *a2 + 48 * a2[1];
  if ( v3 == *a2 )
    return 0;
  while ( (*(_WORD *)(v2 + 24) & 0x120) == 0 )
  {
    v2 += 48;
    if ( v3 == v2 )
      return 0;
  }
  return 1;
}
