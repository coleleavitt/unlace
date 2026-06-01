/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_446080
// Address: 0x0000000000446080

//----- (0000000000446080) ----------------------------------------------------
__int64 __fastcall sub_446080(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v12; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rbx
  __int64 v16; // rbp
  int *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax

  if ( *(_BYTE *)a2 != 5 )
    return sub_4418C0((unsigned __int8 *)a1, (unsigned __int8 *)a2, a3, a4, a5, a6, a7, a8, a9, a10);
  v12 = operator new(0x38u);
  v15 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(v12 + 8) = 0;
  v16 = v12;
  *(_QWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = v12 + 8;
  *(_QWORD *)(v12 + 32) = v12 + 8;
  *(_QWORD *)(v12 + 40) = 0;
  v17 = *(int **)(v15 + 16);
  if ( v17 )
  {
    v18 = sub_445EB0(v17, v12 + 8, a3, a4, a5, a6, v13, v14, a9, a10);
    v19 = v18;
    do
    {
      v20 = v19;
      v19 = *(_QWORD *)(v19 + 16);
    }
    while ( v19 );
    *(_QWORD *)(v16 + 24) = v20;
    v21 = v18;
    do
    {
      v22 = v21;
      v21 = *(_QWORD *)(v21 + 24);
    }
    while ( v21 );
    *(_QWORD *)(v16 + 32) = v22;
    v23 = *(_QWORD *)(v15 + 40);
    *(_QWORD *)(v16 + 16) = v18;
    *(_QWORD *)(v16 + 40) = v23;
  }
  v24 = *(_DWORD *)(v15 + 52);
  *(_DWORD *)(v16 + 48) = 1;
  *(_DWORD *)(v16 + 52) = v24;
  sub_441540(a1, a3, a4, a5, a6, v13, v14, a9, a10);
  *(_BYTE *)a1 = 5;
  *(_QWORD *)(a1 + 8) = v16;
  return 0;
}
// 4460DD: variable 'v13' is possibly undefined
// 4460DD: variable 'v14' is possibly undefined
