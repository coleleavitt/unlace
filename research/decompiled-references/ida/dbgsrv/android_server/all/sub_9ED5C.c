/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9ED5C
// Address: 0x000000000009ED5C

//----- (000000000009ED5C) ----------------------------------------------------
size_t __fastcall sub_9ED5C(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // x21
  unsigned __int64 v5; // x21
  size_t result; // x0
  const char *v7; // x21
  _BYTE *v8; // x9
  unsigned __int64 v10; // x23
  size_t v11; // x22
  void **v12; // x24
  void *v13; // x0
  const char *v14; // x21
  _BYTE *v15; // x9
  unsigned __int64 v17; // x22
  size_t v18; // x20
  void **v19; // x23
  void *v20; // x0

  v4 = unpack_dq(a2, a2[1]) - 1;
  *(_QWORD *)(a1 + 64) = v4;
  v5 = unpack_dq(a2, a2[1]) + 16 * v4 - 1;
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v5 + unpack_dq(a2, a2[1]) - 1;
  result = unpack_dd(a2, a2[1]);
  *(_BYTE *)(a1 + 73) = result & 7;
  *(_BYTE *)(a1 + 72) = (unsigned int)result >> 4;
  v7 = (const char *)*a2;
  v8 = (_BYTE *)*a2;
  do
  {
    if ( (unsigned __int64)v8 >= a2[1] )
      goto LABEL_8;
  }
  while ( *v8++ );
  *a2 = (unsigned __int64)v8;
  if ( !v7 || (result = strlen(v7)) == 0 )
  {
LABEL_8:
    *(_QWORD *)(a1 + 24) = 0;
    goto LABEL_9;
  }
  v10 = result + 1;
  v11 = result;
  v12 = (void **)(a1 + 16);
  if ( *(_QWORD *)(a1 + 32) >= result + 1 )
  {
    v13 = *v12;
  }
  else
  {
    v13 = qvector_reserve((pthread_mutex_t *)(a1 + 16), *v12, v10, 1u);
    *v12 = v13;
  }
  *(_QWORD *)(a1 + 24) = v10;
  result = (size_t)memmove(v13, v7, v11);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + v11) = 0;
LABEL_9:
  v14 = (const char *)*a2;
  v15 = (_BYTE *)*a2;
  do
  {
    if ( (unsigned __int64)v15 >= a2[1] )
      goto LABEL_16;
  }
  while ( *v15++ );
  *a2 = (unsigned __int64)v15;
  if ( !v14 || (result = strlen(v14)) == 0 )
  {
LABEL_16:
    *(_QWORD *)(a1 + 48) = 0;
    return result;
  }
  v17 = result + 1;
  v18 = result;
  v19 = (void **)(a1 + 40);
  if ( *(_QWORD *)(a1 + 56) >= result + 1 )
  {
    v20 = *v19;
  }
  else
  {
    v20 = qvector_reserve((pthread_mutex_t *)(a1 + 40), *v19, v17, 1u);
    *v19 = v20;
  }
  *(_QWORD *)(a1 + 48) = v17;
  result = (size_t)memmove(v20, v14, v18);
  *(_BYTE *)(*(_QWORD *)(a1 + 40) + v18) = 0;
  return result;
}
