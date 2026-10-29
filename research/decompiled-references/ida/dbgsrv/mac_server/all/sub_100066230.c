/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100066230
// Address: 0x0000000100066230

//----- (0000000100066230) ----------------------------------------------------
size_t __fastcall sub_100066230(__int64 a1, unsigned __int64 *a2)
{
  const char *v2; // r14
  size_t result; // rax
  _BYTE *v4; // rcx
  _BYTE *v5; // rdx
  size_t v7; // r15
  unsigned __int64 v8; // r12
  void *v9; // rax

  *(_DWORD *)a1 = unpack_dd(a2, a2[1]);
  *(_BYTE *)(a1 + 4) = (unsigned int)unpack_dd(a2, a2[1]) != 0;
  *(_QWORD *)(a1 + 8) = unpack_dq(a2, a2[1]) - 1;
  v2 = (const char *)*a2;
  result = a2[1];
  v4 = (_BYTE *)*a2;
  do
  {
    if ( (unsigned __int64)v4 >= result )
      goto LABEL_9;
    v5 = v4 + 1;
  }
  while ( *v4++ != 0 );
  *a2 = (unsigned __int64)v5;
  if ( !v2 || (result = strlen(v2)) == 0 )
  {
LABEL_9:
    *(_QWORD *)(a1 + 24) = 0;
    return result;
  }
  v7 = result;
  v8 = result + 1;
  v9 = *(void **)(a1 + 16);
  if ( *(_QWORD *)(a1 + 32) < v8 )
  {
    v9 = qvector_reserve(a1 + 16, *(void **)(a1 + 16), v8, 1u);
    *(_QWORD *)(a1 + 16) = v9;
  }
  *(_QWORD *)(a1 + 24) = v8;
  memmove(v9, v2, v7);
  result = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(result + v7) = 0;
  return result;
}
