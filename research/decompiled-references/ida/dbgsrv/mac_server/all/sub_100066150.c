/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100066150
// Address: 0x0000000100066150

//----- (0000000100066150) ----------------------------------------------------
unsigned __int64 __fastcall sub_100066150(__int64 a1, unsigned __int64 *a2)
{
  const char *v2; // r15
  _BYTE *v3; // rcx
  _BYTE *v4; // rdx
  size_t v6; // rax
  size_t v7; // r12
  unsigned __int64 v8; // r13
  void *v9; // rax
  unsigned __int64 result; // rax

  v2 = (const char *)*a2;
  v3 = (_BYTE *)*a2;
  do
  {
    if ( (unsigned __int64)v3 >= a2[1] )
      goto LABEL_9;
    v4 = v3 + 1;
  }
  while ( *v3++ != 0 );
  *a2 = (unsigned __int64)v4;
  if ( !v2 || (v6 = strlen(v2)) == 0 )
  {
LABEL_9:
    *(_QWORD *)(a1 + 8) = 0;
    goto LABEL_10;
  }
  v7 = v6;
  v8 = v6 + 1;
  v9 = *(void **)a1;
  if ( *(_QWORD *)(a1 + 16) < v8 )
  {
    v9 = qvector_reserve(a1, *(void **)a1, v8, 1u);
    *(_QWORD *)a1 = v9;
  }
  *(_QWORD *)(a1 + 8) = v8;
  memmove(v9, v2, v7);
  *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
LABEL_10:
  *(_QWORD *)(a1 + 24) = unpack_dq(a2, a2[1]) - 1;
  *(_QWORD *)(a1 + 32) = unpack_dq(a2, a2[1]) - 1;
  result = unpack_dq(a2, a2[1]) - 1;
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
