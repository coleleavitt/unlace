/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100018B74
// Address: 0x0000000100018B74

//----- (0000000100018B74) ----------------------------------------------------
__n128 __fastcall sub_100018B74(__int64 a1)
{
  _QWORD *v2; // x1
  __int64 v3; // x20
  void *v4; // x0
  __n128 result; // q0

  v3 = a1 + 40;
  v2 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 20) = 8;
  *(_WORD *)(a1 + 24) = 0;
  sub_10000938C(a1 + 32, v2);
  *(_QWORD *)v3 = 0;
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 - 8) = v3;
  *(_OWORD *)(v3 + 48) = 0u;
  *(_OWORD *)(v3 + 64) = 0u;
  *(_OWORD *)(v3 + 80) = 0u;
  *(_QWORD *)(v3 + 96) = 0;
  v4 = *(void **)(v3 + 104);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 152) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 144) = 0;
    *(_QWORD *)(a1 + 160) = 0;
  }
  *(_QWORD *)(a1 + 168) = 0;
  result.n128_u64[0] = -1;
  result.n128_u64[1] = -1;
  *(__n128 *)(a1 + 56) = result;
  *(__n128 *)(a1 + 72) = result;
  return result;
}
