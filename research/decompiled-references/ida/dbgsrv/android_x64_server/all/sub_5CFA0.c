/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CFA0
// Address: 0x000000000005CFA0

//----- (000000000005CFA0) ----------------------------------------------------
unsigned __int64 __fastcall sub_5CFA0(__int64 a1, __int64 a2)
{
  size_t v2; // r14
  void *v3; // r15
  __int64 v4; // rcx
  char *v5; // rax
  __int64 v6; // rcx
  _BYTE v8[13]; // [rsp+0h] [rbp-38h]

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
  *(_QWORD *)&v8[5] = *(_QWORD *)(a2 + 29);
  *(_QWORD *)v8 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v4 + 1) )
  {
    v5 = *(char **)a1;
  }
  else
  {
    v5 = (char *)qvector_reserve(a1, *(char **)a1, v4 + 1, 0x28u);
    *(_QWORD *)a1 = v5;
    v4 = *(_QWORD *)(a1 + 8);
  }
  v6 = 5 * v4;
  *(_QWORD *)&v5[8 * v6] = v3;
  *(_QWORD *)&v5[8 * v6 + 8] = v2;
  *(_QWORD *)&v5[8 * v6 + 16] = v2;
  *(_QWORD *)&v5[8 * v6 + 29] = *(_QWORD *)&v8[5];
  *(_QWORD *)&v5[8 * v6 + 24] = *(_QWORD *)v8;
  ++*(_QWORD *)(a1 + 8);
  return __readfsqword(0x28u);
}
