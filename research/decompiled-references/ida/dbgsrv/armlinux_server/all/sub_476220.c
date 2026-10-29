/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476220
// Address: 0x0000000000476220

//----- (0000000000476220) ----------------------------------------------------
__int64 __fastcall sub_476220(__int64 a1)
{
  __int64 v2; // x0

  sub_4941A8(*(_QWORD *)(a1 + 16), -1);
  sub_476068(*(_QWORD *)a1, *(__int64 **)(a1 + 8));
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    sub_493E90(v2);
    j_j__free_0((void *)a1);
  }
  return 0;
}
