/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83990
// Address: 0x0000000000083990

//----- (0000000000083990) ----------------------------------------------------
char *__fastcall sub_83990(__int64 a1, __int64 a2)
{
  size_t v2; // r14
  void *v3; // r15
  __int16 v4; // bp
  __int64 v5; // rcx
  char *result; // rax
  __int64 v7; // rcx

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v3 = qalloc_or_throw(*(_QWORD *)(a2 + 8));
    memcpy(v3, *(const void **)a2, v2);
  }
  else
  {
    v3 = nullptr;
  }
  v4 = *(_WORD *)(a2 + 24);
  v5 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v5 + 1) )
  {
    result = *(char **)a1;
  }
  else
  {
    result = (char *)qvector_reserve(a1, *(char **)a1, v5 + 1, 0x20u);
    *(_QWORD *)a1 = result;
    v5 = *(_QWORD *)(a1 + 8);
  }
  v7 = 32 * v5;
  *(_QWORD *)&result[v7] = v3;
  *(_QWORD *)&result[v7 + 8] = v2;
  *(_QWORD *)&result[v7 + 16] = v2;
  *(_WORD *)&result[v7 + 24] = v4;
  ++*(_QWORD *)(a1 + 8);
  return result;
}
