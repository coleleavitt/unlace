/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410CC8
// Address: 0x0000000000410CC8

//----- (0000000000410CC8) ----------------------------------------------------
__int64 __fastcall sub_410CC8(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x20
  __int64 *v5; // x2
  __int64 v6; // x2

  v4 = a1[5];
  if ( v4 == *a1 )
  {
    sub_410B58((__int64)a1, 1u, 1u);
    v4 = a1[5];
  }
  *(_QWORD *)(v4 - 8) = sub_49E050(0x1F8u);
  v5 = (__int64 *)(a1[5] - 8LL);
  a1[5] = v5;
  v6 = *v5;
  a1[3] = v6;
  a1[4] = v6 + 504;
  a1[2] = v6 + 432;
  *(_QWORD *)(v6 + 432) = 0xFFFFFFFFLL;
  *(_QWORD *)(v6 + 440) = -1;
  *(_BYTE *)(v6 + 448) = 0;
  *(_DWORD *)(v6 + 452) = 0;
  return sub_483128(v6 + 432, a2);
}
