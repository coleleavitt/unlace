/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9F3E8
// Address: 0x000000000009F3E8

//----- (000000000009F3E8) ----------------------------------------------------
unsigned __int64 __fastcall sub_9F3E8(__int64 a1, unsigned __int64 *a2)
{
  const char *v2; // x21
  _BYTE *v5; // x9
  size_t v7; // x0
  unsigned __int64 v8; // x23
  size_t v9; // x22
  void *v10; // x0
  unsigned __int64 result; // x0

  v2 = (const char *)*a2;
  v5 = (_BYTE *)*a2;
  do
  {
    if ( (unsigned __int64)v5 >= a2[1] )
      goto LABEL_8;
  }
  while ( *v5++ );
  *a2 = (unsigned __int64)v5;
  if ( !v2 || (v7 = strlen(v2)) == 0 )
  {
LABEL_8:
    *(_QWORD *)(a1 + 8) = 0;
    goto LABEL_9;
  }
  v8 = v7 + 1;
  v9 = v7;
  if ( *(_QWORD *)(a1 + 16) >= v7 + 1 )
  {
    v10 = *(void **)a1;
  }
  else
  {
    v10 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v8, 1u);
    *(_QWORD *)a1 = v10;
  }
  *(_QWORD *)(a1 + 8) = v8;
  memmove(v10, v2, v9);
  *(_BYTE *)(*(_QWORD *)a1 + v9) = 0;
LABEL_9:
  *(_QWORD *)(a1 + 24) = unpack_dq(a2, a2[1]) - 1;
  *(_QWORD *)(a1 + 32) = unpack_dq(a2, a2[1]) - 1;
  result = unpack_dq(a2, a2[1]);
  *(_QWORD *)(a1 + 40) = result - 1;
  return result;
}
