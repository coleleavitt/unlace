/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140028CD0
// Address: 0x0000000140028CD0

//----- (0000000140028CD0) ----------------------------------------------------
void __fastcall sub_140028CD0(__int64 a1, char *a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  char v5[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v5[0] = 2;
  v6 = 0;
  v7 = 0;
  sub_140028E70(v5, a2);
  v3 = *(_QWORD *)(a1 + 32) + 1LL;
  if ( v3 > *(_QWORD *)(a1 + 40) )
    *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), v3, 0x20u);
  v4 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
  *(_BYTE *)v4 = 2;
  *(_OWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 24) = 0;
  sub_140028E70((char *)v4, v5);
  ++*(_QWORD *)(a1 + 32);
  sub_140029390((__int64)v5);
}
