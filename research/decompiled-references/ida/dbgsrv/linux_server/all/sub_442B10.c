/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442B10
// Address: 0x0000000000442B10

//----- (0000000000442B10) ----------------------------------------------------
void __fastcall sub_442B10(
        char **a1,
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
  char *v11; // r12
  char *i; // rbx
  char *v13; // rax

  v10 = *a1;
  if ( v10 )
  {
    v11 = a1[1];
    if ( v11 )
    {
      for ( i = nullptr; i != v11; ++i )
      {
        v13 = i;
        sub_441540((__int64)v10 + 32 * (_QWORD)v13, a2, a3, a4, a5, a6, a7, a8, a9);
        v10 = *a1;
      }
    }
    a1[1] = nullptr;
    j__free(v10);
  }
}
// 442B3E: variable 'a6' is possibly undefined
// 442B3E: variable 'a7' is possibly undefined
