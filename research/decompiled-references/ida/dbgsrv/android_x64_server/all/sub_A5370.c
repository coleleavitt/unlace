/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5370
// Address: 0x00000000000A5370

//----- (00000000000A5370) ----------------------------------------------------
_BYTE *__fastcall sub_A5370(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r15
  unsigned int v6; // eax
  const char *v7; // r15
  _BYTE *v8; // rax
  bool v9; // zf
  size_t v10; // rax
  size_t v11; // r12
  char **v12; // rbp
  size_t v13; // r13
  char *v14; // rdi
  const char *v15; // r15
  _BYTE *result; // rax
  size_t v17; // r12
  char **v18; // rbp
  _BYTE *v19; // rbx
  char *v20; // rdi

  v4 = unpack_dq(a2, a2[1]);
  *(_QWORD *)(a1 + 64) = v4 - 1;
  v5 = unpack_dq(a2, a2[1]) + 16 * (v4 - 1);
  *(_QWORD *)a1 = v5 - 1;
  *(_QWORD *)(a1 + 8) = v5 + unpack_dq(a2, a2[1]) - 2;
  v6 = unpack_dd(a2, a2[1]);
  *(_BYTE *)(a1 + 73) = v6 & 7;
  *(_BYTE *)(a1 + 72) = v6 >> 4;
  v7 = (const char *)*a2;
  v8 = (_BYTE *)*a2;
  do
  {
    if ( (unsigned __int64)v8 >= a2[1] )
      goto LABEL_8;
    v9 = *v8++ == 0;
  }
  while ( !v9 );
  *a2 = (unsigned __int64)v8;
  if ( !v7 || (v10 = strlen(v7)) == 0 )
  {
LABEL_8:
    *(_QWORD *)(a1 + 24) = 0;
    goto LABEL_9;
  }
  v11 = v10;
  v12 = (char **)(a1 + 16);
  v13 = v10 + 1;
  if ( *(_QWORD *)(a1 + 32) >= v10 + 1 )
  {
    v14 = *v12;
  }
  else
  {
    v14 = (char *)qvector_reserve(a1 + 16, *v12, v10 + 1, 1u);
    *v12 = v14;
  }
  *(_QWORD *)(a1 + 24) = v13;
  memmove(v14, v7, v11);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + v11) = 0;
LABEL_9:
  v15 = (const char *)*a2;
  result = (_BYTE *)*a2;
  do
  {
    if ( (unsigned __int64)result >= a2[1] )
      goto LABEL_16;
    v9 = *result++ == 0;
  }
  while ( !v9 );
  *a2 = (unsigned __int64)result;
  if ( !v15 || (result = (_BYTE *)strlen(v15)) == nullptr )
  {
LABEL_16:
    *(_QWORD *)(a1 + 48) = 0;
    return result;
  }
  v17 = (size_t)result;
  v18 = (char **)(a1 + 40);
  v19 = result + 1;
  if ( *(_QWORD *)(a1 + 56) >= (unsigned __int64)(result + 1) )
  {
    v20 = *v18;
  }
  else
  {
    v20 = (char *)qvector_reserve(a1 + 40, *v18, (unsigned __int64)(result + 1), 1u);
    *v18 = v20;
  }
  *(_QWORD *)(a1 + 48) = v19;
  memmove(v20, v15, v17);
  result = *(_BYTE **)(a1 + 40);
  result[v17] = 0;
  return result;
}
