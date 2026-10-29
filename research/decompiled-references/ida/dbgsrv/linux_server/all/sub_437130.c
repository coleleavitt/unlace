/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437130
// Address: 0x0000000000437130

//----- (0000000000437130) ----------------------------------------------------
void __fastcall sub_437130(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rsi

  v9 = *(_QWORD *)(a1 + 24);
  if ( v9 )
  {
    v10 = v9 + 32LL * *(_QWORD *)(v9 - 8);
    if ( v9 == v10 )
    {
      v12 = 0;
    }
    else
    {
      do
      {
        v11 = v10;
        v10 -= 32;
        sub_441540(v10, a2, a3, a4, a5, a6, a7, a8, a9);
      }
      while ( *(_QWORD *)(a1 + 24) != v10 );
      v12 = 32LL * *(_QWORD *)(v11 - 40);
    }
    operator delete[]((void *)(v10 - 8), v12 + 8);
  }
  j__free(*(void **)a1);
  j__free(*(void **)(a1 + 16));
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 16) = 0;
}
// 43715A: variable 'a6' is possibly undefined
// 43715A: variable 'a7' is possibly undefined
