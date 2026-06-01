/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F560
// Address: 0x000000000005F560

//----- (000000000005F560) ----------------------------------------------------
__int64 __fastcall sub_5F560(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  char *v4; // rdx

  if ( *(_QWORD *)(a1 + 48) )
    v4 = *(char **)(a1 + 40);
  else
    v4 = (char *)s1;
  *(_QWORD *)(a2 + 8) = (unsigned int)get_idcv_attr(nullptr, a1, v4, 0, a3, a4) == 0;
  return 0;
}
