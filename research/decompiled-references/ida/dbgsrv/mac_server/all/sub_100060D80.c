/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060D80
// Address: 0x0000000100060D80

//----- (0000000100060D80) ----------------------------------------------------
__int64 __fastcall sub_100060D80(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __int128 v4; // [rsp+0h] [rbp-60h]
  _OWORD v5[2]; // [rsp+10h] [rbp-50h] BYREF
  __int128 v6; // [rsp+30h] [rbp-30h] BYREF
  __int64 v7; // [rsp+40h] [rbp-20h]

  memset(v5, 0, 24);
  sub_10001D380((void **)v5, a2);
  v2 = *(_QWORD *)&v5[0];
  memset(v5, 0, 24);
  v4 = *(_OWORD *)((char *)v5 + 8);
  sub_1000015C0((char **)(a1 + 376));
  *(_QWORD *)(a1 + 376) = v2;
  v6 = 0;
  *(_OWORD *)(a1 + 384) = v4;
  v7 = 0;
  sub_10000C380((char **)&v6);
  sub_10000C380((char **)v5);
  return __stack_chk_guard;
}
