/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400361B0
// Address: 0x00000001400361B0

//----- (00000001400361B0) ----------------------------------------------------
__int64 __fastcall sub_1400361B0(__int64 a1, __int64 a2)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4 = 0;
  v5 = 0;
  sub_1400357C0((__int64 (__fastcall *)(__int64, _QWORD))post_pgo_initialization, (__int64)&v4, a1, a2);
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 8) = v4;
  *(_QWORD *)(a2 + 24) = v5;
  return 0;
}
