__int64 __fastcall sub_F9580(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r12d
  __int64 entry_qty; // rbx
  __int64 result; // rax
  __int64 v5; // r14
  unsigned int v6; // r13d
  __int64 v7; // rbp
  unsigned int entry; // eax

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
      if ( (unsigned int)get_entry_ordinal() != -1 )
      {
        entry = get_entry();
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

