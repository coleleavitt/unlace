/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5A30
// Address: 0x00000000000A5A30

//----- (00000000000A5A30) ----------------------------------------------------
unsigned __int64 __fastcall sub_A5A30(__int64 a1, unsigned __int64 *a2)
{
  const char *v3; // r15
  _BYTE *v4; // rax
  size_t v6; // rax
  size_t v7; // r12
  size_t v8; // r13
  char *v9; // rdi
  unsigned __int64 result; // rax

  v3 = (const char *)*a2;
  v4 = (_BYTE *)*a2;
  do
  {
    if ( (unsigned __int64)v4 >= a2[1] )
      goto LABEL_8;
  }
  while ( *v4++ != 0 );
  *a2 = (unsigned __int64)v4;
  if ( !v3 || (v6 = strlen(v3)) == 0 )
  {
LABEL_8:
    *(_QWORD *)(a1 + 8) = 0;
    goto LABEL_9;
  }
  v7 = v6;
  v8 = v6 + 1;
  if ( *(_QWORD *)(a1 + 16) >= v6 + 1 )
  {
    v9 = *(char **)a1;
  }
  else
  {
    v9 = (char *)qvector_reserve(a1, *(char **)a1, v6 + 1, 1u);
    *(_QWORD *)a1 = v9;
  }
  *(_QWORD *)(a1 + 8) = v8;
  memmove(v9, v3, v7);
  *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
LABEL_9:
  *(_QWORD *)(a1 + 24) = unpack_dq(a2, a2[1]) - 1;
  *(_QWORD *)(a1 + 32) = unpack_dq(a2, a2[1]) - 1;
  result = unpack_dq(a2, a2[1]) - 1;
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
