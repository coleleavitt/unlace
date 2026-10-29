/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0860
// Address: 0x00000000000A0860

//----- (00000000000A0860) ----------------------------------------------------
size_t __fastcall sub_A0860(__int64 a1, unsigned __int64 *a2)
{
  size_t result; // x0
  const char *v5; // x20
  _BYTE *v6; // x9
  unsigned __int64 v8; // x22
  size_t v9; // x21
  void **v10; // x23
  void *v11; // x0

  result = unpack_dd(a2, a2[1]);
  *(_DWORD *)(a1 + 4) = result;
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
    *(_QWORD *)(a1 + 16) = 0;
    return result;
  }
  v8 = result + 1;
  v9 = result;
  v10 = (void **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 24) >= result + 1 )
  {
    v11 = *v10;
  }
  else
  {
    v11 = qvector_reserve((pthread_mutex_t *)(a1 + 8), *v10, v8, 1u);
    *v10 = v11;
  }
  *(_QWORD *)(a1 + 16) = v8;
  result = (size_t)memmove(v11, v5, v9);
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + v9) = 0;
  return result;
}
