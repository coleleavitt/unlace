__int64 __fastcall sub_13AF40(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 *v6; // rdx
  int tinfo_udt_member; // r15d
  unsigned int v8; // eax
  unsigned int v9; // [rsp+Ch] [rbp-1ACh]
  char v10; // [rsp+B8h] [rbp-100h] BYREF
  unsigned __int64 v11; // [rsp+178h] [rbp-40h] BYREF

  v11 = __readfsqword(0x28u);
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
    return 1;
  if ( !get_func() )
    return 1;
  v6 = (unsigned __int64 *)&v10;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 3;
    *((_WORD *)v6 - 11) = 0;
    *((_WORD *)v6 - 10) = 0;
    *((_DWORD *)v6 - 1) = 0;
    *((_WORD *)v6 - 9) = 0;
    *(v6 - 2) = 0;
    *((_DWORD *)v6 - 2) = 0;
  }
  while ( v6 != &v11 );
  if ( !(unsigned int)decode_insn() )
    return 1;
  calc_stkvar_struc_offset();
  tinfo_get_func_frame();
  tinfo_udt_member = find_tinfo_udt_member();
  clear_tinfo_t();
  if ( tinfo_udt_member == -1 && !(unsigned __int8)insn_create_stkvar() && (a4 & 2) != 0 )
    v8 = 0;
  else
    v8 = (unsigned __int8)op_stkvar();
  v9 = v8;
  clear_tinfo_t();
  return v9;
}

