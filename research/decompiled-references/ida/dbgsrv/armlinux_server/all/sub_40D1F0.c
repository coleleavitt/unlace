/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D1F0
// Address: 0x000000000040D1F0

//----- (000000000040D1F0) ----------------------------------------------------
__int64 __fastcall sub_40D1F0(__int64 a1)
{
  __int64 *v2; // x2
  __int64 result; // x0

  sub_482ED0(*(_QWORD *)(a1 + 16));
  j__free_0(*(void **)(a1 + 24));
  v2 = (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL);
  *(_QWORD *)(a1 + 40) = v2;
  result = *v2;
  *(_QWORD *)(a1 + 16) = *v2;
  *(_QWORD *)(a1 + 24) = result;
  *(_QWORD *)(a1 + 32) = result + 504;
  return result;
}
