/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003D9B0
// Address: 0x000000014003D9B0

//----- (000000014003D9B0) ----------------------------------------------------
__int64 __fastcall sub_14003D9B0(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx

  v6 = *(_QWORD *)(a1 + 64) + 1LL;
  if ( v6 > *(_QWORD *)(a1 + 72) )
    *(_QWORD *)(a1 + 56) = sub_14005ABE0(a1 + 56, *(void **)(a1 + 56), v6, 0x38u);
  v7 = *(_QWORD *)(a1 + 56) + 56LL * *(_QWORD *)(a1 + 64);
  *(_QWORD *)v7 = 0;
  *(_QWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 16) = 0;
  ++*(_QWORD *)(a1 + 64);
  *(_QWORD *)(v7 + 24) = *(_QWORD *)a1;
  *(_QWORD *)(v7 + 32) = *(_QWORD *)(a1 + 8);
  result = *(unsigned int *)(a1 + 80);
  *(_DWORD *)(v7 + 48) = result;
  *(_QWORD *)(v7 + 40) = a2;
  if ( a3 )
  {
    v9 = *a3;
    v10 = a3[1];
    v11 = a3[2];
    *a3 = *(_QWORD *)v7;
    a3[1] = *(_QWORD *)(v7 + 8);
    result = *(_QWORD *)(v7 + 16);
    a3[2] = result;
    *(_QWORD *)v7 = v9;
    *(_QWORD *)(v7 + 8) = v10;
    *(_QWORD *)(v7 + 16) = v11;
  }
  return result;
}
