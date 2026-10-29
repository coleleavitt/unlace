/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_411490
// Address: 0x0000000000411490

//----- (0000000000411490) ----------------------------------------------------
__int64 __fastcall sub_411490(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 *v6; // x2
  __int64 result; // x0

  v4 = a1[9];
  if ( (unsigned __int64)(a1[1] - ((v4 - *a1) >> 3)) <= 1 )
  {
    sub_410B58((__int64)a1, 1u, 0);
    v4 = a1[9];
  }
  *(_QWORD *)(v4 + 8) = sub_49E050(0x1F8u);
  v5 = a1[6];
  *(_QWORD *)v5 = 0xFFFFFFFFLL;
  *(_QWORD *)(v5 + 8) = -1;
  *(_BYTE *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 20) = 0;
  sub_483128(v5, a2);
  v6 = (__int64 *)(a1[9] + 8LL);
  a1[9] = v6;
  result = *v6;
  a1[6] = *v6;
  a1[7] = result;
  a1[8] = result + 504;
  return result;
}
