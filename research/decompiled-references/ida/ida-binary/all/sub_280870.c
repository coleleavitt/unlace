__int64 __fastcall exp_chooser_t__::vfunc_7(__int64 a1, __int64 a2)
{
  __int64 entry_ordinal; // rax

  entry_ordinal = get_entry_ordinal(a2);
  if ( entry_ordinal == -1 )
    return -1;
  else
    return get_entry(entry_ordinal);
}
