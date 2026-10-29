/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_error_string
// Address: 0x00000000000B2588

//----- (00000000000B2588) ----------------------------------------------------
_QWORD *__fastcall get_error_string(unsigned int a1)
{
  if ( a1 < 4 )
    return (_QWORD *)_emutls_get_address((size_t *)qword_166910)[3 * (int)a1 + 4];
  if ( !under_debugger )
    interr(483);
  __break(1u);
  return sub_B25D4();
}
// 166910: using guessed type __int64 qword_166910[4];
// 168DF0: using guessed type char under_debugger;
