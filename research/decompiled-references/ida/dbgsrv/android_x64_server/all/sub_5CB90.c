/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CB90
// Address: 0x000000000005CB90

//----- (000000000005CB90) ----------------------------------------------------
char *__fastcall sub_5CB90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  char *result; // rax
  __int64 v7; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)(v4 + 16) >= (unsigned __int64)(v5 + 1) )
  {
    result = *(char **)v4;
  }
  else
  {
    result = (char *)qvector_reserve(*(_QWORD *)(a1 + 16), *(char **)v4, v5 + 1, 0x28u);
    *(_QWORD *)v4 = result;
    v5 = *(_QWORD *)(v4 + 8);
  }
  v7 = 5 * v5;
  *(_OWORD *)&result[8 * v7 + 8] = 0;
  *(_QWORD *)&result[8 * v7 + 24] = 0;
  ++*(_QWORD *)(v4 + 8);
  *(_QWORD *)&result[8 * v7] = a3;
  *(_WORD *)&result[8 * v7 + 32] = *(_WORD *)(a2 + 2);
  *(_WORD *)&result[8 * v7 + 34] = *(_WORD *)(a2 + 4);
  return result;
}
