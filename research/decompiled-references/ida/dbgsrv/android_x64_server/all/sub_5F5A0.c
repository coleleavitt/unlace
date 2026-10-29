/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F5A0
// Address: 0x000000000005F5A0

//----- (000000000005F5A0) ----------------------------------------------------
__int64 __fastcall sub_5F5A0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  const char *v5; // rsi

  if ( *(_QWORD *)(a1 + 48) )
    v5 = *(const char **)(a1 + 40);
  else
    v5 = s1;
  *(_QWORD *)(a2 + 8) = (unsigned int)del_idcv_attr(a1, v5, a3, a4) == 0;
  return 0;
}
