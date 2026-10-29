/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C8740
// Address: 0x00000000000C8740

//----- (00000000000C8740) ----------------------------------------------------
char __fastcall sub_C8740(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  const void *v4; // r14
  size_t v5; // r15
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r13
  char *v9; // rax

  v3 = *(_QWORD *)(a1 + 8 * a2 + 32);
  v4 = *(const void **)a3;
  v5 = *(_QWORD *)(a3 + 8);
  v6 = *(_QWORD *)(v3 + 8);
  v7 = v6 - 1;
  if ( !v6 )
    v7 = 0;
  v8 = v7 + v5 + 1;
  if ( *(_QWORD *)(v3 + 16) >= v8 )
  {
    v9 = *(char **)v3;
  }
  else
  {
    v9 = (char *)qvector_reserve(v3, *(char **)v3, v7 + v5 + 1, 1u);
    *(_QWORD *)v3 = v9;
  }
  *(_QWORD *)(v3 + 8) = v8;
  v9[v7 + v5] = 0;
  memmove((void *)(*(_QWORD *)v3 + v7), v4, v5);
  return 1;
}
