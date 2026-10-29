/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001BA60
// Address: 0x000000010001BA60

//----- (000000010001BA60) ----------------------------------------------------
__int64 __fastcall sub_10001BA60(__int64 a1, __int64 a2)
{
  __int128 v3[4]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v4; // [rsp+40h] [rbp-20h]
  int v5; // [rsp+48h] [rbp-18h]
  int v6; // [rsp+4Ch] [rbp-14h]

  v3[0] = *(_OWORD *)a2;
  v3[1] = *(_OWORD *)(a2 + 16);
  v3[2] = (__int128)_mm_cvtepu32_epi64(*(__m64 *)(a2 + 32));
  v3[3] = *(_OWORD *)(a2 + 40);
  v4 = *(_QWORD *)(a2 + 56);
  v5 = *(_DWORD *)(a2 + 64);
  v6 = 0;
  sub_10001BB00(a1, v3);
  return 0;
}
