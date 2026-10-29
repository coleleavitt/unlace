/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420FD8
// Address: 0x0000000000420FD8

//----- (0000000000420FD8) ----------------------------------------------------
bool __fastcall sub_420FD8(int *a1, __int64 a2)
{
  return (sub_420C98((__int64)a1, (void *)a2, 4u, 1u) & 0x80000000) == 0
      && (sub_420C98((__int64)a1, (void *)(a2 + 4), 4u, 1u) & 0x80000000) == 0
      && (sub_420C98((__int64)a1, (void *)(a2 + 8), a1[108], 1u) & 0x80000000) == 0
      && (sub_420C98((__int64)a1, (void *)(a2 + 16), a1[106], 1u) & 0x80000000) == 0
      && (sub_420C98((__int64)a1, (void *)(a2 + 24), a1[107], 1u) & 0x80000000) == 0
      && (sub_420C98((__int64)a1, (void *)(a2 + 32), a1[108], 1u) & 0x80000000) == 0
      && (sub_420C98((__int64)a1, (void *)(a2 + 40), 4u, 1u) & 0x80000000) == 0
      && (sub_420C98((__int64)a1, (void *)(a2 + 44), 4u, 1u) & 0x80000000) == 0
      && (sub_420C98((__int64)a1, (void *)(a2 + 48), a1[108], 1u) & 0x80000000) == 0
      && (int)sub_420C98((__int64)a1, (void *)(a2 + 56), a1[108], 1u) >= 0;
}
