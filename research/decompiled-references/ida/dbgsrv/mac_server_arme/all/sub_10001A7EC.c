/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001A7EC
// Address: 0x000000010001A7EC

//----- (000000010001A7EC) ----------------------------------------------------
__int64 __fastcall sub_10001A7EC(_QWORD *a1, __int64 a2)
{
  __int128 v2; // q1
  __int64 v3; // d0
  __int128 v4; // off
  __int128 v5; // q1
  __int128 v7[4]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v8; // [xsp+40h] [xbp-20h]
  int v9; // [xsp+48h] [xbp-18h]
  int v10; // [xsp+4Ch] [xbp-14h]

  v2 = *(_OWORD *)(a2 + 16);
  v7[0] = *(_OWORD *)a2;
  v7[1] = v2;
  v3 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)&v4 = (unsigned int)v3;
  *((_QWORD *)&v4 + 1) = HIDWORD(v3);
  v5 = *(_OWORD *)(a2 + 40);
  v7[2] = v4;
  v7[3] = v5;
  v8 = *(_QWORD *)(a2 + 56);
  v9 = *(_DWORD *)(a2 + 64);
  v10 = 0;
  sub_10001A888(a1, v7);
  return 0;
}
