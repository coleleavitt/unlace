/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420D98
// Address: 0x0000000000420D98

//----- (0000000000420D98) ----------------------------------------------------
__int64 __fastcall sub_420D98(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 617) )
  {
    if ( (sub_420C98(a1, (void *)a2, 4u, 1u) & 0x80000000) == 0
      && (sub_420C98(a1, (void *)(a2 + 4), 1u, 1u) & 0x80000000) == 0
      && (sub_420C98(a1, (void *)(a2 + 5), 1u, 1u) & 0x80000000) == 0
      && (sub_420C98(a1, (void *)(a2 + 6), 2u, 1u) & 0x80000000) == 0
      && (sub_420C98(a1, (void *)(a2 + 8), *(int *)(a1 + 424), 1u) & 0x80000000) == 0 )
    {
      return (unsigned int)((int)sub_420C98(a1, (void *)(a2 + 16), *(int *)(a1 + 432), 1u) >> 31);
    }
  }
  else if ( (sub_420C98(a1, (void *)a2, 4u, 1u) & 0x80000000) == 0
         && (sub_420C98(a1, (void *)(a2 + 8), *(int *)(a1 + 424), 1u) & 0x80000000) == 0
         && (sub_420C98(a1, (void *)(a2 + 16), 4u, 1u) & 0x80000000) == 0
         && (sub_420C98(a1, (void *)(a2 + 4), 1u, 1u) & 0x80000000) == 0
         && (sub_420C98(a1, (void *)(a2 + 5), 1u, 1u) & 0x80000000) == 0 )
  {
    return (unsigned int)((int)sub_420C98(a1, (void *)(a2 + 6), 2u, 1u) >> 31);
  }
  return 0xFFFFFFFFLL;
}
