/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F30
// Address: 0x0000000000047F30

//----- (0000000000047F30) ----------------------------------------------------
char *__fastcall sub_47F30(__int64 a1, __int64 a2)
{
  size_t v2; // r14
  void *v3; // r15
  __int64 v4; // rcx
  char *result; // rax
  __int64 v6; // rcx

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
  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v4 + 1) )
  {
    result = *(char **)a1;
  }
  else
  {
    result = (char *)qvector_reserve(a1, *(char **)a1, v4 + 1, 0x18u);
    *(_QWORD *)a1 = result;
    v4 = *(_QWORD *)(a1 + 8);
  }
  v6 = 3 * v4;
  *(_QWORD *)&result[8 * v6] = v3;
  *(_QWORD *)&result[8 * v6 + 8] = v2;
  *(_QWORD *)&result[8 * v6 + 16] = v2;
  ++*(_QWORD *)(a1 + 8);
  return result;
}
