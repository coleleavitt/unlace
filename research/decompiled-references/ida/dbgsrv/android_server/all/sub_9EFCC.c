/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9EFCC
// Address: 0x000000000009EFCC

//----- (000000000009EFCC) ----------------------------------------------------
unsigned __int64 __fastcall sub_9EFCC(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // x0
  const char *v5; // x20
  _BYTE *v6; // x9
  unsigned __int64 v8; // x22
  size_t v9; // x21
  void **v10; // x23
  void *v11; // x0

  *(_QWORD *)a1 = unpack_dq(a2, a2[1]) - 1;
  result = unpack_dq(a2, a2[1]);
  *(_QWORD *)(a1 + 8) = result - 1;
  v5 = (const char *)*a2;
  v6 = (_BYTE *)*a2;
  do
  {
    if ( (unsigned __int64)v6 >= a2[1] )
      goto LABEL_8;
  }
  while ( *v6++ );
  *a2 = (unsigned __int64)v6;
  if ( !v5 || (result = strlen(v5)) == 0 )
  {
LABEL_8:
    *(_QWORD *)(a1 + 24) = 0;
    return result;
  }
  v8 = result + 1;
  v9 = result;
  v10 = (void **)(a1 + 16);
  if ( *(_QWORD *)(a1 + 32) >= result + 1 )
  {
    v11 = *v10;
  }
  else
  {
    v11 = qvector_reserve((pthread_mutex_t *)(a1 + 16), *v10, v8, 1u);
    *v10 = v11;
  }
  *(_QWORD *)(a1 + 24) = v8;
  result = (unsigned __int64)memmove(v11, v5, v9);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + v9) = 0;
  return result;
}
