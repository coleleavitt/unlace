/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_662B0
// Address: 0x00000000000662B0

//----- (00000000000662B0) ----------------------------------------------------
__int64 __fastcall sub_662B0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r13
  size_t v6; // rbx
  void *v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  void *v11; // rdi

  v3 = *a2;
  v4 = a2[1];
  v5 = 3 * (v4 - 1);
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v6 = *(_QWORD *)(v3 + 24 * (v4 - 1) + 8);
  if ( v6 )
  {
    v7 = qalloc_or_throw(*(_QWORD *)(v3 + 24 * (v4 - 1) + 8));
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 16) = v6;
    memcpy(v7, *(const void **)(v3 + 8 * v5), v6);
    *(_QWORD *)(a1 + 8) = v6;
    v4 = a2[1];
  }
  if ( v4 )
  {
    v8 = *a2;
    v9 = v4 - 1;
    a2[1] = v9;
    v10 = 3 * v9;
    v11 = *(void **)(v8 + 24 * v9);
    if ( v11 )
    {
      *(_QWORD *)(v8 + 24 * v9 + 8) = 0;
      qfree(v11);
      *(_QWORD *)(v8 + 8 * v10) = 0;
      *(_QWORD *)(v8 + 8 * v10 + 16) = 0;
    }
  }
  return a1;
}
