/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68820
// Address: 0x0000000000068820

//----- (0000000000068820) ----------------------------------------------------
void __fastcall sub_68820(char **a1, double a2, __m128 a3)
{
  char *v4; // rdi
  char *v5; // r15
  unsigned __int64 v6; // r12
  __int64 i; // rbx

  v4 = *a1;
  if ( v4 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      v6 = 1;
      for ( i = 0; ; i += 32 )
      {
        free_idcv(&v4[i], a2, a3);
        if ( v6 >= (unsigned __int64)v5 )
          break;
        v4 = *a1;
        ++v6;
      }
      v4 = *a1;
    }
    a1[1] = nullptr;
    qfree(v4);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}
