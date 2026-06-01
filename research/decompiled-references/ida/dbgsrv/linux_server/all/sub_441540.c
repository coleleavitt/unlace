/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441540
// Address: 0x0000000000441540

//----- (0000000000441540) ----------------------------------------------------
void __fastcall sub_441540(
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
  void *v10; // rdi

  if ( !a1 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(2656);
    BUG();
  }
  if ( *(_BYTE *)a1 == 5 )
  {
    sub_441320(*(_DWORD **)(a1 + 8), (unsigned __int8 *)a1, a2, a3, a4, a5, a6, a7, a8, a9);
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
  }
  else if ( *(_BYTE *)a1 == 7 && (v10 = *(void **)(a1 + 8)) != nullptr )
  {
    *(_QWORD *)(a1 + 16) = 0;
    j__free(v10);
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
  }
  else
  {
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
  }
}
// 4C94E1: using guessed type char byte_4C94E1;
