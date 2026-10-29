/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39004
// Address: 0x0000000000039004

//----- (0000000000039004) ----------------------------------------------------
__int64 __fastcall sub_39004(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 376) )
  {
    sub_3967C((__int64 *)(a1 + 376), 0);
    qfree(*(void **)(a1 + 376));
    *(_QWORD *)(a1 + 376) = 0;
    *(_QWORD *)(a1 + 392) = 0;
  }
  return 1;
}
