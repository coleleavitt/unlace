/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A070
// Address: 0x000000000043A070

//----- (000000000043A070) ----------------------------------------------------
__int64 __fastcall sub_43A070(
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
  __int64 v9; // rdx
  __int64 result; // rax
  char *v12; // rdi
  char *v13; // rbx
  char *v14; // rbp
  __int64 v15; // rdi

  v9 = *(_QWORD *)(a1 + 48);
  result = qword_4C56E0[0];
  if ( qword_4C56E0[0] != v9 )
  {
    v12 = (char *)qword_4C56E0[1];
    v13 = &v12[40 * v9];
    v14 = &v12[40 * qword_4C56E0[0]];
    if ( v13 < v14 )
    {
      do
      {
        v15 = (__int64)v13;
        v13 += 40;
        sub_437130(v15, a2, a3, a4, a5, a6, a7, a8, a9);
      }
      while ( v13 < v14 );
      v12 = (char *)qword_4C56E0[1];
    }
    j__free(v12);
    qword_4C56E0[1] = *(_QWORD *)(a1 + 40);
    result = *(_QWORD *)(a1 + 48);
    qword_4C56E0[0] = result;
  }
  return result;
}
// 43A0B7: variable 'a6' is possibly undefined
// 43A0B7: variable 'a7' is possibly undefined
// 4C56E0: using guessed type __int64 qword_4C56E0[3];
