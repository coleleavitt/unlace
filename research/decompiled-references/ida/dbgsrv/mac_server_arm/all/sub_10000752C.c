/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000752C
// Address: 0x000000010000752C

//----- (000000010000752C) ----------------------------------------------------
__int64 __fastcall sub_10000752C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // x19
  char v11; // [xsp+0h] [xbp-10h]

  sub_1000560A0(a1, "remote_prepare_to_pause_process\n", a3, a4, a5, a6, a7, a8, v11);
  if ( *(int *)(a1 + 1556) > 2 )
    return 0xFFFFFFFFLL;
  v9 = 1;
  *(_DWORD *)(a1 + 1556) = 1;
  kill(*(_DWORD *)(a1 + 528), 17);
  return v9;
}
// 100007544: variable 'v11' is possibly undefined
