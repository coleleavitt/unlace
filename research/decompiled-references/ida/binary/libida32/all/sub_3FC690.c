__int64 __fastcall sub_3FC690(__int64 a1)
{
  __int64 flags; // rax
  unsigned int first_dref_from; // eax
  unsigned __int64 v4; // rax

  flags = get_flags_ex(a1, 4);
  if ( (flags & 0x600) == 0x400
    && (flags & 0xF00000) == 0x500000
    && (first_dref_from = get_first_dref_from((unsigned int)a1),
        v4 = get_flags_ex(first_dref_from, 4),
        (~(_WORD)v4 & 0x600) == 0) )
  {
    return (v4 >> 28) & 1;
  }
  else
  {
    return 0;
  }
}

