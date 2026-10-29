/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48BAD0
// Address: 0x000000000048BAD0

//----- (000000000048BAD0) ----------------------------------------------------
__off64_t __fastcall sub_48BAD0(__int64 a1, __off64_t a2, void *a3, size_t a4)
{
  __off64_t result; // x0

  result = sub_48FF28(*(_DWORD *)(a1 + 20), a2, 0);
  if ( result != -1 )
    return (int)sub_48FE48(*(_DWORD *)(a1 + 20), a3, a4);
  return result;
}
