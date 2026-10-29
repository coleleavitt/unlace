/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140030910
// Address: 0x0000000140030910

//----- (0000000140030910) ----------------------------------------------------
__int64 __fastcall sub_140030910(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 v4; // r14
  unsigned __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12[8]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 424);
  if ( v2 < 3 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1439);
  }
  v3 = v2 - 1;
  v4 = *(_QWORD *)(a1 + 416);
  v5 = v2 - 2;
  v6 = 32 * v5;
  if ( !sub_140021910((char *)(32 * v5 + v4 - 32)) )
    return 0xFFFFFFFFLL;
  if ( *(_QWORD *)(v6 + v4 - 24) )
    v3 = v5;
  sub_140028B50((__int128 *)(v6 + v4 - 32), (__int128 *)(v4 + 32 * v3));
  v12[0] = 2;
  v13 = 0;
  v14 = 0;
  sub_140028E70(v12, (char *)(32LL * *(_QWORD *)(a1 + 424) + *(_QWORD *)(a1 + 416) - 32LL));
  v8 = *(_QWORD *)(a1 + 424);
  if ( v8 )
  {
    v9 = v8 - 1;
    *(_QWORD *)(a1 + 424) = v9;
    sub_140029390(*(_QWORD *)(a1 + 416) + 32 * v9);
  }
  sub_140029390((__int64)v12);
  v12[0] = 2;
  v13 = 0;
  v14 = 0;
  sub_140028E70(v12, (char *)(32LL * *(_QWORD *)(a1 + 424) + *(_QWORD *)(a1 + 416) - 32LL));
  v10 = *(_QWORD *)(a1 + 424);
  if ( v10 )
  {
    v11 = v10 - 1;
    *(_QWORD *)(a1 + 424) = v11;
    sub_140029390(*(_QWORD *)(a1 + 416) + 32 * v11);
  }
  sub_140029390((__int64)v12);
  return 0;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
