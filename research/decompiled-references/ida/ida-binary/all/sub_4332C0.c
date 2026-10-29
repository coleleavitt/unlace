__int64 __fastcall revert_action_t__::vfunc_1(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rdx

  v2 = a2[1];
  v3 = 0;
  if ( !v2 )
    return v3;
  v4 = *a2;
  v5 = *a2 + 48 * v2;
  if ( v5 == *a2 )
    return v3;
  do
  {
    if ( *(_DWORD *)(v4 + 28) != -1 || (*(_BYTE *)(v4 + 24) & 0x20) != 0 )
      return 1;
    v4 += 48;
  }
  while ( v5 != v4 );
  return 0;
}
