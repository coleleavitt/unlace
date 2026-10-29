/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6E30
// Address: 0x00000000000A6E30

//----- (00000000000A6E30) ----------------------------------------------------
_BYTE *__fastcall sub_A6E30(__int64 a1, unsigned __int64 *a2)
{
  const char *v3; // r14
  _BYTE *result; // rax
  size_t v6; // r15
  char **v7; // rbx
  _BYTE *v8; // r12
  char *v9; // rdi

  *(_DWORD *)(a1 + 4) = unpack_dd(a2, a2[1]);
  v3 = (const char *)*a2;
  result = (_BYTE *)*a2;
  do
  {
    if ( (unsigned __int64)result >= a2[1] )
      goto LABEL_8;
  }
  while ( *result++ != 0 );
  *a2 = (unsigned __int64)result;
  if ( !v3 || (result = (_BYTE *)strlen(v3)) == nullptr )
  {
LABEL_8:
    *(_QWORD *)(a1 + 16) = 0;
    return result;
  }
  v6 = (size_t)result;
  v7 = (char **)(a1 + 8);
  v8 = result + 1;
  if ( *(_QWORD *)(a1 + 24) >= (unsigned __int64)(result + 1) )
  {
    v9 = *v7;
  }
  else
  {
    v9 = (char *)qvector_reserve(a1 + 8, *v7, (unsigned __int64)(result + 1), 1u);
    *v7 = v9;
  }
  *(_QWORD *)(a1 + 16) = v8;
  memmove(v9, v3, v6);
  result = *(_BYTE **)(a1 + 8);
  result[v6] = 0;
  return result;
}
