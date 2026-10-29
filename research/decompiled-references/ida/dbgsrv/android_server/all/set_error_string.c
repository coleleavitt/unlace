/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_error_string
// Address: 0x00000000000B2310

//----- (00000000000B2310) ----------------------------------------------------
_QWORD *__fastcall set_error_string(pthread_mutex_t *a1, const char *a2)
{
  __int64 v3; // x24
  pthread_mutex_t *v4; // x19
  size_t v5; // x0
  size_t v6; // x21
  unsigned __int64 v7; // x22
  void *v8; // x23
  void *align; // x20
  _QWORD *v10; // x21
  __int64 v11; // x0
  size_t v12; // x20
  unsigned __int64 v13; // x21
  void *v14; // x22
  _QWORD *v15; // x23
  char *v16; // x8
  __int64 v17; // x19
  _QWORD *result; // x0

  if ( (unsigned int)a1 < 4 )
  {
    v3 = (int)a1;
    v4 = (pthread_mutex_t *)&_emutls_get_address((size_t *)qword_166910)[3 * (int)a1 + 4];
    if ( !a2 )
    {
      align = (void *)v4->__align;
      if ( v4->__align )
      {
        v10 = &_emutls_get_address((size_t *)qword_166910)[3 * v3];
        v10[5] = 0;
        qfree(align);
        v4->__align = 0;
        v10[6] = 0;
      }
      goto LABEL_21;
    }
    if ( *a2 )
    {
      v5 = strlen(a2);
      if ( v5 )
      {
        v6 = v5;
        v7 = v5 + 1;
        if ( _emutls_get_address((size_t *)qword_166910)[3 * v3 + 6] >= v5 + 1 )
        {
          v8 = (void *)v4->__align;
        }
        else
        {
          v8 = qvector_reserve(v4, (void *)v4->__align, v7, 1u);
          v4->__align = (__int64)v8;
        }
        _emutls_get_address((size_t *)qword_166910)[3 * v3 + 5] = v7;
        memmove(v8, a2, v6);
        *(_BYTE *)(v4->__align + v6) = 0;
      }
      else
      {
        _emutls_get_address((size_t *)qword_166910)[3 * v3 + 5] = 0;
      }
      goto LABEL_21;
    }
    v11 = __strlen_chk(" ", 2);
    if ( v11 )
    {
      v12 = v11;
      v13 = v11 + 1;
      if ( _emutls_get_address((size_t *)qword_166910)[3 * v3 + 6] >= (unsigned __int64)(v11 + 1) )
      {
        v14 = (void *)v4->__align;
      }
      else
      {
        v14 = qvector_reserve(v4, (void *)v4->__align, v13, 1u);
        v4->__align = (__int64)v14;
      }
      v15 = &_emutls_get_address((size_t *)qword_166910)[3 * v3];
      v15[5] = v13;
      memmove(v14, " ", v12);
      *(_BYTE *)(v4->__align + v12) = 0;
      if ( v15[5] )
      {
        v16 = (char *)v4->__align;
LABEL_20:
        *v16 = 0;
LABEL_21:
        v17 = v4->__align;
        result = _emutls_get_address((size_t *)qword_166910);
        result[v3] = v17;
        return result;
      }
    }
    else
    {
      _emutls_get_address((size_t *)qword_166910)[3 * v3 + 5] = 0;
    }
    v16 = &byte_166A39;
    goto LABEL_20;
  }
  if ( !under_debugger )
    a1 = interr(481);
  __break(1u);
  return get_error_data(a1);
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 166910: using guessed type __int64 qword_166910[4];
// 166A39: using guessed type char byte_166A39;
// 168DF0: using guessed type char under_debugger;
