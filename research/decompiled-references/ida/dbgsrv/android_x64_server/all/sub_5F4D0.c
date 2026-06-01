/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F4D0
// Address: 0x000000000005F4D0

//----- (000000000005F4D0) ----------------------------------------------------
__int64 __fastcall sub_5F4D0(__int64 a1, char *a2, double a3, __m128 a4)
{
  char *v4; // rdx

  if ( *(_QWORD *)(a1 + 48) )
    v4 = *(char **)(a1 + 40);
  else
    v4 = (char *)s1;
  return get_idcv_attr(a2, a1, v4, 0, a3, a4);
}
