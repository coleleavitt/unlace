/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400307A0
// Address: 0x00000001400307A0

//----- (00000001400307A0) ----------------------------------------------------
__int64 __fastcall sub_1400307A0(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  unsigned __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v9[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 )
  {
    if ( v3 + *(_DWORD *)(a1 + 440) + 1 != *(_QWORD *)(a1 + 136) )
      return sub_1400640B0(0x4F4u);
  }
  else
  {
    *(_DWORD *)(a1 + 440) = *(_DWORD *)(a1 + 136) - 1;
  }
  v4 = *(_QWORD *)(v2 + 72) + 1LL;
  if ( v4 > *(_QWORD *)(v2 + 80) )
    *(_QWORD *)(v2 + 64) = sub_14005ABE0(v2 + 64, *(void **)(v2 + 64), v4, 0x20u);
  v5 = *(_QWORD *)(v2 + 64) + 32LL * *(_QWORD *)(v2 + 72);
  *(_BYTE *)v5 = 2;
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 8) = 0;
  ++*(_QWORD *)(v2 + 72);
  if ( *(_QWORD *)(a1 + 424) != 1 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1437);
  }
  sub_140028B50((__int128 *)v5, *(__int128 **)(a1 + 416));
  v9[0] = 2;
  v10 = 0;
  v11 = 0;
  sub_140028E70(v9, (char *)(32LL * *(_QWORD *)(a1 + 424) + *(_QWORD *)(a1 + 416) - 32LL));
  v6 = *(_QWORD *)(a1 + 424);
  if ( v6 )
  {
    v7 = v6 - 1;
    *(_QWORD *)(a1 + 424) = v7;
    sub_140029390(*(_QWORD *)(a1 + 416) + 32 * v7);
  }
  sub_140029390((__int64)v9);
  return 0;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
