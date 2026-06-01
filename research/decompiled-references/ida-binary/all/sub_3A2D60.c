__int64 __fastcall tchooser_persistence_helper_t__::vfunc_2(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax

  v2 = sub_3A2B10(a1, 0);
  if ( v2 == -1 )
    return 0;
  v4 = netnode_altval(v2, 0, 65);
  if ( !v4 )
    return 0;
  *a2 = v4 - 1;
  return 1;
}
