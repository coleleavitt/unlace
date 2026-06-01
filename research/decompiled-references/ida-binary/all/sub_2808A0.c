__int64 __fastcall exp_chooser_t__::vfunc_9(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r12
  __int64 entry_qty; // rbx
  __int64 result; // rax
  __int64 v5; // r14
  unsigned __int64 v6; // r13
  __int64 v7; // rbp
  __int64 entry_ordinal; // rax
  unsigned __int64 entry; // rax

  v2 = *a2;
  if ( *a2 == -1 )
    return -1;
  entry_qty = get_entry_qty();
  if ( !entry_qty )
    return -1;
  result = 0;
  if ( entry_qty != 1 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      entry_ordinal = get_entry_ordinal(v5);
      if ( entry_ordinal != -1 )
      {
        entry = get_entry(entry_ordinal);
        if ( v2 == entry )
          return v5;
        if ( v2 >= entry && v6 < entry )
        {
          v6 = entry;
          v7 = v5;
        }
      }
      if ( entry_qty == ++v5 )
        return v7;
    }
  }
  return result;
}
