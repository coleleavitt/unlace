__int64 __fastcall get_merge_handler(int a1)
{
  __int64 *merge_handlers; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  merge_handlers = (__int64 *)get_merge_handlers(0);
  v2 = *merge_handlers;
  v3 = *merge_handlers + 8 * merge_handlers[1];
  if ( v3 == *merge_handlers )
    return 0;
  while ( *(_DWORD *)(*(_QWORD *)v2 + 40LL) != a1 )
  {
    v2 += 8;
    if ( v3 == v2 )
      return 0;
  }
  return *(_QWORD *)v2;
}

