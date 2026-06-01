/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5C00
// Address: 0x00000000000A5C00

//----- (00000000000A5C00) ----------------------------------------------------
_BYTE *__fastcall sub_A5C00(__int64 a1, unsigned __int64 *a2)
{
  const char *v3; // r14
  _BYTE *result; // rax
  size_t v6; // r12
  char **v7; // r13
  _BYTE *v8; // rbx
  char *v9; // rdi

  *(_DWORD *)a1 = unpack_dd(a2, a2[1]);
  *(_BYTE *)(a1 + 4) = (unsigned int)unpack_dd(a2, a2[1]) != 0;
  *(_QWORD *)(a1 + 8) = unpack_dq(a2, a2[1]) - 1;
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
    *(_QWORD *)(a1 + 24) = 0;
    return result;
  }
  v6 = (size_t)result;
  v7 = (char **)(a1 + 16);
  v8 = result + 1;
  if ( *(_QWORD *)(a1 + 32) >= (unsigned __int64)(result + 1) )
  {
    v9 = *v7;
  }
  else
  {
    v9 = (char *)qvector_reserve(a1 + 16, *v7, (unsigned __int64)(result + 1), 1u);
    *v7 = v9;
  }
  *(_QWORD *)(a1 + 24) = v8;
  memmove(v9, v3, v6);
  result = *(_BYTE **)(a1 + 16);
  result[v6] = 0;
  return result;
}
