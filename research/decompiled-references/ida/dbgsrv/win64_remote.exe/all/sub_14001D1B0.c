/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001D1B0
// Address: 0x000000014001D1B0

//----- (000000014001D1B0) ----------------------------------------------------
int *__fastcall sub_14001D1B0(__int64 a1, int *a2, __int64 a3)
{
  int *result; // rax
  __int64 v4; // r8

  result = a2 + 2;
  if ( *a2 >= -1 )
    result = *(int **)result;
  v4 = 2 * a3;
  *(_OWORD *)(a1 + 8 * v4 + 472) = *(_OWORD *)result;
  *(_OWORD *)(a1 + 8 * v4 + 728) = *((_OWORD *)result + 1);
  return result;
}
