/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0110
// Address: 0x00000000000A0110

//----- (00000000000A0110) ----------------------------------------------------
char *__fastcall sub_A0110(__int64 a1, __int64 *a2)
{
  size_t v2; // r15
  void *v3; // r14
  size_t v4; // rbx
  void *v5; // r13
  __int64 v6; // rcx
  char *result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+0h] [rbp-38h]

  v9 = *a2;
  v2 = a2[2];
  if ( v2 )
  {
    v3 = qalloc_or_throw(a2[2]);
    memcpy(v3, (const void *)a2[1], v2);
  }
  else
  {
    v3 = nullptr;
  }
  v4 = a2[5];
  if ( v4 )
  {
    v5 = qalloc_or_throw(a2[5]);
    memcpy(v5, (const void *)a2[4], v4);
  }
  else
  {
    v5 = nullptr;
  }
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v6 + 1) )
  {
    result = *(char **)a1;
  }
  else
  {
    result = (char *)qvector_reserve(a1, *(char **)a1, v6 + 1, 0x38u);
    *(_QWORD *)a1 = result;
    v6 = *(_QWORD *)(a1 + 8);
  }
  v8 = 56 * v6;
  *(_QWORD *)&result[v8] = v9;
  *(_QWORD *)&result[v8 + 8] = v3;
  *(_QWORD *)&result[v8 + 16] = v2;
  *(_QWORD *)&result[v8 + 24] = v2;
  *(_QWORD *)&result[v8 + 32] = v5;
  *(_QWORD *)&result[v8 + 40] = v4;
  *(_QWORD *)&result[v8 + 48] = v4;
  ++*(_QWORD *)(a1 + 8);
  return result;
}
