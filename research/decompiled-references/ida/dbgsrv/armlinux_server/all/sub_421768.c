/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_421768
// Address: 0x0000000000421768

//----- (0000000000421768) ----------------------------------------------------
bool __fastcall sub_421768(__int64 a1, __int64 a2)
{
  return (sub_420C98(a1, (void *)a2, 4u, 1u) & 0x80000000) == 0
      && (!*(_BYTE *)(a1 + 617) || (sub_420C98(a1, (void *)(a2 + 4), 4u, 1u) & 0x80000000) == 0)
      && (sub_420C98(a1, (void *)(a2 + 8), *(int *)(a1 + 432), 1u) & 0x80000000) == 0
      && (int)sub_420C98(a1, (void *)(a2 + 16), *(int *)(a1 + 432), 1u) >= 0;
}
