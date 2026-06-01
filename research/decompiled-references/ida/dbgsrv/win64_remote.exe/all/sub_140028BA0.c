/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140028BA0
// Address: 0x0000000140028BA0

//----- (0000000140028BA0) ----------------------------------------------------
void __fastcall sub_140028BA0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  char v4[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  v4[0] = 2;
  v5 = 0;
  v6 = 0;
  sub_140028E70(v4, (char *)(32LL * *(_QWORD *)(a1 + 32) - 32 + *(_QWORD *)(a1 + 24)));
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v3 = v2 - 1;
    *(_QWORD *)(a1 + 32) = v3;
    sub_140029390(*(_QWORD *)(a1 + 24) + 32 * v3);
  }
  sub_140029390((__int64)v4);
}
