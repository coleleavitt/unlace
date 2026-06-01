/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_error_data
// Address: 0x00000000000B22C0

//----- (00000000000B22C0) ----------------------------------------------------
_QWORD *__fastcall set_error_data(pthread_mutex_t *a1, const char *a2)
{
  int v2; // w19
  _QWORD *result; // x0

  if ( (unsigned int)a1 >= 4 )
  {
    if ( !under_debugger )
      a1 = interr(480);
    __break(1u);
    return set_error_string(a1, a2);
  }
  else
  {
    v2 = (int)a1;
    result = _emutls_get_address((size_t *)qword_166910);
    result[v2] = a2;
  }
  return result;
}
// B230D: variable 'a2' is possibly undefined
// 166910: using guessed type __int64 qword_166910[4];
// 168DF0: using guessed type char under_debugger;
