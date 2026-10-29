/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BA630
// Address: 0x00000000000BA630

//----- (00000000000BA630) ----------------------------------------------------
__off_t __fastcall sub_BA630(__int64 a1, __off_t a2, void *a3, size_t a4)
{
  __off_t result; // x0

  result = qseek(*(_DWORD *)(a1 + 20), a2, 0);
  if ( result != -1 )
    return (int)qread(*(_DWORD *)(a1 + 20), a3, a4);
  return result;
}
