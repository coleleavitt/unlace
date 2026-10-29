/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_435060
// Address: 0x0000000000435060

//----- (0000000000435060) ----------------------------------------------------
__int64 __fastcall sub_435060(
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
  char *v10; // rdi
  __int64 v11; // rdx
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v14; // rax
  const char *v15; // rsi
  const char *v17; // rsi

  v10 = (char *)s1;
  if ( *(_QWORD *)(a1 + 48) )
    v10 = *(char **)(a1 + 40);
  v11 = sub_439950(v10);
  v14 = *(_QWORD *)(a1 + 48);
  if ( !v11 )
  {
    if ( v14 )
    {
      v17 = *(const char **)(a1 + 40);
      if ( (unsigned __int64)(v14 - 1) > 0x7F )
      {
        sub_479F30(0, v17);
        return sub_479EB0(0x1Cu);
      }
    }
    else
    {
      v17 = s1;
    }
    return sub_434B40(a1, v17, a2, a3, a4, a5, v12, v13, a8, a9);
  }
  v15 = s1;
  if ( v14 )
    v15 = *(const char **)(a1 + 40);
  sub_479F30(0, v15);
  return sub_479EB0(0x34u);
}
// 4350C0: variable 'v12' is possibly undefined
// 4350C0: variable 'v13' is possibly undefined
