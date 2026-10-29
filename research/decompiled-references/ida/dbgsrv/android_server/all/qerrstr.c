/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qerrstr
// Address: 0x00000000000B2660

//----- (00000000000B2660) ----------------------------------------------------
__int64 __fastcall qerrstr(__int64 errnum)
{
  int v1; // w19
  char *v2; // x0
  char *v3; // x20
  size_t v4; // x0
  size_t v5; // x21
  unsigned __int64 v6; // x22
  _QWORD *v7; // x0
  void *v8; // x23
  _QWORD *v9; // x24
  _QWORD *v10; // x24
  _QWORD *address; // x0

  v1 = errnum;
  if ( (_DWORD)errnum == -1 )
    v1 = *(_DWORD *)__errno(errnum);
  v2 = strerror(v1);
  if ( !v2 || (v3 = v2, (v4 = strlen(v2)) == 0) )
  {
    _emutls_get_address((size_t *)qword_166910)[23] = 0;
LABEL_10:
    address = _emutls_get_address((size_t *)qword_166910);
    sub_3C748((__int64)(address + 22), "unknown error code %d", v1);
    return _emutls_get_address((size_t *)qword_166910)[22];
  }
  v5 = v4;
  v6 = v4 + 1;
  v7 = _emutls_get_address((size_t *)qword_166910);
  v8 = (void *)v7[22];
  if ( v7[24] < v6 )
  {
    v9 = _emutls_get_address((size_t *)qword_166910);
    v8 = qvector_reserve((pthread_mutex_t *)(v9 + 22), v8, v6, 1u);
    v9[22] = v8;
  }
  v10 = _emutls_get_address((size_t *)qword_166910);
  v10[23] = v6;
  memmove(v8, v3, v5);
  *(_BYTE *)(v10[22] + v5) = 0;
  if ( v10[23] <= 1u )
    goto LABEL_10;
  return _emutls_get_address((size_t *)qword_166910)[22];
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 166910: using guessed type __int64 qword_166910[4];
