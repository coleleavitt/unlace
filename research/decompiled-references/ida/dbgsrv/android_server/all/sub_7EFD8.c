/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EFD8
// Address: 0x000000000007EFD8

//----- (000000000007EFD8) ----------------------------------------------------
__int64 __fastcall sub_7EFD8(__int64 a1, char *a2, __int64 a3, int a4, int a5, int a6, int a7, int a8)
{
  __int64 v8; // x19

  if ( *(_BYTE *)(a1 + 672) )
  {
    if ( !under_debugger )
      LODWORD(a1) = (unsigned int)interr(302);
    __break(1u);
    return lex_undefine_macro(a1, a2);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 624);
    *(_QWORD *)(a1 + 624) = 0;
    sub_7CEC8(a1, 0, 0, a4, a5, a6, a7, a8);
    return v8;
  }
}
// 7F01D: variable 'a2' is possibly undefined
// 168DF0: using guessed type char under_debugger;
