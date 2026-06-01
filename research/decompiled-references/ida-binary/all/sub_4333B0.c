__int64 __fastcall migrate_file_to_worklist_action_t__::vfunc_1(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *a2;
  v3 = *a2 + 48 * a2[1];
  if ( v3 == *a2 )
    return 0;
  while ( *(_DWORD *)(v2 + 28) == -1 )
  {
    v2 += 48;
    if ( v2 == v3 )
      return 0;
  }
  return 1;
}
