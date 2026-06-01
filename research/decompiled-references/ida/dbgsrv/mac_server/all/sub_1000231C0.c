/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000231C0
// Address: 0x00000001000231C0

//----- (00000001000231C0) ----------------------------------------------------
int *__fastcall sub_1000231C0(__int64 a1, int *a2, __int64 a3)
{
  int *result; // rax
  __int64 v4; // rdx

  result = a2 + 2;
  if ( *a2 >= -1 )
    result = *(int **)result;
  v4 = 16 * a3;
  *(_OWORD *)(a1 + v4 + 448) = *(_OWORD *)result;
  *(_OWORD *)(a1 + v4 + 704) = *((_OWORD *)result + 1);
  return result;
}
