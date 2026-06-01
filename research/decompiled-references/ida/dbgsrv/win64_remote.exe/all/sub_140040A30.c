/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140040A30
// Address: 0x0000000140040A30

//----- (0000000140040A30) ----------------------------------------------------
__int64 __fastcall sub_140040A30(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // r15
  void *v6; // rcx

  v3 = *a2;
  *a2 = 0;
  v4 = a2[1];
  a2[1] = 0;
  v5 = a2[2];
  a2[2] = 0;
  v6 = *(void **)a1;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j_free(v6);
    *(_QWORD *)(a1 + 16) = 0;
  }
  *(_QWORD *)a1 = v3;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 16) = v5;
  return a1;
}
