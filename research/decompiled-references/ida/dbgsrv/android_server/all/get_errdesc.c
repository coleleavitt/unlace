/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_errdesc
// Address: 0x00000000000B286C

//----- (00000000000B286C) ----------------------------------------------------
__int64 __fastcall get_errdesc(const void *a1, unsigned int a2)
{
  size_t v4; // x0
  size_t v5; // x21
  unsigned __int64 v6; // x22
  _QWORD *address; // x0
  void *v8; // x23
  pthread_mutex_t *v9; // x24
  _QWORD *v10; // x24
  size_t v11; // x20
  _QWORD *v12; // x0
  __int64 v13; // x8
  void *v14; // x21
  __int64 v15; // x24
  unsigned __int64 v16; // x22
  pthread_mutex_t *v17; // x23
  _QWORD *v18; // x0
  const char *v19; // x0
  const char *v20; // x19
  size_t v21; // x20
  _QWORD *v22; // x0
  __int64 v23; // x8
  void *v24; // x21
  __int64 v25; // x24
  unsigned __int64 v26; // x22
  pthread_mutex_t *v27; // x23
  _QWORD *v28; // x0

  if ( a1 && (v4 = strlen((const char *)a1)) != 0 )
  {
    v5 = v4;
    v6 = v4 + 1;
    address = _emutls_get_address((size_t *)qword_166910);
    v8 = (void *)address[25];
    if ( address[27] < v6 )
    {
      v9 = (pthread_mutex_t *)_emutls_get_address((size_t *)qword_166910);
      v8 = qvector_reserve(v9 + 5, v8, v6, 1u);
      v9[5].__align = (__int64)v8;
    }
    v10 = _emutls_get_address((size_t *)qword_166910);
    v10[26] = v6;
    memmove(v8, a1, v5);
    *(_BYTE *)(v10[25] + v5) = 0;
  }
  else
  {
    _emutls_get_address((size_t *)qword_166910)[26] = 0;
  }
  v11 = __strlen_chk(": ", 3);
  v12 = _emutls_get_address((size_t *)qword_166910);
  v14 = (void *)v12[25];
  v13 = v12[26];
  if ( v13 )
    v15 = v13 - 1;
  else
    v15 = 0;
  v16 = v15 + v11 + 1;
  if ( v12[27] < v16 )
  {
    v17 = (pthread_mutex_t *)_emutls_get_address((size_t *)qword_166910);
    v14 = qvector_reserve(v17 + 5, v14, v15 + v11 + 1, 1u);
    v17[5].__align = (__int64)v14;
  }
  v18 = _emutls_get_address((size_t *)qword_166910);
  v18[26] = v16;
  *((_BYTE *)v14 + v15 + v11) = 0;
  memmove((void *)(v18[25] + v15), ": ", v11);
  v19 = qstrerror(a2);
  if ( v19 )
  {
    v20 = v19;
    v21 = strlen(v19);
    v22 = _emutls_get_address((size_t *)qword_166910);
    v24 = (void *)v22[25];
    v23 = v22[26];
    if ( v23 )
      v25 = v23 - 1;
    else
      v25 = 0;
    v26 = v25 + v21 + 1;
    if ( v22[27] < v26 )
    {
      v27 = (pthread_mutex_t *)_emutls_get_address((size_t *)qword_166910);
      v24 = qvector_reserve(v27 + 5, v24, v25 + v21 + 1, 1u);
      v27[5].__align = (__int64)v24;
    }
    v28 = _emutls_get_address((size_t *)qword_166910);
    v28[26] = v26;
    *((_BYTE *)v24 + v25 + v21) = 0;
    memmove((void *)(v28[25] + v25), v20, v21);
  }
  return _emutls_get_address((size_t *)qword_166910)[25];
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 166910: using guessed type __int64 qword_166910[4];
