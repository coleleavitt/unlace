/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_error_data
// Address: 0x00000000000B2544

//----- (00000000000B2544) ----------------------------------------------------
_QWORD *__fastcall get_error_data(pthread_mutex_t *a1)
{
  if ( (unsigned int)a1 < 4 )
    return (_QWORD *)_emutls_get_address((size_t *)qword_166910)[(int)a1];
  if ( !under_debugger )
    LODWORD(a1) = (unsigned int)interr(482);
  __break(1u);
  return get_error_string((unsigned int)a1);
}
// 166910: using guessed type __int64 qword_166910[4];
// 168DF0: using guessed type char under_debugger;
