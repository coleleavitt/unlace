__int64 __fastcall decode_preceding_insn(__int64 a1, unsigned int a2, char *a3)
{
  unsigned int first_fcref_to; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  char v10; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  if ( !a1 )
  {
    if ( !under_debugger )
      interr(1468);
    BUG();
  }
  first_fcref_to = get_first_fcref_to(a2);
  v9 = first_fcref_to;
  if ( first_fcref_to >= a2 )
  {
    v9 = a2;
    if ( (get_flags_ex(a2, 4) & 0x10000) != 0 )
    {
      do
        --v9;
      while ( (get_flags_ex(v9, 4) & 0x600) == 0x200 );
      v10 = 0;
      if ( (unsigned int)decode_insn(a1, v9, v12, v13, v14, v15) )
        goto LABEL_4;
    }
    return 0xFFFFFFFFLL;
  }
  v10 = 1;
  if ( !(unsigned int)decode_insn(a1, first_fcref_to, v5, v6, v7, v8) )
    return 0xFFFFFFFFLL;
LABEL_4:
  if ( a3 )
    *a3 = v10;
  return v9;
}

