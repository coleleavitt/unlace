/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6EB40
// Address: 0x000000000006EB40

//----- (000000000006EB40) ----------------------------------------------------
void __fastcall sub_6EB40(__int64 a1, double a2, __m128 a3)
{
  int *v3; // rcx
  char **v5; // rdi
  char **v6; // r13
  char **v7; // rbp
  char *v8; // r15
  __int64 v9; // r12
  __int64 v10; // r12
  char *v11; // rbx
  __int64 v12; // r12

  v3 = *(int **)(a1 + 48);
  if ( off_154A20 != v3 )
  {
    v5 = off_154A28;
    v6 = &off_154A28[5 * (_QWORD)v3];
    v7 = &off_154A28[5 * (_QWORD)off_154A20];
    if ( v6 < v7 )
    {
      do
      {
        v8 = v6[3];
        if ( v8 )
        {
          v9 = *((_QWORD *)v8 - 1);
          if ( v9 )
          {
            v10 = 32 * v9;
            v11 = &v8[v10 - 32];
            v12 = -v10;
            do
            {
              free_idcv(v11, a2, a3);
              v11 -= 32;
              v12 += 32;
            }
            while ( v12 );
          }
          operator delete[](v8 - 8);
        }
        qfree(*v6);
        qfree(v6[2]);
        a2 = 0.0;
        *((_OWORD *)v6 + 1) = 0;
        *(_OWORD *)v6 = 0;
        v6[4] = nullptr;
        v6 += 5;
      }
      while ( v6 < v7 );
      v5 = off_154A28;
    }
    qfree(v5);
    *(__m128i *)&off_154A20 = _mm_shuffle_epi32(_mm_loadu_si128((const __m128i *)(a1 + 40)), 78);
  }
}
// 154A20: using guessed type int *off_154A20;
// 154A28: using guessed type char **off_154A28;
