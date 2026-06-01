__int64 __fastcall decode_preceding_insn(__int64 a1, unsigned __int64 a2, char *a3, double a4)
{
  unsigned __int64 first_fcref_to; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  char v11; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  if ( !a1 )
  {
    if ( !under_debugger )
      interr(1468);
    BUG();
  }
  first_fcref_to = get_first_fcref_to(a2);
  v10 = first_fcref_to;
  if ( first_fcref_to >= a2 )
  {
    v10 = a2;
    if ( (get_flags_ex(a2, 4) & 0x10000) != 0 )
    {
      do
        --v10;
      while ( (get_flags_ex(v10, 4) & 0x600) == 0x200 );
      v11 = 0;
      if ( (unsigned int)decode_insn(a1, v10, v13, v14, v15, v16, a4) )
        goto LABEL_4;
    }
    return -1;
  }
  v11 = 1;
  if ( !(unsigned int)decode_insn(a1, first_fcref_to, v6, v7, v8, v9, a4) )
    return -1;
LABEL_4:
  if ( a3 )
    *a3 = v11;
  return v10;
}
